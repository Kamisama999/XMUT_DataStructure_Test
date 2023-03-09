#include<stdio.h>

# define LIST_INIT_SIZE   10
# define LISTINCREMENT   5
typedef  struct {
    ElemType* elem;
    int length;
    int ListSize;
} sqlist;

int InitList_sq(sqlist* l)  /*initial the list l*/
{
    l->elem = (ElemType*)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if (!l->elem)
    {
        return 1; //无法分配空间
    }
    else
    {
        l->length = 0;
        l->ListSize = LIST_INIT_SIZE;
        return 0;
    }
}
void main()
{
    sqlist L;
    ……
        InitList_sq(&L);
    ……
}