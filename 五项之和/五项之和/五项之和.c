#include<stdio.h>
int main(){
	int i, j ,k = 0, sum = 0;
	printf("����һ�����֣�");
	scanf("%d", &i);
	for (j = 0; j <= 4; j++){
		k = k * 10 + i;
		sum = sum + k;
	}
	printf("�ܺ�Ϊ%d", sum);
	printf("\n");
	return 0;
}