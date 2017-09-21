#include <math.h>
#include <stdio.h>
int main()
{
	const double ANSWER= 3.14159;
	double response;
	
	printf("what is the value of pi?\n");
	scanf("%lf", &response);
	while (fabs(response -ANSWER)>0.0001)  // 求绝对值的函数 fabs(A _B) 
	{
		
		printf("try again!\n");
		scanf("%lf", &response);
	 } 
	 printf("close enough!\n");
	return 0;
}
