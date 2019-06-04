#include <stdio.h>        
#include <math.h>
#include <stdlib.h>

double summ2(double eps)
{
	double s,a;
	s = 0;

	int i = 0;
	do
	{
		a = pow(-1, i)*(1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		s = s + pow(-1, i)*(1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		printf("a= %lf  ", a);// для проверки выведим значение каждого элемента 
		i=i+1;

	} while (fabs(a) > eps);
	printf("\n");
	return s;
}
void v()
{
	double s, eps;
	scanf_s("%lf", &eps );
	s = summ2(eps );
	printf("s= %lf", s);
}
void main()
{
	v();
}