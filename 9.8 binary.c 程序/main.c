//
//  main.c
//  9.8 binary.c 程序
//
//  Created by Affee on 2018/5/10.
//  Copyright © 2018年 affee. All rights reserved.
//
//以二进制形式打印制证书

#include <stdio.h>
void to_binary(unsigned long n);

int main(int argc, const char * argv[]) {
    unsigned long number;
    while (scanf("%lu",&number) == 1) {
        to_binary(number);
    }
    printf("Done\n");
    
    return 0;
}
void to_binary(unsigned long n)
{
    int r;
    r = n%2;
    if (n >= 2) {
        to_binary(n/2);
    }
    putchar(r == 0? '0' : '1');
    return;
}
