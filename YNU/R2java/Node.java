package R2java;

public class Node {
    private int key;
    private Node next;

    public Node(int key) {
        this.key = key;
        this.next = null;
    }

    public int key() {
        return this.key;
    }

    public Node next() {
        return this.next;
    }

    public void insertnext(Node node) {
        node.next = this.next;
        this.next = node;
    }

    public void searchinsert(Node node) {
        if (this.key() == node.key()) {
            this.insertnext(node);
            return;
        } else {
            Node next = this.next();
            if (next != null)
                next.searchinsert(node);
            else
                this.insertnext(node);
        }
    }

    public void deletenext() {
        if (this.next != null)
            this.next = this.next.next;
    }

    public void print() {
        System.out.printf("-<%d>", this.key());
        if (this.next() == null) {
            System.out.println();
        } else {
            Node next = this.next();
            next.print();
        }
    }

    public static Node search(Node node, int key) {
        while (node != null)
            if (node.key() == key)
                return node;
            else
                node = node.next();
        return null;
    }
}