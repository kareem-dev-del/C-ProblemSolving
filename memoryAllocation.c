#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 2;
    int count = 0;
    float sum=0;

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
        sum+=num;
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


    printf("step(1): count of number: %d ",count);

    int max=arr[0];
    int min=arr[1];
      for (int  i = 0; i < count; i++)
      {
        if (arr[i] > max)
           max=arr[i];
        
       else
         min=arr[i];  
      }
       printf("step(2): Large number of array: %d ",max);
       printf("step(3): Small number of array: %d ",min);

      float result
      


    // printf("\nYou entered:\n");
    // for (int i = 0; i < count; i++)
    // {
    //     printf("%d ", arr[i]);
    // }




    free(arr);

    return 0;
}