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
            printf("�ڴ����ʧ��\n");
            exit(1);
        }

        printf("����� %d ��ѧ������Ϣ:\n", i + 1);
        printf("ѧ��: ");
        scanf("%d", &new_node->id);
        printf("����: ");
        scanf("%s", new_node->name);
        printf("רҵ: ");
        scanf("%s", new_node->major);

        new_node->sum = 0;
        for (j = 0; j < M; j++) {
            printf("�ɼ� %d: ", j + 1);
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