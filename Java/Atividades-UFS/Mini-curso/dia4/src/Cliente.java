public class Cliente {
	private String nome;
	private MetodoDePagamento carteira;
	
	public Cliente(String nome, MetodoDePagamento carteira) {
		this.nome= nome;
		this.carteira= carteira;
	}
	
	public String getNome() {
		return nome;
	}
	
	public void comprar(double valor) {
		System.out.printf("%s está realizando um pagamento...\n%s", getNome(), carteira.pagar(valor));
	}
}