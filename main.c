#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

char LinearSearch(int* arr, int data)
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        if (arr[i] == data)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[SIZE];
    int i;
    int x;
    for (i = 0; i < SIZE; i++)
    {
        printf("Enter the element no %d\n", i);
        scanf("%d", &x);
        arr[i] = x;
    }
    printf("Enter the data to search\n");
    int data;
    scanf("%d", &data);
    char res = LinearSearch(arr, data);
    if (res == -1)
    {
        printf("The element not found!\n");
    }
    else
    {
        printf("The element index = %d\n", res);
    }
}
