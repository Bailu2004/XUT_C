#include<stdio.h>
/*               ������               */


//�ڰ���

//#define L 3.785
//#define km 1.609
//int main() {
//	double mile, gallon;
//	printf("���������е����(mile)�����ĵ�������(gallon)��\n");
//	scanf("%lf %lf", &mile, &gallon);
//	printf("����ÿ����������ʻ��Ӣ�����ǣ�%.1lf\n", mile / gallon);
//	printf("��ʻÿ�������ĵ����������ǣ�%.1lf\n", (gallon * L) / (mile * km));
//	return 0;
//}


/*               ������               */


//������

//#include<stdio.h>
//int main() {
//	int a = 1;
//	while (a > 0) {
//		printf("������������\n");
//		scanf("%d", &a);
//		printf("%d days are %d weeks, %d days.", a, a / 7, a % 7);
//	}
//	return 0;
//
//}


//�ڰ���

//#include<stdio.h>
//int main() {
//	int a, b;
//	printf("This program computers moduli.\n");
//	printf("Enter an integer to serve as the second operand:\n");
//	scanf("%d", &a);
//	printf("Now enter the first operand:\n");
//	scanf("%d", &b);
//	
//	while (b > 0)
//	{
//		printf("%d %% %d is %d\n", b, a, (b % a));
//		printf("Enter next number for operand(<= 0 to quit):\n");
//		scanf("%d", &b);
//	}
//	printf("Done");
//	return 0;
//}







/*               ������               */


//��6��

//#include<stdio.h>
//int main()
//{
//	int a, b;
//	printf("���������������С���֣�\n");
//	scanf("%d",&a);
//	printf("�������������������֣�\n");
//	scanf("%d",&b);
//	for (; a <= b; a++)
//	{
//		printf("%d\t%d\t%d\t", a, a * a, a * a * a);
//		printf("\n");
//	}
//	return 0;
//}




//��12��

//#include<stdio.h>
//int main()
//{
//	int n;
//	printf("������ָ���Ĵ�����(<= 0 to quit)\n");
//	
//	while(scanf("%d", &n), n > 0)
//	{
//		int t = n;
//		double a = 1.0;
//		int b = 1;
//		double sum1 = 0;
//		for (; n > 0; n--, b++)
//		{
//			sum1 += a / b;
//		}
//		printf("1.0 + 1.0 / 2.0 + 1.0 / 3.0 + 1.0 / 4.0 + ...... =%lf\n", sum1);
//		double sum2 = 0;
//		b = 1;
//		for (double a = 1.0; t > 0; t--, b++)
//		{
//			if (b % 2 == 0)
//			{
//				sum2 -= a / b;
//			}
//			else sum2 += a / b;
//		}
//		printf("1.0 - 1.0 / 2.0 + 1.0 / 3.0 - 1.0 / 4.0 + ...... =%lf\n", sum2);
//		printf("����������֮��Ϊ%lf\n", sum1 + sum2);
//		printf("\n");
//		printf("������ָ���Ĵ�����(<= 0 to quit)\n");
//	}
//	return 0;
//}






//��17��

//#include<stdio.h>
//double f(double, int);
//int main()
//{
//	int n = 1;
//	double first = 100.0;
//	double c = first * (1 + 0.08);
//	for (; c >= 10; n++)
//		c = f(c, n);
//	printf("%d����ȡ���˻���Ǯ", n);
//	return 0;
//}
//double f(double c, int n)
//{
//	for (; n > 0; n--)
//	{
//		c = (c - 10) * (1 + 0.08);
//		printf("%lf\n", c);
//	}
//	return c;
//}




/*               ������               */


//��7��

//#include<stdio.h>
//#define day 10.00
//int main()
//{
	//int h;
	//double gong_zi = 0, shui = 0;
	//printf("������һ�ܹ�����Сʱ��(h)��");
	//scanf("%d", &h);
	//if (h <= 40 && h > 0)
	//{
	//	gong_zi = h * 10;
	//}
	//else if (h <= 0)
	//{
	//	gong_zi = 0;
	//}
	//else gong_zi = (h - 40) * 1.5 * 10 + 40 * 10;
	//printf("�����ܶ%.3lf\n ", gong_zi);
	//if (gong_zi <= 300 && gong_zi > 0)
	//{
	//	shui = gong_zi * 0.15;
	//}
	//else if (gong_zi > 300 && gong_zi <= 450)
	//{
	//	shui = (gong_zi - 300) * 0.2 + 300 * 0.15;
	//}
	//else if (gong_zi > 450)
	//{
	//	shui = (gong_zi - 450) * 0.25 + 300 * 0.15 + 150 * 0.2;
	//}
	//printf("˰����: %.3lf\n", shui);
	//printf("�������ǣ�%.3lf\n", gong_zi - shui);
//	return 0;
//
//}




//��8��

//#include<stdio.h>
//#include<stdlib.h>
//#define a 8.75
//#define b 9.33
//#define c 10.00
//#define d 11.20
//int main()
//{
//	int flag = 1, x;
//	int flag_ = 1;
//	while (flag == 1)
//	{
//		printf(" * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
//		printf("Enter the number corresponding to the desired pay rate or action:\n");
//		printf("1)  $%.2lf/hr                                       2)  $%.2lf/hr \n", a, b);
//		printf("3)  $%.2lf/hr                                       4)  $%.2lf/hr \n", c, d);
//		printf("5)  quit                                   \n");
//		printf(" * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
//		scanf("%d", &x);
//		switch (x)
//		{
//		case 1:
//			break;
//		case 2:
//			break;
//		case 3:
//			break;
//		case 4:
//			break;
//		case 5:
//			flag_ = 0;
//			exit(0);
//			break;
//		default:
//			printf("��������ȷ��ѡ��\n");
//			flag_ = 0;
//		}
//		if (flag_ == 1)
//		{
//			int h;
//			double gong_zi = 0, shui = 0;
//			printf("������һ�ܹ�����Сʱ��(h)��");
//			scanf("%d", &h);
//			if (h <= 40 && h > 0)
//			{
//				gong_zi = h * 10;
//			}
//			else if (h <= 0)
//			{
//				gong_zi = 0;
//			}
//			else gong_zi = (h - 40) * 1.5 * 10 + 40 * 10;
//			printf("�����ܶ%.3lf\n ", gong_zi);
//			if (gong_zi <= 300 && gong_zi > 0)
//			{
//				shui = gong_zi * 0.15;
//			}
//			else if (gong_zi > 300 && gong_zi <= 450)
//			{
//				shui = (gong_zi - 300) * 0.2 + 300 * 0.15;
//			}
//			else if (gong_zi > 450)
//			{
//				shui = (gong_zi - 450) * 0.25 + 300 * 0.15 + 150 * 0.2;
//			}
//			printf("˰����: %.3lf\n", shui);
//			printf("�������ǣ�%.3lf\n", gong_zi - shui);
//		}
//		system("pause");
//		system("cls");
//	}
//}

	

//}













//�ϻ���ҵ1-1

//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#define N 20
//int main()
//{
//	char mi_ma[N];
//	mi_ma[19] = '\0';
//	int flag = 1;
//	printf("���������루���ܳ���12λ,��Ҫ������д��Сд�����֡������ţ���\n");
//	while (flag)
//	{
//		 int flag1 = 1;
//		scanf("%s", mi_ma);
//		if (strlen(mi_ma) > 12)
//			flag1 = 0;
//		int a = 0, b = 0, c = 0, d = 0;
//		for (int i = 0; i < N; i++)
//		{
//			if (islower(mi_ma[i])) a++;
//			if (isupper(mi_ma[i])) b++;
//			if (isdigit(mi_ma[i])) c++;
//			if (ispunct(mi_ma[i])) d++;
//		}
//		if (a && b && c && d && flag1)
//			flag = 0;
//		else  printf("�������������루���ܳ���12λ����Ҫ������д��Сд�����֡������ţ���\n");
//	}
//	return 0; 
//}




//�ϻ���ҵ1-2


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	printf("������Ҫ��ӡ��������ǵ�������\n");
//	scanf("%d", &n);
//	int num[50][50] = { 0 };
//	for (int i = 1; i <= n; i++)  //��
//	{
//		num[i][1] = 1;
//		num[i][i] = 1;
//		for (int j = 2; j < i; j++)   //��
//		{
//			num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
//		}
//	}
//	for (int a = 1; a <= n; a++)
//	{
//		for (int b = 1; b <= n - a; b++)
//		{
//			printf(" ");
//		}
//		for (int c = 1; c <= a; c++)
//		{
//			printf("%d ", num[a][c]);
//		}
//		printf("\n");
//	}
//	return 0;
//}





//�ϻ���ҵ1-3



//#include<stdio.h>
//int main()
//{
//	int shou_ru;
//	printf("����������������룺");
//	scanf("%d", &shou_ru);
//	int x = shou_ru / 100000;
//	double y = 0;
//	switch (x)
//	{
//		case 0:
//			printf("û�н�����");
//			break;
//		case 1:
//			y = shou_ru * 0.01;
//			break;
//		case 2:
//		case 3:
//			y = shou_ru * 0.012;
//			break;
//		case 4:
//		case 5:
//			y = shou_ru * 0.015;
//			break;
//		case 6:
//		case 7:
//		case 8:
//		case 9:
//			y = shou_ru * 0.03;
//			break;
//		default:
//			y = 100000;
//	}
//	printf("����õĽ�����%.3lf��", y);
//	return 0;
//}




//�ϻ���ҵ2-1


#include<stdio.h>
double square(double, double,double,int);
double diedai(int, double, double);
int main()
{
	double a, x,jingdu;
	int n = 1;
	printf("������Ҫ����ƽ����������");
	scanf("%lf", &a);
	printf("�����������ֵX(0):");
	scanf("%lf", &x);
	printf("���������Ҫ��ľ��ȣ�");
	scanf("%lf", &jingdu);
	printf("\n");
	printf("%lf��ƽ������%lf", a, square(a, x, jingdu,n));
}

double square(double a, double x0,double jingdu,int n)
{
	if (diedai(n + 1, x0, a) - diedai(n, x0, a) >= jingdu) n++;
	else return diedai(n + 1,x0,a);
}
double diedai(int n,double x0,double a)
{
	if (n == 0) return x0;
	return 0.5 * (diedai(n - 1,x0,a) + a / diedai(n - 1,x0,a));
}



//�ϻ���ҵ2-2
   

//#include <stdio.h>
//#include <stdlib.h>
//int menu();
//int main()
//{
//	int flag = 1;
//	while (flag)
//	{
//		menu();
//		printf("��������밴1���˳��밴0\n");
//		scanf(" %d", &flag);
//		system("cls");
//	}
//	return 0;
//}




























