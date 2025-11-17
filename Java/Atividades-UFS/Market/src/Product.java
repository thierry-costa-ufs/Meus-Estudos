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

    public int getQuantity() {return quantity;}

    @Override
    public String toString() {
        return String.format("Name: %s;\nPrice: R$%.2f;\nID: %s.\n", name, price, barCode);
    }
}
