#include <stdio.h>
int main(){
	int n = 100;
	int *prt = &n;
	printf("dia chi cua bien n la: %d\n", &n);
	printf("gia tri cua bien n la: %d\n", n);
	printf("dia chi cua bien n la: %d\n", prt);
	printf("gia tri cua bien n la: %d", *prt);
	return 0;
}
