 //
//  main.c
//  hello_world_c
//
//  Created by Jenny on 2017/7/15.
//  Copyright © 2017年 Jenny. All rights reserved.
//

// 包含语句
#include <stdio.h>
#include "my_func.h"
#include "calc_mean_score.h"
#include "study_array.h"
#include "study_pointer.h"

// 主函数
// 返回值 函数名 参数个数 参数数组
int main(int argc, const char * argv[]) {

//    studyPointer();
    
//    studyString();
    
    studyArray();
    
//    calcMeanScore();
    
//    studyCondition();
    
//    studyCalc();
    
//    printf("今天是 %d \n", studyScanf());
    
//    printf("age time weight is %g \n", studyVarAndConst());
    
//    studyPrintf();
    
    return 0;
}



//
/**
 条件语句
 */
void studyCondition() {
    int a;
    printf("输入一数：\n");
    scanf("%d", &a);
    
    if (a%2) {
//        int i = 1;
        printf("%d 是奇数 \n", a);
    } else {
        printf("%d 是偶数 \n", a);
    }
    
    // c 的作用域靠 { } 来定义
    // 所以 i 没有声明
    // printf("i is %d", i);
    
    // if else
    if (a > 50) {
    } else if (a > 20) {
    } else {
    }
    
    // switch
    switch (a) {
        case 1 :
            break;
        case 2 :
            break;
        default:
            break;
    }
}

// 强制转型 (type) variable;
float studyCalc() {
    
    float a = 3 / 2.0;
    
    // 注意 1 / 2 返回的是 0 因为整数与整数运算返回的也是整数
    int b = 1 / 2;
    
    float fb = 1 / (float) 2; // 这样就是强制转型了
    
    printf("%f \n", fb);
    
    return a + b;
}

// 如何写入一句话呢？
int studyScanf() {
    
    char input[100];
    int d, dd;
    
    printf("请输入今天是周几 :\n ");
    
    // scanf("数据占位符", 要保存的变量的地址);
    // 占位符只有下列类型 %d %f %ld %lf %s %c
    scanf("%s", input); // 为什么 数组是这样没有 & 呢？
    
    printf("输出一下吧 %s \n", input);
    
    // 不提倡输入两个
    printf("请输入两个数字 :\n ");
    
    scanf("%d %d", &d, &dd);
    
    printf("输出两个吧 %d,%d \n", d, dd);
    
    return 0;
}



// 怎样返回一个字符串呢？
char * myName(){
    char name[9] = "zeon wang";
    
    char * name_p = name;
    
    return name_p;
}




// c 中的常量有 数值 与 字符
// 1 1.2 'c'
// 变量相当于一个容器，容器大小由变量数据类型来决定
// char -127 - 128
// unsighed char 0 - 255
// char < short < int < long < float < double < long double
float studyVarAndConst() {
    int age = 1;
    
//    int year = 2017.123; // 这是错误的 .123 会被舍弃
    
//    int hex_age = 0xff;
    
    long himalaya_height = 884812312311233l; // long
    
    short type = 4;
    
//    char first = 'a';
    
    float weight = 65.55f; // 如果没有 f 有小数的默认是 double 型的，赋值给 float 可能丢失数据
    
    double pi = 3.14159265453;
    
    return age * weight * pi + type / himalaya_height;
}






// %d decimal
// %f float default 6 digit
// %g real float length;
// %s string
// %c char
// printf and placeholder symbol
void studyPrintf() {
    
    // int 4 byte 1111 1111 1111 1111 1111 1111 1111 1111;
    // +-9?00 0000
    printf("this is a %%d %d\n", 42000000);
    
    printf("long decimal %%ld %ld\n", 4200000000000000000);
    
    printf("%%f is 6 digit %f \n", 10.222);
    
    printf("%%g is good for float %g \n", 10.222);
    
    printf("%%.2f is 5 digit %.2f \n", 12.344);
    
    printf("%%lf is what %lf \n", 3.14159265453);
    
    printf("%%c is a char, and use single quote %c\n", 'c');

}

