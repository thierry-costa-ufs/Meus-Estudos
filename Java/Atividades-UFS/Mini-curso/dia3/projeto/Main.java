package projeto;

public class Main {
	public static void main(String[] args) {
		AssistAdmin assistente1 = new AssistAdmin("Joao", "12345", "Assist");
		assistente1.setSalario(assistente1.gerarSalario());
		
		EngJun engjun1 = new EngJun("Pedro", "54321", "Eng");
		engjun1.setSalario(engjun1.gerarSalario());
		
		EngPleno engpleno1 = new EngPleno("Lucas", "99999", "Eng");
		engpleno1.setSalario(engpleno1.gerarSalario());
		
		EngSenior engsenior1 = new EngSenior("Erick", "66666", "Eng");
		engsenior1.setSalario(engsenior1.gerarSalario());
		
		Funcionario [] funcionarios = {assistente1, engjun1, engpleno1, engsenior1};
		
		for (Funcionario e: funcionarios) System.out.println(e);
	}
}