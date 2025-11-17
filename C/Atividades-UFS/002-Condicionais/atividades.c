#include "stdio.h"

int main()
{
    /*1. Escrever programa para ler as três notas de
um aluno, calcular a média deste (média
ponderada: primeira nota com peso 1,
segunda nota com peso 2 e terceira nota com
peso 3) e determinar a situação do aluno:
APROVADO – se média igual ou superior a 7;
EM RECUPERAÇÃO – se não aprovado e com
média igual ou superior a 5; REPROVADO –
quando média inferior a 5.*/

printf("1. Insira suas três notas: ");
float nota1, nota2, nota3;
scanf("%f%f%f", &nota1, &nota2, &nota3);
float mediaPonderada= (nota1*1+nota2*2+nota3*3)/(1+2+3);
if (mediaPonderada >= 7) printf("APROVADO\n");
else if (mediaPonderada >= 5) printf("EM RECUPERACAO\n");
else printf("REPROVADO\n");

/*Faça um programa para ler um número
inteiro, positivo de três dígitos, e gerar outro
número formado pelos dígitos invertidos do
número lido. (Ex: Numero Lido = 123;
Numero Gerado = 321) Em seguida informar:
NÚMERO GERADO MAIOR QUE NÚMERO LIDO ou
NÚMERO LIDO MAIOR QUE NÚMERO GERADO, ou
ainda, NÚMERO GERADO IGUAL AO NÚMERO
LIDO.*/

printf("\n2. Insira um numero inteiro de tres digitos: ");
int num;
scanf("%d", &num);
int numInvertido= (num%10)*100 + ((num%100)/10)*10 + ((num%1000)/100); 
if (numInvertido > num) printf("NUMERO GERADO MAIOR QUE NUMERO LIDO.\n");
else if (numInvertido == num) printf("NUMERO GERADO IGUAL AO NUMERO LIDO.\n");
else printf("NUMERO GERADO MENOR QUE NUMERO LIDO.\n");

/*Faça um programa para verificar se
determinado número inteiro lido N é divisível
por A ou B, mas não simultaneamente pelos
dois valores dados. São A e B, bem como N,
dados pelo usuário. Atendendo a condição
estabelecida, emitir mensagem “ATENDE
CONDIÇÃO”; caso contrário, exibir: “NÃO
ATENDE CONDIÇÃO”.*/

int N, A, B;
printf("\n3. Defina um numero N: ");
scanf("%d", &N);
printf("Defina os numeros A e B: ");
scanf("%d%d", &A, &B);

if ((N % A == 0 && N % B != 0) || (N % A != 0 && N % B == 0)) printf("ATENDE CONDICAO\n");
else printf("NAO ATENDE CONDICAO\n");

/*IMC*/
float massa, altura;
printf("\n4. Insira seu peso e altura: ");
scanf("%f%f", &massa, &altura);
float IMC = massa/(altura*altura);
if (IMC >= 40.0) printf("Obesidade Grau III");
else if (IMC >= 35.0) printf("Obesidade Grau II");
else if (IMC >= 30.0) printf("Obesidade Grau I");
else if (IMC >= 25.0) printf("Sobrepeso");
else if (IMC >= 18.5) printf("Saudavel");
else printf("Magreza");

/*Os colegas do filho de Sr. Zé estão sentindo dificuldade para
alugar um ônibus para levá-los ao “Museu da Gente
Sergipana”. Então Sr. Zé resolveu disponibilizar sua Kombi,
mas a depender do número de inscritos, serão necessárias
muitas viagens, e alguns passageiros deverão ir de coletivo.
Considerando que a Kombi tem capacidade para transportar 11
pessoas (fora o motorista – Sr. Zé), escrever um programa em
C, para, dado o número de inscritos no passeio ao Museu,
exibir o número de viagens que devem ser necessárias e o
número de passagens de coletivo. Exemplos: se 22 pessoas –
2 viagens de kombi e 0 passagem em coletivo; se 37 pessoas
– 3 viagens e 4 passagens em coletivo. Vale esclarecer que se
o número de passageiros for inferior a 11, Sr. Zé os levará de
Kombi.*/

const int capacidade= 11;
int inscritos;
printf("\n\n5. Insira a quantidade de inscritos: ");
scanf("%d", &inscritos);
if (inscritos > capacidade) printf("%d viagens de kombi e %d passagens em coletivo.\n", inscritos/capacidade, inscritos%capacidade);
else printf("Uma viagem.\n");

/*Para conter o crescimento da quantidade de gatos
abandonados na UFS, e seus consequentes prejuízos, surgiu o
projeto "CastraçãoSolidária", a partir do qual 4 veterinários
experientes e 1 recém formado decidiram efetuar capturas e
castrações todos os dias úteis, sendo os animais capturados
divididos igualitariamente entre os veterinários experientes, e
havendo sobras (não sendo possível uma divisão exata), o
restante fica sob a responsabilidade do 5o veterinário – recém
formado. Por exemplo, se capturados 22 gatos, cada
veterinário experiente fica com 5 castrações, e o recém
formado fica com 2. Se capturados 19, os experientes ficam
com 4 e o formado recentemente fica com 3. Escrever
programa em C para ler número de gatos capturados e exibir a
distribuição das castrações entre os veterinários. Vale
esclarecer que se capturados 4 ou menos gatos, as castrações
ficam sob a responsabilidade de todos os veterinários, em
conjunto.*/

//4 veterinarios experientes
//1 recem formado
//5 vezes/semana
//animais divididos igualmente entre os 4
//a sobra fica com o recem formado
int gatosCapturados;
const int vetExperientes=4;
printf("\n6. Quantos gatos foram capturados? ");
scanf("%d", &gatosCapturados);
if (gatosCapturados > vetExperientes) printf("%d para cada veterano e %d para o novato", gatosCapturados/vetExperientes, gatosCapturados%vetExperientes);
else printf("Os gatos estão sob responsabilidade do conjunto.");

/*Numa loja web os valores dos fretes são
calculados em conformidade com os totais
das compras. Se valor da compra é até
R$300,00 (inclusive), o frete corresponde a
35% desta; para valores maiores, o frete é
de 20% do valor desta. Escrever programa
para ler valor da compra e exibir valor final,
com frete.*/

float valorCompra, frete;
printf("\n\n7. Qual é o valor da compra? ");
scanf("%f", &valorCompra);
if (valorCompra > 300) frete=valorCompra*0.20;
else frete=valorCompra*0.35;
printf("O total é R$%.2f.\n", valorCompra + frete);

/*Nos parques de diversão, alguns brinquedos tem idade e altura
mínimas para que uma pessoa possa usá-los. O parque Ambrolândia possui 3
brinquedos que possuem essa limitação:*/
int F, I, contador=0;
printf("\n8. Qual é a sua altura e idade? ");
scanf("%d%d", &F, &I);
if (F >= 150 && I >= 12) contador++;
if (F >= 140 && I >= 14) contador++;
if (F >= 170 && I >= 16) contador++;
printf("%d brinquedos\n", contador);


/*Dois times, Cormengo e Flaminthians, participam de um campeonato de futebol, juntamente com
outros times. Cada vitória conta três pontos, cada empate um ponto. Fica melhor classificado no
campeonato um time que tenha mais pontos. Em caso de empate
no número de pontos, fica melhor classificado o time que tiver maior saldo de gols. Se o número de pontos e
o saldo de gols forem os mesmos para os dois times então os dois times estão empatados no campeonato.*/
int Cv, Ce, Cs, Fv, Fe, Fs;
char resultado;
printf("\n9. Insira os dados: ");
scanf("%d%d%d%d%d%d", &Cv, &Ce, &Cs, &Fv, &Fe, &Fs);
int Cpontos=3*Cv+Ce, Fpontos=3*Fv+Fe;

if (Cpontos > Fpontos) resultado = 'C';
else if (Fpontos > Cpontos) resultado = 'F';
else resultado = (Cs > Fs) ? 'C' : (Fs > Cs) ? 'F' : '=';

printf("%c\n", resultado);
}