#include <stdio.h>
#include <string.h>

// The string to be written
const char buf[] = "filesystem_test: Hello World!\n";
//　File Descriptors
FILE *fp;
char str[100];

int main(void)
{
    // Create a file
    fp = fopen("filesystem_test.txt", "w+");
    // Return the file pointer normally
    // Exception returns NULL
    if (NULL == fp){
        printf("Fail to Open File\n");
        return 0;
    }
    // Write the contents of buf to a file
    // Write 1 byte at a time, the total length is given by strlen
    fwrite(buf, 1, strlen(buf), fp);
    
    // Writing to 'SprInec'
    // Write 1 byte at a time, the total length is given by strlen
    fwrite("SprInec\n", 1, strlen("SprInec\n"), fp);
    
    // Write the buffer data to the file immediately
    fflush(fp);
    
    // At this point, the file pointer is at the end of the file.
    // Use the `fseek` function to return the file pointer to the
    // beginning of the file.
    fseek(fp, 0, SEEK_SET);
    
    // Read the contents from the file into `str`
    // Read 100 bytes each time, read 1 time
    fread(str, 100, 1, fp);
    
    printf("File content: \n%s \n", str);
    
    fclose(fp);
    
    return 0;   
}
