//
// Created by SM1701 on 2021/7/12.
//

#include "stdio.h"

void hello();

int temp();

int main() {
    hello();
    temp();
    return 0;
}

void hello() {
    printf("hello, ");
    printf("world");
    printf("\n");
}

int temp() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;//温度下限
    upper = 300;//温度上限
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

}