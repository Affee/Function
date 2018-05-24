//
//  main.c
//  第九章 函数
//
//  Created by Affee on 2018/5/9.
//  Copyright © 2018年 affee. All rights reserved.
//

#include <stdio.h>
#define NAME "GIGATHINK,INK"
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Mgapolis,CA 94904"
#define WIDTH 40

void starbar(void);//函数原型

int main(int argc, const char * argv[]) {
    starbar();
    printf("%s\n",NAME);
    starbar();
    printf("%s\n",ADDRESS);
    starbar();
    printf("%s\n",PLACE);
    starbar();
    
    return 0;
}
void starbar(void)
{
    int count;
    
    for (count = 1; count <= WIDTH; count++) {
//        putchar('*');
        printf("%c", '-');
    }
    putchar('\n');
}
