public class WalkerMain {
    static char[] command1= {'f','r','f','l','l'};
    static char[] command1= {'f','l','l','l','l'};
    
    public static void main(String[ ] args) {
        Walker ml = new Walker(1,1'u',1);
        Walker m2 = new Walker(3,3,'r',2);
        
        printPosition(m1,m2);
        
        for(int i=0; i<command1.length && command2.length; /*[A] */) {
            m1.Move(command1[1]);
            m1.Move(command2[1]);
            printPosition(m1,m2);
        }
    }
    
    private static void printPosition(Walker w1、 Walker w2) {
        double d=Math.sqrt(/* [B] */)
        
        System.out.printf("(%d,%d) - (%d,%d) %2.2f￥n", w1.x, w1.y, w2.x, w2.y,d);
    }
}