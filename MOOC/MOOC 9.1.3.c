#include <stdio.h>
int minmax();
int main()
{
	int a[]={1,2.3,4,5,6,7,8,9,12,13,14,16,17,21,23,55};
	int min, max;
	minmax( a,  sizeof(a)/sizeof(a[0]),  &min,  &max);
	printf("min=%d max=%d\n",min, max);
	return 0;
}

int	 minmax(int a[], int length, int *min, int *max)
{
	int i;
	 *min=a[0];
	 *max=a[0];
	for(i=0;i<length;i++)
	{
		if(a[i]<*min){
		*min=a[i];}
		if(a[i]>*max){
			*max=a[i];
		}
	}
}
