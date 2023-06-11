package R4java;

public class Rectangle implements shape2D {
    protected double width;
    protected double length;

    public Rectangle(double width, double length) {
        this.width = width;
        this.length = length;
    }

    public void printShape() {
        System.out.printf("面積:%.1f 外周:%.1f\n\n", this.getArea(), this.getPerimeter());
    }

    public double getPerimeter() {
        return (width + length) * 2;
    }

    public double getArea() {
        return width * length;
    }
}
