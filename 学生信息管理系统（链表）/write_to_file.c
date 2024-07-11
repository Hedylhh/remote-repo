#define _CRT_SECURE_NO_WARNINGS 1
// write_to_file.c
#include <stdio.h>
#include "stu.h"
#include "file.h"

void write_to_file(stu* head) {
    FILE* fp;
    stu* p = head;
    int i;

    fp = fopen("students.dat", "wb");
    if (fp == NULL) {
        printf("无法打开文件\n");
        return;
    }

    while (p != NULL) {
        fwrite(&(p->id), sizeof(int), 1, fp);
        fwrite(p->name, sizeof(char), 15, fp);
        fwrite(p->major, sizeof(char), 15, fp);
        for (i = 0; i < M; i++) {
            fwrite(&(p->score[i]), sizeof(int), 1, fp);
        }
        fwrite(&(p->sum), sizeof(int), 1, fp);
        p = p->next;
    }

    fclose(fp);
    printf("学生信息已成功写入文件\n");
}