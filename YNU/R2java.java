public class ListMain {
	private static final int EOD = -1;
	private static int i;
	private static void resetData() {1=0};
	private static int getData() { return A[i++];}

	public static void main(String[] args) {
		Node startNode, newNode, hereNode;
		NodeCount startNodeCount, newNodeCount, hereNodeCount;
		int key;

		resetData();
		startNode= new Node(getData());
		while((key=getData())!=EOD) {
			newNode=new Node(key);
			startNode.searchinsert(newNode);
		}
		startNode.print();

		resetData();
		startNodeCount= new NodeCount(getData());
		while((key=getData()) != EOD) {
			newNodeCount = new NodeCount(key);
			startNodeCount.searchinsert(newNodeCount);
		}
		startNodeCount.print();

		if((hereNodeCount=(NodeCount)Node.search(startNodeCount, 5))!=null) hereNodeCount.deletenext();
		startNodeCount.print();
	}
}

public class Node(
	private int key;
	private Node next;

	public Node(int key) {
		this.key=key;
		this.next=null;
	}

	public int key() {return this.key;}
)