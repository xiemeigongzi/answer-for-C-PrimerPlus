#include <stdio.h>
int main()
{
	const int ready =24;
	int code =0;
	int count =0;
	scanf("%d %d", &code, &count);
	if(code==ready){
		if(count<20)
			printf("һ������\n");}
		else
			printf("�����ȴ�\n"); 
	
	return 0;
}
