
public class ProdutoLeaf implements IProduto{
	private String nome;
	private double preco;
	
	public ProdutoLeaf(String nome, double preco) {
		this.nome= nome;
		this.preco= preco;
	}
	
	public double getPreco() {
		return preco;
	}
	
	public String getNome() {
		return nome;
	}
}
