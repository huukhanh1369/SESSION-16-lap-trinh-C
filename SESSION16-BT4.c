#include<stdio.h>
void printArray(int *arr, int size)
{
    for( int i = 0; i < size; i++ )
    {
        printf("array[%d] : %d\n",i,*(arr+i));
    }
}
int main()
{
    int array[]={1,2,3,4,5,6,7,8,9};
    int size = sizeof array / sizeof(int);
    printArray(array,size);
    return 0;
}