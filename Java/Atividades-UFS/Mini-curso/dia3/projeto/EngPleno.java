package projeto;

import java.util.Random;
public class EngPleno extends Funcionario{
	public EngPleno(String nome, String matricula, String funcao) {
		super(nome, matricula, funcao);
	}

	@Override
	public double gerarSalario() {
		Random random = new Random();
		double salarioRandom = random.nextDouble(2500) + 2000;
		return salarioRandom;
	}
}
