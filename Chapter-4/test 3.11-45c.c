//
#include <stdio.h>
int main()
{
	long long a=0;
	printf("Input your age.\n");
	
	scanf("%ld",&a);
	
	long long b=a*3.156e7; // ������ִ���long ����������  �������������С��������� 
	
	printf("%ld\n", b); 
	printf("%e\n", b);
	
		return 0;
 } 
 
 
 // int?�����32λ������32bit�������ȫ1�������λΪ����λ����Ҳ����2^31-1.
// unsigned int����2^32-1 
