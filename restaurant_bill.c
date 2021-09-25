//I used three libraries to create this program. #include <stdlib.h> allows us to generate a random number,
//#include <time.h> allows us to create a time stamp everytime the program is run,
// #include <stdio.h> allows us to use the input output statements. In the main method I declared and assigned
//the tax and tip variables. I used srand((unsigned)time(&t)) so that a random meal can
//be generated every time the program is run. I used if and else if statements which would print out a meal and it's
//price details depending on the random number generated. For each if/else if statement I declared and assigned the mealCost, taxAmount, and tipAmount variables.
//For the taxAmount and tipAmount variables I called functions that would calculate the tax and tip. I printed these
//details as placeholders in the printf statement. FOr the total bill print statement I used a function call called calcTotalBill (which would calulcate the total
//bill) as a placeholder.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float calcTaxAmount(float tax, float mealCost)
{
    float taxAmount = mealCost * tax;
    return taxAmount;
}

float calcTipAmount(float tip, float mealCost)
{
    float tipAmount = mealCost * tip;
    return tipAmount;
}

float calcTotalBill(float mealCost, float taxAmount, float tipAmount)
{
    float totalBill = mealCost + taxAmount + tipAmount;
    return totalBill;
}

int main()
{
    const float tax = 0.0725;
    const float tip = 0.15;
    time_t t;

    srand((unsigned)time(&t));

    int randomMeal = rand() % 4;
    if (randomMeal == 0)
    {
        const float mealCost = 9.95;
        const float taxAmount = calcTaxAmount(tax, mealCost);
        const float tipAmount = calcTipAmount(tip, mealCost);
        printf("Meal: Salad\n");
        printf("Meal Cost: %f\n", mealCost);
        printf("Tax Amount (%f%%): $%f\n", tax * 100, taxAmount);
        printf("Tip Amount (%f%%): $%f\n", tip * 100, tipAmount);
        printf("Total Bill: $%f\n", calcTotalBill(mealCost, taxAmount, tipAmount));
    }
    else if (randomMeal == 1)
    {
        const float mealCost = 4.55;
        const float taxAmount = calcTaxAmount(tax, mealCost);
        const float tipAmount = calcTipAmount(tip, mealCost);
        printf("Meal: Soup\n");
        printf("Meal Cost: %f\n", mealCost);
        printf("Tax Amount (%f%%): $%f\n", tax * 100, taxAmount);
        printf("Tip Amount (%f%%): $%f\n", tip * 100, tipAmount);
        printf("Total Bill: $%f\n", calcTotalBill(mealCost, taxAmount, tipAmount));
    }
    else if (randomMeal == 2)
    {
        const float mealCost = 13.25;
        const float taxAmount = calcTaxAmount(tax, mealCost);
        const float tipAmount = calcTipAmount(tip, mealCost);
        printf("Meal: Sandwich\n");
        printf("Meal Cost: %f\n", mealCost);
        printf("Tax Amount (%f%%): $%f\n", tax * 100, taxAmount);
        printf("Tip Amount (%f%%): $%f\n", tip * 100, tipAmount);
        printf("Total Bill: $%f\n", calcTotalBill(mealCost, taxAmount, tipAmount));
    }
    else if (randomMeal == 3)
    {
        const float mealCost = 22.35;
        const float taxAmount = calcTaxAmount(tax, mealCost);
        const float tipAmount = calcTipAmount(tip, mealCost);
        printf("Meal: Pizza\n");
        printf("Meal Cost: %f\n", mealCost);
        printf("Tax Amount (%f%%): $%f\n", tax * 100, taxAmount);
        printf("Tip Amount (%f%%): $%f\n", tip * 100, tipAmount);
        printf("Total Bill: $%f\n", calcTotalBill(mealCost, taxAmount, tipAmount));
    }

    return 0;
}
