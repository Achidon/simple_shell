This project is done by Achilonu Joseph and Ndebele Phumelele

The allowed functions and system calls are:

    access (man 2 access)
    chdir (man 2 chdir)
    close (man 2 close)
    closedir (man 3 closedir)
    execve (man 2 execve)
    exit (man 3 exit)
    _exit (man 2 _exit)
    fflush (man 3 fflush)
    fork (man 2 fork)
    free (man 3 free)
    getcwd (man 3 getcwd)
    getline (man 3 getline)
    getpid (man 2 getpid)
    isatty (man 3 isatty)
    kill (man 2 kill)
    malloc (man 3 malloc)
    open (man 2 open)
    opendir (man 3 opendir)
    perror (man 3 perror)
    read (man 2 read)
    readdir (man 3 readdir)
    signal (man 2 signal)
    stat (__xstat) (man 2 stat)
    lstat (__lxstat) (man 2 lstat)
    fstat (__fxstat) (man 2 fstat)
    strtok (man 3 strtok)
    wait (man 2 wait)
    waitpid (man 2 waitpid)
    wait3 (man 2 wait3)
    wait4 (man 2 wait4)
    write (man 2 write)

These are the files created:
AUTHORS
README.md
_atoi.c
builtin.c
builtin1.c
environ.c
errors.c
errors1.c
exits.c
getLine.c
getenv.c
getinfo.c
history.c
lists.c
lists1.c
main.c
memory.c
parser.c
realloc.c
shell.h
shell_loop.c
string.c
string1.c
tokenizer.c
vars.c

At the end we will compile the code using
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
