#define _CRT_SECURE_NO_WARNINGS 1
// stu.h
#ifndef STU_H
#define STU_H

#define N 100
#define M 2

typedef struct student {
    int id;             // ѧ��
    char name[15];      // ����
    char major[15];     // רҵ
    int score[M];       // �ɼ�
    int sum;            // �ܷ�
    struct student* next;
} stu;

#endif