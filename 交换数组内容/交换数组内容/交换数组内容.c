#include<stdio.h>//��ӡ�������дһ��������
void prinlog(int a[], int n){
	int i;
	for (i = 0; i < n; i++){
		printf("%5d", a[i]);
	}
	printf("\n");
}
int main(){
	int a[10], b[10], i, j, k, chg;
	printf("����a�������ֵ��");
	for (i = 0; i < 10; i++){
		scanf("%d", &a[i]);
	}
	printf("����b�������ֵ��");
	for (j = 0; j < 10; j++){
		scanf("%d", &b[j]);
	}
	for (k = 0; k < 10; k++){
		chg = a[k];
		a[k] = b[k];
		b[k] = chg;
	}
	//i = 0;
	//printf("����a����Ϊ��");
	//while (i < 10){
	//	printf("%3d", a[i]);
	//	i++;
	//}
	//printf("\n");
	//printf("����b����Ϊ��");
	//j = 0;
	//while (j < 10){
	//	printf("%3d", b[j]);
	//	j++;
	//}
	//printf("\n");
	prinlog(a, 10);
	prinlog(b, 10);
	return 0;
}