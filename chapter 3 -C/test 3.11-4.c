// ��ȡ�������� �� С����ʽ ��  ָ����ʽ �� ��ʮ������ %p 
#include <stdio.h>
int main()
{
	float a;
	scanf("%f", &a);
	
	printf(" Enter a floating-point value: \n");  //
	
	printf("fixed-point notation :%f \n",a);// %f : С�� 
	
	printf("exponential notation : %e \n",a); // %e : ָ�� 
	
	printf("p notation : %a\n",a);// %p  : ��ַ��  %a: ʮ������������ 
	
	return 0;
 } 
