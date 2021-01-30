#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int i;
//	int arr[10];//临时变量创立在栈区中，栈区是从高地址到低地址使用,不同变量在栈区中相差2
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a, b;
//	int count = 0;
//	scanf("%d%d", &a, &b);
//	int n = a^b;
//		while (n)
//		{
//			n = n & (n - 1);
//				count++;
//		}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int n;
//	int count = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		n = n & (n - 1);
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int arr[20] = { 0 };
//	int n;
//	int i = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		arr[i] = n & 1;
//		i++;
//		n = n >> 1;
//	}
//	printf("奇数位：");
//	for (n = 0; n < i; n += 2)
//	{
//		printf("%d ", arr[n]);
//	}
//	printf("\n偶数位：");
//	for (n = 1; n < i; n += 2)
//	{
//		printf("%d ", arr[n]);
//	}
//	return 0;
//}
//void print(int *arr,int sz)
//{
//	while (sz)
//	{
//		printf("%d ", *arr);
//		arr++;
//		sz--;
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	print(arr, sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}
//void rev(char * p, int sz)
//{
//	int i = 0;
//	while (i <= sz)
//	{
//		char tmp = *p;
//		*p = *(p + sz - 1);
//		*(p + sz - 1) = tmp;
//		i++;
//		sz--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	rev(arr, strlen(arr));
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int n = 1;
//	int sum = 0;
//	scanf("%d", &a);
//	for (i = 0; i < 5; i++)
//	{
//		sum += n*a;
//		n = n * 10 + 1;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int s = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		n = i;
//		int sum = 0;
//		while (n)
//		{
//			s = i;
//			int sum1 = 1;
//			while (s)
//			{
//				sum1 *= (n % 10);
//				s /= 10;
//			}
//			sum += sum1;
//			n /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//	total = money;
//	int a = money;
//	while (a)
//	{
//		total += a / 2;
//		a = a / 2 + a % 2;
//		if (a == 1)
//		{
//			break;
//		}
//	}
//	printf("%d\n",total);
//	return 0;
//}
//int main()
//{
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//	if (money > 0)
//	{
//		total = money * 2 - 1;
//	}
//	printf("%d\n", total);
//	return 0;
//}
int main()
{
	int a = 4;
	int b = 5;
	const int *p1 = &a;
	int const* p2 = &a;
	int * const p3 = &a;
	*p1 = 1;
	*p2 = 1;
	*p3 = 1;
	p1 = &b;
	p2 = &b;
	p3 = &b;
	return 0;


}