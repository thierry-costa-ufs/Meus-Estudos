public class Circulo extends Main{
    double raio;

    public Circulo(double raio){
        this.raio = raio;
    }

    public double calcularArea() {
        return (pi * this.raio * this.raio);
    }

    public double calcularPerimetro() {
        return (2 * pi * this.raio);
    }
}
