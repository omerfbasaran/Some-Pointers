#include <stdio.h>
#include <iostream>
#include <stdlib.h>

int main()
{
    unsigned int num = 0xAB123479;
    unsigned char* pnum;
    unsigned char bytes[4];

    pnum = &num;

    bytes[0] = *pnum;
    bytes[1] = *(pnum + 1);
    bytes[2] = *(pnum + 2);
    bytes[3] = *(pnum + 3);

    printf("byte1 : %x byte2 : %x byte3 : %x byte4 : %x", bytes[0], bytes[1], bytes[2], bytes[3]);
    return 0;
}

