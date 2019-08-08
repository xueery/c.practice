#include<stdio.h>
#include<stdlib.h>
int main(){
	int x = 2;
	int z = 2;
	int y = 3;
	if (x > y)
		z = 1;
	else if (x == y)
		z = 0;
	else
		z = -1;
	printf("%d", z);
}