#include<stdio.h>
int rev(int n);
void main(){
    int n;
    printf("Enter a number to print its reverse:\n");
    scanf("%d",&n);
    printf("%d",rev(n));

}
int rev(int n){
    int rnum = 0,rem;
    while (n>=0)
    {
        rem = n%10;
        rnum = 10*rnum+rem;
        n /= 10;
    }
    return rnum;
    
}