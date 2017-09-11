#include <stdio.h>
#include <stdlib.h>

int main()
{
	void *p;
	int cnt=0;
	while(p=malloc(100*1024*1024)){
		cnt++;
	}
	free(p);
	printf("allocate %d00 MB Space,\n",cnt);
	
}
