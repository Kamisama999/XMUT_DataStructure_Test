//#include<stdio.h>
//
//void Swap(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
////�ⷨһ
//int searchInsert(int* nums, int numsSize, int target) {
//	int left = 0, right = numsSize - 1, mid;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (target == nums[mid])
//			return mid;
//		else if (target < nums[mid])
//			right = mid - 1;
//		else if (target > nums[mid])
//			left = mid + 1;
//	}
//	if (target < nums[mid])
//		return mid;
//	else if (target > nums[mid])
//		return left;
//	return 0;
//}
//
//void Print(int* a, int lenth)
//{
//	for (int i = 0; i < lenth; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = {1,2,5,6,9};
//	int n;
//	printf("ԭ�������飺");
//	Print(arr, 5);
//	printf("����Ҫ�������֣�");
//	scanf("%d",&n);
//	
//	//�ⷨһ
//	int index = searchInsert(arr, 5, n);
//	for (int i = 4; i >= index; --i)
//	{
//		arr[i + 1] = arr[i];
//	}
//	arr[index] = n;
//
//	//�ⷨ��
//	/*arr[5] = n;
//	for (int i = 4; i >= 0; --i)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			Swap(&arr[i], &arr[i + 1]);
//		}
//	}*/
//
//	printf("��������飺");
//	Print(arr, 6);
//	return 0;
//}
