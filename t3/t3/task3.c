#include <stdio.h>        
#include <math.h>
#include <stdlib.h>

double summ(int n, int k)
{
	double s, a;
	int k1=k;
	s = 0;
	for (int i = 0; i < n ; ++i)
	{
		a = pow(-1, i)*(1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		 printf("a= %lf  ", a);
	}
	printf("\n");
	for (int i = 0; i < n ; ++i)
	{
		a = pow(-1, i)*(1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		if (i +1== k1)
			k1 = k1 + k;
		else printf("a= %lf  ", a);
	}
}
void v()
{
	int n, k;
	scanf_s("%i", &n);
	scanf_s("%i", &k);
	summ(n, k);
}
void main()
{
	v();
}