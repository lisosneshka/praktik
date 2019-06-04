#include <stdio.h>        
#include <math.h>
#include <stdlib.h>

void f2();

void main()
{
	
	f2();
}
double f1(double x)
{
	double y;
	y = 1 / (sqrt(x + 2));
	return y;
}
void f2( )
{
	double x, y;
	scanf_s("%lf", &x);
	y = f1(x);
	printf("x= %f", x);
	printf("y= %lf\n ", y);
}