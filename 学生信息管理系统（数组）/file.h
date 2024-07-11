#define _CRT_SECURE_NO_WARNINGS 1
// file.h
#ifndef FILE_H
#define FILE_H

#include "stu.h"

void write_to_file(stu* stu_node, int n);
int read_from_file(stu* stu_node);

#endif