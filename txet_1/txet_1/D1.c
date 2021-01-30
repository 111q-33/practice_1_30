//#include<stdio.h>
//struct Book
//{
//	char name[20];//C语言程序设计
//	short price;//55
//};
//int main()
//{
//	struct Book b1 = { "C语言程序设计", 55 };
//		printf("书名：%s\n", b1.name);
//		printf("价格：%d\n", b1.price);
//
//		return 0;
//
//}
#include<stdio.h>
//struct person
//{
//	char name[10];
//	short age;
//};
//int main()
//{
//	struct person n1 = { "张三", 18 };
//	printf("姓名：%s\n", n1.name);
//	printf("年龄：%d\n", n1.age);
//	struct person* pb = &n1;
//	printf("年龄：%d\n", (*pb).age);
//	printf("年龄：%d\n", pb->age);
//	return 0;
//
//
//
//}
//#include<stdio.h>
//int main()
//{
//	char ch = ' ';
//	while (scanf("%c", &ch))
//	{
//		getchar();
//		if (ch >= 'a' && ch <= 'z' || ch>'A' && ch <= 'Z')
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//
//
//
//}
//#include<stdio.h>
//int main()
//{
//	char m = '0';
//	printf("%c", m);
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i<100000; i++)
//	{
//		int sum = 0;
//		int j = 0;
//		for (j = 10; j <= 10000; j *= 10)
//		{
//			sum = sum + ((i / j)*(i%j));
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	printf("Name    Age    Gender /n");
//	printf("--------------------- /n");
//	printf("Jack    18     man /n");
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int price = 0;
//	int month = 0;
//	int day = 0;
//	int d = 0;
//	scanf_s("%d%d%d%d", &price, &month, &day, &d);
//	if (month == 11 && day == 11)
//	{
//		if (d)
//		{
//			price = price*0.7 - 50;
//			if (price <= 0)
//			{
//				price = 0;
//			}
//		}
//		else
//		{
//			price = price*0.7;
//		}
//	}
//	if (month == 12 && day == 12)
//	{
//		if (d)
//		{
//			price = price*0.8 - 50;
//			if (price <= 0)
//			{
//				price = 0;
//			}
//		}
//		else
//		{
//			price = price*0.8;
//		}
//	}
//	printf("%d", price);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf_s("%d", &n);
//	for (i = 10; i <= 1000; i *= 10)
//	{
//		printf("%d", n%i);
//		n /= i;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int score[40] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//	//对所有数字排序-冒泡排序
//	int j = 0;
//	for (i = 0; i<n; i++)
//	{
//		for (j = 0; j<n - i - 1; j++)
//		{
//			if (score[j] < score[j + 1])
//			{
//				int tmp = score[j];
//				score[j] = score[j + 1];
//				score[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", score[i]);
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int b;
//	int a;
//	b = 0 && 0;
//	a = -1 && -1;
//	printf("%d\n", b);
//	printf("%d\n", a);
//}
#include<stdio.h>
int main()
{
	int a, b;
	char ch = 0;
	while (~scanf("%d%c%d", &a, &ch, &b))
	{
		switch (ch)
		{
		case '+':
			printf("%.4f+%.4f=%.4f", a, b, a + b);
			break;
		case '-':
			printf("%.4f-%.4f=%.4f", a, b, a - b);
			break;
		case '*':
			printf("%.4f*%.4f=%.4f", a, b, a*b);
			break;
		case '/':
			printf("%.4f/%.4f=%.4f", a, b, a / b);
			break;
		}
	}
	return 0;


}