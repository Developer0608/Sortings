/*
    first sorting the smallest element
    selection sort perform the minimum swaps among all the sorting techniques
    nor stable nor adaptive
*/

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

void selection_sort(int *arr, int size)
{
    int i, j,k;

    for(i=0; i<size-1; i++)
    {
        j = k = i;
        while(j < size)
        {
            if(arr[j] < arr[k])
            {
                k = j;
            }
            j++;
        }

        swap(&arr[i], &arr[k]);

    }
}

void display_array(int *arr, int size)
{
    printf("Displaying Array :: ");
    for(int i=0; i<size; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int size, *arr;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int *));

    insert_elements_into_array(arr, size);
    selection_sort(arr, size);

    display_array(arr, size);
}