package src;

import java.util.ArrayList;
import java.util.List;

public class Stock {
    private List<Product> stock= new ArrayList<Product>();

    public void addToStock(Product product) {
        this.stock.add(product);
    }

    public void removeFromStock(Product product) {
        if (stock.contains(product))
            this.stock.remove(product);
        else System.out.printf("Produto inválido");
    }

    public double getStockValue() {
        double sum= 0;
        for(Product product : stock) {
            sum += product.getPrice();
        }
        return sum;
    }

    public void getStockItems() {
        for (Product product : stock) {
            System.out.printf("%s", product);
        }
    }

    public Product getProduct(String name){
        for(Product product : stock) {
            if (name.equals(product.getName())) {
                return product;
            }
        }
        return null;
    }
}