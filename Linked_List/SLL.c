#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef struct SLL
{
    int data;
    struct SLL *next;
   
     
}node;
node *create();
void main(){
    int choice,val;
    char ans;
    node *head;
    void display(node *);
    node *search(node *,int);
    node *insert(node *);
    void dele(node **);
    head =NULL;
    do{
        printf("Program to perform various operation on SLL:");
        printf("\n 1.create");
        printf("\n 2.Display");
        printf("\n 3.Search For an Item");
        printf("\n 4.Insert");
        printf("\n 5.Delete");
        printf("\n 6.quit");
        printf("\n Enter Your choice(1-6)");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:head =create();
            break;
            case 2: display(head);
            break;
            case 3:printf("Enter the element u want to search");
                    scanf("%d",&val);
                    search(head,val);
                    break;
            case 4: head=insert(head);
            break;
            case 5:dele(&head);
            break;
            case 6:exit(0);
            default:
            printf("Invalid choice\n");
         }
        }while (choice !=6);
}
node *create()
{
    node *temp,*New,*head;
    int val ,flag;
    char ans='y';
    node *get_node();
    temp = NULL;
    flag = TRUE;
    do{
        printf("Enter the Element");
        scanf("%d",&val);
        New = get_node();
        if(New ==NULL)
        New->data=val;
        if(flag==TRUE)
        {
            head=New;
            temp=head;
            flag=FALSE;

        }
        else
        {
            temp->next=New;
            temp = New;
        }
        printf("Do u want to enter the more element\n");
        ans=getch();

    }while (ans=='y');
    printf("The singly LL is creatyed\n");
    getch();
    return head;
}
 node  *get_node()
 {
     node *temp;
     temp =(node *)malloc(sizeof(node));
     temp-> next=NULL;
     return temp;
 }
 void display(node *head)
{
    node *temp;
    temp=head;
    if(temp == NULL)
    {
        printf("The list is EMpty");
        getch();
        return;
    }
    while (temp !=NULL)
    {
        /* code */
        printf("%d->",temp->data);
        temp= temp->next;
    }
    printf("NULL");

} 
node *search(node *head,int key)
{
    node *temp;
    int found ;
    temp =head;
    if(temp == NULL)
    {
        printf("THe Linked listis empty");
        return NULL;
    }
    found = FALSE;
    while (temp !=NULL && found ==FALSE)
    {
        if(temp->data!=key)
        temp=temp->next;
        else
        {
            found=TRUE;
        }
    }
    if(found ==TRUE)
    {
        printf("the Element is  present");
        return temp;
    }
    else
    {
        printf("the Element is  present");
        return NULL;
    }
    
    }
    
node *insert(node *head)
{
    int choice;
    node *insert_head(node *);
    void insert_after(node *);
    void insert_last(node *);
    printf("\n 1.Insert a node a Head");
    printf("Laset node ");
    printf("Middle");
    printf("enter the position to insert:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:head=insert_head(head);
        /* code */
        break;
    case 2:insert_last(head);
    break;
    case 3:insert_after(head);
        break;
    }
    return head;
}
node *insert_head(node *head)
{
    node *New,*temp;
    New=get_node();
    printf("Enter the element want to insert");
    scanf("%d",&New->data);
    if(head==NULL)
    head=New;
else{
    temp=head;
    New->next=temp;
    head=New;
}
return head;
}
void insert_last(node *head)
{
    node *New,*temp;
    New =get_node();
    printf("\n Enter the element to insert");
    scanf("%d",&New->data);
    if(head==NULL)
    head=New;
    else
    {
        
            temp=head;
            while (temp->next!=NULL)
            temp=temp->next;
            temp->next=New;
            New->next=NULL;
            
        
    }
    
}

