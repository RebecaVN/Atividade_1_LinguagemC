// Elaborar um programa em Linguagem C que calcule e mostre o valor total da compra de três DVDs. 

#include <stdio.h>
#include <locale.h>

int main() {
    float valor, total;
    
    // Recebe o preço do DVD
    printf("Digite o valor do DVD: R$ ");
    scanf("%f", &valor);
    
    // Calcula o total da compra
    total = valor * 3;
    
    // Exibe o valor total da compra
    printf("Valor total da compra: R$ %.2f\n", total);
    
    return 0;
}


