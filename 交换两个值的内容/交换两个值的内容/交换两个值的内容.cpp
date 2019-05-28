#include<stdio.h>
int main(){
	int a, b, c;
	printf("请输入a和b的值：");
	scanf("%d%d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("交换后a和b的值分别为：a=%d,b=%d", a, b);
	printf("\n");
	return 0;
}