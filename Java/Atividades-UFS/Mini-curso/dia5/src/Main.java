package src;

import java.util.Scanner;


public class Main {
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);

        Stock stock1 = new Stock();
        stock1.addToStock(new Product("Guaraná 1L", 5.99, 5,"0123456789"));
        stock1.addToStock(new Product("Coquinha Zero 350ml", 3.99, 5,"0123345678"));

        new Frame(stock1);
        sc.close();
    }
}
