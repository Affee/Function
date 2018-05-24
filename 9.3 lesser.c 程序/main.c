//
//  main.c
//  9.3 lesser.c 程序
//
//  Created by Affee on 2018/5/9.
//  Copyright © 2018年 affee. All rights reserved.
//

#include <stdio.h>
int imin(int ,int);//找到两个数字中比较小的一个


int main(int argc, const char * argv[]) {
    int ss;
    ss = __INT_MAX__;
    printf("%d=====\n",ss);

    int evill1,evill2;
    printf("Enter a pair of interger (q to quit):\n");
    while (scanf("%d %d",&evill1,&evill2) == 2) {
        printf("The lesser of %d and %d is %d.\n",evill1,evill2,imin(evill1, evill2));
        printf("Enter a pair of integers (q to quit):\n");
    }
    printf("BYE.\n");
        return 0;
}
int imin(int n,int m){
    int min;
//第一种方法
////    if ( n < m) {
////        min = n;
////    }else{
////        min = m;
////    }
//    min = (n < m)?n:m;
//    return min;
//    第二种方法
    if (n < m ) {
        return n;
    }else{
        return m;
    }
    
    
}
