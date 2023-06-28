public class Walker extends Man {
    public Walker(int x, int y, char d, int speed) {
        super(x,y,speed);
        this.direction = d;
    }
    public void Move(char d) {
        switch (d) {
            case 'f': // [D].Forward(); break;
            case 'l': // [D].Left(); break;
            case 'r': // [D].Right(); break;
        }
    }
    public void Forward() {
        switch (this.direction) {
            case 'u': // [E].Up(); break;
            case 'l': // [E].Left(); break;
            case 'd': // [E].Down(); break;
            case 'r': // [E].Right(); break;
        }
    }
    public void Left() {
        switch (this.direction) {
            case 'u': // [E].Left(); break;
            case 'l': // [E].Down(); break;
            case 'd': // [E].Right(); break;
            case 'r': // [E].Up(); break;
        }
    }
    public void Right() {
        // [F]
    }
}