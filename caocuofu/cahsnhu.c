# include <stdio.h>

// 从输入的数组中删除指定的元素；

void function(int arr[], int arr1[])
{
    int j = 0, flag=0;

    for(int i=0; i<=5; i++)
    {
        if (arr[i] != arr1[0])
        {
            flag = 1;
        }

        if(flag==1)
        {
            flag = 0; // 标记归位
            arr[j] = arr[i];
            j = j+1; 
        }
    }  

    for(int i = 0; i < j; i++)  // 需要打印的是前J个元素，故为"i<j";而不是"<=j"
    {
        printf("%d ", arr[i]);     
    } 

}

int main()
{
    int arr3[1];
    int arr2[10];

    printf("Please input\n");
    for(int i = 0; i < 6; i++) 
    {
        scanf("%d", &arr2[i]);
    }
    scanf("%d", &arr3[0]);


    for(int i = 0; i < 6; i++) 
    {
        printf("%d ", arr2[i]);
    }
    printf("\n%d\n", arr3[0]);
    
    function(arr2, arr3);



    return 0;
}
