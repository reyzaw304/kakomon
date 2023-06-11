package R3java;

public class Pen {
    public int x, y;
    public int d;

    public Pen(int x, int y, int d) {
        this.x = x;
        this.y = y;
        this.d = d;
    }

    public void show() {
        System.out.printf("-->(%d, %d, %d)", this.x, this.y, this.d); // added d to the output
    }

    public void Rotate(int d) {
        this.d = (this.d + d + 360) % 360;
    }

    public void Forward() {
        // d = this.d;
        if (d == 0) {
            this.x = this.x + 1;
        } else if (d == 90) {
            this.y = this.y + 1;
        } else if (d == 180) {
            this.x = this.x - 1;
        } else if (d == 270) {
            this.y = this.y - 1; // jawaban
        }
        this.show();
    }

    public void J(int n) {
        if (n == 0) {
            this.Rotate(180);
        } else {
            this.Rotate(-90);
            this.L(n - 1);
            this.Rotate(-90);
            this.Forward();
            this.J(n - 1);
            this.Rotate(90);
            this.Forward();
            this.Rotate(90);
            this.J(n - 1);
            this.Forward();
            this.Rotate(-90);
            this.L(n - 1); // jawaban this.J(n - 1); でも可？
            this.Rotate(-90);
        }
    }

    public void L(int n) {
        if (n == 0) {
            this.Rotate(180);
        } else {
            this.Rotate(90);
            this.J(n - 1);
            this.Rotate(90);
            this.Forward();
            this.L(n - 1);
            this.Rotate(-90);
            this.Forward();
            this.Rotate(-90);
            this.L(n - 1);
            this.Forward();
            this.Rotate(90);
            this.J(n - 1); // this.L(n - 1); でも可？
            this.Rotate(90);
        }
    }
}

// output:
// -->(1, 0, 0)-->(1, -1, 270)-->(0, -1, 180)
// ----------
// -->(1, 0, 0)-->(1, 1, 90)-->(0, 1, 180)-->(0, 2, 90)-->(0, 3, 90)-->(1, 3,
// 0)-->(1, 2, 270)-->(2, 2, 0)-->(2, 3, 90)-->(3, 3, 0)-->(3, 2, 270)-->(3, 1,
// 270)-->(2, 1, 180)-->(2, 0, 270)-->(3, 0, 0)