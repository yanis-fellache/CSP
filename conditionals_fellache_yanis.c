#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num_pizza = get_float("How many pizzas is there? ");
    int num_slices = get_int("How many slices in each pizza? ");
    int num_people = get_int("How many people are here? ");


    if ((num_pizza * num_slices < num_people) || (num_pizza * num_slices == 0)){
        printf("Not enough slices for everyone.\n");
    }
    else if ((num_pizza * num_slices == num_people) || (num_pizza * num_slices % num_people == 0)) {
        printf("Everyone will have the same amount of slices.\n");
    }
    else {
        printf("Everyone will have at least one slice.\n");
    }


}
