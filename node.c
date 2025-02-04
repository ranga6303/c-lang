#include <stdio.h> 
#include <stdlib.h> 
// Define a structure for a node 
struct Node 
{
 int data;
 struct Node* next;
};
// Function to insert a new node at the beginning of the list 
void insertAtBeginning(struct Node** head_ref, int new_data) 
{
 // Allocate memory for a new node 
 struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
 // Assign the data to the new node 
 new_node->data = new_data;
 // Set the next of the new node as the current head 
 new_node->next = *head_ref;
 // Move the head to point to the new node 
 *head_ref = new_node;
}
// Function to delete a node with a given key 
void deleteNode(struct Node** head_ref, int key) 
{
 // Store the head node 
 struct Node* temp = *head_ref, *prev;
 // If the head node itself holds the key to be deleted 
 if (temp != NULL && temp->data == key) 
{
 *head_ref = temp->next; // Change the head node 
 free(temp); // Free old head 
 return;
 }
 // Search for the key to be deleted, keep track of the 
 // previous node as we need to change 'prev->next' 
 while (temp != NULL && temp->data != key) 
{
 prev = temp;
 temp = temp->next;
 }
 // If the key was not present in the linked list 
 if (temp == NULL)
 return;
 // Unlink the node from the linked list 
 prev->next = temp->next;
 // Free the memory 
 free(temp);
}
// Function to print the linked list 
void printList(struct Node* node) 
{
 while (node != NULL) 
{
 printf("%d ", node->data);
 node = node->next;
 }
 printf("\n");
}
int main() 
{
 // Start with the empty list 
 struct Node* head = NULL;
 // Insert 6. So linked list becomes 6->NULL 
 insertAtBeginning(&head, 6);
 // Insert 7 at the beginning. So linked list becomes 7->6->NULL 
 insertAtBeginning(&head, 7);
 // Insert 1 at the beginning. So linked list becomes 1->7->6->NULL 
 insertAtBeginning(&head, 1);
 // Insert 4 at the end. So linked list becomes 1->7->6->4->NULL 
 insertAtBeginning(&head, 4);
 printf("Linked list before deletion: \n");
 printList(head);
 // Delete node with data 7. So linked list becomes 1->6->4->NULL 
 deleteNode(&head, 7);
 printf("Linked list after deletion of 7: \n");
 printList(head);
 return 0;
}