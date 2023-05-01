//#include<stdio.h>
//#include<stdlib.h>
//
//#define ASize 100
//#define BSize 100
//int cmp(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//
////����һ ֱ�Ӻϲ����������
////ʱ�临�Ӷȣ�O(log(n + m))
////�ռ临�Ӷȣ�O(log(n + m))
//int* Alternate_1(int* a, int n, int* b, int m)
//{
//	int* c = (int *)malloc(sizeof(int) * (n + m));
//	for (int i = 0; i < n; i++)
//	{
//		c[i] = a[i];
//	}
//	for (int i = 0; i < m; i++)
//	{
//		c[n + i] = b[i];
//	}
//	qsort(c, n+m, sizeof(c[0]), cmp);
//	return c;
//}
//
////������ ˫ָ��
////ʱ�临�Ӷȣ�O(n+m)
////�ռ临�Ӷȣ�O(n+m)
//int* Alternate_2(int* a, int n, int* b, int m)
//{
//	int* c = (int*)malloc(sizeof(int) * (n + m));
//	int left = 0, right = 0;
//	int count = 0;
//	while (left < n && right < m)
//	{
//		if (a[left] < b[right])
//		{
//			c[count++] = a[left++];
//		}
//		else
//		{
//			c[count++] = b[right++];
//		}
//	}
//	if (left < n)
//	{
//		for (int i = left; i < n; i++)
//		{
//			c[count++] = a[i];
//		}
//	}
//	else if (right < m)
//	{
//		for (int i = right; i < m; i++)
//		{
//			c[count++] = b[i];
//		}
//	}
//	return c;
//}
//
////������ ����ȽϷŻ�����A
////ǰ�᣺ԭ����ĳ���>=n+m
////ʱ�临�Ӷȣ�O(n+m)
////�ռ临�Ӷȣ�O(1)
//int* Alternate_3(int* a, int n, int* b, int m)
//{
//	int end_a = n - 1, end_b = m - 1;
//	int index = n + m - 1;
//	while (index >= 0)
//	{
//		if (end_a == -1)
//		{
//			a[index--] = b[end_b--];
//		}
//		else if (end_b == -1)
//		{
//			a[index--] = a[end_a--];
//		}
//		if (a[end_a] > b[end_b])
//		{
//			a[index--] = a[end_a--];
//		}
//		else
//		{
//			a[index--] = b[end_b--];
//		}
//	}
//	return a;
//}
//
//int main()
//{
//	int a[ASize] = { 0, 1, 5, 7, 9 };
//	int b[BSize] = { 2, 3, 4, 6, 8 };
//	int n = 5, m = 5;
//	//int* c = Alternate_1(A, 5, B, 5);
//	//int* c = Alternate_2(A, 5, B, 5);
//	int* c = Alternate_3(a, n, b, m);
//	printf("����A��");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n����B��");
//	for (int i = 0; i < m; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	printf("\n����C��");
//	for (int i = 0; i < n+m; i++)
//	{
//		printf("%d ", c[i]);
//	}
//	return 0;
//}