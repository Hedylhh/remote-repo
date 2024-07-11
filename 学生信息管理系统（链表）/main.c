#define _CRT_SECURE_NO_WARNINGS 1
// main.c
#include <stdio.h>
#include <stdlib.h>
#include "stu.h"
#include "iop.h"
#include "del.h"
#include "modify.h"
#include "search.h"
#include "sort.h"
#include "file.h"

int main() {
    stu* head = NULL;
    char choice;
    int n, m;

    while (1) {
        printf("\nѧ����Ϣ����ϵͳ\n");
        printf("1. ����ѧ����Ϣ\n");
        printf("2. ��ʾ����ѧ����Ϣ\n");
        printf("3. ɾ��ѧ����Ϣ\n");
        printf("4. �޸�ѧ����Ϣ\n");
        printf("5. ����ѧ����Ϣ\n");
        printf("6. ���ֽܷ�������\n");
        printf("7. ���ܷ���������\n");
        printf("8. ��ѧ�Ž�������\n");
        printf("9. ��ѧ����������\n");
        printf("W. ��ѧ����Ϣд���ļ�\n");
        printf("R. ���ļ���ȡѧ����Ϣ\n");
        printf("O. �˳�\n");
        printf("��ѡ��: ");
        scanf(" %c", &choice);  // ע��ո��������Ŀ��ܵĻ��з�

        switch (choice) {
        case '1':
            printf("����ѧ������: ");
            scanf("%d", &n);
            head = input(head, n);
            break;
        case '2':
            output(head);
            break;
        case '3':
            printf("����Ҫɾ����ѧ��ѧ��: ");
            scanf("%d", &m);
            head = del(head, m);
            break;
        case '4':
            printf("����Ҫ�޸ĵ�ѧ��ѧ��: ");
            scanf("%d", &m);
            modify(head, m);
            break;
        case '5':
            printf("����Ҫ������ѧ��ѧ��: ");
            scanf("%d", &m);
            search(head, m);
            break;
        case '6':
            head = sort_sd(head);
            break;
        case '7':
            head = sort_sa(head);
            break;
        case '8':
            head = sort_nd(head);
            break;
        case '9':
            head = sort_na(head);
            break;
        case 'W':
        case 'w':
            write_to_file(head);
            break;
        case 'R':
        case 'r':
            head = read_from_file();
            break;
        case 'O':
        case 'o':
            // �ͷ������ڴ�
            while (head != NULL) {
                stu* temp = head;
                head = head->next;
                free(temp);
            }
            printf("ллʹ�ã��ټ���\n");
            return 0;
        default:
            printf("��Чѡ�������ԡ�\n");
        }
    }
}