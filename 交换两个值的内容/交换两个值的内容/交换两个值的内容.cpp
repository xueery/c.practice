#include<stdio.h>
int main(){
	int a, b, c;
	printf("������a��b��ֵ��");
	scanf("%d%d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("������a��b��ֵ�ֱ�Ϊ��a=%d,b=%d", a, b);
	printf("\n");
	return 0;
}