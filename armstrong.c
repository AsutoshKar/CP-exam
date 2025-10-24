//let's write a code to find Armstrong number in c
#include <stdio.h>
#include <math.h>
int main(){
    int num,x, remainder,result=0, n = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    x = num;

    // Count number of digits
    while (x != 0) {
        x= x/10;
        n++;
    }

    x = num;

    // Calculate the sum of the nth powers of its digits
    while (x != 0) {
        remainder = x % 10;
        result=result+ pow(remainder, n);
        x= x/10;
    }

    // Check if the number is an Armstrong number
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}