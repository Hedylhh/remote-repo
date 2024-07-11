#define _CRT_SECURE_NO_WARNINGS 1
// sort.c
#include "sort.h"

void swap(stu* a, stu* b) {
    stu temp = *a;
    *a = *b;
    *b = temp;
}

void sort_sd(stu* stu_node, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (stu_node[j].sum < stu_node[j + 1].sum) {
                swap(&stu_node[j], &stu_node[j + 1]);
            }
        }
    }
}

void sort_sa(stu* stu_node, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (stu_node[j].sum > stu_node[j + 1].sum) {
                swap(&stu_node[j], &stu_node[j + 1]);
            }
        }
    }
}

void sort_nd(stu* stu_node, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (stu_node[j].id < stu_node[j + 1].id) {
                swap(&stu_node[j], &stu_node[j + 1]);
            }
        }
    }
}

void sort_na(stu* stu_node, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (stu_node[j].id > stu_node[j + 1].id) {
                swap(&stu_node[j], &stu_node[j + 1]);
            }
        }
    }
}