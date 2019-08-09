#include<stdio.h>
#include<stdlib.h>
int main(){
	char acHello[] = "hello\0world";
	char acNew[] = { 0 };
	strcpy(acNew, acHello);
	//strlen(acNew) 5;
	//sizeof(acHello) 12;
}