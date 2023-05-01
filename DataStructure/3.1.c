#include "stdio.h"
#include "stdlib.h"
#include <assert.h>

typedef struct node          //定义结点
{
	int data;             //结点的数据域为整型
	struct node* next;      //结点的指针域
}ListNode;
typedef ListNode* LinkList;     // 自定义LinkList单链表类型

LinkList BuyListNode(int x)
{
	LinkList newnode = (LinkList)malloc(sizeof(ListNode));
	if (!newnode)
	{
		perror("malloc fail");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void ListPrint(LinkList phead)
{
	LinkList cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
void ListDestory(LinkList* pphead)
{
	assert(pphead);

	LinkList cur = *pphead;
	while (cur)
	{
		LinkList next = cur->next;
		free(cur);
		cur = next;
	}
	*pphead = NULL;
}

void ListPushFront(LinkList* pphead, int x)
{
	LinkList newnode = BuyListNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

void ListPushBack(LinkList* pphead, int x)
{
	assert(pphead);
	LinkList newnode = BuyListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		LinkList tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

void ListPopFront(LinkList* pphead)
{
	assert(pphead);
	assert(*pphead != NULL);

	LinkList del = *pphead;
	*pphead = (*pphead)->next;
	free(del);
	del = NULL;
}

void ListPopBack(LinkList* pphead)
{
	assert(pphead);
	assert(*pphead != NULL);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		LinkList tail = *pphead;
		while (tail->next->next != NULL)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}

LinkList ListFind(LinkList phead, int x)
{
	LinkList cur = phead;
	while (cur != NULL)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void ListInsert(LinkList* pphead, LinkList pos, int x)
{
	assert(pphead);
	assert(pos);

	if (pos == *pphead)
	{
		ListPushFront(pphead, x);
		return;
	}
	LinkList prev = *pphead;
	while (prev->next != pos)
	{
		prev = prev->next;
		assert(prev);
	}
	LinkList newnode = BuyListNode(x);
	prev->next = newnode;
	newnode->next = pos;
}

void ListInsertAfter(LinkList pos, int x)
{
	assert(pos);
	LinkList newnode = BuyListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

void ListErase(LinkList* pphead, LinkList pos)
{
	assert(pphead);
	assert(pos);
	if (*pphead == pos)
	{
		ListPopFront(pphead);
		return;
	}
	LinkList prev = *pphead;
	while (prev->next != pos)
	{
		prev = prev->next;
		assert(prev);
	}
	prev->next = pos->next;
	free(pos);
}

void ListEraseAfter(LinkList pos)
{
	assert(pos);
	assert(pos->next);
	LinkList del = pos->next;
	pos->next = pos->next->next;
	free(del);
	del = NULL;
}

void Test()
{
	LinkList plist = NULL;
	printf("初始链表：");
	ListPrint(plist);
	printf("头插1：");
	ListPushFront(&plist, 1);
	ListPrint(plist);
	printf("头插2：");
	ListPushFront(&plist, 2);
	ListPrint(plist);
	printf("尾插3：");
	ListPushBack(&plist, 3);
	ListPrint(plist);
	printf("查找1：");
	LinkList pos = ListFind(plist, 1);
	if (pos)
	{
		printf("找到了\n");
		printf("在该位置插入5：");
		ListInsert(&plist, pos, 5);
		ListPrint(plist);
		printf("在该位置后面插入4：");
		ListInsertAfter(pos, 4);
		ListPrint(plist);
		printf("删除该位置后面的值：");
		ListEraseAfter(pos);
		ListPrint(plist);
		printf("删除该位置的值：");
		ListErase(&plist, pos);
		ListPrint(plist);
	}
	else
	{
		printf("没找到\n");
	}
	printf("头删：");
	ListPopFront(&plist);
	ListPrint(plist);
	printf("尾删：");
	ListPopBack(&plist);
	ListPrint(plist);
	printf("头删：");
	ListPopFront(&plist);
	ListPrint(plist);
	

	ListDestory(&plist);
	printf("销毁链表成功\n");
}

int main()
{
	Test();
	return 0;
}