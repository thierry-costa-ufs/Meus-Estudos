public class Produto {
    String nome;
    double precoUnitario;
    int qtdEstoque;

    public Produto(String nome, double precoUnitario, int qtdEstoque) {
        this.nome= nome;
        this.precoUnitario= precoUnitario;
        this.qtdEstoque= qtdEstoque;
    }

    public double calcularValorTotal() {
        return precoUnitario*qtdEstoque;
    }

    public void aplicarDesconto(double percentual) {
        this.precoUnitario *= 1-percentual;
    }
}
