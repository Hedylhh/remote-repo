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
        printf("δ�ҵ�ѧ��Ϊ %d ��ѧ��\n", m);
        return;
    }

    printf("�ҵ�ѧ��Ϊ %d ��ѧ����Ϣ��\n", m);
    printf("ѧ��: %d\n", p->id);
    printf("����: %s\n", p->name);
    printf("רҵ: %s\n", p->major);
    for (i = 0; i < M; i++) {
        printf("�ɼ� %d: %d\n", i + 1, p->score[i]);
    }
    printf("�ܷ�: %d\n", p->sum);
}