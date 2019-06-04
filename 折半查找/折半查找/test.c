#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
int binary_search(int a[], int key, int left, int right){
	int mid;
	while (left <= right){
		mid = left + (right - left) / 2;
		if (a[mid] < key)
			left = mid + 1;
		else if (a[mid]>key)
			right = mid - 1;
		else
			return mid;
	}
	return -1;
}
int main(){
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key,ret;
	int left = 0;
	int right = sizeof(a) / sizeof(a[0]) - 1;
	printf("����Ҫ���ҵ����֣�");
	scanf("%d", &key);
    ret = binary_search(a, key, left, right);
	if (ret == -1)
		printf("û�ҵ�");
	else
		printf("�ҵ��ˣ��±�Ϊ%d", ret);
	system("pause");
	return 0;
}
