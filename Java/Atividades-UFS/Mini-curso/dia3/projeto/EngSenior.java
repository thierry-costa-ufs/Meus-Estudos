package projeto;

import java.util.Random;

public class EngSenior extends Funcionario{
	public EngSenior(String nome, String matricula, String funcao) {
		super(nome, matricula, funcao);
	}

	@Override
	public double gerarSalario() {
		Random random = new Random();
		double salarioRandom = random.nextDouble(3500) + 4000;
		return salarioRandom;
	}
}
