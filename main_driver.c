#include <stdio.h>
#include "620163576.h"

int main()
{

        FILE *device = createDevice("device.txt", "w+"); // opens the file once to be used across all the other functions

        char buffer [1000];

        writeToDevice(device,"Hello, simulated device!\n");

        readFromDevice(device,buffer, sizeof(buffer));

        closeDevice(device);




    
}