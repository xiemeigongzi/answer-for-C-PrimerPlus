#include <stdio.h>
#define SIZE 10
#define PAR 72 
int main()
{
	int index, score[SIZE];
	int sum=0;
	
	
	printf("enter %d golf scores : \n", SIZE);
	for(index=0; index<SIZE; index++)
		scanf("%d", &score[index]);
	
	printf("the scores read in are as follows: \n");
	
	for(index=0; index<SIZE; index++)
		printf("%5d", score[index]);
		printf("\n");
		
	for(index=0;index<SIZE;index++)
		sum+=score[index];
	
	float average;	
	average = (float) sum/SIZE;
	printf("sum of scores = %d, average = %.2f \n", sum, average);
	printf("that is a handicap of %0.f.\n", average -PAR);
	return 0;
}
