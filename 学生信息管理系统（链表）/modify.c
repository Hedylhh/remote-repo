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
        printf("δ�ҵ�ѧ��Ϊ %d ��ѧ��\n", m);
        return;
    }

    printf("�ҵ�ѧ��Ϊ %d ��ѧ������ѡ��Ҫ�޸ĵ���Ϣ��\n", m);
    printf("1. ����\n");
    printf("2. רҵ\n");
    printf("3. �ɼ�\n");
    printf("��ѡ��: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        printf("�����µ�����: ");
        scanf("%s", p->name);
        break;
    case 2:
        printf("�����µ�רҵ: ");
        scanf("%s", p->major);
        break;
    case 3:
        p->sum = 0;
        for (i = 0; i < M; i++) {
            printf("�����µĳɼ� %d: ", i + 1);
            scanf("%d", &p->score[i]);
            p->sum += p->score[i];
        }
        break;
    default:
        printf("��Чѡ��\n");
        return;
    }

    printf("�޸ĳɹ�\n");
}