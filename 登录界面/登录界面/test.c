#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	char s[20] = { 0 };
	for (i = 0; i < 3; i++){
		printf("���������룺");
		scanf("%s", s);
		if (strcmp(s, "wangxue") == 0){
			printf("��¼�ɹ�\n");
			break;
		}
		else
			printf("��������������룡");
	}
	if (i == 3)
		printf("�����ٴε�¼");
	system("pause");
	return 0;
}