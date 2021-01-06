#include <iostream>
#include <stdlib.h>
#include <stdio.h>

void addnumP(int* pa, int* pb, int* presult, int* presult2);

int main()
{
    int num1 = 130;
    int num2 = 210;
    int result1 = 0;
    int result2 = 0;

    printf("Number1 = %d, Number2 = %d, Result = %d, Result2= %d\n", num1, num2, result1,result2);
    addnumP(&num1, &num2, &result1,&result2);
    printf("Number1 = %d, Number2 = %d, Result = %d, Result2= %d", num1, num2, result1,result2);
}

int addnum(int a, int b)
{
    return (a + b);
}

void addnumP(int* pa,int *pb, int *presult,int *presult2)
{
    *presult = (*pa) + (*pb);
    *presult2 = (*pa) * (*pb);
}