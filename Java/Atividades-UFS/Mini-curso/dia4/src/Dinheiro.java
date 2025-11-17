
public class Dinheiro implements MetodoDePagamento{
	@Override
	public String pagar(double valor) {
		return String.format("Pagamento de $%.2f realizado em dinheiro.\n", valor);
	}
}
