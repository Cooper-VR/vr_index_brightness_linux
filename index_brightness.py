import openvr
import sys
vr_system = openvr.init(openvr.VRApplication_Background)
openvr.VRSettings().setFloat(openvr.k_pch_SteamVR_Section,"analogGain",float(sys.argv[1] if len(sys.argv)>1 else 1))
