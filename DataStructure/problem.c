//#include<stdio.h>
//#include<limits.h>
//
//#define  arrsize  100
//
////递归太深 栈溢出
//int fun(int n)
//{
//	if (n == 1)
//		return 2 * 2;
//	return 2 * (n + 1) * fun(n - 1);
//}
//
//int main()
//{
//	int n = 100000;
//	int a[arrsize];
//	a[0] = 1;
//	for (int i = 1; i < n; i++)
//	{
//		if(i >= arrsize)
//			exit(1);
//		a[i] = 2 * (i + 1) * a[i - 1];
//		//a[i] = fun(i);
//		//
//		//方法一
//		if (a[i] < 0)
//			exit(2);
//		//方法二
//		if (i >= 1 && a[i] / a[i - 1] != (i + 1) * 2)
//			exit(3);
//		//方法三
//		if ((unsigned int)a[i] > INT_MAX)
//			exit(4);
//	}
//	return 0;
//}