#include<stdio.h>
#include<stdlib.h>

void Accept(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*");
    }
}

int main()
{

    int iValue=0;

    printf("Enter number\n");   
    scanf("%d",&iValue);

    Accept(iValue);
    

    return EXIT_SUCCESS;
}