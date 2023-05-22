#include<stdio.h>
int fact(int n);
void main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);

    printf("%d",fact(n));

}
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}