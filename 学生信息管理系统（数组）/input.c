#define _CRT_SECURE_NO_WARNINGS 1
#include "stu.h"
#include <stdio.h>

void input(stu* stu_node, int* n) {
    int new_students;
    printf("����Ҫ��ӵ�ѧ������: ");
    scanf("%d", &new_students);

    int start = *n;  // ������ѧ��������ʼ���
    *n += new_students;  // ������ѧ������

    for (int i = start; i < *n; i++) {
        printf("�����%d��ѧ������Ϣ��\n", i + 1);
        printf("ѧ��: ");
        scanf("%d", &stu_node[i].id);
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
        stu_node[i].avg = (float)stu_node[i].sum / M;
    }
}