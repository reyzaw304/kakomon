package R4java;

public class Main {
    public static void main(String[] args) {
        double width = 10.0;
        double length = 15.0;
        double height = 20.0;

        System.out.printf("四角形:(横:%.1f* 縦:%.1f)\n", width, length);
        Rectangle rc = new Rectangle(width, length);
        rc.printShape();

        System.out.printf("正方形(辺の長さ%.1f)\n", width);
        Square sq = new Square(width);
        sq.printShape();

        System.out.printf("四角柱(横%.1f* 縦%.1f* 高さ%.1f)\n", width, length, height);
        RectPrism rp = new RectPrism(width, length, height);
        rp.printShape();

        System.out.printf("立方体(辺の長さ%.1f)\n", width);
        Cube cb = new Cube(width);
        cb.printShape();
    }
}
