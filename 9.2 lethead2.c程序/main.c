//
//  main.c
//  9.2 lethead2.c程序
//
//  Created by Affee on 2018/5/9.
//  Copyright © 2018年 affee. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define NAME "GIGATHINK,INK"
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Mgapolis,CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch,int num);

int main(int argc, const char * argv[]) {
    int spaces;
    show_n_char('*',WIDTH);
    putchar('\n');
    show_n_char('$',12);
    printf("%s\n",NAME);
    spaces = (WIDTH - strlen(ADDRESS)) / 2;
    
    show_n_char(SPACE, spaces);
    printf("%s\n",ADDRESS);
    show_n_char('&' , (WIDTH - strlen(PLACE))/2);
    
    printf("%s\n",PLACE);
    show_n_char('*', WIDTH);
    putchar('\n');
    
    
    return 0;
}

void show_n_char(char ch,int num)
{
    int count;
    for (count = 1; count <= num; count++) {
        putchar(ch);
    }
}
