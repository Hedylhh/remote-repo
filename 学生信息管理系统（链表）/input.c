#define _CRT_SECURE_NO_WARNINGS 1
// input.c
#include <stdio.h>
#include <stdlib.h>
#include "stu.h"
#include "iop.h"

stu* input(stu* head, int n) {
    stu* p, * q, * new_node;
    int i, j;

    for (i = 0; i < n; i++) {
        new_node = (stu*)malloc(sizeof(stu));
        if (new_node == NULL) {
            printf("内存分配失败\n");
            exit(1);
        }

        printf("输入第 %d 个学生的信息:\n", i + 1);
        printf("学号: ");
        scanf("%d", &new_node->id);
        printf("姓名: ");
        scanf("%s", new_node->name);
        printf("专业: ");
        scanf("%s", new_node->major);

        new_node->sum = 0;
        for (j = 0; j < M; j++) {
            printf("成绩 %d: ", j + 1);
            scanf("%d", &new_node->score[j]);
            new_node->sum += new_node->score[j];
        }

        new_node->next = NULL;

        if (head == NULL) {
            head = new_node;
        }
        else {
            q = head;
            while (q->next != NULL) {
                q = q->next;
            }
            q->next = new_node;
        }
    }

    return head;
}