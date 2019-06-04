#include <stdio.h>        
#include <math.h>
#include <stdlib.h>

double f(double x)
{
	double y;
	if (x >= -3.5)
		y = 4 * pow(x, 2) + 2 * x - 19;
	else
		y = -(2 * x) / (-4 * x + 1);
	return y;
}
void v()
{
	double x, y;
	scanf_s("%lf", &x);
	 y=f(x);
		printf("y= %lf", y);
}
void main()
{
	v();
}