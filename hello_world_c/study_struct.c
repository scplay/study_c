//
//  study_struct.c
//  hello_world_c
//
//  Created by Jenny on 2017/7/18.
//  Copyright © 2017年 Jenny. All rights reserved.
//

#include "study_struct.h"

// 结构体的大小真的有点意思
void studyStruct() {
    
    struct Student * zeon = malloc(sizeof(struct Student));
    
//    struct Student zeon = {"asfsdf"};
    
    // ?? WTF 为什么这个 sizeof 给什么都不报错呢？
    zeon->name = malloc(sizeof(2));

    strcpy(zeon->name, "要");
    
    zeon->sub_ids = malloc(sizeof(2));
    
    fillArray(zeon->sub_ids, 40);
    
    printf("zeon的名字是 %s \n", zeon->name);
    printf("sub_ids %d %d \n", zeon->sub_ids[0], zeon->sub_ids[31]);
    
    printf("zeon 的长度是 %lu \n", sizeof(zeon));
    printf("name 的长度是 %lu \n", sizeof(zeon->name));
    printf("sub_ids 的长度是 %lu \n", sizeof(zeon->sub_ids));
    
    printf("car 的长度是 %lu \n", sizeof(struct Car));
    
    free(zeon);
}

void fillArray(int * arr, int len) {
    for (int i = 0 ; i < len; i++) {
        arr[i] = rand();
    }
}
