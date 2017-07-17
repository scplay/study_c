//
//  study_array.h
//  hello_world_c
//
//  Created by Jenny on 2017/7/16.
//  Copyright © 2017年 Jenny. All rights reserved.
//

#ifndef study_array_h
#define study_array_h

#include <stdio.h>
#include <stdlib.h>
void studyArray();


// 字符串与字符数组
void studyString();
// 高维数组
void studyMultiDimArr();

// 两种写法，第二种表达的内涵明确
// 因为数组声明出来只要传递就是指针
// void sort(int array[]);
void sortArr(int * array, int len);

void myLog(char * message);

void lengthOfArray();

void studyArrWithPointer();

void studyMultiArrParam(int arr[][3]);

#endif /* study_array_h */
