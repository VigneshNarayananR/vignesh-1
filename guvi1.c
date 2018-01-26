#include <stdio.h>
int main()
{
    double a;

    printf("Enter a number: ");
    scanf("%lf", &a);

    if (a <= 0.0)
    {
        if (a == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    }
    else
        printf("You entered a positive number.");
    return 0;
}
