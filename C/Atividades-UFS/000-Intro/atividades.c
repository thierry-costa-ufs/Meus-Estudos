#include <stdio.h>

int main(){
/*
1. Crie um programa em C que armazene as duas primeiras notas de um aluno em variáveis (nota1=5 e nota2=7 e exiba a nota que o aluno precisa obter na 3a prova para ficar com nota 5..*/

const int nota1=5, nota2=7;
printf("1. Você precisa tirar %d na última prova.\n\n", 15-(nota1+nota2));

/*
2. Desenvolva um programa em C que calcule a área de um retângulo. Defina previamente os valores da base (8.5 metros) e altura (4.2 metros), calcule a área e exiba o resultado com uma mensagem adequada. */

const float baseRet=8.5, alturaRet=4.2;
float area=baseRet*alturaRet;
printf("\n2. A área do retângulo mede %.1fm².\n\n", area);

/*
3. Desenvolva um programa em C que converta uma temperatura previamente definida de Celsius para Fahrenheit e Kelvin. Use o valor de 25°C, faça as conversões e exiba os três valores de temperatura com suas respectivas unidades.Considerar: Fahrenheit = (Celsius × 9/5) + 32 e Kelvin = Celsius + 273.15.*/

const int celsius=25;
int fahrenheit= (celsius*9/5)+32;
int kelvin= celsius+273.15;
printf("\n3. Temperatura em Celsius: %d°C", celsius);
printf("\nTemperatura em Fahrenheit: %d°F", fahrenheit);
printf("\nTemperatura em Kelvin: %d°K\n\n", kelvin);

/*
4. Crie um programa em C que calcule o IMC (Índice de Massa Corporal) de uma pessoa. Defina previamente o peso (70 kg) e a altura (1.75 m), calcule o IMC usando a fórmula IMC = peso / (altura × altura) e exiba o nome da pessoa, peso, altura e o valor do IMC calculado.*/

const char nome[6]= "Maria";
const int peso=70;
const float alturaPessoa= 1.75;
float IMC= peso/(alturaPessoa*alturaPessoa);
printf("\n4. Nome: %s.\nPeso: %dkg.\nAltura: %.2fm.\nIMC: %.2f.\n\n", nome, peso, alturaPessoa, IMC);

/*
5.Desenvolva um programa em C que calcule o salário líquido de um funcionário. Defina previamente o nome do funcionário, o salário bruto (R$ 3500,00), o percentual de desconto do INSS (11%) e o percentual de desconto do Imposto de Renda (7,5%). Calcule os valores dos descontos, o salário líquido e exiba um demonstrativo completo com todas essas informações formatadas.Fórmulas:
Desconto INSS = Salário Bruto × (percentual INSS / 100)
Desconto IR = Salário Bruto × (percentual IR / 100)
Salário Líquido = Salário Bruto - Desconto INSS - Desconto IR*/
const char nomeFuncionario[4]= "Joao";
const float salarioBruto=3500.00, inssPercentual=0.11, irPercentual=0.075;
float descontoINSS= salarioBruto*inssPercentual, descontoIR= salarioBruto*irPercentual;
float salarioLiquido = salarioBruto - descontoINSS - descontoIR;
printf("5. === Folha Salarial ===\n");
printf("Salario Bruto: %.2f\n", salarioBruto);
printf("Desconto INSS: %.2f\n", descontoINSS);
printf("Desconto IR: %.2f\n", descontoIR);
printf("Salario Liquido: %.2f\n", salarioLiquido);
}