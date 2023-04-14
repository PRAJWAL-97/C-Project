//prac 1
#include <stdio.h>
int main() {
    printf("Welcome to converter");
    printf("\n Enter your Euro value : ");
    double euro = 0.0;
    scanf("%lf", &euro);
    const double con = 1.19;
    double dol = euro * con;
    printf("\nAmount = %lf", dol);
    return 0;
}

//prac 2
#include <stdio.h>
int main() {
    printf("Enter 3 integers to calculate their average : ");
    int num1 = 0, num2 = 0, num3 = 0;
    const int count = 3;
    int total = 0;
    double average = 0.0;
    
    scanf("%d %d %d", &num1, &num2, &num3);
    
    total = num1 + num2 + num3;
    average = (double)total / count;
    
    printf("\nAverage is : %lf", average);
    return 0;
}


//prac 3
#include <stdio.h>
int main() {
    printf("Enter the amount in cents : ");
    int cents = 0;
    scanf("%d", &cents);
    int rem = cents;
    int dollars, quaters, dimes, nickels, pennys = 0;
    
    dollars = cents / 100;
    rem = cents % 100;

    quaters = rem / 25;
    rem = rem % 25;

    dimes = rem / 10;
    rem = rem % 10;

    nickels = rem / 5;
    rem = rem % 5;

    pennys = rem;

    printf("Dollars : %d\n", dollars);
    printf("Quaters : %d\n", quaters);
    printf("Dimes   : %d\n", dimes);
    printf("Nickels : %d\n", nickels);
    printf("Pennys  : %d\n", pennys);
    
    return 0;
}
