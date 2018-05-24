//
//  main.c
//  9.7.3 使用指针在函数间通信
//
//  Created by Affee on 2018/5/11.
//  Copyright © 2018年 affee. All rights reserved.
//

#include <stdio.h>
void interchange(int *u,int *v);

int main(int argc, const char * argv[]) {
    int x = 5,y = 10;
    printf("Originally x= %d and y = %d.\n",x,y);
    printf("=====%p=====%p\n",&x,&y);
    interchange(&x,&y);
    printf("=====%p=====%p\n",&x,&y);
    printf("NOW x = %d and y = %d.\n",x,y);
    
    return 0;
}
void interchange(int *u,int *v)
{
    int temp;
    temp = *u;
    *u = *v;
    
    *v = temp;
    printf("函数。。。。");
}
