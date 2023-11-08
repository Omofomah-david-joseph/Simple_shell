# Simple Shell Project
This is the Simple Shell project by David Joseph Omofomah and Emmanuel Onyeozu.

## Project Overview
The Simple Shell is a command-line interpreter for Unix-like operating systems. It provides a basic interface for users to interact with the system by executing commands. The goal of this project is to create a simple, functional shell that can handle various commands, execute them, and provide a user-friendly interface.

## Authorized Functions and System Calls
The Simple Shell project utilizes the following authorized functions and system calls:

- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- _exit (man 2 _exit)
- fflush (man 3 fflush)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- getpid (man 2 getpid)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (__xstat) (man 2 stat)
- lstat (__lxstat) (man 2 lstat)
- fstat (__fxstat) (man 2 fstat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)

## Tasks
The Simple Shell project is divided into multiple tasks, each addressing specific aspects of the shell's functionality. Here is a brief overview of the tasks:

**Task 0: Betty would be proud**
- Write a beautiful code that passes the Betty checks.

**Task 1: Simple Shell 0.1**
- Create a basic UNIX command interpreter.
- Handle commands such as `%c`, `%s`, and `%%`.

**Task 2: Simple Shell 0.2**
- Handle command lines with arguments.
- Implement the `%d` and `%i` specifiers for integers.

**Task 3: Simple Shell 0.3**
- Handle the PATH and execute commands.
- Ensure that `fork` is not called when the command doesn't exist.
- Implement the `%u`, `%o`, `%x`, and `%X` specifiers for integers.

**Task 4: Simple Shell 0.4**
- Implement the `exit` built-in command to exit the shell.

**Task 5: Simple Shell 1.0**
- Implement the `env` built-in command to display the current environment.

## Project Status
The Simple Shell project aims to create a functional and efficient Unix-like command interpreter. The tasks outlined above provide a comprehensive shell implementation with various features and functionality. The project is actively maintained and improved to ensure reliability and versatility.

For detailed information on each task, please refer to the corresponding task files in the project directory.

## Usage
To use the Simple Shell, follow these instructions:

1. Compile the shell using the provided `gcc` command.
2. Run the shell: `./hsh`
3. Enter commands and press Enter.
4. The shell will execute the command and display the prompt again.
5. Use the `exit` command to exit the shell.
6. Use the `env` command to display the current environment.

## Feedback and Contributions
We welcome feedback, suggestions, and contributions to improve and extend the functionality of the Simple Shell project. Please feel free to submit issues, pull requests, or contact the project authors for any inquiries.

## Authors
- David Joseph Omofomah
- Emmanuel Onyeozu

Thank you for using the Simple Shell!
