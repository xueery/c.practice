
#include<stdio.h>
#include<stdlib.h>

//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
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
//2.不使用（a + b） / 2这种方式，求两个数的平均值。
int main(){
	int a = 10;
	int b = 20;
	int x = (a >> 1) + (b >> 1);
	printf("%d\n", x);
	system("pause");
	return 0;
}
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
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
//有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）。
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
