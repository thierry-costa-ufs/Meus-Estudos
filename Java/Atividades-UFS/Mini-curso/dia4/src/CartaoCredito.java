
public class CartaoCredito implements MetodoDePagamento{
	@Override
	public String pagar(double valor) {
		return String.format("Pagamento de $%.2f com cartão de crédito.\n", valor);
	}
}
