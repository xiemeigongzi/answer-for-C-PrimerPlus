#include <stdio.h>
int main()
{
	const int secret_code =13;
	int code_entered;
	do
	{
		printf("to enter the triskadekaphobia therapy club, \n");
		printf("enter the secret code number:");
		scanf("%d", &code_entered);	
	}  while(code_entered !=secret_code);
	
	printf("Congratulations ! You are cured !\n");
	return 0;
}
