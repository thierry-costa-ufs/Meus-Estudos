package src;

public class Product {
    private String name, barCode;
    private double price;
    private int quantity;

    public Product(String name, double price, int quantity, String barCode) {
        this.name= name;
        this.price= price;
        this.quantity= quantity;
        this.barCode= barCode;
    }

    public double getPrice() {
        return price;
    }

    public String getName() {
        return name;
    }

    @Override
    public String toString() {
        return String.format("%s: R$%.2f, %s.\n", name, price, barCode);
    }
}
