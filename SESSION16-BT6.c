#include<stdio.h>
int findValue(int *arr, int value )
{
    for ( int i = 0; i < 9; i++ )
    {
        if ( *(arr+i)== value )
            return i;
    }
    return -1;
}

int main()
{
    int x;
    int array[]={1,2,3,4,5,6,7,8,9};
    printf("nhap vao so ban muon tim : ");
    scanf("%d",&x);
    int pos = findValue(array, x);
    if ( pos == -1 )
    {
        printf("khong có gia tri %d trong mang",x);
    }
    else
    {
    printf("vi tri cua %d trong mang la : %d",x,pos );
    }
    return 0;
}