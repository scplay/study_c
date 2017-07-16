//
//  study_pointer.c
//  hello_world_c
//
//  Created by Jenny on 2017/7/16.
//  Copyright © 2017年 Jenny. All rights reserved.
//

#include "study_pointer.h"

// & 取地址符号, & 后面一定是变量
// * 取地址中值, * 后面一定是地址
// 指针变量 用于保存内存地址的变量
void studyPointer() {
    int a;
    a = 1010;
    
    // %p 为指针地址 就是 内存所在位置的数值 0 - 8G，一个字节是一个地址
    printf("a 的指针值十进制位置为 %d \n", (int) &a);
    printf("a 的指针值十六进制位置为 %p \n", &a);
    
    // 真是无聊的行为
    *&*&*&*&*&a = 202;
    
    printf("对内存地址 &a 进行取值 * &a 则是 %d \n", * &a);
    
    float b = 223.22;
    // 指针变量前必须有一个 *
    // 数据类型是指针变量保存的地址所对应的数据类型
    float * p = & b;
    
    // 对指针地址中的变量进行赋值
    // 可以对内存变量
    * p = 292.2;
    
    printf("b的地址为 %p \n", p);
    printf("b的值为 %g \n", * p);
    
    // 声明的时候是指针
    int c = 103;
    int * d = & c;
    int * e = d;
    
    // 赋值是时候是变量
    * e = * p;
    
    printf("这是c的值吗? %d \n", c );
    
    // 试下交换, 真有意思
    int j = 3;
    int k = 5;
    int * l = &k;
    pointerSwap(& j, l);
    
    printf("j与k交换值了吗? %d %d \n", j, k );
}

void pointerSwap(int * a, int * b) {
    int t = * a;
    * a = * b;
    * b = t;
}
