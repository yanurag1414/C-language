#include<stdio.h>
int sumDigit(int n);
void main(){
    int n;
    printf("Enter a numebr:\n");
    scanf("%d",&n);
    printf("%d",sumDigit(n));
}
int sumDigit(int n)
{
    int rem,sum=0;
    while (n>=0)
    {
        rem = n%10;
        sum += rem;
        n /= 10;


    }
    return sum;
    
}