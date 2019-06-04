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
void v1()
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
void resh1()
{
	v1();
}
double f(double x)
{
	double y;
	if (x >= -3.5)
		y = 4 * pow(x, 2) + 2 * x - 19;
	else
		y = -(2 * x) / (-4 * x + 1);
	return y;
}
void v2()
{
	double x, y;
	scanf_s("%lf", &x);
	y = f(x);
	printf("y= %lf", y);
}
void resh2()
{
	v2();
}
void main()
{
	char t;
	scanf_s("%c", &t);
	switch (t)
	{
	case '1':
		resh1();
		break;
	case '2':
		resh2();
		break;
	default:
		printf("No");
		break;
	}

}