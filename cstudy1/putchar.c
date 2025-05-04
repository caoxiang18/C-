//getchar()和putchar(char ch)的用法
#include<stdio.h>
int main(){
    char ch = 'a';
    putchar(ch);
    char ch1;
    ch1 = getchar();
    printf("%c\n",ch1);
}
