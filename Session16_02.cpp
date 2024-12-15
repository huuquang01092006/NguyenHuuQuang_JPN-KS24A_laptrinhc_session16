#include<stdio.h>
void changeValue();
    int x = 75;
    int y = 85;
    int *n = &x;
	int *m = &y;
int main(){
	printf("gia tri truoc khi thay doi cua x = %d va y = %d\n", x, y);
	changeValue();
	printf("gia tri sau khi thay doi cua x = %d va y = %d", x, y);
	return 0;
}
void changeValue(){
	int temp = *n;
	*n = *m;
	*m = temp;
}
