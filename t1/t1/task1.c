#include <stdio.h>        
#include <math.h>
#include <stdlib.h>

void main()                 
{       
	double  x, x1=2;
	double  y;
	y= 1 / (sqrt(x1 + 2));
	printf("x=2 y= %lf\n", y);
	scanf_s("%lf", &x);
	y = 1 / (sqrt(x + 2));
	printf("x= %f", x);
		printf("y= %lf\n ", y);
}

