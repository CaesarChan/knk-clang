//
// Created by SM1701 on 2021/7/12.
//
#include "stdio.h"
#include "limits.h"

void p2_1_limits_h();

//TODO 使用计算的方式实现
void p2_1();

int main() {
    p2_1_limits_h();

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