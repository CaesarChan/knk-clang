//
// Created by SM1701 on 2021/7/12.
//

#include "stdio.h"

#define LOWER 0
#define UPPER 300
#define STEP 20

void hello();

void temp();

void tempFloat();

void p1_5();

void tempConst();

int main() {
    hello();
    temp();
    tempFloat();
    p1_5();
    tempConst();
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

void tempFloat() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;//温度下限
    upper = 300;//温度上限
    step = 20;

    fahr = lower;
    printf("tempFloat begin==================>\n");
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%0.3f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("<================== tempFloat end\n");
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

void tempConst() {
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}
