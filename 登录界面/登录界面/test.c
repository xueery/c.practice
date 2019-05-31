#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	char s[20] = { 0 };
	for (i = 0; i < 3; i++){
		printf("请输入密码：");
		scanf("%s", s);
		if (strcmp(s, "wangxue") == 0){
			printf("登录成功\n");
			break;
		}
		else
			printf("密码错误，重新输入！");
	}
	if (i == 3)
		printf("不能再次登录");
	system("pause");
	return 0;
}