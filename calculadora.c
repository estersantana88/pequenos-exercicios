#include <stdio.h>

int main() {
    char operador;
    double num1, num2, resultado;
    
    printf("=== CALCULADORA BÁSICA ===\n");
    printf("Operações disponíveis: +, -, *, /\n\n");
    
    // Solicita o primeiro número
    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    
    // Solicita o operador
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);
    
    // Solicita o segundo número
    printf("Digite o segundo número: ");
    scanf("%lf", &num2);
    
    // Realiza o cálculo baseado no operador
    switch(operador) {
        case '+':
            resultado = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, resultado);
            break;
            
        case '-':
            resultado = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, resultado);
            break;
            
        case '*':
            resultado = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, resultado);
            break;
            
        case '/':
            if(num2 != 0) {
                resultado = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, resultado);
            } else {
                printf("Erro: Divisão por zero não é permitida!\n");
            }
            break;
            
        default:
            printf("Erro: Operador inválido! Use apenas +, -, *, /\n");
            break;
    }
    
    return 0;
}