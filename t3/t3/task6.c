#include <stdio.h>        
#include <math.h>
#include <stdlib.h>

double summ1(int n)
{
	double s, a;
	s = 0;
	for (int i = 0; i < n - 1; ++i)
	{
		a = pow(-1, i)*(1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		s = s + pow(-1, i)*(1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		printf("a= %lf", a);
	}
	return s;
}
void v1()
{
	double s;
	int n;
	scanf_s("%i", &n);
	s = summ1(n);
	printf("s= %lf", s);
}

double summ2(double eps)
{
	double s, a;
	s = 0;

	int i = 0;
	do
	{
		a = pow(-1, i)*(1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		s = s + pow(-1, i)*(1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		printf("a= %lf  ", a);// для проверки выведим значение каждого элемента 
		i = i + 1;

	} while (fabs(a) > eps);
	printf("\n");
	return s;
}
void v2()
{
	double s, eps;
	scanf_s("%lf", &eps);
	s = summ2(eps);
	printf("s= %lf", s);
}

double summ3(int n, int k)
{
	double s, a;
	int k1 = k;
	s = 0;
	for (int i = 0; i < n; ++i)
	{
		a = pow(-1, i)*(1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		printf("a= %lf  ", a);
	}
	printf("\n");
	for (int i = 0; i < n; ++i)
	{
		a = pow(-1, i)*(1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		if (i + 1 == k1)
			k1 = k1 + k;
		else printf("a= %lf  ", a);
	}
}
void v3()
{
	int n, k;
	scanf_s("%i", &n);
	scanf_s("%i", &k);
	summ3(n, k);
}

double summ4(double eps)
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
void v4()
{
	double  eps;
	int i;
	scanf_s("%lf", &eps);
	i = summ4(eps);
	printf("i= %i", i);
}

double summ5(double eps)
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
void v5()
{
	double  eps, a;
	int i;
	scanf_s("%lf", &eps);
	i = summ5(eps);
	a = pow(-1, i)*(1 - (pow(i + 1, 2) / pow(i + 2, 2)));
	printf("i= %i   ", i);
	printf("a= %lf   ", a);
}

void main()
{
	char r;
	do
	{
		printf("\n1 - task1\n2 - task2\n3 - task3\n4 - task4\n5 - task5\n6 - exit \n");
		scanf_s("%c", &r);
		switch (r)
		{
		case '1':
			printf("task1 \n");
			v1();
			break;
		case '2':
			printf("task2 \n");
			v2();
			break;
		case '3':
			printf("task3 \n");
			v3();
			break;
		case '4':
			printf("task4 \n");
			v4();
			break;
		case '5':
			printf("task5 \n");
			v5();
			break;
		}
	} while (r != '6');
}
