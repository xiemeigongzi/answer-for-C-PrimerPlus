#include <stdio.h>
int main()
{
	int min,max;
	scanf("%d %d", &min, &max);
	int sum=0;
	int i;
	for(i=min;i<=max;i++){
		if(min<max){
			sum+=i*i;
		//	printf("the next :\n");
			scanf("%d %d", &min, &max);
		}
		else{
			printf("done!");
		}
			printf("%d to %d = %d", min*min, max*max, sum);
	}

	return 0;
}
