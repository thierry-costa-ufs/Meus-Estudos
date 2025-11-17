public class Ponto{
    //VAR
    private int x, y;
    
    //SET
    public void setY(int num){
        y= num;
    }
    
    public void setX(int num){
        x= num;
    }
    
    //GET
    public int getY(){
        return y;
    }
    
    public int getX(){
        return x;
    }
    
    //CONSTRUCTOR
    public Ponto(){
        x=0; y=0;
    }
}
