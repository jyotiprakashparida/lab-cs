#include <iostream>
using namespace std;

class Node
{  
   public:
   int num;
   Node *next;
}*head=NULL,*tail=NULL;
  
   void AddNode(int n)
   {
      Node *tmp=new Node;
      tmp->num=n;
      tmp->next=NULL;
      if(head=NULL)
      {
         head=tmp;
         tail=tmp;
      }
      else
      {
         tail->next=tmp;
         tail=tail->next;
      }
   }
   void Insert(int data, int n)
   {
      Node *n=new Node;
      n->num=data;  
      if(position==0)
      {// this will also cover insertion at head (if there is no problem with the input)

      n->next=head;
      head=n;
     }
     else
     {
         Node *c=new Node;
         int count=1;
         c=head;
         while(count!=position)
         {
          c=c->next;
          count++;
         }
      n->next=c->next;
      c->next=n;
     }
   }
   //to delete the node at position 'pos'
   void deleteNode(int pos)
   {
      int count=0;
      Node* temp, *temp1, *temp2;
      temp = head  ;
      if(head==NULL)
      {
        cout<<"\n \nLinked List Empty !!!";
      }
      else if(pos == 0)
      {
        head = head->next;
        delete temp;
      }
      else
      {
      while(count!= pos-1)
      {
         temp = temp->next;
         count++;   
      }
      temp1 = temp->next;
      temp->next = temp1->next;
      temp1->next=NULL;
      delete temp1;
   } 

   
int main()
{
    int ch,x;
    char cha;
    int pos;
    Node *nptr; 
    cout<<"\n \nPROGRAM TO USE THE CONCEPT OF LINKED LIST";
    do 
    {
       cout<<"\n1. Add a node \n2. Insert a node at a place \n3. Delete a node \n4.Display ";
       cout<<"\nPlease enter your choice: ";
       cin>>ch;
       switch(ch);
       case 1:
              cout<<"\nEnter the data: ";
              cin>>x;
              AddNode(x);
              break;
       case 2:
              cout<<"\nEnter the data to be inserted";
              cin>>x;
              cout<<"\nEnter the position to insert the node";
              cin>>pos;
              Insert(x,pos);
              break;
       case 3:
             
              break;
       case 4:
             
              break;
       default:
              cout<<"\nWrong choice !!!!";
    }
    cout<<"Do you want to continue? (y/n)"
    cin>>cha;
    }
    while(cha=='y' || cha=='Y');
    return 0;
}
