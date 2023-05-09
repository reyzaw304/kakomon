package R2java;

public class ListMain {
	private static final int EOD = -1;
	private static final int A[] = { 3, 5, 3, 2, 5, 2, 5, EOD };
	private static int i;

	private static void resetData() {
		i = 0;
	}

	private static int getData() {
		return A[i++];
	}

	public static void main(String[] args) {
		Node startNode, newNode, hereNode;
		NodeCount startNodeCount, newNodeCount, hereNodeCount;
		int key;

		resetData();
		startNode = new Node(getData());
		while ((key = getData()) != EOD) {
			newNode = new Node(key);
			startNode.searchinsert(newNode);
		}
		startNode.print();

		if ((hereNode = Node.search(startNode, 5)) != null)
			hereNode.deletenext();
		startNode.print();

		resetData();
		startNodeCount = new NodeCount(getData());
		while ((key = getData()) != EOD) {
			newNodeCount = new NodeCount(key);
			startNodeCount.searchinsert(newNodeCount);
		}
		startNodeCount.print();

		if ((hereNodeCount = (NodeCount) Node.search(startNodeCount, 5)) != null)
			hereNodeCount.deletenext();
		startNodeCount.print();
	}
}