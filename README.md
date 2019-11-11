#shownowtime.c 文件实现了实时显示时间的C文件;

一，字符串的问题;
1,char weak[20] ==> 定义了一个数组，数组是不能直接给赋值的;
比如：switch...case..语句中 weak = "星期一" 会出现：assignment to expression with array type 的错误;

修改方法:
将 char weak[]; 改为　char *weak;
修改后的问题;
weak = "星期一";

此时后报错:
ISO C++11 does not allow conversion from string literal to 'char*';
原因:
１>,系统C11之后当给char * 类型的值，直接赋值的时候，系统认为此值在使用的过程中是不能被任意改变的，所以要加 const;
修改方法:
const char* weak;

遗留点:
１,const char* weak; 和 char* const weak;的区别;

二,switch...case...;
　1,当每个case 后面不加 "break"　语句的时候会一直执行到default 语句;

三,使用的C库函数
  1,time()函数，获取从1970年到现在的秒数，并返回结果，返回的是一个 time_t 类型的长整形;
  2,localtime()　获取time()函数传过来的值，并转换为 struct tm 当中的值;
  3,使用ctime()函数可以直接把当前的秒转化为现在的时间;
  4,gmtime()　时间转换;
  5,asctime(gmtime(&time_t))转化时间;


#问题
1,const char* ptr; char const *ptr;char* const pr;三者之间的区别和用法;
    1>,const char *ptr;和 char const *ptr;是相同的,表示指针指向的值是不可以改变的也就是*ptr;
    2>,char* const ptr;表示指针的地址是不可以进行改变的，但是指针的内容是可以改变的;
2,typdef 和 define 的区别 (提示，两点);
    1>,typedef 类型声明的值或者变量不能进行拓展;
    2>,连续变量声明,typdef 能保证所有的变量名称类型都相同;define 声明的变量无法保证;
3,static 关键字的简单的说明
    1>,修饰变量,表示此变量的值，在此次调用中值是不能改变的;
    2>,修饰函数的时候，表示此函数的作用域仅限于此文件此文件夹中;
4,extern 关键字的作用；
5,register 关键字的作用;
6,break 和 continue 关键字的作用和区别
