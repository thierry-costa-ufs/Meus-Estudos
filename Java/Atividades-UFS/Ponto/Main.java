public class Main{
    public static void main(String[] args){
        //OBJECT
        Ponto ponto1 = new Ponto();
        //SET
        ponto1.setX(5);
        ponto1.setY(7);
        //PRINT
        System.out.printf("(%d,%d)%n", ponto1.getX(), ponto1.getY());
    }
}
