#include <stdio.h>

int main()
{

    float avg,x,y;

    printf("Enter first number: ");
    scanf("%f %f",&x,&y);

    avg = (x+y)/2;

    printf("Average of %.2f and %.2f is: %.2f",x,y,avg);

    return 0;
}
