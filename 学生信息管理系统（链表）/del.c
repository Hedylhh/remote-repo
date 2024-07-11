#define _CRT_SECURE_NO_WARNINGS 1
// del.c
#include <stdio.h>
#include <stdlib.h>
#include "stu.h"
#include "del.h"

stu* del(stu* head, int m) {
    stu* p = head, * q;

    if (head == NULL) {
        printf("û��ѧ����Ϣ\n");
        return head;
    }

    if (head->id == m) {
        head = head->next;
        free(p);
        printf("��ɾ��ѧ��Ϊ %d ��ѧ����Ϣ\n", m);
        return head;
    }

    while (p->next != NULL && p->next->id != m) {
        p = p->next;
    }

    if (p->next == NULL) {
        printf("δ�ҵ�ѧ��Ϊ %d ��ѧ��\n", m);
        return head;
    }

    q = p->next;
    p->next = q->next;
    free(q);
    printf("��ɾ��ѧ��Ϊ %d ��ѧ����Ϣ\n", m);

    return head;
}