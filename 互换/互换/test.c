#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
int main(){
	char i = 0;
	int j = 0;
	printf("ÊäÈë×ÖÄ¸£º");
	for (j = 0; j < 10; j++){
		scanf("%c", &i);
		if (i >= 'a'&&i <= 'z'){
			i = i - 32;
			printf("%c", i);
	}
		else if (i >= 'A'&&i <= 'Z'){
			i = i + 32;
			printf("%c", i);
		}
	}
	system("pause");
	return 0;
}