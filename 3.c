//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct Student{
//	char No[20];
//	char Name[15];
//	double Score1;
//	double Score2;
//	double Score3;
//	double Average;
//}Stu;
//
//int main()
//{
//	int n;
//	printf("����ѧ��������");
//	scanf("%d",&n);
//	Stu *stu = (Stu*)malloc(sizeof(Stu)*n);
//	for(int i = 0; i < n; i++)
//	{
//		printf("��������ѧ�š��������ɼ�һ���ɼ������ɼ���\n");
//		scanf("%s%s%lf%lf%lf",stu[i].No,stu[i].Name,&stu[i].Score1,&stu[i].Score2,&stu[i].Score3);
//		stu[i].Average = (stu[i].Score1 + stu[i].Score2 + stu[i].Score3)/3;
//	}
//	for(int i = 0; i < n; i++)
//	{
//		printf("ѧ�ţ�%s\n������%s\n�ɼ�һ��%.1lf\n�ɼ�����%.1lf\n�ɼ�����%.1lf\nƽ���֣�%.1lf\n",stu[i].No,stu[i].Name,stu[i].Score1,stu[i].Score2,stu[i].Score3,stu[i].Average);
//		printf("\n");
//	}
//	return 0;
//}
