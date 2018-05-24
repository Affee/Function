//
//  main.c
//  9.5 proto.c
//
//  Created by Affee on 2018/5/9.
//  Copyright © 2018年 affee. All rights reserved.
//

#include <stdio.h>
int imax(int,int); //函数原型
int main(int argc, const char * argv[]) {
    int num1,num2;
    if (scanf("%d %d",&num1,&num2) == 2) {
        printf("The maximum of of %d and %d is %d.\n",num1,num2,imax(num1,num2));

    }
//    printf("The maximum of of %d and %d is %d.\n",3,5,imax(3,5));
    
    
    return 0;
}
int imax(int n,int m)
{
    return (n>m?n:m);
}
