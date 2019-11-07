/*
 * 在 const char *ptr　中 const 的用法
 */

#include <stdio.h>
#include <string.h>

int main()
{
    size_t i;
    char str[] = "hello world";
    
    char ss[] = "gaoyuan world";

    char const *ptr;

    ptr = str;

    printf("ptr = %s\n",ptr);

    for(i = 0; i<strlen(str); i++){
        printf("%c",ptr[i]);
    }
    printf("\n");

   /*当此处给ptr赋值的时候可以看到ptr　的值是不可以被修改的。
    * 会报，read-only varialbe is not assignable 
    */
   //ptr[0] = "g";

    ptr = ss;
    //ptr[0] = "a";

    printf("%s\n",ptr);
    
    return 0;
}


/*
 *总结 const char *ptr;
 １,从上面的使用来看，const 只是用来修饰 *ptr表示指针指向的值是不可以改变的
 2,ptr 指针指向的地址是可以改变的，当指针ptr指向的地址改变之后，ptr中的值也会改变
 3,const char *ptr 和 char const *ptr　用法相同
 * */
