#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//ѧ����Ϣ
typedef struct _Student
{
	int stuNum;
	char name[20];
	int score;
}Student;

//�����Ϣ
typedef struct _stu
{
	Student student;
	struct _stu* next;
}stu;

void welcome();

void inputStudent(stu* head);

void printStudent(stu* head);

void countStudent(stu* head);

void findStudent(stu* head);

void saveStudent(stu* head);

void loadStudent(stu* head);

void modifyStudent(stu* head);

void deleteStudent(stu* head);

void sortStudent(stu* head);