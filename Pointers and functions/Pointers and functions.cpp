#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int SayitoplaP(int* pSayi1, int* pSayi2);

int main()
{
	int sayi1 = 13;
	int sayi2 = 20;
	int sonuc = 0;
	
	sonuc = SayitoplaP(&sayi1, &sayi2);
	printf("sayi1 = %d sayi2 = %d sonuc = %d", sayi1, sayi2, sonuc);
}

int SayitoplaP(int* pSayi1, int* pSayi2)
{
	int sonuc = 0;
	sonuc = (*pSayi1) + (*pSayi2);

	*pSayi1 = 0;
	*pSayi2 = 0;
	
	return sonuc;
}