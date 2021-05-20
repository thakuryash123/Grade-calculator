#include<stdio.h>
main()
{
    int marks;
    printf("Enter your marks out of 100:- \n");
    scanf("%d",&marks);
    switch(marks/10)
    {
    case 10:
    case 9:
        printf("Your grade is A");
        break;
    case 8:
    case 7:
        printf("Your  grade is B");
        break;
     case 6:
        printf("Your grade is C");
        break;
    case 5:
        printf("Your grade is D");
        break;
    default :
        printf("Your are fail");

    }
}
