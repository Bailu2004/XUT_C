#include <stdio.h>
#include <stdlib.h>
//���˵�
void yunsuan(int);
double minus();
double mult();
double div();
double pow();
double fac();
int menu()
{
	printf("1.�ӷ�\t  2.����\t  3.�˷�\t  4.����\t\n");
	printf("5.����\t  6.�׳�\t  7.ָ������\t  8.���Ǻ���\t\n");
	int x;
	printf("��ѡ������Ҫ�����㣬��0������һ��\n");
	if (scanf("%d", &x) == 0) exit(0);
	if (x == 0)
		return 0;
	else
		yunsuan(x);
	return 0;
}
//�ӷ�
double add()
{
	double x, y;
	printf("������������Ҫ���͵���:\n");
	scanf("%lf%lf", &x, &y);
	return x + y;
}
//����
double minus()
{
	double x, y;
	printf("������������Ҫ�������:\n");
	scanf("%lf%lf", &x, &y);
	return x - y;
}
//�˷�
double mult()
{
	double x, y;
	printf("������������Ҫ��������:\n");
	scanf("%lf%lf", &x, &y);
	return x * y;
}
//����
double div()
{
	double x, y;
	printf("������������Ҫ���̵���:\n");
	scanf("%lf%lf", &x, &y);
	if (y == 0) printf("�޷�����");
	else return x / y;
}
//����
double pow()
{
	double x;
	double p = 1;
	int i;
	int n;
	printf("������x��n����������x��n����\n");
	scanf("%lf%d", &x, &n);
	for (i = 1; i <= n; i++)
		p *= x;
	return p;
}
//�׳�
double fac()
{
	int x, i;
	double f = 1;
	printf("���������׳˵���:\n");
	scanf("%d", &x);
	if (x == 0) return 1;
	else if (x < 0)
	{
		printf("�޷�����");
		return 0;
	}
	for (i = 1; i <= x; i++)
		f *= i;
	return f;
}
//ָ������
double exponent()
{
	int a, x;
	double result = 1;
	printf("������a��x����������a��x�η���\n");
	scanf("%d%d", &a, &x);
	if (x == 0)return 1;
	else if (x > 0) for (; x; result *= a, x--);
	else for (; x; result *= 1.0 / a, x++);
	return result;
}

//���Ǻ���
//double sanjiao()
//{
//	double s, t, x;
//	int n;
//	printf("Please input x= ");
//	scanf("%lf", &x);
//	t = x; n = 1; s = x;
//	do {
//		n = n + 2;
//		t = -t * x * x / (n - 1) / n;		//ͨ�����
//		s = s + t;   		  		//�ۼ������ 
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
		case 1:printf("���Ϊ��%.6lf\n", add()); break;
		case 2:printf("���Ϊ��%.6lf\n", minus()); break;
		case 3:printf("���Ϊ��%.6lf\n", mult()); break;
		case 4:printf("���Ϊ��%.6lf\n", div()); break;
		case 5:printf("���Ϊ��%.6lf\n", pow()); break;
		case 6:printf("���Ϊ��%.6lf\n", fac()); break;
		case 7:printf("���Ϊ��%.6lf\n", exponent()); break;
		case 8:printf("���Ϊ��%.6lf\n", add()); break;
		default:printf("ERROR!");
		}
	}
}