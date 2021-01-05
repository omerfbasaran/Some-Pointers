#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int deg = 0;
	int *pdeg;
	
	deg= 10;
	pdeg=&deg;
	printf("Degiskenin ilk degeri: %d\n",deg);
	
	*pdeg =20;
	
	printf("Degiskenin son degeri: %d\n",deg);
	printf("Pointerin degeri: %d\n",pdeg);
	
	deg=15;
	
	printf("Pointerin gosterdigi yerin degeri: %d\n",*pdeg);
	
	pdeg = pdeg+2;
	printf("Pointerin yeni degeri: %d\n",pdeg);
	printf("Pointerin gosterdigi yerin degeri: %d\n",*pdeg);
	
	
	
	
	
	
	
	
	getchar();
	return 0;
}
