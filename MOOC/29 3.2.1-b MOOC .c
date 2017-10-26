#include <stdio.h>
int main()
{
	const int READY =24;
	int code =0;
	int count =0;
	scanf("%d %d", &code, &count);
	if(code==READY)
		if(count<20)
		printf("normal \n");
	else
		printf("keep on waiting.\n");

	return 0;
}
