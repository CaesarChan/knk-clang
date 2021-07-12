//
// Created by SM1701 on 2021/7/12.
//
#include "stdio.h"
#include "limits.h"
#include "string.h"

void p2_1_limits_h();

//TODO 使用计算的方式实现
void p2_1();

int my_strlen(char s[]);

void print_strlen();

int main() {
//    p2_1_limits_h();
    print_strlen();

    return 0;
}

/**
 * print from limits.h
 */
void p2_1_limits_h() {

    printf("char min: %d;char max: %d\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char max: %u\n", UCHAR_MAX);

    printf("short min: %d;short max: %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short max: %u\n", USHRT_MAX);

    printf("int min: %d;int max: %d\n", INT_MIN, INT_MAX);
    printf("unsigned int max: %u\n", UINT_MAX);

    printf("long min :%ld; long max :%ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long max:%llu\n", ULLONG_MAX);

}

int my_strlen(char s[]) {
    int i;
    i = 0;
    while (s[i] != '\0') {
        ++i;
    }
    return i;
}

void print_strlen() {
    int l, l2;
    l = my_strlen("my_strlen");
    l2 = strlen("my_strlen");
    printf("len: %d\n", l);
    printf("len2: %d\n", l2);
}
