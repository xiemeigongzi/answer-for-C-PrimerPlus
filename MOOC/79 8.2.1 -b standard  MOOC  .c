#include <stdio.h>
int search(int key, int a[], int length);
int main()
{
	int a[]={2,4,6,7,1,3,5,9,11,13,23,14,32};
	int x;
	int loc;
	scanf("%d", &x);
	loc=search(x,a,sizeof(a)/sizeof(a[0]));
	if(loc!=-1){
		printf("%d at %d\n", x,loc);
	}
	else{
		printf("Not in the queue.\n");
	}
	return 0;
}

int search(int key, int a[], int length)
{
	int ret=-1;
	int i;
	for(i=0;i<length;i++)
	{
		if(a[i]==key)
		{
			ret=i;
			break;
		}
	}
	return ret;
}
