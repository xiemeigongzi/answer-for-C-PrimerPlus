#include <stdio.h>

void minmax();
int main()
{
	int a[]={1,2.3,4,5,6,7,8,9,12,13,14,16,17,21,23,55};
	int min, max;
	
	printf("main sizeof(a)=%lu\n", sizeof(a));
	printf("main sizeof(a[0])=%lu\n", sizeof(a[0]));
	printf("main location of a =%p\n",a);
	
	minmax(&a,sizeof(a)/sizeof(a[0]),&min, &max);
	printf("min=%d max=%d\n", min,max);
	
	int *p= & min;
	printf("*p= %d\n",*p);
	printf("*p= %p\n",p);
	printf("p[0]=%d\n",p[0]);
	
	return 0;
}

void minmax(int *a, int length, int *min, int *max)
{
	int i;
	
	printf("void minmax sizeof(a)=%lu\n", sizeof(a));
	printf("void minmax sizeof(a[0])=%lu\n", sizeof(a[0]));
	printf("void location of a =%p\n",a);
	
	
	*min=a[0];
	*max=a[0];
	for(i=0; i<length;i++){
		if(*min>a[i]){
			*min=a[i];
		}
		if(*max<a[i])
		{
			*max=a[i];
		}
	}
}
