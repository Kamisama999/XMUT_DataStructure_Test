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
//	printf("输入学生人数：");
//	scanf("%d",&n);
//	Stu *stu = (Stu*)malloc(sizeof(Stu)*n);
//	for(int i = 0; i < n; i++)
//	{
//		printf("依次输入学号、姓名、成绩一、成绩二、成绩三\n");
//		scanf("%s%s%lf%lf%lf",stu[i].No,stu[i].Name,&stu[i].Score1,&stu[i].Score2,&stu[i].Score3);
//		stu[i].Average = (stu[i].Score1 + stu[i].Score2 + stu[i].Score3)/3;
//	}
//	for(int i = 0; i < n; i++)
//	{
//		printf("学号：%s\n姓名：%s\n成绩一：%.1lf\n成绩二：%.1lf\n成绩三：%.1lf\n平均分：%.1lf\n",stu[i].No,stu[i].Name,stu[i].Score1,stu[i].Score2,stu[i].Score3,stu[i].Average);
//		printf("\n");
//	}
//	return 0;
//}
