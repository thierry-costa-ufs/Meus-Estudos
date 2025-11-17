public class Main {
	public static void main(String[] args) {
		//Atividade 1
		Pix p1 = new Pix();
		CartaoCredito cc1= new CartaoCredito();
		Dinheiro d1 = new Dinheiro();
		
		Cliente cl1 = new Cliente("José", p1);
		cl1.comprar(150.99);
		System.out.println();
		
		Cliente cl2 = new Cliente("Carlos", d1);
		cl2.comprar(75);
		System.out.println();
		
		Cliente cl3 = new Cliente("João", cc1);
		cl3.comprar(109.50);
		System.out.println();
		
		//Atividade 2
		ProdutoLeaf hk = new ProdutoLeaf("Hollow Knight: Silksong", 59.99);
		ProdutoLeaf ktc= new ProdutoLeaf("Kingdom Two Crowns", 83.68);
		ProdutoComposite fg = new ProdutoComposite("Fardo de Guaraná Jesus");
		
		fg.addProduto(new ProdutoLeaf("Guaraná Jesus", 9.99));
		fg.addProduto(new ProdutoLeaf("Guaraná Jesus", 9.99));
		fg.addProduto(new ProdutoLeaf("Guaraná Jesus", 9.99));
		fg.addProduto(new ProdutoLeaf("Guaraná Jesus", 9.99));
		fg.addProduto(new ProdutoLeaf("Guaraná Jesus", 9.99));
		fg.addProduto(new ProdutoLeaf("Guaraná Jesus", 9.99));
		fg.addProduto(new ProdutoLeaf("Guaraná Jesus", 9.99));
		
		double preco = hk.getPreco();
		System.out.printf("O preço do %s é R$%.2f.\n", hk.getNome(), preco);
		System.out.printf("O preço do %s é R$%.2f.\n", ktc.getNome(), ktc.getPreco());
		System.out.printf("O preço do %s é R$%.2f.\n", fg.getNome(), fg.getPreco());
		
		//Atividade 3
		Cliente cl4 = new Cliente("Clarice", p1);
		cl4.comprar(150.99);
		System.out.println();
		
		Cliente cl5 = new Cliente("Laísla", cc1);
		cl5.comprar(150.99);
		System.out.println();
		
		Cliente cl6 = new Cliente("Thierry", d1);
		cl6.comprar(150.99);
		System.out.println();
		
		ProdutoLeaf ha = new ProdutoLeaf("Hades", 73.99);
		ProdutoLeaf ha2 = new ProdutoLeaf("Hades II", 88.99);
		ProdutoLeaf sv = new ProdutoLeaf("Stardew Valley", 24.99);
		
		ProdutoComposite cha = new ProdutoComposite("Conjunto Hades I & II");
		
		cha.addProduto(ha);
		cha.addProduto(ha2);
		
		
	}
}