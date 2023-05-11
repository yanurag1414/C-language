#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to check for prime:");
    scanf("%d",&n);
    if(isPrime(n)==1){
        printf("%d is prime",n);
    }else{
        printf("%d is not prime",n);
    }
    return 0;
}
     int isPrime(int n)
    {
            int i;
        if(n<=1)
        {
            return 0;
        }
        if(n==2 || n==3){
            return 1;
        }
        if(n%2==0 || n%3==0)
        {
            return 0;
        }
        for ( i = 5; i*i <= n; i=i+6)
        {
            if(n%i==0 || n%(i+2)==0)
            {
                return 0;
            }
            
        }
        return 1;
    }

    

