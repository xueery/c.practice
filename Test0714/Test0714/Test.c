#include<stdio.h>
#include<stdlib.h>
int main(){
	int a=7;
	a <<= 1;
	char str[6] = "g";
	char str1[6] = { '\0' };
	char str2[7] = "string";
	char arr[2][4];
	int i = 5;
	while (i < 10){
		if (i < 1)
			continue;
		if (i == 5)
			break;
		i++;
	}
	strcpy(arr, "you");
	strcpy(arr[1], "me");
	arr[0][3] = '&';
	printf("%s\n", arr);
	printf("%d", a);
}