#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <cerrno>
#include <cstring>

#include "openvr.h"

vr::HmdError m_eLastHmdError;
void print_usage(char *cmdline)
{
	std::cerr << "Usage: " << cmdline << " <brightness, min=0.1 max=1.0>" << std::endl;
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_usage(argv[0]);
		return 1;
	}

	char *end;
	errno = 0;
	float value = std::strtof(argv[1], &end);

	if (errno == ERANGE || value < 0.0 || value > 2.0)
	{
		std::cerr << "Error: Out of range value: " << argv[1] << std::endl;
		print_usage(argv[0]);
		return 2;
	}

	if (end == argv[1])
	{
		print_usage(argv[0]);
		return 2;
	}

	m_eLastHmdError = vr::VRInitError_None;
	vr::IVRSystem *pVRSystem = vr::VR_Init(&m_eLastHmdError, vr::VRApplication_Background);

	if (m_eLastHmdError != vr::VRInitError_None)
	{
		std::cerr << "Initialization failed (Is SteamVR running?): " << m_eLastHmdError << std::endl;
		return 1;
	}

	std::cout << "Setting brightness to " << value << std::endl;

	vr::VRSettings()->SetFloat(vr::k_pch_SteamVR_Section, "analogGain", value);
}
