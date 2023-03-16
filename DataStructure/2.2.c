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
//        return 1; //无法分配空间
//    }
//    else
//    {
//        l->length = 0;
//        l->ListSize = LIST_INIT_SIZE;
//        return 0;
//    }
//}
//
////销毁
//void DistroyList_sq(sqlist* l)
//{
//    assert(l);
//    free(l->elem);
//    l->elem = NULL;
//    l->length = l->ListSize = 0;
//}
//
////检查是否需要扩容
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
////打印
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
////头插
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
////尾插
//void PushBack_sq(sqlist* l, ElemType x)
//{
//    assert(l);
//    CheckCapacity_sq(l);
//    l->elem[l->length++] = x;
//}
//
////头删
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
////尾删
//void PopBack_sq(sqlist* l)
//{
//    assert(l);
//    assert(l->length > 0);
//    l->length--;
//
//}
//
////插入
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
////删除
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
////按值查找
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
////按序查找
//int FindPos_sq(sqlist* l, size_t pos)
//{
//    assert(l);
//    assert(pos < l->length);
//    return l->elem[pos];
//}
//
////时间复杂度：O(N)
////空间复杂度：O(1)
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
////时间复杂度：O(N)
////空间复杂度：O(1)
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
////双指针
////时间复杂度：O(N)
////空间复杂度：O(1)
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
//    printf("初始顺序表：");
//    PrintList_sq(&L);
//    printf("头插5后：");
//    PushFront_sq(&L, 5);
//    PrintList_sq(&L);
//    printf("尾插0后：");
//    PushBack_sq(&L, 0);
//    PrintList_sq(&L);
//    printf("头删后：");
//    PopFront_sq(&L);
//    PrintList_sq(&L);
//    printf("尾删后：");
//    PopBack_sq(&L);
//    PrintList_sq(&L);
//    printf("在下标为3的位置插入3后：");
//    InsertList_sq(&L, 3, 3);
//    PrintList_sq(&L);
//    printf("删除下标为1的数后：");
//    EraseList_sq(&L, 1);
//    PrintList_sq(&L);
//    printf("按值查找1后：");
//    printf("第%d个数\n", FindValue_sq(&L, 1) + 1);
//    printf("按序查找第3个数后：");
//    printf("值为%d\n", FindPos_sq(&L, 3 + 1));
//    DistroyList_sq(&L);
//    printf("顺序表已销毁");
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
//    printf("初始顺序表：");
//    PrintList_sq(&L);
//    printf("删除所有值为1的数后：");
//    DeleteValue1_sq(&L, 1);
//    PrintList_sq(&L);
//
//    DistroyList_sq(&L);
//    printf("顺序表已销毁");
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
//    printf("初始顺序表：");
//    PrintList_sq(&L);
//    printf("删除所有重复的数后：");
//    DeleteDuplicate_sq(&L);
//    PrintList_sq(&L);
//
//    DistroyList_sq(&L);
//    printf("顺序表已销毁");
//}
//void main()
//{
//    //Test1();
//    //Test2();
//    Test3();
//    
//    return 0;
//}