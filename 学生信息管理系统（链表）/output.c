#define _CRT_SECURE_NO_WARNINGS 1
// output.c
#include <stdio.h>
#include "stu.h"
#include "iop.h"

void output(stu* head) {
    stu* p = head;
    int i;

    if (p == NULL) {
        printf("没有学生信息\n");
        return;
    }

    printf("%-10s %-15s %-15s %-10s %-10s %-10s\n", "学号", "姓名", "专业", "成绩1", "成绩2", "总分");
    printf("--------------------------------------------------------------\n");

    while (p != NULL) {
        printf("%-10d %-15s %-15s ", p->id, p->name, p->major);
        for (i = 0; i < M; i++) {
            printf("%-10d ", p->score[i]);
        }
        printf("%-10d\n", p->sum);
        p = p->next;
    }
}