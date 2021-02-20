#include<stdio.h>
#include<stdlib.h>

void insert_into_the_array(int *arr, int size)
{
    printf("Enter the elements into the array:\n");
    for(int i=0; i<size; i++)
        scanf("%d", &arr[i]);

}

void swap(int *num1 , int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
void partition(int *arr, int small, int size)
{
    int i=small,j,pivot;
    j = size-1;
    pivot = arr[small];

    while(i < j)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }

        while(arr[j] >= pivot)
        {
            j--;
        }

        if(i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[small], &arr[j]);
}

void display_array(int *arr, int size)
{
    printf("Displaying array : ");
    for(int i=0; i<size; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int *arr, size;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int *));
    insert_into_the_array(arr, size);

    partition(arr, 0, size);
    display_array(arr, size);
}