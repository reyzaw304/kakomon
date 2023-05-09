package R2java;

public class NodeCount extends Node {
    private int count;

    public NodeCount(int key) {
        super(key);
        this.count = 1;
    }

    public void insertnext(NodeCount node) {
        if (this.key() == node.key())
            this.count++;
        else
            super.insertnext(node);
    }

    public void searchinsert(NodeCount node) {
        if (this.key() == node.key()) {
            this.count++;
            return;
        } else {
            NodeCount next = (NodeCount) this.next(); // ngubah next tipe Node, ke NodeCount
            if (next != null)
                next.searchinsert(node);
            else
                this.insertnext(node);
        }
    }
}