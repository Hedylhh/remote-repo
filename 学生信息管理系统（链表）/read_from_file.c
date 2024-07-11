#define _CRT_SECURE_NO_WARNINGS 1
// read_from_file.c
#include <stdio.h>
#include <stdlib.h>
#include "stu.h"
#include "file.h"

stu* read_from_file() {
    FILE* fp;
    stu* head = NULL, * p=NULL, * q=NULL;
    int i;

    fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        printf("无法打开文件\n");
        return NULL;
    }

    while (1) {
        p = (stu*)malloc(sizeof(stu));
        if (p == NULL) {
            printf("内存分配失败\n");
            exit(1);
        }

        if (fread(&(p->id), sizeof(int), 1, fp) != 1) {
            free(p);
            break;
        }

        fread(p->name, sizeof(char), 15, fp);
        fread(p->major, sizeof(char), 15, fp);
        for (i = 0; i < M; i++) {
            fread(&(p->score[i]), sizeof(int), 1, fp);
        }
        fread(&(p->sum), sizeof(int), 1, fp);

        p->next = NULL;

        if (head == NULL) {
            head = p;
        }
        else {
            q->next = p;
        }
        q = p;
    }

    fclose(fp);
    printf("学生信息已成功从文件读取\n");
    return head;
}