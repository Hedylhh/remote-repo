#define _CRT_SECURE_NO_WARNINGS 1
// modify.c
#include <stdio.h>
#include "stu.h"
#include "modify.h"

void modify(stu* head, int m) {
    stu* p = head;
    int i, choice;

    while (p != NULL && p->id != m) {
        p = p->next;
    }

    if (p == NULL) {
        printf("未找到学号为 %d 的学生\n", m);
        return;
    }

    printf("找到学号为 %d 的学生，请选择要修改的信息：\n", m);
    printf("1. 姓名\n");
    printf("2. 专业\n");
    printf("3. 成绩\n");
    printf("请选择: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        printf("输入新的姓名: ");
        scanf("%s", p->name);
        break;
    case 2:
        printf("输入新的专业: ");
        scanf("%s", p->major);
        break;
    case 3:
        p->sum = 0;
        for (i = 0; i < M; i++) {
            printf("输入新的成绩 %d: ", i + 1);
            scanf("%d", &p->score[i]);
            p->sum += p->score[i];
        }
        break;
    default:
        printf("无效选择\n");
        return;
    }

    printf("修改成功\n");
}