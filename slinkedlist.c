#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};
void create(struct node**main,int x);
void display(struct node**main);
void delpos(struct node**main,int value);
void delele(struct node**main,int value);
void upele(struct node**main,int value ,int ele);
void addele(struct node**main,int value ,int ele);


int main ()
{
struct node* head=NULL;
int value,ch=0,ele,nodecount=0;
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

while(ch!=5)
{
 printf("\n\n1.enter elements to list\n2.display list\n3.delete\n4.add or update at specific position \n5.exit\n");
 scanf("%d",&ch);

 switch (ch)
    {
    case 1:
    printf(" enter data : ");
    scanf("%d",&value);
    create(&head,value);
    ++nodecount;

    break;

    case 2:
    printf("the list is \n");
    display(&head);
    printf("no.of nodes = %d\n",nodecount);
    break;

    case 3:
    printf("1.delete at position\n2.delete element\nto skip deltion enter otherthan 1&2 \n:");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("enter position to delete : ");
        scanf("%d",&value);
        if(value<=nodecount)
        {
         delpos(&head,value);
         --nodecount;
        }
        else if(value>nodecount||value<1)
        printf("%d position is not availble , there are only %d nodes\n",value,nodecount);
    }
    else if(ch==2)
    {
        printf("enter element to delete : ");
        scanf("%d",&value);
        delele(&head,value);
        --nodecount;
    }  
    break;

    case 4:
     printf("1.update element  \n2.add at position \nto skip enter otherthan 1&2 \n:");
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("update element (already in list) with new element : ");
        scanf("%d%d",&value,&ele);
        upele(&head,value,ele);
    }
    else if(ch==2)
    {
        printf("enter position and element : ");
        scanf("%d%d",&value,&ele);
        if((value<=nodecount)&&(value>0))
        {
        addele(&head,value,ele);
        nodecount++;
        }
        if(value==nodecount+1)
        {
            create(&head,ele);
            nodecount++;
        }
        else
        printf("%d position is not availble , there are only %d nodes\n",value,nodecount);
        
        
    } 
    break;

    case 5:
printf("\nthank you for using my code\n");
    break;
    
    default:
    printf("enter correct choise : ");
        break;
    }
    
}
return 0;
}


void create(struct node**main,int x)
{
    struct node* new = (struct node*)malloc(sizeof(struct node)); 
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


void display(struct node**main)
 {
    
        struct node *last = *main;
        while (last != NULL)
        { 
            printf("%d -> ",last->data);
            last = last->link;
        }
        
    }



    void delele(struct node** main, int value) {
        struct node *temp = *main, *del = NULL;
    
        if (temp == NULL) {
            printf("element not found to delete\n");
            return;
        }
    
        if (temp->data == value) {
            *main = temp->link;
            free(temp);
            printf("element deleted sucessfully\n");
            return;
        }
    
        while (temp != NULL && temp->data != value) {
            del = temp;
            temp = temp->link;
        }
    
        if (temp == NULL) {
            printf("element not found to delete\n");
            return;
        }
    
        del->link = temp->link;
        free(temp);
        printf("element deleted sucessfully\n");
    }
    


void delpos(struct node**main,int value )
{
    struct node *temp = *main, *del;
    int i=1;

    if (temp == NULL) {
        printf("list is empty\n");
            return;}

    if(value==1){
        *main=temp->link;
        return;
    }
    
    while (i<value-1)
        { 
          temp = temp->link;
          ++i;
        }
        del=temp->link;
      temp->link=del->link;
      free(del);
      printf("position deeletedd sucessfully\n");
    
}



void upele(struct node** main, int value, int ele) {
    struct node *temp = *main;

    if (temp == NULL) {
        printf("list is empty\n");
            return;}

    while (temp != NULL && temp->data != value) { 
        temp = temp->link;
    }

    if (temp == NULL) {
        printf("element not found to update\n");
        return;
    } 
        temp->data = ele;
        printf("element updated sucessfull\n");
    }




void addele(struct node**main,int value ,int ele)
{ 
  struct node* new=(struct node*)malloc(sizeof(struct node));
    new->data=ele;
    new->link=NULL;

  struct node *temp = *main,*med;
    int i=1;
    if(value==1)
    {new->link=*main;
        *main=new;
    }
    else{
    while((i<value-1)&&(temp->link!=NULL))
        { 
          temp = temp->link;
          i++;
        }
new->link=temp->link;
temp->link=new;}

     
}



