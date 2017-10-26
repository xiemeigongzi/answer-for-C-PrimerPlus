#include <stdio.h>
int search( );

int main()
{
	int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};
	int x;
	scanf("%d", &x);
	int location;

		if(location>=0){
		location=search(x,a,sizeof(a)/sizeof(a[0]));
		printf("the location is %d \n ", location);
		}
		else{
			printf("not in the queue.\n");
		}
	
	return 0;
}

int search(int x, int a[], int length)
{
	int i;
	int ret=-1;
	for(i=0;i<length;i++)
	{
		if(a[i]==x)
		ret=i;
		break;
	}
	return ret;
}
