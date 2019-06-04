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
		printf("a= %lf  ", a);// для проверки выводим 
		if (fabs(a) <= eps)
			break;
		i = i + 1;
	}
	printf("\n");
	return i;
}
void v()
{
	double  eps;
	int i;
	scanf_s("%lf", &eps);
	i = summ2(eps);
	printf("i= %i", i);
}
void main()
{
	v();
}
