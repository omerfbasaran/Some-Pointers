#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main()
{
    char byte;
    short short_integer;
    int integer;

    char *pbyte;
    short* pshort_integer;
    int *pinteger;

    pbyte = &byte;
    pshort_integer = &short_integer;
    pinteger = &integer;

    printf("sizeof char: %d\n", sizeof(byte));
    printf("sizeof short: %d\n", sizeof(short_integer));
    printf("sizeof integer: %d\n", sizeof(integer));

    printf("char adres: %d\n", pbyte);
    printf("short adres: %d\n", pshort_integer);
    printf("integer adres: %d\n", pinteger);

    pbyte++;
    pshort_integer++;
    pinteger++;

    printf("char adres: %d\n", pbyte);
    printf("short adres: %d\n", pshort_integer);
    printf("integer adres: %d\n", pinteger);

}
