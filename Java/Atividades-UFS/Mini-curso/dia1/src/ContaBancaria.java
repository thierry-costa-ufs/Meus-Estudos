public class ContaBancaria {
    String nome;
    String numConta;
    double saldo;

    public ContaBancaria(String nome, String numConta, double saldo){
        this.nome = nome;
        this.numConta = numConta;
        this.saldo = saldo;
    }

    public void depositar(double valor) {
        this.saldo += valor;
    }

    public void sacar(double valor) {
        this.saldo -= valor;
    }

    public double consultarSaldo() {
        return this.saldo;
    }
}
