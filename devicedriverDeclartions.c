#include <stdio.h>
#include "620163576.h"
// Source device driver file : function definitions




FILE* createDevice(const char *filename, const char *mode )
{
    FILE *file = fopen(filename, mode); // initialize  device
    if (file == NULL)
    {
        perror("Error Creating file");
    }
    return file;
    



}


void writeToDevice(FILE *file, const char *str) // parameter to receive the contents to store in the file/device
{   
    
    if (file != NULL)
    {
    fprintf(file, "%s", str); //  write string to device
    fflush(file);// ensures all data from the stream is written
    }


}

void readFromDevice(FILE *file, char *buffer, int buffer_size)
{
    fseek(file, 0, SEEK_SET); // begin reading the file from the start
    if (file!= NULL)
    {
    fgets(buffer, buffer_size, file);
    }
    printf("Data read from device: %s", buffer);

    

}

void closeDevice(FILE *file)
{
    fclose(file);
    
}



