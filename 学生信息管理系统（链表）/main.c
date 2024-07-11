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
        printf("\n学生信息管理系统\n");
        printf("1. 输入学生信息\n");
        printf("2. 显示所有学生信息\n");
        printf("3. 删除学生信息\n");
        printf("4. 修改学生信息\n");
        printf("5. 搜索学生信息\n");
        printf("6. 按总分降序排序\n");
        printf("7. 按总分升序排序\n");
        printf("8. 按学号降序排序\n");
        printf("9. 按学号升序排序\n");
        printf("W. 将学生信息写入文件\n");
        printf("R. 从文件读取学生信息\n");
        printf("O. 退出\n");
        printf("请选择: ");
        scanf(" %c", &choice);  // 注意空格，用于消耗可能的换行符

        switch (choice) {
        case '1':
            printf("输入学生数量: ");
            scanf("%d", &n);
            head = input(head, n);
            break;
        case '2':
            output(head);
            break;
        case '3':
            printf("输入要删除的学生学号: ");
            scanf("%d", &m);
            head = del(head, m);
            break;
        case '4':
            printf("输入要修改的学生学号: ");
            scanf("%d", &m);
            modify(head, m);
            break;
        case '5':
            printf("输入要搜索的学生学号: ");
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
            // 释放链表内存
            while (head != NULL) {
                stu* temp = head;
                head = head->next;
                free(temp);
            }
            printf("谢谢使用，再见！\n");
            return 0;
        default:
            printf("无效选择，请重试。\n");
        }
    }
}