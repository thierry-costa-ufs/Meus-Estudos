#include <stdio.h>

int main(){
/*
1. Crie um programa em C que armazene as duas primeiras notas de um aluno em variáveis (nota1=5 e nota2=7 e exiba a nota que o aluno precisa obter na 3a prova para ficar com nota 5..*/
int nota1, nota2;
printf("1. Insira as duas primeiras notas: ");
scanf("%d%d", &nota1, &nota2);
printf("Você precisa tirar %d na última prova.\n", 15-(nota1+nota2));

/*
2. Desenvolva um programa em C que calcule a área de um retângulo. Defina previamente os valores da base (8.5 metros) e altura (4.2 metros), calcule a área e exiba o resultado com uma mensagem adequada. */
float baseRet, alturaRet;
printf("\n2. Insira a base e altura do retângulo: ");
scanf("%f%f", &baseRet, &alturaRet);
float area=baseRet*alturaRet;
printf("\nA área do retângulo mede %.1fm².\n", area);

/*
3. Desenvolva um programa em C que converta uma temperatura previamente definida de Celsius para Fahrenheit e Kelvin. Use o valor de 25°C, faça as conversões e exiba os três valores de temperatura com suas respectivas unidades.Considerar: Fahrenheit = (Celsius × 9/5) + 32 e Kelvin = Celsius + 273.15.*/
int celsius;
printf("\n3. Insira a temperatura em Celsius: ");
scanf("%d", &celsius);
int fahrenheit= (celsius*9/5)+32, kelvin= celsius+273.15;
printf("Temperatura em Celsius: %d°C", celsius);
printf("\nTemperatura em Fahrenheit: %d°F", fahrenheit);
printf("\nTemperatura em Kelvin: %d°K\n", kelvin);

/*
4. Crie um programa em C que calcule o IMC (Índice de Massa Corporal) de uma pessoa. Defina previamente o peso (70 kg) e a altura (1.75 m), calcule o IMC usando a fórmula IMC = peso / (altura × altura) e exiba o nome da pessoa, peso, altura e o valor do IMC calculado.*/
char nome[6]= "Maria";
int peso;
float alturaPessoa;
printf("\nInsira seu peso e altura(kg e metros): ");
scanf("%d%f", &peso, &alturaPessoa);
float IMC= peso/(alturaPessoa*alturaPessoa);
printf("\n4. Nome: %s.\nPeso: %dkg.\nAltura: %.2fm.\nIMC: %.2f.\n", nome, peso, alturaPessoa, IMC);

/*
5.Desenvolva um programa em C que calcule o salário líquido de um funcionário. Defina previamente o nome do funcionário, o salário bruto (R$ 3500,00), o percentual de desconto do INSS (11%) e o percentual de desconto do Imposto de Renda (7,5%). Calcule os valores dos descontos, o salário líquido e exiba um demonstrativo completo com todas essas informações formatadas.Fórmulas:
Desconto INSS = Salário Bruto × (percentual INSS / 100)
Desconto IR = Salário Bruto × (percentual IR / 100)
Salário Líquido = Salário Bruto - Desconto INSS - Desconto IR*/
char nomeFuncionario[30];
printf("\nQual eh o seu nome? ");
scanf("%s", nomeFuncionario);
float salarioBruto;
printf("Qual eh o seu salario bruto? ");
scanf("%f", &salarioBruto);
float inssPercentual, irPercentual;
printf("Quais são os descontos de INSS E IR(em decimal)? ");
scanf("%f%f", &inssPercentual, &irPercentual);
float descontoINSS=salarioBruto*inssPercentual, descontoIR=salarioBruto*irPercentual;
float salarioLiquido = salarioBruto - descontoINSS - descontoIR;
printf("\n5. Salário Bruto: %.2f.\n", salarioBruto);
printf("Desconto percentual do INSS: %.0f porcento.\n", inssPercentual*100);
printf("Desconto percentual do IR: %.0f porcento.\n", irPercentual*100);
printf("Desconto total do INSS: %.2f.\n", descontoINSS);
printf("Desconto total do IR: %.2f.\n", descontoIR);
printf("Salário líquido: %.2f.\n", salarioLiquido);
}