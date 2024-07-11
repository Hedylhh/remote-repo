#define _CRT_SECURE_NO_WARNINGS 1
// search.c
#include <stdio.h>
#include "stu.h"
#include "search.h"

void search(stu* head, int m) {
    stu* p = head;
    int i;

    while (p != NULL && p->id != m) {
        p = p->next;
    }

    if (p == NULL) {
        printf("未找到学号为 %d 的学生\n", m);
        return;
    }

    printf("找到学号为 %d 的学生信息：\n", m);
    printf("学号: %d\n", p->id);
    printf("姓名: %s\n", p->name);
    printf("专业: %s\n", p->major);
    for (i = 0; i < M; i++) {
        printf("成绩 %d: %d\n", i + 1, p->score[i]);
    }
    printf("总分: %d\n", p->sum);
}