#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    

    // constructor
Node(int data)
{
    this-> data = data;
    this-> next = NULL;
}
};
void insertAthead(Node* &head,int d)
{
    // new node create
   Node* temp = new Node(d);
   temp->next = head;
   head = temp;

}

void print (Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
    cout << temp -> data << " ";
    temp = temp-> next;
    }
}


int main()
{
    // created new node
 Node* node1=new Node(10);
 cout << node1 -> data << endl;    // node1 ka data
 // cout << node1 -> next << endl;   // node1 ka next

   // head pointed to node1;
      Node* head = node1;
       insertAthead(head,12);

       print(head);

}