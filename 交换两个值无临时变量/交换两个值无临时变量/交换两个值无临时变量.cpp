#include<stdio.h>
int main(){
	int a, b;
	printf("������a��b��ֵ�ֱ�Ϊ��");
	scanf("%d%d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d,b=%d", a, b);
	printf("\n");
	return 0;
}