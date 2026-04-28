# ScratchPadConsoleCpp
A scratchpad C++ project I can use to hack together some C++ to do things.  I plan to use VS Code and related extensions to build/debug.

# Open Visual Studio Code from the 'Developer Command Prompt for VS 2022'
Visual Studio Code needs to use the MSVC C/C++ compiler (and debugger) that is installed separately from Visual Studio Code.  That compiler/environment does not get added to the PATH.  Instead, a user needs to launch Visual Studio Code from the 'Developer Command Prompt for VS 2022' that is included in the MSVC installer:
  ```powershell
  cd <repo root>
  code .