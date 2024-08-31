#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num1 = get_int("Give me a whole number: ");
    int num2 = get_int("Give me another whole number: ");
    float float1 = get_float("Give me a decimal number: ");
    float float2 = get_float("Give me another decimal number: ");
    string name = get_string("What's your name? ");



    printf("%d plus %f is %f\n", num1, float2, num1+float2);
    printf("%f minus %d is %f\n", float1, num1, float1-num1);
    printf("%d times %d is %d\n", num1, num2, num1*num2);
    printf("%f divided by %f is %f\n", float1, float2, float1/float2);
    printf("%d MOD %d is %d\n", num1, num2, num1%num2);
    printf("Congratulations %s\n", name);

}
