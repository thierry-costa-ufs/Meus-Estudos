public class Pessoa {
    String nome;
    double peso, altura;

    public Pessoa(String nome, double peso, double altura) {
        this.nome= nome;
        this.peso= peso;
        this.altura= altura;
    }

    public double calcularIMC() {
        return this.peso / (this.altura*this.altura);
    }
}
