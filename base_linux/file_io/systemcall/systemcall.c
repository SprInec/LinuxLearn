#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

// File Descriptors
int fd;
char str[100];

int main(void)
{
    // Create a file
    fd = open("testscript.sh", O_RDWR|O_CREAT|O_TRUNC, S_IRWXU);
    // The file descriptor `fd` is a non-negative integer
    if (fd < 0){
        printf("Fail to Open File\n");
        return 0;
    }
    
    // Write string `pwd`
    write(fd, "pwd\n", strlen("pwd\n"));
    
    // Write string `ls`
    write(fd, "ls\n", strlen("ls\n"));
    
    // At this point, the file pointer is at the end of the file.
    // Use the `lseek` function to return the file pointer to the
    // beginning of the file.
    lseek(fd, 0, SEEK_SET);
    
    // Read 100 byte from file into str, this function returns the
    // number of bytes actually read
    read(fd, str, 100);
    
    printf("File content:\n%s \n", str);
    
    close(fd);
    
    return 0;
}
