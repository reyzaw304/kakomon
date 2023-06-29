public class Walker extends Man {
    public Walker(int x, int y, char d, int speed) {
        super(x, y, speed);
        this.direction = d;
    }

    public void Move(char d) {
        switch (d) {
            case 'f':
                this.Forward();
                break;
            case 'l':
                this.Left();
                break;
            case 'r':
                this.Right();
                break;
        }
    }

    public void Forward() {
        switch (this.direction) {
            case 'u':
                super.Up();
                break;
            case 'l':
                super.Left();
                break;
            case 'd':
                super.Down();
                break;
            case 'r':
                super.Right();
                break;
        }
    }

    public void Left() {
        switch (this.direction) {
            case 'u':
                super.Left();
                break;
            case 'l':
                super.Down();
                break;
            case 'd':
                super.Right();
                break;
            case 'r':
                super.Up();
                break;
        }
    }

    public void Right() {
        switch (this.direction) { // [F]
            case 'u':
                super.Right();
                break;
            case 'l':
                super.Up();
                break;
            case 'd':
                super.Left();
                break;
            case 'r':
                super.Down();
                break;
        }
    }
}