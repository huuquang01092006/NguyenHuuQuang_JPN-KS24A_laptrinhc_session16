#include<stdio.h>
int x = 64;
int y = 73;
int *n = &x;
int *m = &y;
int sum;
int sumValue();
int main(){
	sumValue();
	printf("tong cua hai so nguyen la: %d", sum);
	return 0;
}
int sumValue(){
	sum = *n + *m;
	return sum;
}

