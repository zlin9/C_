# include <stdio.h>

 // 输入数组中的最高分和最低分的差；
// 两个问题：1、使用输入来定义数组的长度，2、寻找数组中的最大和最小值；
void function(int arr[], int n);

int main()
{
    int n = 0;

    printf("Please input the number of scores:\n");
    scanf("%d", &n);

    int arr[n];
    int max=0;
    int min=0;

    for (int i=0; i<n; i++)
    {
        scanf("%d ", &arr[i]);
        if(arr[i]>=arr[max])
        {
            max = i;
        }
        else if(arr[i] < arr[min])
        {
            min = i;
        }
    }
    printf("%d", arr[max] - arr[min]);
    // function(arr, n);
    return 0;
}

void function(int arr[], int n)
{
    int max = 0; 
    int min = 0; 

    for(int i = 1; i < n; i++)
    {
        if(arr[i] >= arr[max])
        {
            max = i; 
        }
        else if(arr[i] < arr[min])
        {
            min = i; 
        }
    }

    printf("the max is: %d, min is: %d\n", arr[max], arr[min]);
    printf("the result is: %d\n", arr[max] - arr[min]);
}
