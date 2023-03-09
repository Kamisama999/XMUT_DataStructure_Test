//#include<stdio.h>
//void Swap(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//void BubbleSort(int* a, int n)
//{
//	for (int j = 0; j < n; ++j)
//	{
//		int exchange = 0;
//		for (int i = 1; i < n - j; ++i)
//		{
//			if (a[i - 1] > a[i])
//			{
//				Swap(&a[i - 1], &a[i]);
//				exchange = 1;
//			}
//		}
//		if (exchange == 0)
//		{
//			break;
//		}
//	}
//}
//
////三数取中
//int GetMidIndex(int* a, int left, int right)
//{
//	int mid = left + (right - left) / 2;
//	if (a[left] < a[mid])
//	{
//		if (a[mid] < a[right])
//			return mid;
//		else if (a[left] > a[right])
//			return left;
//		else
//			return right;
//	}
//	else
//	{
//		if (a[mid] > a[right])
//			return mid;
//		else if(a[left] < a[right])
//			return left;
//		else
//			return right;
//	}
//}
//void QuickSort(int* a, int begin, int end)
//{
//	if (begin >= end)
//	{
//		return;
//	}
//	int mid = GetMidIndex(a, begin, end);
//	int left = begin, right = end;
//	Swap(&a[left], &a[mid]);
//	int keyi = left;
//	while (left < right)
//	{
//		while (left < right && a[right] >= a[keyi])
//		{
//			--right;
//		}
//		while (left < right && a[left] <= a[keyi])
//		{
//			++left;
//		}
//		if (left < right)
//			Swap(&a[left], &a[right]);
//	}
//	int meet = left;
//	Swap(&a[meet], &a[keyi]);
//
//	QuickSort(a, begin, meet - 1);
//	QuickSort(a, meet + 1, end);
//}
//
//int main()
//{
//	int nums[5];
//	printf("请输入5个整数：");
//	for(int i = 0; i < 5; i++)
//		scanf("%d",&nums[i]); 
//	BubbleSort(nums,5);
//	printf("BubbleSort:");
//	for(int i = 0; i < 5; i++)
//	{
//		printf("%d ",nums[i]);
//	}
//	printf("\n");
//	QuickSort(nums,0,4);
//	printf("QuickSort:");
//	for(int i = 0; i < 5; i++)
//	{
//		printf("%d ",nums[i]);
//	}
//	return 0;
//}
