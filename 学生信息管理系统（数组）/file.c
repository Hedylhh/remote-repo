#define _CRT_SECURE_NO_WARNINGS 1
// file.c
#include <stdio.h>
#include "file.h"

void write_to_file(stu* stu_node, int n) {
    FILE* fp = fopen("students.dat", "wb");
    if (fp == NULL) {
        printf("无法打开文件\n");
        return;
    }
    fwrite(&n, sizeof(int), 1, fp);
    fwrite(stu_node, sizeof(stu), n, fp);
    fclose(fp);
    printf("数据已成功写入文件\n");
}

//int read_from_file(stu* stu_node) {
//    int n;
//    FILE* fp = fopen("students.dat", "rb");
//    if (fp == NULL) {
//        printf("无法打开文件\n");
//        return 0;
//    }
//    fread(&n, sizeof(int), 1, fp);
//    fread(stu_node, sizeof(stu), n, fp);
//    fclose(fp);
//    printf("已从文件读取%d个学生的数据\n", n);
//    return n;
//}
int read_from_file(stu* stu_node) {
    int n;
    FILE* fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        printf("无法打开文件\n");
        return 0;
    }
    fread(&n, sizeof(int), 1, fp);
    fread(stu_node, sizeof(stu), n, fp);
    fclose(fp);

    // 重新计算平均分
    for (int i = 0; i < n; i++) {
        stu_node[i].avg = (float)stu_node[i].sum / M;
    }

    printf("已从文件读取%d个学生的数据\n", n);
    return n;
}