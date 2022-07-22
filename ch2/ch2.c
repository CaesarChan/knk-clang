//
// Created by SM1701 on 2021/7/12.
//
#include "stdio.h"
#include "limits.h"
#include "string.h"

void p2_1_limits_h();

//TODO 使用计算的方式实现
void p2_1();

int my_strlen(const char s[]);

void print_strlen();

void leap_year(int year);

int my_atoi(char s[]);

int my_lower(int c);

void test_my_atoi();



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

int my_strlen(const char s[]) {
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

void leap_year(int year) {

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }

}


/**
 * my_atoi: convert string to integer
 * @param s
 * @return
 */
int my_atoi(char *s) {
    int i;
    int n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
        n = 10 * n + (s[i] - '0');
    }
    return n;
}

void test_my_atoi() {
    int i;
    i = my_atoi("109");
    printf("%d\n", i);

    i = my_atoi("10s9");
    printf("%d\n", i);

    i = my_atoi("109s");
    printf("%d\n", i);

    i = my_atoi("s109");
    printf("%d\n", i);
}

int my_lower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 'a' - 'A';
    } else {
        return c;
    }
}
