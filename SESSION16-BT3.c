#include<stdio.h>
int sum( int *a, int *b)
{
    return *a + *b;
}
int main()
{
    int x= 5, y= 10;
    int result = sum(&x,&y);
    printf("tong cua 2 bien la : %d",result);
    return 0;
}