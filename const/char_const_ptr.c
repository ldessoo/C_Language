#include <stdio.h>
#include <string.h>

int main(){
    
    size_t i;
    char str[] = "hello world";
    char *ss = "gaoyuan";

    //const 类型的指针一定要当场赋值
    //char* const ptr;
    //ptr = str;
    char * const ptr = str;

    for(i = 0; i < strlen(str); i++){
        printf("%c",ptr[i]);
    }
    printf("\n");

    ptr[0] = 'w';
    ptr[1] = '0';
    printf("%s\n",ptr);
    
    //ptr = ss;

    return 0;
}

/* 总结
 * char* const ptr;
 * 1,const 用来修饰 ptr 表示指针是不可改变的
 * 2,*ptr 是可以改变的
 * 3,在定义好 char* const ptr = str　的时候,一定要在定时的时候赋值，要不然以下再进行赋值就会出现错误
 * */
