#include <stdio.h>
int main()
{
	int n=20;
	double fenzi, fenmu;
	double sum;
	int i;
	double t;
	
	fenzi = 2;
	fenmu=1;
	for (i=1;i<=n;i++){
		sum+=fenzi/fenmu;
		t=fenzi;
		fenzi=fenzi+fenmu;
		fenmu=t;
	}
	printf("%.2f\n",sum);
	return 0;
}
