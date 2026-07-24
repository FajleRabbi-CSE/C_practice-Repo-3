#include<stdio.h>

int main()
{
    int num,sum = 0;
    printf("Enter the value of N: ");
    scanf("%d",&num);

    for(int i=1; i<=num; i++){
        sum = sum + i;
    }
    printf("sum =%d \n",sum);
    return 0;
}