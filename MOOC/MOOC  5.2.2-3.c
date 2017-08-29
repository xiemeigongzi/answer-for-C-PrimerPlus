#include <stdio.h> // what is a prime?
int main()
{
	printf("Enter a number, I will check if it is a Prime");
	int x;
	scanf("%d", &x);
	int is_Prime=1;
	int i=1;
	 
	for(i=2;i<=100;i++)
	{
		if(x=x/i==0){
		
		is_Prime=0;
		break;}
	}
	if(is_Prime==1)
	Printf("x is a Prime");
	else
		Printf("x is not a Prime");
	return 0;
}
