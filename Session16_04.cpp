#include<stdio.h>
int array[] = {1,2,3,4,5};
int length = sizeof(array) / sizeof(array[0]);
void printfArray();
int main(){
	printfArray();
	return 0;
}
void printfArray(){
	int *arr = array;
    for (int i = 0; i < length; i++) {
        printf("array[%d] = %d\n", i, *(arr + i));
    }
}

