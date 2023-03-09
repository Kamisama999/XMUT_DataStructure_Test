//#include<stdio.h>
//#include<stdlib.h>
//#include<limits.h>
//
//void Swap(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//int main()
//{
//	int* nums = (int*)malloc(sizeof(int) * 5);
//	int index_min = 0,index_max = 0;
//	int min = INT_MAX;
//	int max = INT_MIN;
//	printf("请输入5个整数：");
//	for(int i = 0; i < 5; i++)
//	{
//		scanf("%d",nums+i);
//		if(min > *(nums+i))
//		{
//			min = *(nums+i);
//			index_min = i;
//		}
//		if(max < *(nums+i))
//		{
//			max = *(nums+i);
//			index_max = i;
//		}
//	}
//	if(index_max == 4 && index_min == 0)
//	{
//		Swap(nums + index_max, nums + index_min);
//	}
//	else
//	{
//		if (index_max != 0)
//		{
//			if (index_min == 0)
//			{
//				index_min = index_max;
//			}
//			Swap(nums + index_max, nums);
//		}
//		if (index_min != 4)
//		{
//			Swap(nums + index_min, nums + 4);
//		}
//	}
//	
//	printf("交换后：");
//	for(int i = 0; i < 5; i++)
//	{
//		printf("%d ",*(nums+i));
//	}
//
//	return 0;
//}
