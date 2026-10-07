#include <stdio.h>
int main()
{
    int age,day;
    printf("Enter your age\n");
    scanf("%d", &age);
     //if()

   /* if(age>=18)//if ()=conditional operator
    {
    printf("they are eligible for vote");
    }
    else
    {
        printf("they are not eligible for vote");
    }

    }*/

//else if

  /*  if (age < 18)
    {
        printf("you can't drvive");
    }

    else if (age >= 18 && age < 25)
    {
        printf("you can drive");
    }
    else
    {
        printf("you can drive but strictly");
    }*/

    //SWITCH STATEMENT 

    printf("enter a number (1-7): ");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default:
        printf("Invalid number 1-7");
    }
    return 0;
}