//#include <queue>
//#include <iostream>
//
//using namespace std;
//
//void generate(int n)
//{
//	if (n < 1) return;
//	queue<int> q;
//	q.push(1);
//	for (int i = 1; i < n; i++)
//	{
//		q.push(1);
//		for (int j = 1; j <= i; j++)
//		{
//			int top = q.front();
//			printf("%-3d ", q.front());
//			q.pop();
//			if(j != i)
//				top += q.front();
//			q.push(top);
//		}
//		cout << endl;
//	}
//	while (!q.empty())
//	{
//		printf("%-3d ", q.front());
//		q.pop();
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	generate(n);
//
//	return 0;
//}