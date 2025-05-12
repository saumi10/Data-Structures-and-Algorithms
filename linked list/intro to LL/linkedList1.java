public class linkedList1{
    public static void main(String[] args) {
		
        int[] arr={8, 21, 18, 19};;
        
		Node y = new Node(arr[3]);

        System.out.println(y.data+1);
		

	}
}
class Node{
    int data;
    Node next;

    Node(int data1, Node next1){
        this.data =data1;
        this.next =next1;
    }

    Node(int data){
        this.data =data;
        this.next=null;
    }
}