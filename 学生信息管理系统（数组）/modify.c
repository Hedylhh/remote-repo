#define _CRT_SECURE_NO_WARNINGS 1
// modify.c
#include <stdio.h>
#include "modify.h"

void modify(stu* stu_node, int n, int m) {
    for (int i = 0; i < n; i++) {
        if (stu_node[i].id == m) {
            printf("输入新的学生信息：\n");
            printf("姓名: ");
            scanf("%s", stu_node[i].name);
            printf("专业: ");
            scanf("%s", stu_node[i].major);

            stu_node[i].sum = 0;
            for (int j = 0; j < M; j++) {
                printf("第%d门课成绩: ", j + 1);
                scanf("%d", &stu_node[i].score[j]);
                stu_node[i].sum += stu_node[i].score[j];
            }
            return;
        }
    }
    printf("未找到学号为%d的学生\n", m);
}