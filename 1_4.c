//#include<stdio.h>
//#include<stdlib.h>
//
////������
//struct SListNode {
//	int val;
//	struct SListNode* next;
//};
//
//struct SListNode* SListInit()
//{
//	struct SListNode* head = NULL;
//	//ͷ�巨
//	for (int i = 10; i > 0; i--)
//	{
//		struct SListNode* newnode = (struct SListNode*)malloc(sizeof(struct SListNode));
//		newnode->val = i;
//		newnode->next = head;
//		head = newnode;
//	}
//	return head;
//}
//
////�ݹ�
//void SListReversePrint(struct SListNode* p)
//{
//	if (p == NULL)
//		return;
//	SListReversePrint(p->next);
//	printf("%d ", p->val);
//}
//
////�ǵݹ�
//struct SListNode* reverseList(struct SListNode* head) {
//	struct SListNode* prev = NULL;
//	struct SListNode* cur = head;
//	while (head)
//	{
//		head = head->next;
//		cur->next = prev;
//		prev = cur;
//		cur = head;
//	}
//	return prev;
//}
//
//void SListPrint(struct SListNode* phead)
//{
//	struct SListNode* cur = phead;
//	while (cur != NULL)
//	{
//		printf("%d->", cur->val);
//		cur = cur->next;
//	}
//	printf("NULL\n");
//}
//
////˫����
//struct ListNode {
//	int val;
//	struct ListNode* prev;
//	struct ListNode* next;
//};
//
//struct ListNode* ListInit()
//{
//	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
//	head->next = head;
//	head->prev = head;
//	//ͷ�巨
//	for (int i = 10; i > 0; i--)
//	{
//		struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//		newnode->val = i;
//		head->next->prev = newnode;
//		newnode->next = head->next;
//		head->next = newnode;
//		newnode->prev = head;
//	}
//	return head;
//}
//
//void ListReversePrint(struct ListNode* guard)
//{
//	struct ListNode* tail = guard;
//	while (tail->next != guard)
//	{
//		tail = tail->next;
//	}
//	while (tail != guard)
//	{
//		printf("%d ", tail->val);
//		tail = tail->prev;
//	}
//	printf("\n");
//}
//
//void ListPrint(struct ListNode* head)
//{
//	struct ListNode* cur = head->next;
//	printf("head<->");
//	while (cur != head)
//	{
//		printf("%d<->", cur->val);
//		cur = cur->next;
//	}
//	printf("head\n");
//}
//
//
//int main()
//{
//	struct SListNode* head = SListInit();
//	struct ListNode* guard = ListInit();
//
//	
//	//˫����
//	printf("˫����:\n");
//	ListPrint(guard);
//	printf("�������:\n");
//	ListReversePrint(guard);
//	printf("\n");
//	
//	//������
//	printf("������:\n");
//	SListPrint(head);
//	printf("(�ݹ�)�������:\n");
//	SListReversePrint(head);
//	head = reverseList(head);
//	printf("\n(�ǵݹ�)�������:\n");
//	SListPrint(head);
//	
//	return 0;
//}
