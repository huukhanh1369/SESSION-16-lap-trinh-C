#include<stdio.h>
void printArray(int *arr, int size)
{
    for( int i = 0; i < size; i++ )
    {
        printf("%d ",*(arr+i));
    }
}

void newArray(int *arr, int value, int pos)
{
    *(arr+pos) = value;
}

int main()
{
    int array[]={1,2,3,4,5,6,7,8,9};
    int pos, value;
    int size = sizeof array / sizeof(int);
    printf("nhap vi tri muon thay doi : ");
    scanf("%d",&pos);
    if (pos < 0 || pos >= size)
    {
        printf("vi tri khong hop le\n");
        return 1;
    }
    printf(" nhap gia tri muon thay doi : ");
    scanf("%d",&value);

    printf("truoc khi thay doi \n") ;
    printArray(array,size);
    printf("\n");

    newArray(array,value,pos);
    printf("sau khi thay doi \n") ;
    printArray(array,size);  

    return 0;
}