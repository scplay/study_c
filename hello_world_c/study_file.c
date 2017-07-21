// 打开
// 操作
// 关闭
#include "study_file.h"

int studyFile(){
    // 用指针来表示打开文件的内存缓冲区的地址
    FILE * fp = NULL;
    // file_name  flag "w" or "r" or "a" 
    fp = fopen("test.txt",'a');

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