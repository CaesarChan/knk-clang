//
// Created by SM1701 on 2021/7/12.
//

#include "stdio.h"

#define LOWER 0
#define UPPER 300
#define STEP 20

void hello();

void temp();

void temp_float();

void p1_5();

void temp_const();

void copy_v1();

void copy_v2();

void count_chars_v1();

void count_chars_v2();

void count_lines();

void p1_8();

int main() {
//    hello();
//    temp();
//    temp_float();
//    p1_5();
//    temp_const();
//    copy_v1();
//    copy_v2();
//    count_chars_v1();
//    count_chars_v2();
//    count_lines();
    p1_8();
    return 0;
}

void hello() {
    printf("hello, ");
    printf("world");
    printf("\n");
}

void temp() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;//温度下限
    upper = 300;//温度上限
    step = 20;

    fahr = lower;
    printf("temp begin==================>\n");
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("<================== temp end\n");

}

void temp_float() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;//温度下限
    upper = 300;//温度上限
    step = 20;

    fahr = lower;
    printf("temp_float begin==================>\n");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%0.3f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("<================== temp_float end\n");
}

void p1_5() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;//温度下限
    upper = 300;//温度上限
    step = 20;

    fahr = upper;
    printf("p1_5 begin==================>\n");
    while (fahr >= lower) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%0.3f %6.1f\n", fahr, celsius);
        fahr = fahr - step;
    }
    printf("<================== p1_5 end\n");
}

void temp_const() {
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}

/**
 * copy input to output;1st version
 */
void copy_v1() {
    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}

/**
 * copy input to output;2nd version
 */
void copy_v2() {
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}

/**
 * count characters in input; 1st version
 */
void count_chars_v1() {
    long nc;
    nc = 0;
    while (getchar() != EOF) {
        ++nc;
        printf("%ld\n", nc);
    }
}

void count_chars_v2() {
    double nc;
    for (nc = 0; getchar() != EOF; ++nc);
    printf("%0.f\n", nc);
}

void count_lines() {
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            nl++;
    printf("%d\n", nl);
}

/**
 * count space table
 */
void p1_8() {
    int c, nl, ns, nt;
    nl = 0;
    ns = 0;
    nt = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            nl++;
        }

        if (c == '\t') {
            ns++;
        }

        if (c == ' ') {
            nt++;
        }
    }
    printf("%d %d %d\n", nl, ns, nt);
}
