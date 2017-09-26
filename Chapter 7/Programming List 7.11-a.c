#include <stdio.h>
#include <ctype.h>
int main()
{
	char ch;
	ch=getchar ();
	while(ch!='#')
	{
		if('\n'==ch)
		 	continue;
		if(islower(ch))
			switch(ch)
			{
				case 'a':
					printf("argali.\n"); 
					break;
				
				case 'b':
					printf("babirusa\n");
					break;
				
				case 'c':
					printf("coati\n");
					break;

				default:
					printf(" a stumper.\n");
					break;
			}
			else{
				printf("enough!\n");
			}

	    //	ch=getchar ();
	    	while(getchar()!='\n')
	    //	continue;
	    	break;
			printf("type another or type #\n");
			ch=getchar ();
	}
	printf("end\n");
	return 0;
 } 
