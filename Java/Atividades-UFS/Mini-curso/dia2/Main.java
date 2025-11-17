package aula2;

public class Main {
	public static void main(String args[]) {
		//Funcionario Object
		Funcionario f1= new Funcionario("Joao", "12345");
		f1.setFuncao("Zelador");
		f1.setSalario(1400.00);
		System.out.printf("%s", f1);
		
		//Agenda Objects
			//Agenda 1
			Agenda a1= new Agenda();
			System.out.println();
			a1.exibirAnotacao();
			a1.anotar(27, 5, "Meu aniversário!");
			a1.exibirAnotacao();
			
			//Agenda 2
			Agenda a2= new Agenda();
			a1.anotar(4, 11, "Aula de Encapsulamento.");
			a1.exibirAnotacao();
			
		//Produto Objects
			Produto labubu= new Produto("Labubu");
			labubu.setPreco(50);
			labubu.addEstoque(20);
			System.out.println("\n" + labubu);
			
			
	}
}
