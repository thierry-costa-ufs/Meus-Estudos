public class Carro {
    String modelo;
    int ano;
    double velocidadeAtual;

    public Carro(String modelo, int ano, double velocidadeAtual) {
        this.modelo= modelo;
        this.ano= ano;
        this.velocidadeAtual= velocidadeAtual;
    }

    public void acelerar(double valor) {
        this.velocidadeAtual += valor;
    }

    public void frear(double valor) {
        this.velocidadeAtual -= valor;
    }

    public double consultarVelocidade() {
        return this.velocidadeAtual;
    }
}
