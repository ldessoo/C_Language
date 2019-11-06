#shownowtime.c 文件实现了实时显示时间的C文件

一，字符串的问题
1,char weak[20] ==> 定义了一个数组，数组是不能直接给赋值的
比如：switch...case..语句中 weak = "星期一" 会出现：assignment to expression with array type 的错误

修改方法：
将 char weak[]; 改为　char *weak;
修改后的问题
weak = "星期一"

此时后报错: 
ISO C++11 does not allow conversion from string literal to 'char*'
原因：
１>,系统C11之后当给char * 类型的值，直接赋值的时候，系统认为此值在使用的过程中是不能被任意改变的，所以要加 const 
修改方法:
const char* weak;

遗留点：
１,const char* weak; 和 char* const weak;的区别



二,switch...case...
　1,当每个case 后面不加 "break"　语句的时候会一直执行到default 语句

三,使用的C库函数
  1,time()函数，获取从1970年到现在的秒数，并返回结果，返回的是一个 time_t 类型的长整形
  2,localtime()　获取time()函数传过来的值，并转换为 struct tm 当中的值

