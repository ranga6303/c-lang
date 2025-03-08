import java.util.Scanner;

class Node {
    int data;
    Node next;

    public Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class list {
    
    static Node insert(Node head, int value) {
        Node newNode = new Node(value);
        if (head == null) {
            return newNode; // Return the new head
        } else {
            Node temp = head;
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = newNode;
            return head;
        }
    }

    static void display(Node temp) {
        System.out.println("Linked List:");
        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of nodes: ");
        int n = scanner.nextInt();

        Node head = null; // Initialize head

        if (n <= 0) {
            System.out.println("Invalid number of nodes.");
            scanner.close();
            return;
        }

        for (int i = 1; i <= n; i++) {
            System.out.print("Enter value for node " + i + ": ");
            int value = scanner.nextInt();
            head = insert(head, value); // Update head
        }

        scanner.close();
        display(head);
    }
}
