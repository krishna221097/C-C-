#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  
void beginsert ();
void lastinsert();
void display();  
void insertbw();
void deletebeg();
void deleteend();
void deleteran();
void main ()  
{  
    int choice =0;  
    while(choice != 8)   
    {  
        printf("\n1.Insert in begining 2.Insert in end 3.Insert between 4.Display 5.delete element at beginning 6.Delete at end 7.delete at a location 8.Exit\n"); 
	printf("Enter your choice?");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            beginsert();      
            break;  
            case 2:
	    lastinsert();
	    break;
	    case 3:
	    insertbw();
	    break;
	    case 4:
	    display();
	    break;
	    case 5:
	    deletebeg();
	    break;
	    case 6:
	    deleteend();
	    break;
	    case 7: 
	    deleteran();
	    break;
	    case 8:
	    exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
}  
void beginsert()  
{  
    struct node *ptr;  
    int item;  
    ptr = (struct node *) malloc(sizeof(struct node *));  
    if(ptr == NULL)  
    {  
        printf("OVERFLOW\n");  
    }  
    else  
    {  
        printf("Enter value :");    
        scanf("%d",&item);    
        ptr->data = item;  
        ptr->next = head;  
        head = ptr;  
        printf("Node inserted\n");  
    }  
      
}  
void display()  
{  
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print\n");  
    }  
    else  
    {  
        printf("printing values . . . . .");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}     
void lastinsert()  
{  
    struct node *ptr,*temp;  
    int item;     
    ptr = (struct node*)malloc(sizeof(struct node));      
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");     
    }  
    else  
    {  
        printf("Enter value?");  
        scanf("%d",&item);  
        ptr->data = item;  
        if(head == NULL)  
        {  
            ptr -> next = NULL;  
            head = ptr;  
            printf("Node inserted\n");  
        }  
        else  
        {  
            temp = head;  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = ptr;  
            ptr->next = NULL;  
            printf("Node inserted\n");  
          
        }  
    }  
}  
void insertbw()
{
    int i,loc,item;   
    struct node *ptr, *temp;  
    ptr = (struct node *) malloc (sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("OVERFLOW\n");  
    }  
    else  
    {  
        printf("Enter element value\n");  
        scanf("%d",&item);  
        ptr->data = item;  
        printf("\nEnter the location after which you want to insert ");  
        scanf("\n%d",&loc);  
        temp=head;  
        for(i=0;i<loc;i++)  
        {  
            temp = temp->next;  
            if(temp == NULL)  
            {  
                printf("can't insert\n");  
                return;  
            }  
          
        }  
        ptr ->next = temp ->next;   
        temp ->next = ptr;   
        printf("Node inserted\n");  
    }  
}  
				
void deletebeg()
{
	struct node *temp;
	temp=head;
	head=temp->next;
	free(temp);
}	
void deleteend()
{
	struct node *temp,*temp1;
	temp=head;
	while(temp->next!=NULL)
	{
		temp1=temp;
		temp=temp->next;
	}
	temp1->next=NULL;
	free(temp);
	printf("Node Deleted\n");
}
void deleteran()
{
	int i,n;
	printf("Enter a node to be deleted :");
	scanf("%d",&n);
	struct node *temp,*prev;
	temp=head;
	if(temp==NULL)
	{	
		printf("node is not there to delete");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			prev=temp;
			temp=temp->next;
		}
	}
	prev->next=temp->next;
	free(temp);
	printf("Node deleted");
}
	
			
			
		
		
