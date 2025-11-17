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

    public String getStockItems() {
        StringBuilder sb= new StringBuilder();
        for (Product product : stock) {
            sb.append(product.toString()).append("\n");
        }
        return sb.toString();
    }

    public Product getProduct(String name){
        for(Product product : stock) {
            if (name.equals(product.getName())) {
                return product;
            }
        }
        return null;
    }

    public Object[][] toTableData() {
        Object[][] data= new Object[stock.size()][3];
        for (int i=0; i < stock.size(); i++) {
            Product p= stock.get(i);
            data[i][0]= p.getName();
            data[i][1]= p.getPrice();
            data[i][2]= p.getQuantity();
        }
        return data;
    }
}