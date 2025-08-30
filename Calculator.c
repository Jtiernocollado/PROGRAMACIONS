#include <stdio.h>
#include <math.h>

float N_1 = 0.0f;
float N_2 = 0.0f;
char Operator = '\0';
float Result = 0.0f;

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

int main () {

    printf("Enter the first nunmber: ");
    scanf ("%f", &N_1);
    clear_input_buffer();

    printf ("Enter the operator ( +,-,*,/): ");
    scanf(" %c", &Operator);
    clear_input_buffer();
    switch (Operator)
    {
    case '+':
         printf("Give me a second number: ");
         scanf("%f", &N_2);
         Result = N_1 + N_2;
         printf("The result of your operation is %.2f", Result);
         break;

    case '-':
            printf("Give me a second number: ");
            scanf("%f", &N_2);
            Result = N_1 - N_2;
            printf("The result of your operation is %.2f", Result);
            break;

    case '*':
            printf("Give me a second number: ");
            scanf("%f", &N_2);
            Result = N_1 * N_2;
            printf("The result of your operation is %.2f", Result);
            break;

    case '/':
            printf("Give me a second number: ");
            scanf("%f", &N_2);
            Result = N_1 / N_2;
            printf("The result of your operation is %.2f", Result);
            break;
        
    default:
            printf("Please, put an operator (+,-,*,/)");
            getchar();
            scanf("%c", &Operator);
            break;
        }
    
}