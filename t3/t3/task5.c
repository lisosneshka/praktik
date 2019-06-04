#include <stdio.h>        
#include <math.h>
#include <stdlib.h>

double summ2(double eps)
{
	double  a = 1000;
	int i = 0;
	while (fabs(a) > eps)
	{
		a = pow(-1, i)*(1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		if ((fabs(a) <= eps) && (a < 0))
			break;
		i = i + 1;
	}
	printf("\n");
	return i;
}
void v()
{
	double  eps, a;
	int i;
	scanf_s("%lf", &eps);
	i = summ2(eps);
	a = pow(-1, i)*(1 - (pow(i + 1, 2) / pow(i + 2, 2)));
	printf("i= %i   ", i);
	printf("a= %lf   ", a);
}
void main()
{
	v();
}
