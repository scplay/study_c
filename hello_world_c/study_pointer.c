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
    
    
//    int * pa = &a;
//    int ** ppa = &pa;
//    
//    printf("一级指针 %p \n", pa);
//    printf("二级指针 %p \n", ppa);
}

void pointerSwap(int * a, int * b) {
    int t = * a;
    * a = * b;
    * b = t;
}

void multiLevelPointer(){
    int a = 10;                        //声明一个变量a
    int *p = &a;                       //声明指针p,指向变量a
    int **q = &p;                      //声明二级指针q,指向一级指针p
    printf("a = %d\n",a);              //打印变量a的值
    printf("a的地址&a=%p\n",&a);        //打印变量a的地址
    printf("p = %p\n",p);              //打印p的值
    printf("p的地址&p=%p\n",&p);        //打印p的地址
    printf("p的解引用*p=%d\n",*p);      //打印p的解引用
    printf("q = %p\n",q);              //打印q的值
    printf("q的地址&q=%p\n",&q);        //打印q的地址
    printf("q的解引用*q=%p\n",*q);      //打印q的解引用
    printf("q的双重解引用**q=%d\n",**q); //打印q的双重解引用
    
    int ***s = &q;
    printf("s的禁忌三重解引用***s=%d\n", ***s); //打印s

}
