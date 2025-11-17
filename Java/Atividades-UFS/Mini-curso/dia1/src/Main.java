import java.util.Locale;

public class Main {
    //Constants
    public static final double pi= 3.14;

    public static void main(String[] args) {
        //Hello World
        System.out.print("Hello world!");

        //Set Dot instead of Comma
        Locale.setDefault(Locale.US);

        //Aluno Object
        Aluno a1= new Aluno("Ricardo", 10.0, 5.7);
        double media = a1.calcularMedia();
        System.out.printf("\n\nAluno:\nNome: %s.\nMédia do aluno: %.2f.", a1.nome, media);

        //Circulo Object
        Circulo c1= new Circulo(5);
        double area = c1.calcularArea();
        double perimetro = c1.calcularPerimetro();
        System.out.printf("\n\nCírculo:\nÁrea: %.2f.\nPerímetro: %.2f.", area, perimetro);

        //Pessoa Object
        Pessoa pe1= new Pessoa("João", 70.0, 1.7);
        double imc= pe1.calcularIMC();
        System.out.printf("%n%nIMC: %.2f", imc);

        //Produto Object
        Produto pr1= new Produto("Leite", 4.20, 6);
        double valorTotal= pr1.calcularValorTotal();
        System.out.printf("%n%nValor em estoque: R$%.2f", valorTotal);
        pr1.aplicarDesconto(0.1);
        System.out.printf("%nDesconto aplicado!");
        valorTotal= pr1.calcularValorTotal();
        System.out.printf("%nNovo valor em estoque: R$%.2f", valorTotal);

        //ContaBancaria Object
        ContaBancaria cb1= new ContaBancaria("Pedro", "1928", 100.0);
        double saldo= cb1.consultarSaldo();
        System.out.printf("%n%nR$%.2f", saldo);
        cb1.depositar(50.0);
        System.out.printf("%nDepósito Concluído!");
        saldo= cb1.consultarSaldo();
        System.out.printf("%nNovo saldo: R$%.2f", saldo);
        cb1.sacar(20.0);
        System.out.printf("%nSaque Concluído!");
        saldo= cb1.consultarSaldo();
        System.out.printf("%nNovo saldo: R$%.2f", saldo);

        //Carro Object
        Carro ca1= new Carro("Uno", 1999, 70);
        double velocidade= ca1.consultarVelocidade();
        System.out.printf("%n%nVelocidade atual: %.2f", velocidade);
        ca1.acelerar(50.0);
        System.out.printf("%nVocê acelerou!");
        velocidade= ca1.consultarVelocidade();
        System.out.printf("%nNova velocidade: %.2f", velocidade);
        ca1.frear(20.0);
        System.out.printf("%nVocê freou!");
        velocidade= ca1.consultarVelocidade();
        System.out.printf("%nNova velocidade: %.2f", velocidade);
        ca1.frear(100.0);
        System.out.printf("%nVocê freou!");
        velocidade= ca1.consultarVelocidade();
        System.out.printf("%nNova velocidade: %.2f", velocidade);
    }
}