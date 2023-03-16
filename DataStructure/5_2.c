//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include <stdbool.h>
//#include <windows.h>
//
//CRITICAL_SECTION Printer;   //定义一个临界区
//
//typedef int QElemType;
//
//#define MAXQSIZE  100
//
//int flag, count, my_exit;
//
//typedef struct 
//{
//    QElemType* base;
//    int front;
//    int rear;
//} CirQueue;
//
//
//void CirQueueInit(CirQueue* obj)
//{
//    obj->base = (QElemType*)malloc(sizeof(QElemType) * (MAXQSIZE + 1));
//    if (!obj->base)
//    {
//        perror("malloc fail:");
//        exit(-1);
//    }
//    obj->front = obj->rear = 0;
//}
//
//bool CirQueueIsEmpty(CirQueue* obj) 
//{
//    return obj->front == obj->rear;
//}
//
//bool CirQueueIsFull(CirQueue* obj) 
//{
//    return (obj->rear + 1) % (MAXQSIZE + 1) == obj->front;
//}
//
//void CirQueueEnQueue(CirQueue* obj, QElemType value) 
//{
//    assert(!CirQueueIsFull(obj));
//
//    obj->base[obj->rear] = value;
//    obj->rear++;
//    obj->rear %= (MAXQSIZE + 1);
//}
//
//void CirQueueDeQueue(CirQueue* obj) 
//{
//    assert(!CirQueueIsEmpty(obj));
//
//    obj->front++;
//    obj->front %= (MAXQSIZE + 1);
//}
//
//QElemType CirQueueFront(CirQueue* obj) 
//{
//    assert(!CirQueueIsEmpty(obj));
//    return obj->base[obj->front];
//}
//
//QElemType CirQueueRear(CirQueue* obj) 
//{
//    assert(!CirQueueIsEmpty(obj));
//    return obj->base[(obj->rear + (MAXQSIZE + 1) - 1) % (MAXQSIZE + 1)];
//}
//
//void CirQueueFree(CirQueue* obj) 
//{
//    free(obj->base);
//    free(obj);
//}
//
//DWORD WINAPI addHomeworks(LPVOID pdata)
//{
//    CirQueue* homeworks = (CirQueue*)pdata;
//
//    while (1)
//    {
//        int num;
//        printf("Please enter the number of homeworks you want to add(Exit less than 0):\n");
//        scanf("%d", &num);
//        if (num < 0)
//            break;
//        while (num--)
//        {
//            EnterCriticalSection(&Printer);
//            count++;
//            CirQueueEnQueue(homeworks, count);
//            printf("Homework NO.%03d add successfully...\n", count);
//            LeaveCriticalSection(&Printer);
//            Sleep(1000);
//            while (CirQueueIsFull(homeworks))
//                Sleep(0);
//        }
//    }
//    printf("Exit the thread that added the homework\n");
//    flag = -1;
//    return 0;
//}
//
//DWORD WINAPI printHomeworks(LPVOID pdata)
//{
//    CirQueue* homeworks = (CirQueue*)pdata;
//    while (!flag || !CirQueueIsEmpty(homeworks))
//    {
//        while (!CirQueueIsEmpty(homeworks))
//        {
//            EnterCriticalSection(&Printer);
//            int num = CirQueueFront(homeworks);
//            CirQueueDeQueue(homeworks);
//            printf("Homework NO.%03d print successfully...\n", num);
//            LeaveCriticalSection(&Printer);
//            Sleep(3000);
//        }
//        Sleep(0);
//    }
//    my_exit = 1;
//    return 0;
//}
//
//int main()
//{
//    InitializeCriticalSection(&Printer);  //  初始化临界区
//    HANDLE Thread_add;
//    HANDLE Thread_print;
//    CirQueue homeworks;
//    CirQueueInit(&homeworks);
//
//    Thread_add = CreateThread(NULL, 0, addHomeworks, &homeworks, 0, NULL);
//    Thread_print = CreateThread(NULL, 0, printHomeworks, &homeworks, 0, NULL);
//
//    while (!my_exit)
//        Sleep(0);
//    DeleteCriticalSection(&Printer);
//    return 0;
//}