#include<stdio.h>
int main()
{
    int x,s=0,a,y;
    printf("enter the value");
    scanf("%d",&x);
    y=x;
    while (x>0)
    {
        a=x%10;
        s=s+a*a*a;
        x=x/10;
    }
    if(y==s)
    {
        printf("amstrong");
    }
    else
    {
        printf("not amstrong");
    }
    }
    
    
    
    
    
    
