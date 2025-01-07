#include<stdio.h>
void sum( int *a, int *b,int *tong)
{
    *tong = *a + *b;
}
int main()
{
    int x= 5, y= 10, tong ;
    sum(&x,&y,&tong);
    printf("tong cua 2 bien la : %d",tong);
    return 0;
}