//
// Created by SM1701 on 2021/7/12.
//

#include "stdio.h"

#define LOWER 0
#define UPPER 300
#define STEP 20
#define MAXLINE 1000

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

void count_words();

void p1_8();

void count_digits();

int power(int base, int n);

int power_v2(int base, int n);

void test_power();

void longest_line();

int get_line(char s[], int lim);

void copy(char to[], const char from[]);

void longest_line_ex();

int get_line_ex(void);

void copy_ex(void);


/**
 * TODO 做成命令行工具
 * @return
 */
int main1() {
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
//    p1_8();
//    count_words();
//    count_digits();
//    test_power();
//    longest_line();
    longest_line_ex();

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

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/**
 *  count lines, words, and characters in input
 */
void count_words() {
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }

    printf("%d %d %d\n", nl, nw, nc);
}

/**
 * count digits, white spaces, others
 */
void count_digits() {
    int c, i, nWhite, nOther;
    int nDigit[10];

    nWhite = nOther = 0;

    //初始化数据
    for (i = 0; i < 10; ++i) {
        nDigit[i] = 0;
    }

    //数据统计
    while ((c = getchar()) != EOF)
        //数字统计
        if (c >= '0' && c <= '9')
            ++nDigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nWhite;
        else
            ++nOther;
    printf("digits = ");
    for (i = 0; i < 10; ++i) {
        printf(" %d", nDigit[i]);
    }

    printf(", white space = %d, other = %d\n", nWhite, nOther);
}

int power(int base, int n) {
    int i, p;
    p = 1;
    for (i = 1; i <= n; ++i) {
        p = p * base;
    }
    return p;
}

void test_power() {
    int i;
    for (i = 0; i < 10; ++i) {
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }

    for (i = 0; i < 10; ++i) {
        printf("%d %d %d\n", i, power_v2(2, i), power_v2(-3, i));
    }
}

int power_v2(int base, int n) {
    int p;
    for (p = 1; n > 0; --n) {
        p = p * base;
    }
    return p;
}


/**
 *  print the longest input line
 */
void longest_line() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
        printf("%s", longest);

}

void copy(char to[], const char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

/**
 * read a line into s,return length
 * @param s
 * @param lim
 * @return
 */
int get_line(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}


/**
 * 编译失败
 * TODO
 * @return
 */
int get_line_ex(void) {
//    int c, i;
//    extern char line[];
//    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
//        line[i] = c;
//    }
//    if (c == '\n') {
//        line[i] = c;
//        ++i;
//    }
//    line[i] = '\0';
//
//    return i;
}


void copy_ex(void) {
//    int i;
//    i = 0;
//    extern char line[], longest[];
//    while ((longest[i] = line[i]) != '\0')
//        ++i;
}

void longest_line_ex() {
//    int len;
//    int max;
//    extern char longest[];
//
//    max = 0;
//    while ((len = get_line_ex()) > 0) {
//        if (len > max) {
//            max = len;
//            copy_ex();
//        }
//    }
//
//    if (max > 0) {
//        printf("%s", longest);
//    }
}
