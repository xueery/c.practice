#include<stdio.h>
int main(){
	int a, b;
	printf("请输入a和b的值分别为：");
	scanf("%d%d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d,b=%d", a, b);
	printf("\n");
	return 0;
}