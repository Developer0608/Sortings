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
int searching_element(int *arr, int size, int max)
{
    int i,j;
    for(i=0; i<max; i++)
    {
        for(j=0; j<size-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }

    return arr[j];

}

int main()
{
    int *arr, size, max, element;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int *));

    insert_elements_into_array(arr, size);

    printf("Enter which maximum element to search : ");
    scanf("%d", &max);

    if(max > size)
        printf("Sorry !!!!, there are only %d elements", size);
    
    else
    {
        element = searching_element(arr, size, max);
        printf("%d Highest element is :::: %d\n", max, element);
    }

    return 0;
}
