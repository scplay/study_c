//
//  study_file_operate.c
//  hello_world_c
//
//  Created by Jenny on 2017/7/20.
//  Copyright © 2017年 Jenny. All rights reserved.
//

#include "study_predefine.h"
#include "study_file_operate.h"


void printFile() {
    FILE * fp = fopen("a.txt", "a");
    
    for (char i='a'; i<='z'; i++) {
        fprintf(fp, "%c \n", i);
    }
    
    fclose(fp);
}

void scanFile() {
    
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


void writeFile() {
    
    FILE * fp=NULL;
    
    fp = fopen("test.dat", "w");
    if(fp==NULL) {
        printf("failed open test.dat \n");
    }
    
    char a[] = "你好吗地工工工工";
//    char * a = "你好吗地工工工工";  // 这样声明指针的sizeof大小都是 8
    // void * 代表任何类型的指针？
    printf("string a size is %lu \n", sizeof(a));
    
    fwrite(a, sizeof(a), 1, fp);
    
    fclose(fp);
    
    printf("write ok! \n");
}

void readFile() {
    FILE * fp=NULL;
    
    fp = fopen("test.dat", "r");
    if(fp==NULL) {
        printf("failed open test.dat \n");
    }
    
    char a[25];
    // void * 代表任何类型的指针？
    fread(a, sizeof(a), 1, fp);
    
    fclose(fp);
    
    printf("a is now : %s \n", a);
}


void getFile(){
    FILE * fp = fopen("test.txt", "r");
    
    int str_len = 20;

    char g_str[str_len];
    // fgets 需要一个 str 指针 , 读取字符的长度与 , file 指针
    // 怎样知道一行多长以及怎样 读取下一段文字呢？
    fgets(g_str, str_len, fp);
    
    printf("%s", g_str);

    fclose(fp);
}



int studyFile(){
    // 用指针来表示打开文件的内存缓冲区的地址
    FILE * fp = NULL;
    // file_name  flag "w" or "r" or "a" flag 一定要用 双引号
    fp = fopen("test.txt", "a");
    
    if (fp==NULL) {
        printf("failed to open a file \n");
        return 0;
    }
    
    // 操作文件
    // 写文件
    // fputc 写入字符
    fputc('a', fp); // char 一定是单引号
    
    // fputs 写入客串
    fputs("写入一个长点的客串", fp);
    
    // fprintf 写入格式化的信息
    for (int i='a';i<'z';i++) {
        fprintf(fp, "%c", i);
        // fputc(i, fp);
    }
    
    
    // 关闭
    fclose(fp);
    printf("file closed %p \n", fp);
    
    return 0;
}

void testPredefine(){
    printf("predefine MAC_NO is %d \n", MAC_NO);
    
    char err_msg[] = "直接抛错吗\n";
    
    fputs(err_msg, stdout);
    
    char std_in[10];
    
    fread(std_in, sizeof(std_in), 1, stdin);
    
    printf("this is in : %s \n", std_in);
    
//    exit(127);
}
