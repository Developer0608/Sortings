#include<stdio.h>
#include<stdlib.h>
void accept_element_into_array(int *arr, int size)
{
    printf("Enter the elements into the array : ");
    for(int i=0; i<size; i++)
        scanf("%d", &arr[i]);

}

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
void bubble_sorting(int *arr, int size)
{
    int flag;
    for(int i=0; i<size-1; i++)
    {
        flag = 0;
        for(int j=0; j<size-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                flag = 1;
            }
        }

        if (flag == 0)
            break;
    }

}

void display(int *arr, int size)
{
    printf("Displaying the Elements of the Array : ");
    for(int i=0; i<size; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int size, *arr;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int *));
    accept_element_into_array(arr, size);
    bubble_sorting(arr, size);
    display(arr, size);

}