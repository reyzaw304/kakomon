package R2java;

public class NodeCount extends Node {
    private int count;

    public NodeCount(int key) {
        this.key = key;
        this.count = 1;
    }

    public void insertnext(NodeCount node) {
        if (this.key() == node.key())
            this.count++;
        else
            this.next = node;
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