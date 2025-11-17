package app;
public class Estado {
	//ATTRIBUTES
		private Estado whenZero, whenOne;
		private boolean isStateAcc;

	//CONSTRUCTOR
		public Estado(boolean isStateAcc) {this.isStateAcc= isStateAcc;}
	
	//GETTERS
		public Estado getWhenZero() {return whenZero;}
	
		public Estado getWhenOne() {return whenOne;}
	
		public boolean getIsStateAcc() {return isStateAcc;}
	
	//SETTERS	
		public void setWhenZero(Estado whenZero) {this.whenZero= whenZero;}

		public void setWhenOne(Estado whenOne) {this.whenOne= whenOne;}
}