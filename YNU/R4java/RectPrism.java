package R4java;

public class RectPrism implements Shape3D {
    protected double width;
    protected double length;
    protected double height;

    public RectPrism(double width, double length, double height) {
        this.width = width;
        this.length = length;
        this.height = height;
    }

    public void printShape() {
        System.out.printf("体積:%.1f\n\n", this.getVolume());
    }

    public double getVolume() {
        return width * length * height;
    }
}
