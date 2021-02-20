/*
    insertion sort starts from i=1 and then compare itself with the left elements from j = i-1.
    this sorting technique is best for linklist
*/

#include<stdio.h>
#include<stdlib.h>

void insert_element_into_array(int *arr, int size)
{
    printf("Enter the elements into the array : ");
    for(int i=0; i<size; i++)
        scanf("%d", &arr[i]);

}

void insertion_sorting(int *arr, int size)
{
    for(int i=1; i<size; i++)
    {
        int j = i-1;
        int x = arr[i];
        while(j > -1 && (arr[j] > x))
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = x;
    }
}

void display_array(int *arr, int size)
{
    printf("Displaying the elements of the array : ");
    for(int i=0; i<size; i++)
        printf("%d ", arr[i]);
    
}
int main()
{
    int *arr, size; 

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int *));

    insert_element_into_array(arr, size);
    insertion_sorting(arr, size);
    display_array(arr, size);

    printf("\n");
    return 0;
}