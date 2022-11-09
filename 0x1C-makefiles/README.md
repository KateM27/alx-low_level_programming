# 0x1C. C - Makefiles

Resources [Makefile](https://opensource.com/article/18/8/what-how-makefile)

Learning objectives of the project:
* What are make, Makefiles
* When, why and how to use Makefiles
* What are rules and how to set and use them
* What are explicit and implicit rules
* What are the most common/ useful rules
* What are variables and how to set and use them

## Requirements
* Editors: vi, vim, emacs
* Ubuntu 20.04 LTS
* gcc v9.3.0
* GNU Make 4.2.1

In the tasks, we'll use [these files](https://github.com/holbertonschool/0x1B.c)

## Tasks
#### 0. make -f 0-Makefile
Create your first Makefile:
* name of the executable: _school_
* rules: _all_. The rule binds your executable
* variables: _none_

#### 1. make -f 1-Makefile
* name of the executable: school
* rules: _all_, which binds your executable
* variables:
    * __CC__ - the compiler to be used
    * __SRC__ - the _.c_ files

#### 2. make -f 2-Makefile
Create your first useful Makefile
* name of executable: _school_
* rules: _all_, which binds your executable
* variables:
    * __CC__ - the compiler to be used
    * __SRC__ - the _.c_ files
    * __OBJ__ - the _.o_ files
    * __NAME__ - name of the executable
* The all rule should recompile only the updated source files
* You're not allowed to have a list of all the _.o_ files

#### 3. make -f 3-Makefile
* name of the executable: _school_
* rules:
    * _all_: builds your executable
    * _clean_: deletes all Emacs and Vim temporary files along with the executable
    * _oclean_: deletes the object files
    * _fclean_: deletes all Emacs and Vim temporary files, the executable, and the object files
    * _re_: forces recompilation of all source files
* variables:
    * __CC__: compiler to be used
    * __SRC__: the _.c_ files
    * __OBJ__: the _.o_ files
    * __NAME__: name of the executable
    * __RM__: program to delete the files
* The all rule should recompile only the updated source files
* The clean, oclean, fclean, re rules should never fail
* You are not allowed to have a list of all the _.o_ files

#### 4. A complete Makefile
* name of the executable: _school_
* rules:
    * _all_: builds your executable
    * _clean_: deletes all Emacs and Vim temporary files along with the executable
    * _oclean_: deletes the object files
    * _fclean_: deletes all Emacs and Vim temporary files, the executable, and the object files
    * _re_: forces recompilation of all source files
* variables:
    * __CC__: compiler to be used
    * __SRC__: the _.c_ files
    * __OBJ__: the _.o_ files
    * __NAME__: name of the executable
    * __RM__: program to delete the files
    * __CFLAGS__: your favorite compiler flags: _-Wall_ _-Werror_ _-Wextra_ _-pedantic_
* The all rule should recompile only the updated source files
* The clean, oclean, fclean, re rules should never fail
* You are not allowed to have a list of all the _.o_ files

#### 5. Island Perimeter
Create a function __def island_perimeter(grid):__ that returns the perimeter of the island described in grid:
* _grid_ is a list of integers:
    * 0 represents a water zone
    * 1 represents a land zone
    * One cell is a square with side length 1
    * Grid cells are connected horizontally/vertically (not diagonally)
    * Grid is rectangular, width and height don't exceed 100
* Grid is completely surrounded by water, and there is one island (or nothing)
* The island doesn't have lakes

__Requirements__
* _First line contains #!/usr/bin/python3_
* _You are not required to import any module_
* _Module and function must be documented_
