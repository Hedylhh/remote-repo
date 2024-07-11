#define _CRT_SECURE_NO_WARNINGS 1
// stu.h
#ifndef STU_H
#define STU_H

#define N 100
#define M 2

typedef struct student {
    int id;         // 学号 
    char name[15];  // 姓名
    char major[15]; // 专业 
    int score[M];   // 成绩
    int sum;        // 总分
    float avg;      // 平均分
} stu;

extern stu stu_arr[N];

#endif