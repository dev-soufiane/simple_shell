# Simple Shell 🐚

Simple Shell is a lightweight UNIX command interpreter designed for educational purposes. This project is a part of our exploration into the world of operating systems, UNIX, and the fundamentals of shell scripting.

## Table of Contents
- [Introduction](#introduction)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Usage](#usage)
- [Getting Started](#getting-started)
- [Contributors](#contributors)
- [License](#license)

## Introduction
Simple Shell is a project developed by a team of two talented developers, Joe and Mark. This shell interpreter aims to mimic some basic functionalities of the Unix shell, allowing users to enter commands, execute them, and receive output.

## Learning Objectives
By working on this project, we aimed to achieve the following learning objectives:

- Understand the history of Unix and its key figures.
- Learn about the design and implementation of the Unix operating system.
- Explore the concepts behind the original Unix shell.
- Get acquainted with the B programming language and its significance as the precursor to C.
- Gain knowledge about Ken Thompson, a key contributor to the Unix operating system.
- Grasp the inner workings of a shell, including process IDs (PID) and parent process IDs (PPID).
- Learn to manipulate the environment of the current process.
- Understand the differences between functions and system calls.
- Master the creation of processes and the prototypes of the main function.
- Explore how the shell uses the PATH variable to locate programs.
- Implement the execution of other programs using the execve system call.
- Understand how to suspend the execution of a process until a child process terminates.
- Comprehend the concept of EOF (end-of-file).

## Requirements
### General
- **Allowed Editors**: vi, vim, emacs
- **Compilation**: gcc -Wall -Werror -Wextra -pedantic -std=gnu89
- **File Endings**: All files should end with a new line.
- **Readme**: A README.md file at the root of the project folder is mandatory.
- **Coding Style**: Your code should follow the Betty style guidelines.
- **Memory Management**: Ensure your shell does not have any memory leaks.
- **Functions**: Limit each file to no more than 5 functions.
- **Header Files**: Include guards in all header files.
- **System Calls**: Use system calls only when necessary.
- **Authors File**: Include an AUTHORS file listing all contributors.

### GitHub
- **Repository**: There should be one project repository per group, with collaborators added as necessary.

### Output
- Your program must have the same output as the standard Unix shell (/bin/sh).
- Errors should display with the program name equivalent to your argv[0].

### Allowed Functions and System Calls
access (man 2 access) | chdir (man 2 chdir) | close (man 2 close) | closedir (man 3 closedir) | execve (man 2 execve)| exit (man 3 exit)| _exit (man 2 _exit)| fflush (man 3 fflush)| fork (man 2 fork)| free (man 3 free)| getcwd (man 3 getcwd| getline (man 3 getline)| getpid (man 2 getpid)| isatty (man 3 isatty)| kill (man 2 kill)| malloc (man 3 malloc)| open (man 2 open)| opendir (man 3 opendir)| perror (man 3 perror)| read (man 2 read)| readdir (man 3 readdir)| signal (man 2 signal)| stat (__xstat) (man 2 stat)| lstat (__lxstat) (man 2 lstat)| fstat (__fxstat) (man 2 fstat)| strtok (man 3 strtok)| wait (man 2 wait)| waitpid (man 2 waitpid)| wait3 (man 2 wait3)| wait4 (man 2 wait4)| write (man 2 write)

## Usage
### Interactive Mode
In interactive mode, you can use Simple Shell as follows:

```shell
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

### Non-Interactive Mode
You can also use Simple Shell in non-interactive mode by piping commands or using scripts:

```shell
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c
```

## Getting Started
1. Clone the repository to your local machine.
2. Compile the Simple Shell using the provided compilation command.
3. Run the shell using `./hsh` and start entering commands.

## Contributors
- Soufiane (GitHub: [dev-soufiane](https://github.com/dev-soufiane))
- Hamza (GitHub: [hamsey91](https://github.com/hamsey91))

## License
This project is licensed under the [MIT License](LICENSE.md).

---
