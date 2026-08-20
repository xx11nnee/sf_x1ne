#include <stdio.h>

void positiveNegativeZero() {
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    if (number > 0)
        printf("Positive\n");
    else if (number < 0)
        printf("Negative\n");
    else
        printf("Zero\n");
}

void ageCheck() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 0 || age > 120)
        printf("Invalid age\n");
    else if (age < 18)
        printf("You are underage\n");
    else
        printf("You are an adult\n");
}

void compareNumbers() {
    int first, second;

    printf("Enter first number: ");
    scanf("%d", &first);

    printf("Enter second number: ");
    scanf("%d", &second);

    if (first > second)
        printf("First number is greater\n");
    else if (second > first)
        printf("Second number is greater\n");
    else
        printf("Numbers are equal\n");
}

void examGrade() {
    int score;

    printf("Enter score: ");
    scanf("%d", &score);

    if (score < 0 || score > 100)
        printf("Invalid score\n");
    else if (score >= 90)
        printf("Grade: A\n");
    else if (score >= 80)
        printf("Grade: B\n");
    else if (score >= 70)
        printf("Grade: C\n");
    else if (score >= 60)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");
}

void calculator() {
    double first, second;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &first);

    printf("Enter operator: ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%lf", &second);

    if (op == '+')
        printf("Result: %.2f\n", first + second);
    else if (op == '-')
        printf("Result: %.2f\n", first - second);
    else if (op == '*')
        printf("Result: %.2f\n", first * second);
    else if (op == '/') {
        if (second == 0)
            printf("Cannot divide by zero\n");
        else
            printf("Result: %.2f\n", first / second);
    } else {
        printf("Invalid operator\n");
    }
}

int main() {
    positiveNegativeZero();
    ageCheck();
    compareNumbers();
    examGrade();
    calculator();

    return 0;
}