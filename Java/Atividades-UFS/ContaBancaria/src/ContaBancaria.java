public class ContaBancaria {
    private String nome, numConta, agencia;
    private double saldo;

    public ContaBancaria(String nome, String numConta, String agencia) {
        this.nome = nome;
        this.numConta = numConta;
        this.agencia = agencia;
        this.saldo= 0;
    }

    public void verSaldo() {
        System.out.printf("Saldo: R$%.2f\n", this.saldo);
    }

    public void depositar(double valor) {
        this.saldo += valor;
        System.out.printf("Depósito concluído!\n");
    }

    public void sacar(double valor) {
        this.saldo -= valor;
        System.out.printf("Saque concluído!\n");
    }

    public void exibirNome() {
        System.out.printf("Nome: %s\n", this.nome);
    }
}
