//
//  main.c
//  9.7 factor.c程序
//
//  Created by Affee on 2018/5/10.
//  Copyright © 2018年 affee. All rights reserved.
//
//使用循环和递归计算阶
#include <stdio.h>
long fact(int n);
long rfact(int n);

int main(int argc, const char * argv[]) {
    int num;
    printf("Enter a value in the range 0-12 (q to quit):");
    while (scanf("%d",&num) == 1) {
        if (num <0 ) {
            printf("NO negative numbers,please.\n");
        }else if (num >12){
            printf("Keep input under 13");
        }else{
            printf("loop:%d factorial = %ld\n",num,fact(num));
            printf("recursion:%d factorial = %ld\n",num,rfact(num));
        }
        printf("Enter a value in the range 0-12 (q to quit):\n");
    }
    printf("BYEBYEBYE.\n");
    return 0;
}
long fact(int n)//使用循环函数
{
    long ans ;
    for (ans = 1; n > 1; n--) {
        ans *= n;
    }
    return ans;
}
long rfact(int n)
{
    long ans;
    if (n > 0) {
        ans = n * rfact(n - 1);
    }else{
        ans = 1;
    }
    return ans;
}
