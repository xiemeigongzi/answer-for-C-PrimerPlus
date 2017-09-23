#include <stdio.h>
int main()
{
	
	double s1;
	double s2;
	double s;
	int a;
	int count;
	int limit ;
	scanf("%d", &limit);
	
	for(s1=1.0,a=1,count=1;count<=limit;count++)
	{
		a*=2.0;
		s1+=1.0/a;
		printf("time = %f when terms = %d .\n", s1, count); 
	}
	printf("the total s1 = %f \n", s1);
	
	for(s2=0.0,a=1,count=1;count<=limit;count++)
	{
		a*=2.0;
		s2+=1.0/a;
		printf("time = %f when terms = %d .\n", s2, count); 
	}
	printf("the total s2 = %f \n", s2);
	
	s=s1-s2;
	printf("the latest value of s=%f \n", 2.0*s);
	return 0;
}
