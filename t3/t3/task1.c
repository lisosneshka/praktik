#include <stdio.h>        
#include <math.h>
#include <stdlib.h>

double summ(int n)
{
	double s,a;
	s = 0;
	for (int i = 0; i < n - 1; ++i)
	{
		a = pow(-1, i)*(1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		s = s + pow(-1, i)*(1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		printf("a= %lf", a);
	}
	return s;
}
void v()
{
	double s;
	int n;
	scanf_s("%i", &n);
	s = summ(n);
	printf("s= %lf", s);
}
void main()
{
	v();
}