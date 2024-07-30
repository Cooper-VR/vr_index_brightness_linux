# index_brightness.exe
Set SteamVR/OpenVR headset brightness (likely only for Valve Index) from the command line.

Contains both python and C++ versions.

### Usage

 1. Download [index_brightness.exe](https://github.com/Python1320/vr_index_brightness/releases/download/initial_release/index_brightness.exe) somewhere from Releases or compile yourself with the instructions below.
 2. Right click the exe, open properties and click `unblock` to disable warnings: ![image](https://github.com/user-attachments/assets/e0db097e-c737-4b13-8181-8075a3f46c5a)

 4. Create shortcut `index_brightness.exe 0.2` for night
    1. ![image](https://github.com/user-attachments/assets/1b27afa8-9ce0-4346-b3ab-f25a896b00a5)
    2. ![image](https://github.com/user-attachments/assets/d7eb2b22-ad42-4ebe-b368-01eb49792c77)
 5. Create shortcut `index_brightness.exe 1` for day
 6. Make sure SteamVR is running before executing (otherwise no effect)


### For Python Users

 1. Run `pip install openvr`

### For C++ Users

 1. Install https://www.msys2.org/
 2. Open 64 bit shell, run `pacman -Syu`
 3. install `pacman -S mingw-w64-x86_64-openvr`
 4. Run `make` in the directory
