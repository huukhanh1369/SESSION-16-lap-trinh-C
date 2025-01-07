#include<stdio.h>
void printArray(int *arr, int size)
{
    for( int i = 0; i < size; i++ )
    {
        printf("array[%d] : %d\n",i,*(arr+i));
    }
}

void sortArray(int *arr,int size)
{
    for (int i = 0 ; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            int *m = &arr[j];
            int *n = &arr[j+1];
            if (*m > *n)
            {
                int temp =*m;
                *m = *n;
                *n = temp;
            }
        }
    }
}

int main()
{
    int array[]={1,5,8,9,8,6,4,2};
    int size = sizeof array / sizeof(int);
    printf("truoc khi sap xep\n");
    printArray(array,size);
    printf("\n");
    printf("sau khi sap xep\n");
    sortArray(array,size);
    printArray(array,size);
    return 0;
}