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
        scanf(" %c", &choice);

        switch (choice) {
        case '1':
            input(stu_arr, &n);  // 传递 n 的地址
            break;
        case '2':
            output(stu_arr, n);
            break;
        case '3':
            printf("输入要删除的学生学号: ");
            scanf("%d", &m);
            n = del(stu_arr, n, m);
            break;
        case '4':
            printf("输入要修改的学生学号: ");
            scanf("%d", &m);
            modify(stu_arr, n, m);
            break;
        case '5':
            printf("输入要搜索的学生学号: ");
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
            printf("谢谢使用，再见！\n");
            return 0;
        default:
            printf("无效选择，请重试。\n");
        }
    }
}