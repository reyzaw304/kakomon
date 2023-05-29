package R3java;

public class curve {
    public static void main(String[] args) {
        Pen p;
        p = new Pen(0, 0, 0);
        p.J(1);
        System.out.printf("\n----------\n");
        p = new Pen(0, 0, 90);
        p.J(2);
    }
}