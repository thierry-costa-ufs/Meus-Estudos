import java.util.List;
import java.util.ArrayList;

public class ProdutoComposite implements IProduto{
	private String nome;
	private List<IProduto> produtos;
	
	public ProdutoComposite(String nome) {
		this.nome= nome;
		this.produtos= new ArrayList<IProduto>();
	}
	
	public void addProduto(IProduto produto) {
		produtos.add(produto);
	}

	public double getPreco() {
		double soma=0;
		for (IProduto e : produtos) { 
			soma += e.getPreco();
		}
		return soma;
	}
	
	public String getNome() {
		return nome;
	}
}
