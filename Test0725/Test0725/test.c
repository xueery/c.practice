#include<stdio.h>
#include<stdlib.h>
int main(){
	char s[]= "\\123456\123456\t";
	char *pcColor = "blue1";
	char acColor[] = "blue1";
	printf("%d,%d,%d,%d\n", strlen(pcColor), strlen(acColor),
		sizeof(pcColor),sizeof(acColor));
	printf("%d\n", strlen(s));
}