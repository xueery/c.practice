
#include<stdio.h>
#include<stdlib.h>

//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
//
unsigned int reverse_bit(unsigned int value){
	int i = 0;
	int sum = 0;
	int tmp = 0;
	for (i = 0; i<32; i++,value/=2){
		tmp = value % 2;
		sum = sum * 2 + tmp;
	}
	return sum;
}
int main(){
	int x = 25;
	int ret=reverse_bit(x);
	printf("%u\n", ret);
	system("pause");
	return 0;
}
//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
int main(){
	int a = 10;
	int b = 20;
	int x = (a >> 1) + (b >> 1);
	printf("%d\n", x);
	system("pause");
	return 0;
}
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
int main(){
	int ret = 0;
	int i = 0;
	int a[11] = { 1, 3, 6, 7, 9, 3, 6, 7, 1, 5, 9 };
	for (i = 0; i < 11; i++){
		ret = ret^a[i];
	}
	printf("%d\n", ret);
	system("pause");
	return 0;
}
//4.
//��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//
//			student a am i
//			i ma a tneduts
//			i am a student
void reverse_part(char* str, int start, int end){
	int tmp; 
	int i = 0;
	int j = 0;
	for (i = start, j = end; i < j; i++, j--){
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}
int main(){
	char str[] = "student a am i";
	int i;
	int start = 0;
	int end;
	for (i = 0; str[i]; i++){
		if (str[i] == ' '){
			end = i - 1;
			reverse_part(str, start, end);
			start = i + 1;
		}
	}
	reverse_part(str, start, i-1);
	reverse_part(str, 0, i-1);
	puts(str);
	system("pause");
	return 0;
}
