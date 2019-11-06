#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
    int i = 10;
    //定义时间 time_t 一个长整形的数据
    time_t t;
    long x;
    int weak_int;
    const char *weak;
    //定义时间结构体
    struct tm *lt;
    //获取当前时间并返回结果
    while(i > 0){
        x = time(&t);
    
        //localtime 将时间转化为当前的时间
        lt = localtime(&t);

        weak_int = lt->tm_wday;
        //获取当前的星期时间    
        switch(weak_int){
            case 1:
                weak = "星期一";
                break;
            case 2:
                weak = "星期二";
                break;
            case 3:
                weak = "星期三";
                break;
            case 4:
                weak = "星期四";
                break;
            case 5:
                weak = "星期五";
                break;
            case 6:
                weak = "星期六";
                break;
            case 7:
                weak = "星期天";
                break;
            default:
                printf("please abtain correct value\n");
                break;
            }

    printf("%d/%02d/%02d %d:%02d:%02d,%s\n",lt->tm_year+1900,lt->tm_mon,lt->tm_mday,lt->tm_hour,lt->tm_min,lt->tm_sec,weak);
    i--;
    sleep(1);
    }

    time_t biggertime = 0x7FFFFFFF;
    printf("%s\n",ctime(&biggertime));

    printf("%s\n",asctime(gmtime(&biggertime)));


    return 0;
}

