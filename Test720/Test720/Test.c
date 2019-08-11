#include<stdio.h>
#include<stdlib.h>
#define CIR(r) r*r
int Change(int *pX){
	int y = 8;
	y = y - *pX;
	pX = &y;
	return 0;
}
int main(){
	int a = 1;
	int b = 2;
	int t;
	int xx = 3;
	int *pY = &xx;
	Change(pY);
	printf("%d\n", *pY);
	t = CIR(a + b);
	printf("%d\n", t);
	return 0;
}