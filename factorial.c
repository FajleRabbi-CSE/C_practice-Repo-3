#include<stdio.h>

int main()
{
    int num;
    long long fact = 1;
    
    printf("Enter the Numbers: ");
    scanf("%d",&num);

    for(int i = 1; i <= num; i++){
        fact = fact * i;
    }
    printf("Factorial is %lld \n",fact);
    return 0;
}