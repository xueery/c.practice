#include<stdio.h>
int main(){
	int x=0, y=0, z;
	printf("������������");
	scanf("%d%d", &x, &y);
	if (x > y){
		for (z = x-1; z > 0; z--){
			if (x%z == 0){
				if (y%z == 0){
					printf("���Ĺ�Լ��Ϊ%d", z);
					break;
				}
			}
		}
	}
	if (x < y){
		for (z = y - 1; z>0; z--){
			if (y%z == 0){
				if (x%z == 0){
					printf("���Ĺ�Լ��Ϊ%d", z);
					break;
				}
			}
		}
	}
	printf("\n");
	return 0;
}