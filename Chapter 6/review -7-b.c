#include <stdio.h>
int main()
{
	int i;
	char ch;
	for(i=0, ch='A'; i<4;i++, ch+=2*i)
	printf("%c", ch); 
	return 0;
}

//  i   ch 
//  0   A 
//  1   3   C 
//  2   7   G
//  3   13  M

// A B C D E F G H I J  K  L  M  N  O  
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
