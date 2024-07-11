#define _CRT_SECURE_NO_WARNINGS 1
// output.c
#include <stdio.h>
#include "stu.h"
#include "iop.h"

void output(stu* head) {
    stu* p = head;
    int i;

    if (p == NULL) {
        printf("û��ѧ����Ϣ\n");
        return;
    }

    printf("%-10s %-15s %-15s %-10s %-10s %-10s\n", "ѧ��", "����", "רҵ", "�ɼ�1", "�ɼ�2", "�ܷ�");
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