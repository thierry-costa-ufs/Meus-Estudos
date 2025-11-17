package aula2;

public class Agenda {
	private int dia, mes;
	private String descricao;
	
	public void anotar(int dia, int mes, String descricao) {
		if (validarData(dia, mes)) {
			this.dia= dia;
			this.mes= mes;
			this.descricao= descricao;
		} else System.out.println("Data inválida!");
		
	}
	
	public void exibirAnotacao() {
		if (dia!=0 && mes!=0 && descricao!=null) System.out.printf("%d/%d: %s\n", dia, mes, descricao);
		else System.out.println("Não há eventos cadastrados!");
	}
	
	public boolean validarData(int dia, int mes) {
		//month in [1,12]
		if ((mes >= 1) && (mes <= 12)) {
			//is February
			if (mes == 02) return (dia > 0 && dia <= 28);
			
			//month in interval [1,7]
			else if (mes <= 7) {
				//is even
				if (mes % 2 == 0) return (dia > 0 && dia <= 30);
				//is odd
				else return (dia > 0 && dia <= 31);
			}
	
			//month in interval [8,12]
			else {
				//is even
				if (mes % 2 == 0) return (dia > 0 && dia <= 31);
				//is odd
				else return (dia > 0 && dia <= 30);
			}
		} else return false;
	}
}
