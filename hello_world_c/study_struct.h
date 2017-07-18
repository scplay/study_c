//
//  study_struct.h
//  hello_world_c
//
//  Created by Jenny on 2017/7/18.
//  Copyright © 2017年 Jenny. All rights reserved.
//

#ifndef study_struct_h
#define study_struct_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void studyStruct();
void fillArray(int * arr, int len);

struct Student {
    char * name;
    int * sub_ids;
};

struct Car {
    char name[14];
    int weight;
};

#endif /* study_struct_h */
