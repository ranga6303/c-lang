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
        if(value==nodecount+1)
        {
            create(&head,value);
            nodecount++;
        }
        if(value<=nodecount&&value>0)
        {
        addele(&head,value,ele);
        nodecount++;
        }
        else
        printf("%d position is not availble , there are only %d nodes\n",nodecount,value);
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



void delele(struct node**main,int value )
{
    struct node *temp = *main, *del;
    
    while ((temp->link->data!=value)||(temp->link==NULL))
        { 
          temp = temp->link;
        }
    if((temp->link==NULL)&&(temp->data!=value))
    {
        printf("element not found to delete\n");
    }
    else 
    {
     del=temp->link;
     temp->link=del->link;
     del->link=NULL;
    }
    
}


void delpos(struct node**main,int value )
{
    struct node *temp = *main, *del;
    int i=1;
    while (i!=value-1)
        { 
          temp = temp->link;
          i++;
        }
      del=temp->link;
      temp->link=del->link;
     del->link=NULL;
    
}



void upele(struct node**main,int value ,int ele)
{
  struct node *temp;
  temp=*main;
    while ((temp->data!=value)||(temp->link==NULL))
        { 
          temp = temp->link;
        }
    if((temp->link==NULL)&&(temp->data!=value))
    {
        printf("element not found to update\n");
    }
    else 
    {
     temp->data=ele;
    }  
}


void addele(struct node**main,int value ,int ele)
{ 
  struct node* new=(struct node*)malloc(sizeof(struct node)); // Allocate memory
    new->data=ele;
    new->link=NULL;

  struct node *temp = *main;
    int i=1;
    while(i!=value-1)
        { 
          temp = temp->link;
          i++;
        }struct node* move=temp->link;
         temp->link=new;
        new->link =move;
        
     
}



