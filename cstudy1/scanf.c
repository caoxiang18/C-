//scanf函数用于接收键盘输入的内容, 是一个阻塞式函数,程序会停在scanf函数出现的地方, 直到接收到数据才会执行后面的代码
/*基本用法
地址列表项中只能传入变量地址, 变量地址可以通过&符号+变量名称的形式获取*/
#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    printf("%d",number);
    return 0;
}
