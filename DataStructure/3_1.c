//#include "stdio.h"
//#include "stdlib.h"
//#include<stdlib.h>
//#include <assert.h>
//
//typedef struct node          //定义结点
//{
//	int data;             //结点的数据域为整型
//	struct node* next;      //结点的指针域
//}ListNode;
//typedef ListNode* LinkList;     // 自定义LinkList单链表类型
//
////动态申请结点
//LinkList BuyListNode(int x)
//{
//	LinkList newnode = (LinkList)malloc(sizeof(ListNode));
//	if (!newnode)
//	{
//		perror("malloc fail");
//		exit(-1);
//	}
//	newnode->data = x;
//	newnode->next = NULL;
//	return newnode;
//}
//
////单链表打印
//void ListPrint(LinkList phead)
//{
//	LinkList cur = phead;
//	while (cur != NULL)
//	{
//		printf("%d->", cur->data);
//		cur = cur->next;
//	}
//	printf("NULL\n");
//}
//
////单链表销毁
//void ListDestory(LinkList* pphead)
//{
//	assert(pphead);
//
//	LinkList cur = *pphead;
//	while (cur)
//	{
//		LinkList next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	*pphead = NULL;
//}
//
////单链表头插
//void ListPushFront(LinkList* pphead, int x)
//{
//	LinkList newnode = BuyListNode(x);
//	newnode->next = *pphead;
//	*pphead = newnode;
//}
//
////单链表尾插
//void ListPushBack(LinkList* pphead, int x)
//{
//	assert(pphead);
//	LinkList newnode = BuyListNode(x);
//	if (*pphead == NULL)
//	{
//		*pphead = newnode;
//	}
//	else
//	{
//		LinkList tail = *pphead;
//		while (tail->next != NULL)
//		{
//			tail = tail->next;
//		}
//		tail->next = newnode;
//	}
//}
//
////单链表头删
//void ListPopFront(LinkList* pphead)
//{
//	assert(pphead);
//	assert(*pphead != NULL);
//
//	LinkList del = *pphead;
//	*pphead = (*pphead)->next;
//	free(del);
//	del = NULL;
//}
//
////单链表尾删
//void ListPopBack(LinkList* pphead)
//{
//	assert(pphead);
//	assert(*pphead != NULL);
//	if ((*pphead)->next == NULL)
//	{
//		free(*pphead);
//		*pphead = NULL;
//	}
//	else
//	{
//		LinkList tail = *pphead;
//		while (tail->next->next != NULL)
//		{
//			tail = tail->next;
//		}
//		free(tail->next);
//		tail->next = NULL;
//	}
//}
//
////单链表查找
//LinkList ListFind(LinkList phead, int x)
//{
//	LinkList cur = phead;
//	while (cur != NULL)
//	{
//		if (cur->data == x)
//		{
//			return cur;
//		}
//		cur = cur->next;
//	}
//	return NULL;
//}
//
////单链表在pos位置插入
//void ListInsert(LinkList* pphead, LinkList pos, int x)
//{
//	assert(pphead);
//	assert(pos);
//
//	if (pos == *pphead)
//	{
//		ListPushFront(pphead, x);
//		return;
//	}
//	LinkList prev = *pphead;
//	while (prev->next != pos)
//	{
//		prev = prev->next;
//		assert(prev);
//	}
//	LinkList newnode = BuyListNode(x);
//	prev->next = newnode;
//	newnode->next = pos;
//}
//
////单链表在pos位置后面插入
//void ListInsertAfter(LinkList pos, int x)
//{
//	assert(pos);
//	LinkList newnode = BuyListNode(x);
//	newnode->next = pos->next;
//	pos->next = newnode;
//}
//
////单链表在pos位置删除
//void ListErase(LinkList* pphead, LinkList pos)
//{
//	assert(pphead);
//	assert(pos);
//	if (*pphead == pos)
//	{
//		ListPopFront(pphead);
//		return;
//	}
//	LinkList prev = *pphead;
//	while (prev->next != pos)
//	{
//		prev = prev->next;
//		assert(prev);
//	}
//	prev->next = pos->next;
//	free(pos);
//}
//
////单链表在pos位置后面删除
//void ListEraseAfter(LinkList pos)
//{
//	assert(pos);
//	assert(pos->next);
//	LinkList del = pos->next;
//	pos->next = pos->next->next;
//	free(del);
//	del = NULL;
//}
//
//void Test1()
//{
//	LinkList plist = NULL;
//	printf("初始链表：");
//	ListPrint(plist);
//	printf("头插1：");
//	ListPushFront(&plist, 1);
//	ListPrint(plist);
//	printf("头插2：");
//	ListPushFront(&plist, 2);
//	ListPrint(plist);
//	printf("尾插3：");
//	ListPushBack(&plist, 3);
//	ListPrint(plist);
//	printf("查找1：");
//	LinkList pos = ListFind(plist, 1);
//	if (pos)
//	{
//		printf("找到了\n");
//		printf("在该位置插入5：");
//		ListInsert(&plist, pos, 5);
//		ListPrint(plist);
//		printf("在该位置后面插入4：");
//		ListInsertAfter(pos, 4);
//		ListPrint(plist);
//		printf("删除该位置后面的值：");
//		ListEraseAfter(pos);
//		ListPrint(plist);
//		printf("删除该位置的值：");
//		ListErase(&plist, pos);
//		ListPrint(plist);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	printf("头删：");
//	ListPopFront(&plist);
//	ListPrint(plist);
//	printf("尾删：");
//	ListPopBack(&plist);
//	ListPrint(plist);
//	printf("头删：");
//	ListPopFront(&plist);
//	ListPrint(plist);
//	
//
//	ListDestory(&plist);
//	printf("销毁链表成功\n");
//}
//
////递归
////时间复杂度：O(N)
////空间复杂度：O(N)
//ListNode* removeElements1(ListNode* head, int x) {
//	if (head == NULL) {
//		return head;
//	}
//	head->next = removeElements1(head->next, x);
//	return head->data == x ? head->next : head;
//}
//
////建立新的头节点
////时间复杂度：O(N)
////空间复杂度：O(1)
//ListNode* removeElements2(ListNode* head, int x) 
//{
//	ListNode* prev = (ListNode*)malloc(sizeof(ListNode));
//	ListNode* newhead = prev;
//	prev->next = head;
//	while (head)
//	{
//		if (head->data != x)
//		{
//			prev->next = head;
//			prev = prev->next;
//		}
//		head = head->next;
//	}
//	prev->next = NULL;
//	return newhead->next;
//}
//
//void Test2()
//{
//	LinkList plist = NULL;
//	printf("初始链表：");
//	
//	ListPushFront(&plist, 1);
//	ListPushFront(&plist, 2);
//	ListPushFront(&plist, 1);
//	ListPushFront(&plist, 2);
//	ListPushBack(&plist, 3);
//
//	ListPrint(plist);
//
//	printf("删除掉所有元素2后：");
//
//	/*removeElements1(plist, 2);
//	if (plist && plist->data == 2)
//		plist = plist->next;*/
//	LinkList newlist = removeElements2(plist, 2);
//
//
//	ListPrint(newlist);
//	ListDestory(&plist);
//}
//
////先建数组快速排序，再建立链表
////时间复杂度：O(N * logN)
////时间复杂度：O(N)
//int cmp(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//
//LinkList CreatList1()
//{
//	int n;
//	printf("请输入链表结点数：\n");
//	scanf("%d", &n);
//	int* arr = (int*)malloc(sizeof(int) * n);
//	printf("依次输入结点值：\n");
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	qsort(arr, n, sizeof(int), cmp);
//	LinkList plist = NULL;
//	for (int i = n - 1; i >= 0; i--)
//	{
//		ListPushFront(&plist, arr[i]);
//	}
//	return plist;
//}
//
////建立并维护有序链表
////时间复杂度：O(N²)
////空间复杂度：O(1)
//LinkList CreatList2()
//{
//	int n, tmp;
//	printf("请输入链表结点数：\n");
//	scanf("%d", &n);
//	printf("依次输入结点值：\n");
//	LinkList plist = (LinkList)malloc(sizeof(ListNode));
//	plist->next = NULL;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &tmp);
//		LinkList newnode = BuyListNode(tmp);
//		LinkList cur = plist->next;
//		LinkList prev = plist;
//		while (cur)
//		{
//			if (cur->data >= tmp)
//			{
//				newnode->next = prev->next;
//				prev->next = newnode;
//				break;
//			}
//			prev = cur;
//			cur = cur->next;
//		}
//		if (!cur)
//			prev->next = newnode;
//	}
//	return plist->next;
//}
//
////先建立链表，再归并排序
////时间复杂度：O(N*log(N))
////空间复杂度：O(1)
//LinkList merge(LinkList head1, LinkList head2)
//{
//	LinkList newhead = (LinkList)malloc(sizeof(ListNode));
//	LinkList tmp = newhead;
//	LinkList tmp1 = head1;
//	LinkList tmp2 = head2;
//	while (tmp1 && tmp2)
//	{
//		if (tmp1->data <= tmp2->data)
//		{
//			tmp->next = tmp1;
//			tmp1 = tmp1->next;
//		}
//		else
//		{
//			tmp->next = tmp2;
//			tmp2 = tmp2->next;
//		}
//		tmp = tmp->next;
//	}
//	tmp->next = tmp1 ? tmp1 : tmp2;
//	return newhead->next;
//}
//
//LinkList sortlist(LinkList head)
//{
//	if (head == NULL)
//		return head;
//	int length = 0;
//	LinkList cur = head;
//	while (cur)
//	{
//		length++;
//		cur = cur->next;
//	}
//	LinkList newhead = (LinkList)malloc(sizeof(ListNode));
//	newhead->next = head;
//	for (int sublength = 1; sublength < length; sublength <<= 1)
//	{
//		LinkList prev = newhead;
//		cur = newhead->next;
//		while (cur)
//		{
//			LinkList head1 = cur;
//			for (int i = 1; i < sublength && cur->next; i++)
//			{
//				cur = cur->next;
//			}
//			LinkList head2 = cur->next;
//			cur->next = NULL;
//			cur = head2;
//			for (int i = 1; i < sublength && cur &&cur->next; i++)
//			{
//				cur = cur->next;
//			}
//			LinkList next = NULL;
//			if (cur)
//			{
//				next = cur->next;
//				cur->next = NULL;
//			}
//			LinkList merged = merge(head1, head2);
//			prev->next = merged;
//			while (prev->next)
//				prev = prev->next;
//			cur = next;
//		}
//	}
//	return newhead->next;
//}
//
//LinkList CreatList3()
//{
//	int n, tmp;
//	printf("请输入链表结点数：\n");
//	scanf("%d", &n);
//	printf("依次输入结点值：\n");
//	LinkList plist = NULL;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &tmp);
//		ListPushFront(&plist, tmp);
//	}
//	plist = sortlist(plist);
//	return plist;
//}
//
////时间复杂度：O(N)
////空间复杂度：O(1)
//LinkList DeleteDuplicates(LinkList head) 
//{
//	if (!head) 
//		return head;
//
//	LinkList cur = head;
//	while (cur->next) 
//	{
//		if (cur->data == cur->next->data) 
//			cur->next = cur->next->next;
//		else 
//			cur = cur->next;
//
//	}
//
//	return head;
//}
//
//void Test3()
//{
//	LinkList plist = CreatList3();
//	printf("非递减有序的单链表：\n");
//	ListPrint(plist);
//	DeleteDuplicates(plist);
//	printf("删除多余重复项后：\n");
//	ListPrint(plist);
//	ListDestory(&plist);
//}
//
//int main()
//{
//	//Test1();
//	//Test2();
//	Test3();
//	return 0;
//}