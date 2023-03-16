//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//#include <stdbool.h>
//
//#define MaxSize 100
//typedef int ElemType;
//typedef struct
//{
//	ElemType data[MaxSize];
//	int top;
//}SqStack;
//
//void StackInit(SqStack* p)
//{
//	assert(p);
//	p->top = 0;
//}
//
//bool StackEmpty(SqStack* p)
//{
//	assert(p);
//	return p->top == 0;
//}
//
//void StackPush(SqStack* p, ElemType x)
//{
//	assert(p);
//	assert(p->top < MaxSize);
//	p->data[p->top++] = x;
//}
//
//void StackPop(SqStack* p)
//{
//	assert(p);
//	assert(!StackEmpty(p));
//	p->top--;
//}
//
//ElemType StackTop(SqStack* p)
//{
//	assert(p);
//	assert(!StackEmpty(p));
//	return p->data[p->top - 1];
//}
//
//size_t StackSize(SqStack* p)
//{
//	assert(p);
//	return p->top;
//}
//
//void StackPrint(SqStack* p)
//{
//	assert(p);
//	if (StackEmpty(p))
//		printf("Stack is empty!\n");
//	else
//	{
//		printf("ebp ");
//		for (int i = 0; i < p->top; i++)
//			printf("%d ", p->data[i]);
//		printf("esp\n");
//	}
//}
//int Test1()
//{
//	SqStack a;
//	StackInit(&a);
//	printf("初始化栈：");
//	StackPrint(&a);
//	StackPush(&a, 1);
//	printf("压入数据1：");
//	StackPrint(&a);
//	StackPush(&a, 2);
//	printf("压入数据2：");
//	StackPrint(&a);
//	StackPop(&a);
//	printf("当前栈的大小为：%lld\n", StackSize(&a));
//	printf("弹出栈顶数据：");
//	StackPrint(&a);
//	StackPush(&a, 1);
//	printf("当前栈顶数据为：%d\n", StackTop(&a));
//}
//
//bool isPalindrome(char* s) {
//	SqStack a;
//	StackInit(&a);
//	int l = strlen(s);
//	for (int i = 0; i < l / 2; i++)
//		StackPush(&a, s[i]);
//	for (int i = l - l / 2; i < l; i++)
//		if (StackTop(&a) == s[i])
//			StackPop(&a);
//		else
//			return false;
//	return true;
//}
//
//void Test2()
//{
//	char s[100];
//	printf("Please enter a string:\n");
//	gets(s);
//	if (isPalindrome(&s))
//		printf("This is palindrome!!!\n");
//	else
//		printf("This isn't palindrome!!!\n");
//}
//int main()
//{
//	Test2();
//	return 0;
//}