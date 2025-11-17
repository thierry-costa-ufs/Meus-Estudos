package projeto;

import java.util.Random;

public class EngJun extends Funcionario{
	public EngJun(String nome, String matricula, String funcao) {
		super(nome, matricula, funcao);
	}

	@Override
	public double gerarSalario() {
		Random random = new Random();
		double salarioRandom = random.nextDouble(1500) + 1000;
		return salarioRandom;
	}
}
