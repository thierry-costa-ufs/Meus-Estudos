package src;

public class Client {
    private String name;
    private Cart cart;
    public Client(String name){
        this.name= name;
        this.cart= new Cart();
    }

    @Override
    public String toString(){
        return String.format("%s: %s", name, cart);
    }
}
