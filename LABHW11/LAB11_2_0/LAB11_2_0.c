// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct student {
	char name[20];
	int midterm;
	int final;
	int average;
} Student;

// typedef 를 사용하여 Student 를 정의
void printStudent(Student* p)
{
	printf("%s\t", p->name);
	printf("%d\t%d\t%d\n", p->midterm, p->final, p->average);
}

int main(void)
{
	Student s[40], * sp = &s;
	int num, i;

	printf("Enter a number of student:");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("Enter student name: "); //a)
		scanf("%s", s[i].name); //b)

		printf("Enter midterm and final score: "); //c)
		scanf("%d %d", &s[i].midterm, &s[i].final); //d)
	}

	for (i = 0; i < num; i++)
		s[i].average = (s[i].midterm + s[i].final) / 2; // e)

	printf("\n 이름\t 중간\t 학기말\t 평균\n");
	for (i = 0; i < num; i++) {
		printStudent(sp);
		sp++;
	}
}
