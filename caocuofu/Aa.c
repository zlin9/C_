# include<stdio.h>

// 问题在于补充getchar的用法；
// " %c"的方法，拥有跳过下一个字符之前的所有的空白字符的效果；
void function(char arr[]);  //void function(char *arr); 两种传参方式都可以；

int main()
{
    char arr[3];

    for(int i = 0; i<3; i++)
    {
        scanf(" %c", &arr[i]);
    }

    getchar(); // 读取并丢弃换行符

    function(arr);

    return 0; 
}

void function(char arr[])
{
    for(int i=0; i<3; i++)
    {
        if(arr[i]<='Z' && arr[i]>='A')
        {
            arr[i] = arr[i] + 32;
        }
        else
        {
            arr[i] = arr[i] - 32;
        }
    }

    for(int i=0; i<3; i++)
    {
        printf("%c\n", arr[i]);
    }
}