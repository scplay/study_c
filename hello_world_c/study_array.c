//
//  study_array.c
//  hello_world_c
//
//  Created by Jenny on 2017/7/16.
//  Copyright © 2017年 Jenny. All rights reserved.
//

#include "study_array.h"

// 保存大量同类型的数据
// 语法 数组中的数据类型 数组名称[整数长度]
void studyArray(){
    int len = 10;
    int * scores = malloc(sizeof(int) * len);
    
    // 一开始就赋值
    float temps[6] = {1.0,2.1,3.,4,5,6};
    
    // 通过 for 赋值
    for (int i = 0; i < len; i++) {
        scores[i] = i + 10;
    }
    
    sortArr(scores, len);
    
    printf("int 数组的大小是 %lu \n", sizeof(scores));
    printf("这个分数是 %d \n", scores[9]);
    
    printf("float 数组的大小是 %lu \n", sizeof(temps));
    printf("这个浮点是 %g \n", temps[1]);
    
    myLog("这样就可以打印出来一个简单的log了哈 \n");
    
    lengthOfArray();

    studyArrWithPointer();
    
    free(scores);
}

void studyArrWithPointer(){
    int a[3] = {1, 2, 3};

    // a 实际上就是指针
    int * p = a;

    printf("a[i] 与 *(p+i) 是相同的 %d", a[1] == *(p+1));
}

void studyMultiArrParam(int arr[][3]) {
    printf("二维数组为参数时只能这样声明参数, 不能省略最后一维的长度？");
}

void studyMultiDimArr() {
    
    // 这是二维数组, 数据类型表示最里面的值？
    int td[3][2] = { {1,2}, {3,5}, {4,5} };
    
    // 声明时是长度 ？
    // int td[1][2][3];
    // 赋值与取值时是 索引？
    //int td[0][1][2] = 1;
    
    printf("td[2][1] is %d \n", td[2][1]);
}



void studyString() {
    // 这是一个普通的字符
    char c = 'a';
    
    // 字符数组 和 字符串 并不太一样
    char str[5] = "wang"; // 为什么是 5 呢 看下面就知道了
    // 也可以这样
    // char str[] = "wang";
    
    // 这是字符数组
    // \0 是必须的 用于表示字符数组结束了
    // 所以字符数组的长度是 [char_lenght + 1]
    // 这里 c_arr 就是个指针
    char c_arr[] = {'z','e','o','n','\0'};
    
    printf("这是字符 %c \n", c);
    printf("这是字符串 %s \n", str);
    printf("这是字符数组 %s \n", c_arr);
}


void lengthOfArray() {
    
    // 当一个数组被声明时可以计算长度，
    int array[] = { 1, 2, 3, 4, 5, 6, 7};
    int len = sizeof(array) / sizeof(int);
    
    printf("现在原数组长度是 %d \n", len);
    
    // 但当一个数组被传递给指针时已无法计算长度了
    int * p = array;
    int p_len = sizeof(p) / sizeof(int);

    printf("现在数组指针长度是 %d \n", p_len);
    
}

// 还是不会用啊
void sortArr(int * array, int len) {
    printf("排序前,数组大小为 %d \n", len);
    
    for (int j =0; j < len; j++) {
        printf("第 %d 个元素为 %d \n", j+1 ,array[j]);
    }
    
    for (int i =0; i < len; i++) {
        for (int j = 0; j< len ;j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    
    printf("%s", "排序后 \n");
    
    for (int j =0; j < len; j++) {
        printf("第 %d 个元素为 %d \n", j+1 ,array[j]);
    }
    
    
}

// 看字符串就是数组啊
void myLog(char * message) {
    printf("%s \n", message);
//    printf("%lu \n", sizeof(message));
//    printf("%c \n", message[1]);
//    printf("%c \n", message[2]);
//    printf("%c \n", message[3]);
//    printf("%c \n", message[4]);
//    printf("%c \n", message[5]);
//    printf("%c \n", message[6]);
}
