package aula2;

public class Funcionario {
	private String nome, matricula, funcao;
	private double salario;

	public Funcionario(String nome, String matricula) {
		this.nome = nome;
		this.matricula= matricula;
	}
	
	//GET
		public String getNome() {
			return nome;
		}
		
		public String getMatricula() {
			return matricula;
		}
		
		public String getFuncao() {
			return funcao;
		}
		
		public double getSalario() {
			return salario;
		}
	
	//SET
		public void setNome(String nome) {
			this.nome= nome;
		}
		
		public void setMatricula(String matricula) {
			this.matricula= matricula;
		}
		
		public void setFuncao(String funcao) {
			this.funcao= funcao;
		}
		
		public void setSalario(double salario) {
			if (salario>0) {
				this.salario= salario;
			} else {
				System.out.println("Salário inválido.");
			}
		}
		
	//OTHER
		@Override
		public String toString() {
			return String.format("Nome: %s\nMatricula: %s\nFunção: %s\nSalario: %.2f\n", this.nome, this.matricula, this.funcao, this.salario);
		}
}
