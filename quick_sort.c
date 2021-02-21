#include<stdio.h>
#include<stdlib.h>
void insert_elements_into_array(int *arr, int size)
{
    printf("Enter the elements into the array : \n");
    for(int i=0; i<size; i++)
        scanf("%d", &arr[i]);
}

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int partition(int *arr, int l, int h)
{
    int i, j, pivot;

    i = l;
    j = h-1;
    pivot = arr[i];

    while(i < j)
    {
        while(arr[i] <= pivot)
            i++;
        
        while(arr[j] > pivot)
            j--;
        
        if(i < j)
            swap(&arr[i], &arr[j]);
    }

    swap(&arr[l], &arr[j]);
    return j;
}
void merge_sort(int *arr, int l, int u)
{
    int mid;

    if(l < u)
    {
        mid = partition(arr, l, u);
        merge_sort(arr, l, mid);
        merge_sort(arr, mid+1, u);
    }
}

void display(int *arr, int size)
{
    printf("Arrays are : ");
    for(int i=0; i<size; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int *arr, size;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int *));
    insert_elements_into_array(arr, size);
    merge_sort(arr, 0, size);
    display(arr, size);
}