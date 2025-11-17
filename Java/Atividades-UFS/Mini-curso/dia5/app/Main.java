package app;

public class Main {
	public static void main(String[] args) {
		Estado q0= new Estado(false);
		Estado q1= new Estado(false);
		Estado q2= new Estado(true);
		
		//q0
		q0.setWhenZero(q1);
		q0.setWhenOne(q0);

		//q1
		q1.setWhenZero(q1);
		q1.setWhenOne(q2);
	
		//q1
		q2.setWhenZero(q1);
		q2.setWhenOne(q0);
		
		//Aplicando
		compute(q0, "0010011");
		compute(q0, "1101100");
		compute(q0, "1101010");
		compute(q0, "1010101");
	}
	
	public static void compute(Estado initialState, String word) {
		Estado currentState = initialState;
		
		for (char c : word.toCharArray()) {
			currentState = (c == '0') ? currentState.getWhenZero() : currentState.getWhenOne();
		}
		
		if (currentState.getIsStateAcc()) System.out.printf("O autômato ACEITA a palavra %s.\n", word);
		else System.out.printf("O autômato REJEITA a palavra %s.\n", word);
		
	}
}
