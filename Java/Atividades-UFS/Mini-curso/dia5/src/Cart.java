package src;

import java.util.List;
import java.util.ArrayList;

public class Cart {
    private List<Product> list= new ArrayList<Product>();

    public Cart(){
    }

    public void addToCart(Product product) {
        this.list.add(product);
    }
}
