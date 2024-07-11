#define _CRT_SECURE_NO_WARNINGS 1
// search.c
#include <stdio.h>
#include "search.h"

void search(stu* stu_node, int n, int m) {
    for (int i = 0; i < n; i++) {
        if (stu_node[i].id == m) {
            printf("%-10s%-15s%-15s%-10s%-10s%-10s%-10s\n", "学号", "姓名", "专业", "课程1", "课程2", "总分","平均分");
            printf("-----------------------------------------------------------------------------\n");
            printf("%-10d%-15s%-15s%-10d%-10d%-10d%-10f\n",
                stu_node[i].id,
                stu_node[i].name,
                stu_node[i].major,
                stu_node[i].score[0],
                stu_node[i].score[1],
                stu_node[i].sum,
                stu_node[i].avg);
            return;
        }
    }
    printf("未找到学号为%d的学生\n", m);
}