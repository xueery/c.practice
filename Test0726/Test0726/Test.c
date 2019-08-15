#include<stdio.h>
#include<stdlib.h>
void Func(char str_arg[]){
	int m = sizeof(str_arg);
	int n = strlen(str_arg);
	printf("%d,%d\n", m, n);
}
int main(void){
	char str[] = "Hello";
	Func(str);
	int m = sizeof(str);
	printf("%d\n",m);
}