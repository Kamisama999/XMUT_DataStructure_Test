//#include <iostream>
//#include <thread>
//#include <queue>
//#include <mutex>
//#include <Windows.h>
//using namespace std;
//
//mutex waiting;
//int cnt;
//bool flag;
//queue<int> telephone;
//
//void lineUp()
//{
//	printf("Please enter the number of people you want to consult customer service(Exit less than 0):\n");
//	while (1)
//	{
//		int num;
//		cin >> num;
//		if (num < 0)
//		    break;
//		while (num--)
//		{
//			waiting.lock();
//		    cnt++;
//			telephone.push(cnt);
//			waiting.unlock();
//		}
//	}
//	flag = true;
//}
//
//void answer()
//{
//	while (!flag || !telephone.empty())
//	{
//		while (!telephone.empty())
//		{
//			cout << "--------------------------------------------" << endl;
//			printf("The current phone number is %03d\n", telephone.front());
//			telephone.pop();
//			cout << "The current number of people queuing is " << telephone.size() << endl;
//			cout << "--------------------------------------------" << endl;
//			Sleep(1000);
//		}
//	}
//}
//int main()
//{
//	thread thread_1(lineUp);
//	thread thread_2(answer);
//	thread_1.join();
//	thread_2.join();
//	return 0;
//}