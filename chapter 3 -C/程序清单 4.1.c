#include <stdio.h>
#include <string.h>
#define DENSITY 62.4 
int main()
{   // �Ҳ��Ǻ����  ��δ��벻��ִ�� ����������������⣿ 
	float weight, volume;
	int size, letters;
	char name[40];
	
	printf("hi�� what is your first name?\n");
	scanf("&c",name);  // NOTE �� ����name ǰ��û��&&&&&& 
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
