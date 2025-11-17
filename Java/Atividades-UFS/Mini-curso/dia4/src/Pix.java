public class Pix implements MetodoDePagamento{
	@Override
	public String pagar(double valor) {
		return String.format("Pagamento de $%.2f via Pix.\n", valor);
	}
}
