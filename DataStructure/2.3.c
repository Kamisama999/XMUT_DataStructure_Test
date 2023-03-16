//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//typedef struct {
//	int coe;	    //ϵ��
//	int exp;	    //ָ�� 
//}Elem;
//
//typedef struct {
//	Elem* arr;
//	int size;
//	int capacity;
//}Polynomial;
//
////��ʼ������ʽ
//void InitPolynomial(Polynomial* l) {
//	l->arr = NULL;
//	l->size = l->capacity = 0;
//}
////����
//void DistroyPolynomial(Polynomial* l)
//{
//    assert(l);
//    free(l->arr);
//    l->arr = NULL;
//	l->size = l->capacity = 0;
//}
//
////����Ƿ���Ҫ����
//void CheckCapacity(Polynomial* l)
//{
//	assert(l);
//	if (l->size == l->capacity)
//	{
//		int NewCapacity = l->capacity == 0 ? 10 : l->capacity * 2;
//	    Elem* tmp = (Elem*)realloc(l->arr,NewCapacity * sizeof(Elem));
//	    if (!tmp)
//	    {
//	        perror("realloc fail");
//	        return;
//	    }
//	    l->arr = tmp;
//	    l->capacity = NewCapacity;
//	}
//}
//
////����
//void InsertPolynomial(Polynomial* l, int coe, int exp)
//{
//	assert(l);
//	CheckCapacity(l);
//	if (coe == 0)
//		return;
//	int i = l->size - 1;
//	while (i >= 0 && l->arr[i].exp < exp)
//	{
//		l->arr[i + 1] = l->arr[i];
//		i--;
//	}
//	i++;
//	l->arr[i].coe = coe;
//	l->arr[i].exp = exp;
//	l->size++;
//}
//
////��������ʽ
//void CreatPolynomial(Polynomial* l) 
//{
//	assert(l);
//	int n, coe, exp;	
//	//memset(L->coefarray, 0, L->size);
//	printf("�������ʽ����:");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("��%d��ϵ����ָ��(�м��ÿո����)��",i + 1);
//		scanf("%d %d", &coe, &exp);
//		InsertPolynomial(l, coe, exp);
//	}
//}
//
//void AddPolynomial(Polynomial* a, Polynomial* b, Polynomial* res)
//{
//	int left = 0, right = 0;
//	while (left < a->size && right < b->size)
//	{
//		if (a->arr[left].exp > b->arr[right].exp)
//		{
//			InsertPolynomial(res, a->arr[left].coe, a->arr[left].exp);
//			left++;
//		}
//		else if (a->arr[left].exp < b->arr[right].exp)
//		{
//			InsertPolynomial(res, b->arr[right].coe, b->arr[right].exp);
//			right++;
//		}
//		else
//		{
//			InsertPolynomial(res, a->arr[left].coe + b->arr[right].coe, b->arr[right].exp);
//			left++;
//			right++;
//		}
//	}
//	while (left < a->size)
//	{
//		InsertPolynomial(res, a->arr[left].coe, a->arr[left].exp);
//		left++;
//	}
//	while (right < b->size)
//	{
//		InsertPolynomial(res, b->arr[right].coe, b->arr[right].exp);
//		right++;
//	}
//}
//
////��ӡ
//void PrintPolynomial(Polynomial* l)
//{
//	assert(l);
//	for (int i = 0; i < l->size; i++)
//	{
//		if (i != 0)
//		{
//			if (l->arr[i].coe > 0)
//				printf(" + ");
//			else if (l->arr[i].coe < 0)
//				printf(" - ");
//		}
//		if (l->arr[i].exp == 0)
//			printf("%d", abs(l->arr[i].coe));
//		else
//		printf("%dX^%d", abs(l->arr[i].coe), l->arr[i].exp);
//	}
//	printf("\n");
//}
//
//int main() {
//	Polynomial a,b,c;
//	InitPolynomial(&a);
//	CreatPolynomial(&a);
//	PrintPolynomial(&a);
//	InitPolynomial(&b);
//	CreatPolynomial(&b);
//	PrintPolynomial(&b);
//
//	InitPolynomial(&c);
//	AddPolynomial(&a, &b,&c);
//	printf("��������ʽ�ĺ�Ϊ��\n");
//	PrintPolynomial(&c);
//
//	DistroyPolynomial(&a);
//	DistroyPolynomial(&b);
//	DistroyPolynomial(&c);
//	return 0;
//}
