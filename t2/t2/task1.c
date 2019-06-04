#include <stdio.h>        
#include <math.h>
#include <stdlib.h>

_Bool isInArea(double x, double y)
{
	_Bool a;

	if (((x >= -1) && (x <= 0)) && ((y >= -1) && (y <= 1)))
		a = 1;
	else if ((pow(x, 2) + pow(y, 2)) <= 1)
		a = 1;
	else
		a = 0;
	return a;
}
void v()
{
	_Bool a;
	double x, y;
	scanf_s("%lf", &x);
	scanf_s("%lf", &y);
	a = isInArea(x, y);
	if (a == 0)
		printf("0");
	else
		printf("1");
}
void main()
{
	v();
}