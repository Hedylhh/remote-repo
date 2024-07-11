#define _CRT_SECURE_NO_WARNINGS 1
// sort.c
#include <stdio.h>
#include <stdlib.h>
#include "stu.h"
#include "sort.h"

stu* sort_sd(stu* head) {
    stu* p, * q, * r, * s;
    int swapped;

    if (head == NULL || head->next == NULL) {
        return head;
    }

    do {
        swapped = 0;
        r = NULL;
        p = head;
        q = head->next;

        while (q != NULL) {
            if (p->sum < q->sum) {
                if (r == NULL) {
                    head = q;
                }
                else {
                    r->next = q;
                }
                p->next = q->next;
                q->next = p;
                s = p;
                p = q;
                q = s;
                swapped = 1;
            }
            r = p;
            p = p->next;
            q = q->next;
        }
    } while (swapped);

    return head;
}

stu* sort_sa(stu* head) {
    stu* p, * q, * r, * s;
    int swapped;

    if (head == NULL || head->next == NULL) {
        return head;
    }

    do {
        swapped = 0;
        r = NULL;
        p = head;
        q = head->next;

        while (q != NULL) {
            if (p->sum > q->sum) {
                if (r == NULL) {
                    head = q;
                }
                else {
                    r->next = q;
                }
                p->next = q->next;
                q->next = p;
                s = p;
                p = q;
                q = s;
                swapped = 1;
            }
            r = p;
            p = p->next;
            q = q->next;
        }
    } while (swapped);

    return head;
}

stu* sort_nd(stu* head) {
    stu* p, * q, * r, * s;
    int swapped;

    if (head == NULL || head->next == NULL) {
        return head;
    }

    do {
        swapped = 0;
        r = NULL;
        p = head;
        q = head->next;

        while (q != NULL) {
            if (p->id < q->id) {
                if (r == NULL) {
                    head = q;
                }
                else {
                    r->next = q;
                }
                p->next = q->next;
                q->next = p;
                s = p;
                p = q;
                q = s;
                swapped = 1;
            }
            r = p;
            p = p->next;
            q = q->next;
        }
    } while (swapped);

    return head;
}

stu* sort_na(stu* head) {
    stu* p, * q, * r, * s;
    int swapped;

    if (head == NULL || head->next == NULL) {
        return head;
    }

    do {
        swapped = 0;
        r = NULL;
        p = head;
        q = head->next;

        while (q != NULL) {
            if (p->id > q->id) {
                if (r == NULL) {
                    head = q;
                }
                else {
                    r->next = q;
                }
                p->next = q->next;
                q->next = p;
                s = p;
                p = q;
                q = s;
                swapped = 1;
            }
            r = p;
            p = p->next;
            q = q->next;
        }
    } while (swapped);

    return head;
}