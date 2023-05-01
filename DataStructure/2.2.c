//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//# define LIST_INIT_SIZE   10
//# define LISTINCREMENT   5
//
//typedef int ElemType;
//typedef  struct {
//    ElemType* elem;
//    int length;
//    int ListSize;
//} sqlist;
//
//int InitList_sq(sqlist* l)  /*initial the list l*/
//{
//    l->elem = (ElemType*)malloc(LIST_INIT_SIZE * sizeof(ElemType));
//    if (!l->elem)
//    {
//        return 1; //�޷�����ռ�
//    }
//    else
//    {
//        l->length = 0;
//        l->ListSize = LIST_INIT_SIZE;
//        return 0;
//    }
//}
//
////����
//void DistroyList_sq(sqlist* l)
//{
//    assert(l);
//    free(l->elem);
//    l->elem = NULL;
//    l->length = l->ListSize = 0;
//}
//
////����Ƿ���Ҫ����
//void CheckCapacity_sq(sqlist* l)
//{
//    assert(l);
//    if (l->length == l->ListSize)
//    {
//        int NewCapacity = l->ListSize + LISTINCREMENT;
//        ElemType* tmp = (ElemType*)realloc(l->elem,NewCapacity * sizeof(ElemType));
//        if (!tmp)
//        {
//            perror("realloc fail");
//            return;
//        }
//        l->elem = tmp;
//        l->ListSize = NewCapacity;
//    }
//}
//
////��ӡ
//void PrintList_sq(sqlist* l)
//{
//    assert(l);
//    for (int i = 0; i < l->length; i++)
//    {
//        printf("%d ", l->elem[i]);
//    }
//    printf("\n");
//}
//
////ͷ��
//void PushFront_sq(sqlist* l, ElemType x)
//{
//    assert(l);
//    CheckCapacity_sq(l);
//    for (int i = l->length; i > 0; i--)
//    {
//        l->elem[i] = l->elem[i - 1];
//    }
//    l->elem[0] = x;
//    l->length++;
//}
//
////β��
//void PushBack_sq(sqlist* l, ElemType x)
//{
//    assert(l);
//    CheckCapacity_sq(l);
//    l->elem[l->length++] = x;
//}
//
////ͷɾ
//void PopFront_sq(sqlist* l)
//{
//    assert(l);
//    assert(l->length > 0);
//    for (int i = 0; i < l->length - 1; i++)
//    {
//        l->elem[i] = l->elem[i + 1];
//    }
//    l->length--;
//
//}
//
////βɾ
//void PopBack_sq(sqlist* l)
//{
//    assert(l);
//    assert(l->length > 0);
//    l->length--;
//
//}
//
////����
//void InsertList_sq(sqlist* l, size_t pos, ElemType x)
//{
//    assert(l);
//    assert(pos < l->length);
//    CheckCapacity_sq(l);
//    for (int i = l->length; i > pos; i--)
//    {
//        l->elem[i] = l->elem[i - 1];
//    }
//    l->elem[pos] = x;
//    l->length++;
//}
//
////ɾ��
//void EraseList_sq(sqlist* l, size_t pos)
//{
//    assert(l);
//    assert(pos < l->length);
//    for (int i = pos; i < l->length - 1; i++)
//    {
//        l->elem[i] = l->elem[i + 1];
//    }
//    l->length--;
//}
//
////��ֵ����
//int FindValue_sq(sqlist* l, ElemType x)
//{
//    assert(l);
//    for (int i = 0; i < l->length; i++)
//    {
//        if (l->elem[i] == x)
//            return i;
//    }
//    return -1;
//}
//
////�������
//int FindPos_sq(sqlist* l, size_t pos)
//{
//    assert(l);
//    assert(pos < l->length);
//    return l->elem[pos];
//}
//
////ʱ�临�Ӷȣ�O(N)
////�ռ临�Ӷȣ�O(1)
//void DeleteValue1_sq(sqlist* l, ElemType x)
//{
//    assert(l);
//    int index = 0;
//    for (int i = 0; i < l->length; i++)
//    {
//        if (l->elem[i] != x)
//            l->elem[index++] = l->elem[i];
//    }
//    l->length = index;
//}
//
////ʱ�临�Ӷȣ�O(N)
////�ռ临�Ӷȣ�O(1)
//void DeleteValue2_sq(sqlist* l, ElemType x)
//{
//    assert(l);
//    int count = 0;
//    for (int i = 0; i < l->length; i++)
//    {
//        if (l->elem[i] == x)
//        {
//            count++;
//        }
//        else
//        {
//            l->elem[i - count] = l->elem[i];
//        }
//
//    }
//    l->length -= count;
//}
//
////˫ָ��
////ʱ�临�Ӷȣ�O(N)
////�ռ临�Ӷȣ�O(1)
//void DeleteDuplicate_sq(sqlist* l)
//{
//    assert(l);
//    if (l->length < 2)
//        return;
//    int slow = 1;
//    for (int i = 1; i < l->length; i++)
//    {
//        if (l->elem[i] != l->elem[i - 1])
//            l->elem[slow++] = l->elem[i];
//    }
//    l->length = slow;
//}
//
//void Test1()
//{
//    sqlist L;
//    InitList_sq(&L);
//
//    PushFront_sq(&L, 1);
//    PushFront_sq(&L, 2);
//    PushFront_sq(&L, 3);
//    PushFront_sq(&L, 4);
//    PushFront_sq(&L, 5);
//    printf("��ʼ˳���");
//    PrintList_sq(&L);
//    printf("ͷ��5��");
//    PushFront_sq(&L, 5);
//    PrintList_sq(&L);
//    printf("β��0��");
//    PushBack_sq(&L, 0);
//    PrintList_sq(&L);
//    printf("ͷɾ��");
//    PopFront_sq(&L);
//    PrintList_sq(&L);
//    printf("βɾ��");
//    PopBack_sq(&L);
//    PrintList_sq(&L);
//    printf("���±�Ϊ3��λ�ò���3��");
//    InsertList_sq(&L, 3, 3);
//    PrintList_sq(&L);
//    printf("ɾ���±�Ϊ1������");
//    EraseList_sq(&L, 1);
//    PrintList_sq(&L);
//    printf("��ֵ����1��");
//    printf("��%d����\n", FindValue_sq(&L, 1) + 1);
//    printf("������ҵ�3������");
//    printf("ֵΪ%d\n", FindPos_sq(&L, 3 + 1));
//    DistroyList_sq(&L);
//    printf("˳���������");
//}
//
//void Test2()
//{
//    sqlist L;
//    InitList_sq(&L);
//
//    PushFront_sq(&L, 0);
//    PushFront_sq(&L, 1);
//    PushFront_sq(&L, 1);
//    PushFront_sq(&L, 4);
//    PushFront_sq(&L, 5);
//
//    printf("��ʼ˳���");
//    PrintList_sq(&L);
//    printf("ɾ������ֵΪ1������");
//    DeleteValue1_sq(&L, 1);
//    PrintList_sq(&L);
//
//    DistroyList_sq(&L);
//    printf("˳���������");
//}
//
//void Test3()
//{
//    sqlist L;
//    InitList_sq(&L);
//
//    PushFront_sq(&L, 1);
//    PushFront_sq(&L, 1);
//    PushFront_sq(&L, 3);
//    PushFront_sq(&L, 3);
//    PushFront_sq(&L, 5);
//    
//    printf("��ʼ˳���");
//    PrintList_sq(&L);
//    printf("ɾ�������ظ�������");
//    DeleteDuplicate_sq(&L);
//    PrintList_sq(&L);
//
//    DistroyList_sq(&L);
//    printf("˳���������");
//}
//void main()
//{
//    //Test1();
//    //Test2();
//    Test3();
//    
//    return 0;
//}