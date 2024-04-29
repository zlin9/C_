#include <stdio.h>
#include <math.h>

int function(int a);

int main()
{   

    for(int j = 10000; j<=99999; j++)
    {
        if(function(j) == 1)
        {
            printf("%d ", j);
        }
    }

    return 0;
}

int function(int a)
{
    int left=0, right = 0;
    int res = 0;
    for(int i=4; i>0; i--)
    {
        left = a / (pow(10,i));
        right = a - left * (pow(10,i));
        res = left * right + res;
    }
    
    if(res == a)
        return 1;
}