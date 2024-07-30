# index_brightness.exe
Set SteamVR/OpenVR headset brightness (likely only for Valve Index) from the command line.

Contains both python and C++ versions.

### Usage

 1. Download [index_brightness.exe](index_brightness.exe) somewhere
 5. Create shortcut `index_brightness.exe 0.2` for night
 5. Create shortcut `index_brightness.exe 1` for day

### For Python Users

 1. Run `pip install openvr`

### For C++ Users

 1. Install https://www.msys2.org/
 2. Open 64 bit shell, run `pacman -Syu`
 3. install `pacman -S mingw-w64-x86_64-openvr`
 4. Run `make` in the directory
