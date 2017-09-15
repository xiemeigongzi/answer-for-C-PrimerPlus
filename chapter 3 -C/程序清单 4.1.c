#include <stdio.h>
#include <string.h>
#define DENSITY 62.4 
int main()
{   // 我不是很清楚  这段代码不能执行 到底哪里出现了问题？ 
	float weight, volume;
	int size, letters;
	char name[40];
	
	printf("hi！ what is your first name?\n");
	scanf("&c",name);  // NOTE ： 这里name 前面没有&&&&&& 
	printf("%c, what is your weight in pounds?\n", name);
	scanf("%lf", &weight);
	size = sizeof name;
	letters=strlen(name);
	volume=weight/DENSITY;
	printf("well, %s, your volume is %2.2f cubic feet.\n",name,volume);
	printf("also, your first name has %d letters.\n",letters);
	printf("and we have %d bytes to store it.\n", size);
	
	return 0;
}
