#include <stdio.h>        
#include <math.h>
#include <stdlib.h>
double x = 0;
double y = 0;
double f1();
double f2()
{

	scanf_s("%lf", &x);
	y = f1();
	printf("x= %f", x);
	printf("y= %lf\n ", y);
}
double f1()
{
	y = 1 / (sqrt(x + 2));
	return y;
}