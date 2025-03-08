#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};
void create(struct node**main,int x);
void display(struct node**main);
void display(struct node**main)
 {
    
        struct node *last = *main;
        while (last != NULL)
        { 
            printf("%d -> ",last->data);
            last = last->link;
        }
        
    }
    
    int main ()
    {
    struct node* head=NULL;
           
      int nodecount=0;
        create(&head,10);
        ++nodecount;
   create(&head,20);
        ++nodecount;
        create(&head,30);
        ++nodecount;
        create(&head,40);
        ++nodecount;
        create(&head,50);
        ++nodecount;
        
        display(&head);
        return 0;}
        
        
        
        
        void create(struct node**main,int x)
        {
            struct node* new = (struct node*)malloc(sizeof(struct node)); 
            printf("enter data : ");
            scanf("%d",&x);
            new->data = x;
            new->link = NULL;
                                                                      
            if (*main == NULL) 
            { 
                *main = new;
            } 
            else 
            {
                struct node *last = *main;
                while (last->link != NULL)
                { 
                    last = last->link;
                }
                last->link = new;
            }
        }