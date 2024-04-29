# include <stdio.h>


// 递归思想
int function(int n)
{
    if (n>2)
        return function(n-1) + function(n-2);
    if (n<=2)
        return n;
}

int main()
{
    int n = 0;
    printf("Please input your num\n");
    scanf("%d",&n);
    printf("%d\n", function(n));
    return 0;
}