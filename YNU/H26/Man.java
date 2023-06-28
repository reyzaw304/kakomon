public class Man {
    public int x;
    public int y;
    private int speed;
    public char direction;

    public Man(int x, int y, int speed) {
        this.x = x;
        this.y = y;
        this.speed = speed;
    }

    protected void Right() {
        this.x = this.x + this.speed;
        this.direction = 'r';
    }
    protected void Up() {
        this.y = this.y + this.speed;
        this.direction = 'y';
    }
    protected void Left() {
        this.x = this.x - this.speed;
        this.direction = 'l';
    }
    protected void Down() {
        // [C]
    }
}