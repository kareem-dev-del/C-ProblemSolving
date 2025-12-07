#include <stdio.h>
#include <stdlib.h>


// Program: Dynamic Array that grows automatically, prints count, min, max, average, and all numbers


int main()
{
    int size = 2;
    int count = 0;
    float sum = 0;

    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL)
    {
        printf("Error: Memory not allocated\n");
        return 1;
    }

    int num;
    printf("Enter numbers (enter -1 to stop):\n");

    while (1)
    {
        scanf("%d", &num);
        sum += num;
        if (num == -1)
            break;

        if (count == size)
        {
            size = size * 2;

            arr = (int *)realloc(arr, size * sizeof(int));
            if (arr == NULL)
            {
                printf("Reallocation failed\n");
                return 1;
            }
        }

        arr[count] = num;
        count++;
    }

    printf("step(1): count of number: %d \n", count);

    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < count; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        else
            min = arr[i];
    }
    printf("step(2): Large number of array: %d \n", max);
    printf("step(3): Small number of array: %d \n", min);

    float result = sum / count;
    printf("step(4): Average number of array: %0.2f \n", result);

    printf("step(5): All numbers of array \n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}