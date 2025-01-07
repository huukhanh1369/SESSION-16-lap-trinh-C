#include<stdio.h>
int main ()
{

    int a = 10;
    int *ptr = &a;
    printf("gia tri cua a la : %d\n",a);
    printf("dia chi cua bien a la : %p\n", &a);
    printf("gia tri cua a bang con tro la : %d\n", *ptr);
    printf("dia chi cua bien a bang con tro la : %p\n", ptr);
    return 0;
}