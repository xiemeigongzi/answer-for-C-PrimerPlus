#include <stdio.h> 
int main()
{
	int i;
	char ch;
	for(i=0, ch='A'; i<4; i++,ch+=2*i)
		printf("%c", ch);
	
	return 0;
}


//  i  ch 
//  0   A
//  1  A+2 
//  2  A+2+4 A+6
//  3  A+6 +6 = A+12 

//   A  B  C  D  E  F  G  H  I  J  K  L  M  N  
//   1  2  3  4  5  6  7  8  9  10 11 12 13 14

