package projeto;
import java.util.Random;

public class AssistAdmin extends Funcionario{
	public AssistAdmin(String nome, String matricula, String funcao) {
		super(nome, matricula, funcao);
	}

	@Override
	public double gerarSalario() {
		Random random = new Random();
		double salarioRandom = random.nextDouble(1000) + 500;
		return salarioRandom;
	}
}