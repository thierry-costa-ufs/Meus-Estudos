package aula2;

public class Produto {
	private String nome;
	private double preco;
	private int quantEstoque;
	
	public Produto(String nome) {
		this.nome= nome;
		preco= 0;
		quantEstoque= 0;
	}
	
	public String getNome() {
		return nome;
	}
	
	public double getPreco() {
		return preco;
	}
	
	public int getQuant() {
		return quantEstoque;
	}
	
	public void setPreco(double preco) {
		this.preco= preco;
	}
	
	public void addEstoque(int quantidade) {
		if (quantidade > 0) this.quantEstoque += quantidade;
	}
	
	public boolean rmvEstoque(int quantidade) {
		if (quantidade <= this.quantEstoque) {
			this.quantEstoque -= quantidade; 
			return true;
		}
		else return false;
	}
	
	@Override
	public String toString() {
		return String.format("%s | R$%.2f | %d", nome, preco, quantEstoque);
	}
	
}
