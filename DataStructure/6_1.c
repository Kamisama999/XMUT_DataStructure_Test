//#include <stdio.h>
//#include <stdlib.h>
//#define max 50
//typedef struct node
//{
//	int data;
//	struct node* lchild, * rchild;
//}tree;
//tree* root;
//
//
//void insert_data(int x)        /*���ɶ���������*/
//{
//	tree* p, * q, * s;
//	s = (tree*)malloc(sizeof(tree));
//	s->data = x;
//	s->lchild = NULL;
//	s->rchild = NULL;
//	if (!root)
//	{
//		root = s;
//	}
//	p = root;
//	while (p)                 /*��ν���������������ʵ�λ��*/
//	{
//		q = p;
//		if (p->data == x)
//		{
//			printf("data already exist! \n");
//			return;
//		}
//		else if (x < p->data)
//			p = p->lchild;
//		else
//			p = p->rchild;
//	}
//	if (x < q->data)
//		q->lchild = s;
//	else
//		q->rchild = s;
//}
//
//void main()
//{
//	������
//}