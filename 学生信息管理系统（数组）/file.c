#define _CRT_SECURE_NO_WARNINGS 1
// file.c
#include <stdio.h>
#include "file.h"

void write_to_file(stu* stu_node, int n) {
    FILE* fp = fopen("students.dat", "wb");
    if (fp == NULL) {
        printf("�޷����ļ�\n");
        return;
    }
    fwrite(&n, sizeof(int), 1, fp);
    fwrite(stu_node, sizeof(stu), n, fp);
    fclose(fp);
    printf("�����ѳɹ�д���ļ�\n");
}

//int read_from_file(stu* stu_node) {
//    int n;
//    FILE* fp = fopen("students.dat", "rb");
//    if (fp == NULL) {
//        printf("�޷����ļ�\n");
//        return 0;
//    }
//    fread(&n, sizeof(int), 1, fp);
//    fread(stu_node, sizeof(stu), n, fp);
//    fclose(fp);
//    printf("�Ѵ��ļ���ȡ%d��ѧ��������\n", n);
//    return n;
//}
int read_from_file(stu* stu_node) {
    int n;
    FILE* fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        printf("�޷����ļ�\n");
        return 0;
    }
    fread(&n, sizeof(int), 1, fp);
    fread(stu_node, sizeof(stu), n, fp);
    fclose(fp);

    // ���¼���ƽ����
    for (int i = 0; i < n; i++) {
        stu_node[i].avg = (float)stu_node[i].sum / M;
    }

    printf("�Ѵ��ļ���ȡ%d��ѧ��������\n", n);
    return n;
}