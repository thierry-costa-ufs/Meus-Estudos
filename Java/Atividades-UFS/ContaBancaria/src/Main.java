public class Main {
    public static void main(String args[]){
        ContaBancaria cb1= new ContaBancaria("José", "12345", "3330");
        cb1.exibirNome();
        cb1.verSaldo();
        cb1.depositar(50);
        cb1.verSaldo();
        cb1.sacar(20);
        cb1.verSaldo();
    }
}
