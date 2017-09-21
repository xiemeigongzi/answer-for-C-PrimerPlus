//要求输入一个 ASCII 码  打印输入的字符  如 66 

#include <stdio.h>

int main()
{
	char ASCII ;
	printf("Input one character.\n");
	scanf("%d", &ASCII);
	printf("The character is %c.\n", ASCII); 
	return 0;
}

// 这道题 ，输入一个 整数类型的值  得到字符  由 %d---%c. 
