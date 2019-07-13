#include<stdio.h>
#include<stdlib.h>
#define F(X,Y)((X)+(Y))
int main(){
	int a = 3;
	int b = 4;
	int y= 5 > 1 + 2 && 2 || 2 * 4 < 4 - !0;
	int i = 1;
	int sum = 0;
	int x = 10;
	x += x *= x -= (x / 3);
	printf("x=%d\n", x);
	while (i < 10){
		sum = sum + 1;
		i++;
	}
	printf("i=%d,sum=%d\n", i, sum);
	printf("F=%d\n", F(a++, b++));
	printf("y=%d\n", y);
}