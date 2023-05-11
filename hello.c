#include<stdio.h>
void main()
{
    int choice,a,b,ar;
    printf("Enter any two numbers to perform mathematical operations:");
    scanf("%d%d",&a,&b);
    printf("Press 1 to use arithmatic operators: \n press 2 to use increment and decrement operator: \n press 3 to use relational operator: \n press 4 to use logical operators: \n press 5 to use conditional operator: \n press 6 to use bitwise operator:/n");
    scanf("%d",&choice);

    switch (choice)
    {
        // 1 for arithmatic operators
        case 1: 
                printf("Which arithmatic operator you wants to use: \n press 1 for addition: \n press 2 for subtraction: \n press 3 for multiplication: \n press 4 for division: \n press 5 for modulus:/n");
                scanf("%d",&ar);
                switch (ar)
                {
                    case 1: printf("Sum of numbers is: %d",a+b);
                    break;
                    case 2: printf("Subtraction of numbers is: %d",a-b);
                    break;
                    case 3: printf("multiplication of number is: %d",a*b);
                    break;
                    case 4: printf("Division of numbers is: %d",a/b);
                    break;
                    case 5: printf("Modulus of number is %d",a%b);
                    break;
                }
            break;
        case 2: printf("press 1 for increment: \n press 2 for decrement:\n");
                scanf("%d",&ar);
                switch (ar)
                {
                    case 1: printf("%d after increment is:",a++);
                    break;
                    case 2: printf("%d after decrement is:",b--);
                    break;   
                }
            break;
        case 3: printf("press 1 for increment: \n press 2 for decrement:\n");
                scanf("%d",&ar);
                switch (ar)
                {
                    case 1:()
                }

            
    
    }

}