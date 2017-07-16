//
//  calc_mean_score.c
//  hello_world_c
//
//  Created by Jenny on 2017/7/16.
//  Copyright © 2017年 Jenny. All rights reserved.
//

#include "calc_mean_score.h"

// 函数三要素 声明(头) + 定义（实现）+ 调用
// 返回值 函数名 (参数...) { 函数体 }
void calcMeanScore() {
    int count;
    float sum = 0;
    float score;
    
    printf("有几个学生？");
    scanf("%d", &count);
    
    for (int i = 1;i <= count; i++) {
        printf("学生%d的成绩：", i);
        scanf("%f", &score);
        sum += score;
    }
    
    printf("学生的平均成绩是: %g \n", sum / count);
}
