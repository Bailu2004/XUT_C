#include <stdio.h>
#include <stdlib.h>
//主菜单
void yunsuan(int);
double minus();
double mult();
double div();
double pow();
double fac();
int menu()
{
	printf("1.加法\t  2.减法\t  3.乘法\t  4.除法\t\n");
	printf("5.方幂\t  6.阶乘\t  7.指数函数\t  8.三角函数\t\n");
	int x;
	printf("请选择所需要的运算，按0返回上一级\n");
	if (scanf("%d", &x) == 0) exit(0);
	if (x == 0)
		return 0;
	else
		yunsuan(x);
	return 0;
}
//加法
double add()
{
	double x, y;
	printf("请输入两个需要做和的数:\n");
	scanf("%lf%lf", &x, &y);
	return x + y;
}
//减法
double minus()
{
	double x, y;
	printf("请输入两个需要做差的数:\n");
	scanf("%lf%lf", &x, &y);
	return x - y;
}
//乘法
double mult()
{
	double x, y;
	printf("请输入两个需要做积的数:\n");
	scanf("%lf%lf", &x, &y);
	return x * y;
}
//除法
double div()
{
	double x, y;
	printf("请输入两个需要做商的数:\n");
	scanf("%lf%lf", &x, &y);
	if (y == 0) printf("无法计算");
	else return x / y;
}
//方幂
double pow()
{
	double x;
	double p = 1;
	int i;
	int n;
	printf("请输入x与n，用来计算x的n次幂\n");
	scanf("%lf%d", &x, &n);
	for (i = 1; i <= n; i++)
		p *= x;
	return p;
}
//阶乘
double fac()
{
	int x, i;
	double f = 1;
	printf("请输入计算阶乘的数:\n");
	scanf("%d", &x);
	if (x == 0) return 1;
	else if (x < 0)
	{
		printf("无法计算");
		return 0;
	}
	for (i = 1; i <= x; i++)
		f *= i;
	return f;
}
//指数函数
double exponent()
{
	int a, x;
	double result = 1;
	printf("请输入a和x，用来计算a的x次方：\n");
	scanf("%d%d", &a, &x);
	if (x == 0)return 1;
	else if (x > 0) for (; x; result *= a, x--);
	else for (; x; result *= 1.0 / a, x++);
	return result;
}

//三角函数
//double sanjiao()
//{
//	double s, t, x;
//	int n;
//	printf("Please input x= ");
//	scanf("%lf", &x);
//	t = x; n = 1; s = x;
//	do {
//		n = n + 2;
//		t = -t * x * x / (n - 1) / n;		//通项计算
//		s = s + t;   		  		//累加器求和 
//	} while (t >= 1e-7 || t <= -1e-7 );
//	return s;
//}



void yunsuan(int f)
{
	if (f <= 0)
		printf("ERROR!");
	else
	{
		switch (f)
		{
		case 1:printf("结果为：%.6lf\n", add()); break;
		case 2:printf("结果为：%.6lf\n", minus()); break;
		case 3:printf("结果为：%.6lf\n", mult()); break;
		case 4:printf("结果为：%.6lf\n", div()); break;
		case 5:printf("结果为：%.6lf\n", pow()); break;
		case 6:printf("结果为：%.6lf\n", fac()); break;
		case 7:printf("结果为：%.6lf\n", exponent()); break;
		case 8:printf("结果为：%.6lf\n", add()); break;
		default:printf("ERROR!");
		}
	}
}