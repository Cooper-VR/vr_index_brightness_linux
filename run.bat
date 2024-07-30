setlocal
cd data
set PATH=%PATH%;bin\Windows\x64
set LUA_PATH=./?.lua;./?/?.lua
set LUA_CPATH=./?.dll
bin\Windows\x64\luajit.exe run.lua > ..\out.txt 2> ..\err.txt
cd ..
endlocal
