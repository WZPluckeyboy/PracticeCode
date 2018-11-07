#include <stdio.h>
#include <Windows.h>
#include <math.h>

#define WUCHA (0.5*pow(10, -4))

double f_x(double x);
double erfenfa();
double diedai();
double newtown();

int cnt = 0;

int main()
{
	// ���ַ�
	printf("���ַ���%lf\n", erfenfa());
	printf("%d\n", cnt);

	// ������
	printf("��������%lf\n", diedai());
	printf("%d\n", cnt);

	// ţ�ٷ�
	printf("ţ�ٷ���%lf\n", newtown());
	printf("%d\n", cnt);

	system("pause");
	return 0;
}


// f(x)
double f_x(double x)
{
	return (exp(x) + 10 * x - 2);
}

// f'(x)
double fd_x(double x)
{
	return (exp(x) + 10);
}

// ţ�ٷ�
double newtown()
{
	cnt = 0;

	double x0 = 0.0;
	double ret = f_x(x0);
	double xk = x0 - f_x(x0) / fd_x(x0);

	for (int k = 0; ; k++)
	{
		cnt++;
		if (fabs(ret - 0) <= WUCHA)
		{
			break;
		}

		xk = xk - f_x(xk) / fd_x(xk);
		ret = f_x(xk);
	}

	return xk;
}

// ������
double diedai()
{
	cnt = 0;
	double x0 = 0.0;
	double ret = f_x(x0);
	double xk = x0;

	//int k = 0;
	for (int k = 0; ; k++)
	{
		cnt++;
		if (fabs(ret - 0) <= WUCHA)
		{
			break;
		}

		xk = ((2 - exp(xk)) / 10);
		ret = f_x(xk);
	}

	return xk;
}

// ���ַ�
double erfenfa()
{
	cnt = 0;
	double left = 0.0;
	double right = 0.1;
	double x = (left + right) / 2;
	double ret = f_x(x);

	while (fabs(ret - 0) >= WUCHA)
	{
		cnt++;
		if (ret > 0)
		{
			right = x;
		}
		if (ret < 0)
		{
			left = x;
		}
		x = (left + right) / 2;
		ret = f_x(x);
	}
	return x;
}

