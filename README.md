# index_brightness.exe
Set SteamVR/OpenVR headset brightness (likely only for Valve Index) from the command line.

Contains both python and C++ versions.

### Usage

 1. Download and extract [index_brightness.zip](https://github.com/Python1320/vr_index_brightness/releases/download/initial_release/vr_index_brightness.zip) from [Releases](https://github.com/Python1320/vr_index_brightness/releases/) to somewhere (_or compile yourself with the instructions below_).
 2. Right click the `index_brightness.exe`, open properties and click `unblock` to disable warnings: ![image](https://github.com/user-attachments/assets/e0db097e-c737-4b13-8181-8075a3f46c5a)

 4. Go to Desktop, create shortcut with parameters `index_brightness.exe 0.2` for night, for example:
    1. ![image](https://github.com/user-attachments/assets/1b27afa8-9ce0-4346-b3ab-f25a896b00a5)
    2. ![image](https://github.com/user-attachments/assets/aeabd121-7391-4a29-ae92-d5ca68abe582)

 5. Create shortcut `index_brightness.exe 1` for day
 6. Make sure SteamVR is running before executing (otherwise no effect)


### For Python Users

 1. Run `pip install openvr`

### For C++ Users

 1. Install https://www.msys2.org/
 2. Open 64 bit shell, run `pacman -Syu`
 3. install `pacman -S mingw-w64-x86_64-openvr`
 4. Run `make` in the directory

### for Linux Users
 1. switch to linux branch
 2. Open the main "vr_index_brightness" folder in terminal
 3. Run "make"
 4. Use ./index_brightness.exe <brightness> to set brightness (make sure steamvr is running)
