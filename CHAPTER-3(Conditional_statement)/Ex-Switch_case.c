// WAP for day of a week
#include<stdio.h>
int main()
{
    int day;
    printf("Enter day:");
    scanf("%d",&day);
    switch(day){
        case 1:printf("Monday");
            break;
        case 2:printf("Tuesday");
            break;
        case 3:printf("Wednesday");
            break;
        case 4:printf("Thusday");
            break;
        case 5:printf("Friday");
            break;
        case 6:printf("Saturday");
            break;
        case 7:printf("Sunday");
            break;
        default:printf("Enter valid number .Between 1 to 7");
    }
    return 0;
}