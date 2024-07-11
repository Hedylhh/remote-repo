#define _CRT_SECURE_NO_WARNINGS 1
// output.c
#include <stdio.h>
#include "iop.h"

void output(stu* stu_node, int n) {
    printf("%-10s%-15s%-15s%-10s%-10s%-10s%-10s\n", "学号", "姓名", "专业", "课程1", "课程2", "总分", "平均分");
    printf("-----------------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-10d%-15s%-15s%-10d%-10d%-10d%-10.2f\n",
            stu_node[i].id,
            stu_node[i].name,
            stu_node[i].major,
            stu_node[i].score[0],
            stu_node[i].score[1],
            stu_node[i].sum,
            stu_node[i].avg);
    }
    
}