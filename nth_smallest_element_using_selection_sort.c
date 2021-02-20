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
    int temp  = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int searching_element(int *arr, int size, int element)
{
    int i, j, k;
 
    for(i=0; i < element; i++)
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

    return arr[--i];
}
int main()
{
    int size, *arr, element, result;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int *));
    insert_elements_into_array(arr, size);

    printf("Enter which smallest element to search : ");
    scanf("%d", &element);

    if(element > size)
    {
        printf("OOPS !!!! Size of array is %d\n", size);
    }
    else
    {
        result = searching_element(arr, size, element);
        printf("\n%d Smallest element is %d\n", element,result);
    }

    return 0;
}