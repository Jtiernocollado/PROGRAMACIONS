#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 100

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

void calculate(float num1, float num2, char op, char* output) {
    float result;
    switch(op) {
        case '+': 
            result = num1 + num2; 
            sprintf(output, "The result of %.2f + %.2f is %.2f", num1, num2, result); break;
        case '-': 
            result = num1 - num2; 
            sprintf(output, "The result of %.2f - %.2f is %.2f", num1, num2, result); break;
        case '*': 
            result = num1 * num2; 
            sprintf(output, "The result of %.2f * %.2f is %.2f", num1, num2, result); break;
        case '/': 
            if(num2 == 0.0f) 
               sprintf(output, "Error: division by zero");
            else { 
                result = num1 / num2; 
                sprintf(output, "The result of %.2f / %.2f is %.2f", num1, num2, result); }
            break;
        default: 
            sprintf(output, "Error: unknown operator '%c'", op); break;
    }
}

// Función principal opcionalmente interactiva
void runCalculator(int interactive, float n1, float n2, char op) {
    char output[BUFFER_SIZE];

    float N_1 = n1;
    float N_2 = n2;
    char Operator = op;

    if(interactive) {
        printf("Enter the first number: ");
        scanf("%f", &N_1);
        clear_input_buffer();

        printf("Enter the operator (+, -, *, /): ");
        scanf(" %c", &Operator);
        clear_input_buffer();

        printf("Enter the second number: ");
        scanf("%f", &N_2);
        clear_input_buffer();
    }

    calculate(N_1, N_2, Operator, output);
    
    if(interactive) {
        printf("%s\n", output);
    }
}

int main() {
    // Para debug: no usar scanf, pasar valores directamente
    runCalculator(0, 4.0f, 2.0f, '+');

    // Para ejecución normal con scanf, usar:
    runCalculator(1, 0.0f, 0.0f, '\0');

    return 0;
}