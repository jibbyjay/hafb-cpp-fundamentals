## C++ Environment in Windows
- VSCode https://code.visualstudio.com/        // code editor
- git    https://git-scm.com/        // for source control
- cmake  https://cmake.org/        // to work with projects
- g++ (mingw)  http://www.mingw.org/   // compiler for windows. 
- Add c:\MinGW\bin\ to PATH env. variable
- mingw32-make  //use by cmake

## Terminal Commands 
Note: ($ means terminal prompt):
```bash
$   ls          # list folder 
$ cd  <dest>  	# change directories
$ cd   ..		# .. parent directory 
$ pwd           # show present working directory
$ rm <name>     # remove/delete file/directory
```
## File System
``` bash
.    # (one dot) present working directory
..   # (two dots) parent directory
```
## C++ Basics
- File extension: `.cpp`
- Header Files: `.h`

## g++ Compiler
```bash
# To compile
# -o for output file name
$ g++ main.cpp -o main
# To run
$ ./main.exe
```

### C++ File Template
```cpp
#include <iostream>
using namespace std;

int main()
{
    return 0;
}
```

## Plugins and Doxygen documentation

- Add C/C++ Intellisense
- Add Code Spell Extension 
- Add Doxygen Documentation Generator
- Markdown All in One
- Cmake
- Cmake Tools
To generate Doxygen documentation: 
- Run /** and <Enter>

### CMake
To build a project we need all the rules to be set under `CMakeLists.txt` file.
- Create a build folder: `$ mkdir build`
- Go to the build dir: `$ cd build`
- Run cmake: `$ cmake .. -G "MinGW Makefiles"` the `..` is because your CMakeLists.txt is one folder up.
- Build or compile your code: `$ cmake --build .` The `.` means to build it in pwd.
