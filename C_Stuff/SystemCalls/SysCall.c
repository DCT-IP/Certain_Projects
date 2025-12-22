/*
Sys Calls is how a user-space program asks kernel to do something privileged 
eg:
  Acessing hardware
  create processes
  allocate mem
  I/O
  for c they r in <unistd.h>, they are not however not simple functions but asks CPU to do processes
  typical flow :-
                your C code
                    ↓
                glibc wrapper
                    ↓
                syscall instruction
                    ↓ 
                kernel
-----------------------------------------------------------------------------------------------------------------------
File Descriptor 
an integer that the kernel uses to handle an open resources
can represet:
  Regular Files
  Terminals
  Pipes
  Sockets
  Devices
std FDs(always open):-
  0->stdin
  1->stdout
  2->stderr
can be checked via :printf("%d %d %d\n", STDIN_FILENO, STDOUT_FILENO, STDERR_FILENO);
for the kernel
Process
 ├── FD table (per process)
 │     fd 0 → open file object
 │     fd 1 → open file object
 │     fd 2 → open file object                                                                      ─One FD per process
 │                                                                                -> implications:─│─Mutiple FDs can point to the same obj
Open file object                                                                                   └─File Offsets are shared on duplication
 ├── file offset
 ├── access mode
 └── pointer to inode
--------------------------------------------------------------------------------------------------------------------------------------
Certain Sys calls
open()
    int open(const char *path,int flags, mode_t mode);
    for modes common flags:-
                O_RDONLY
                O_WRONLY
                O_RDWR
                O_CREAT
                O_TRUNC
                O_APPEND
    failure:- if(fd < 0) perror("open")
read()
    ssize_t(int fd, void *buf,size_t count)
        returns >0 -> bytes read 
        0 -> EOF
        -1 -> error
    char buf[sizededo]
    ssize_t n = read(fd, buf, sizeof(buf))
write()
    ssize_t write(int fd, const void *buf, size_t count);
    May write fewer bytes than required, looping req for robustness
close()
    int close(int fd); however can be reused
-------------------------------------------------------------------------------------------------------------------------------------------
stdio(fopen,fgets,printf) is buffered and higher-level, thus for kernel level work we use syscalls 

the duplication command is cricitcal for shell making

//tbd
*/