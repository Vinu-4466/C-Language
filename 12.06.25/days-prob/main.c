
#include <stdio.h>

int main()
{
    int val;
    printf("Enter a value from (1-7): ");
    scanf("%d", &val);

    if (val == 1)
        printf("Monday");
    else if (val == 2)
        printf("Tuesday");
    else if (val == 3)
        printf("Wednesday");
    else if (val == 4)
        printf("Thursday");
    else if (val == 5)
        printf("Friday");
    else if (val == 6)
        printf("Saturday");
    else if (val == 7)
        printf("Sunday");
    else
        printf("Invalid input");

    return 0;
}
