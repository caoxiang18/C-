//研究printf函数
/*printf函数称之为格式输出函数,方法名称的最后一个字母f表示format。其功能是按照用户指定的格式,把指定的数据输出到屏幕上
d	*有符号10进制整型
i	有符号10进制整型
u	无符号10进制整型
o	无符号8进制整型
x	无符号16进制整型
X	无符号16进制整型
f	单、双精度浮点数(默认保留6位小数)
e / E	以指数形式输出单、双精度浮点数
g / G	以最短输出宽度,输出单、双精度浮点数
c	*字符
s	*字符串
p	*地址
*/
#include<stdio.h>
int main(){
    int a = 10;
    int b = -10;
    float c = 6.6f;
    double d = 3.1415926;
    double e = 10.10;
    char f = 'a';
    // 有符号整数(可以输出负数)
    printf("a = %d\n", a); // 10
    printf("a = %i\n", a); // 10

    // 无符号整数(不可以输出负数)
    printf("a = %u\n", a); // 10
    printf("b = %u\n", b); // 429496786

    // 无符号八进制整数(不可以输出负数)
    printf("a = %o\n", a); // 12
    printf("b = %o\n", b); // 37777777766

    // 无符号十六进制整数(不可以输出负数)
    printf("a = %x\n", a); // a
    printf("b = %x\n", b); // fffffff6

    // 无符号十六进制整数(不可以输出负数)
    printf("a = %X\n", a); // A
    printf("b = %X\n", b); // FFFFFFF6

    // 单、双精度浮点数(默认保留6位小数)
    printf("c = %f\n", c); // 6.600000
    printf("d = %lf\n", d); // 3.141593

    // 以指数形式输出单、双精度浮点数
    printf("e = %e\n", e); // 1.010000e+001
    printf("e = %E\n", e); // 1.010000E+001
    
    // 以最短输出宽度,输出单、双精度浮点数
    printf("e = %g\n", e); // 10.1
    printf("e = %G\n", e); // 10.1
    
    // 输出字符
    printf("f = %c\n", f); // a

}
