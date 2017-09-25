#include <stdio.h>
int product();
int main()
{
	int min,max;
	scanf("%d %d", &min, &max);
	
	product(min,max);
	
	printf("enter next:\n");
	scanf("%d %d", &min, &max);
	
	product(min,max);
    
    scanf("%d %d", &min, &max);

	return 0;
}

int product(int min, int max)
{
	int sum=0;
	int i;
	for(i=min;i<=max;i++){
		if(min<max){
			sum+=i*i;}
				else{
			printf("done!");
		}
	printf("%d to %d = %d", min*min, max*max, sum);		
}
	return sum;
}
