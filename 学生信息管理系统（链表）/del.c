#define _CRT_SECURE_NO_WARNINGS 1
// del.c
#include <stdio.h>
#include <stdlib.h>
#include "stu.h"
#include "del.h"

stu* del(stu* head, int m) {
    stu* p = head, * q;

    if (head == NULL) {
        printf("没有学生信息\n");
        return head;
    }

    if (head->id == m) {
        head = head->next;
        free(p);
        printf("已删除学号为 %d 的学生信息\n", m);
        return head;
    }

    while (p->next != NULL && p->next->id != m) {
        p = p->next;
    }

    if (p->next == NULL) {
        printf("未找到学号为 %d 的学生\n", m);
        return head;
    }

    q = p->next;
    p->next = q->next;
    free(q);
    printf("已删除学号为 %d 的学生信息\n", m);

    return head;
}