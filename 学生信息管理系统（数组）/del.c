#define _CRT_SECURE_NO_WARNINGS 1
// del.c
#include "del.h"

int del(stu* stu_node, int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        if (stu_node[i].id == m) {
            for (j = i; j < n - 1; j++) {
                stu_node[j] = stu_node[j + 1];
            }
            n--;
            return n;
        }
    }
    return n;
}