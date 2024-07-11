#define _CRT_SECURE_NO_WARNINGS 1
// main.c
#include <stdio.h>
#include "stu.h"
#include "iop.h"
#include "del.h"
#include "modify.h"
#include "search.h"
#include "sort.h"
#include "file.h"

stu stu_arr[N];

int main() {
    int n = 0, m;
    char choice;

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
        scanf(" %c", &choice);

        switch (choice) {
        case '1':
            input(stu_arr, &n);  // ���� n �ĵ�ַ
            break;
        case '2':
            output(stu_arr, n);
            break;
        case '3':
            printf("����Ҫɾ����ѧ��ѧ��: ");
            scanf("%d", &m);
            n = del(stu_arr, n, m);
            break;
        case '4':
            printf("����Ҫ�޸ĵ�ѧ��ѧ��: ");
            scanf("%d", &m);
            modify(stu_arr, n, m);
            break;
        case '5':
            printf("����Ҫ������ѧ��ѧ��: ");
            scanf("%d", &m);
            search(stu_arr, n, m);
            break;
        case '6':
            sort_sd(stu_arr, n);
            break;
        case '7':
            sort_sa(stu_arr, n);
            break;
        case '8':
            sort_nd(stu_arr, n);
            break;
        case '9':
            sort_na(stu_arr, n);
            break;
        case 'W':
        case 'w':
            write_to_file(stu_arr, n);
            break;
        case 'R':
        case 'r':
            n = read_from_file(stu_arr);
            break;
        case 'O':
        case 'o':
            printf("ллʹ�ã��ټ���\n");
            return 0;
        default:
            printf("��Чѡ�������ԡ�\n");
        }
    }
}