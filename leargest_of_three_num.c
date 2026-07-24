#include<stdio.h>

int main()
{
    int A,B,C;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d",&A,&B,&C);

    if(A>=B && A>=C)
    {
        printf("Leargest is %d \n",A);
    }
    else if(B>=A && B>=C){
    printf("Leargest is %d \n",B);
    }
    else{
        printf("Leargest is %d",C);
    }
    return 0;
}