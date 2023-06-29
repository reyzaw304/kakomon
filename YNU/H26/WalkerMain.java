public class WalkerMain {
    static char[] command1 = { 'f', 'r', 'f', 'l', 'l' };
    static char[] command2 = { 'f', 'l', 'l', 'l', 'l' };

    public static void main(String[] args) {
        Walker m1 = new Walker(1, 1, 'u', 1);
        Walker m2 = new Walker(3, 3, 'r', 2);

        printPosition(m1, m2);

        for (int i = 0; i < command1.length && i < command2.length; i++) { // jawaban
            m1.Move(command1[i]);
            m2.Move(command2[i]);
            printPosition(m1, m2);
        }
    }

    private static void printPosition(Walker w1, Walker w2) {
        double d = Math.sqrt(Math.pow(w1.x - w2.x, 2) + Math.pow(w1.y - w2.y, 2)); // ans

        System.out.printf("(%d,%d) - (%d,%d) %2.2f\n", w1.x, w1.y, w2.x, w2.y, d);
    }
}