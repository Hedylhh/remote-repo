#define _CRT_SECURE_NO_WARNINGS 1
#include "stu.h"
#include <stdio.h>

void input(stu* stu_node, int* n) {
    int new_students;
    printf("输入要添加的学生数量: ");
    scanf("%d", &new_students);

    int start = *n;  // 从现有学生数量开始添加
    *n += new_students;  // 更新总学生数量

    for (int i = start; i < *n; i++) {
        printf("输入第%d个学生的信息：\n", i + 1);
        printf("学号: ");
        scanf("%d", &stu_node[i].id);
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
        stu_node[i].avg = (float)stu_node[i].sum / M;
    }
}