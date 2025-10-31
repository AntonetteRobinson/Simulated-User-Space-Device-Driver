
//header file: declare all functions that will be needed




FILE* createDevice(const char *filename, const char *mode );
/*  creatDevice will intialize a file/ the pusdo-device 
     param: the name of the file/pusdo device to  be initalized,  and the mode that the file should be opened in, writing and reading
 */

void writeToDevice(FILE *file, const char *str);
/*  
    
    param: the name of the file fo the data to be written and the string to be wittten in the file/ to the pusdo-device.
    WriteTodevice  will write a string in the file that was initialized
*/

void readFromDevice(FILE *file, char *buffer, int buffer_size);
/*
    readFromDevice will read the data that was  written in the file
    param char* buffer,  where the data will be stored after it is read to be outputted
    param file the name of the initilaized  file
    param bufferrSize, the size of the buffer, how much bytes can hold in the buffer
    after the data is read in the buffer it will be prepended to a string and printed
*/

void closeDevice(FILE *file);
/*
 will close the device after all functions are completed
*/

