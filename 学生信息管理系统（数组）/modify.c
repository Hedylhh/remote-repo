#define _CRT_SECURE_NO_WARNINGS 1
// modify.c
#include <stdio.h>
#include "modify.h"

void modify(stu* stu_node, int n, int m) {
    for (int i = 0; i < n; i++) {
        if (stu_node[i].id == m) {
            printf("�����µ�ѧ����Ϣ��\n");
            printf("����: ");
            scanf("%s", stu_node[i].name);
            printf("רҵ: ");
            scanf("%s", stu_node[i].major);

            stu_node[i].sum = 0;
            for (int j = 0; j < M; j++) {
                printf("��%d�ſγɼ�: ", j + 1);
                scanf("%d", &stu_node[i].score[j]);
                stu_node[i].sum += stu_node[i].score[j];
            }
            return;
        }
    }
    printf("δ�ҵ�ѧ��Ϊ%d��ѧ��\n", m);
}