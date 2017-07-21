//
//  study_file_operate.c
//  hello_world_c
//
//  Created by Jenny on 2017/7/20.
//  Copyright © 2017年 Jenny. All rights reserved.
//

#include "study_file_operate.h"

void writeFile() {
    FILE * fp = fopen("a.txt", "a");
    
    for (char i='a'; i<='z'; i++) {
        fprintf(fp, "%c \n", i);
    }
    
    fclose(fp);
}

void readFile() {
    
    FILE * fp = fopen("a.txt", "r");
    
    for (int i=0; i< 26; i++) {
        char str;
        // 这是一个字符一个字符来的;
        fscanf(fp, "%c", & str);
        printf("%c", str);
    }
    
    printf("\n");
    
    fclose(fp);
}
