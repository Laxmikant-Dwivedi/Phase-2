#include<iostream>
using namespace std;
class node
{
    public:
 int data;
 node* next;
 // constructor
 node(int data)
 {
    this->data=data;
    this->next=NULL;
 }
  // destructor
  ~node()
  {
    if(this-> next !=NULL)
    {
        delete next;
        this->next =NULL;
    }
  }
 };
 void insertathead(node* &head,int d)
 {
    node* temp = new node(d);
    temp->next=head;
    head=temp;
 }
 void insertattail(node* &tail, int d)
 {
    node*temp = new node(d);
    tail->next=temp;
    tail=temp;
 }
 
void insertatpos(node* &tail, node* &head, int pos,int d)
{
   if(pos == 1)
   {
    insertathead(head,1);
    return;
   }
   node* temp = head;
   int cnt=1;
   while(cnt < pos-1) 
   {
    temp = temp->next;
    cnt ++;
   }
 if(temp->next==NULL)
 {
    insertattail(tail,d);
    return ;
 }
 node* nodetoinsert = new node(d);
 nodetoinsert-> next = temp->next;
 temp->next = nodetoinsert;
}
void deletenode(int pos, node* &head)
{
    if(pos==1)
    {
     node* temp= head;
     head = head-> next;
     temp->next = NULL;
     delete temp;
    }
    else 
    {
        node* curr = head;
        node* prev = NULL;
        int cnt =1;
        while(cnt<pos)
        {
            prev = curr;
            curr = curr -> next;
            curr ++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }

}
void print(node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main()
{
 //created a new node
    node* node1 = new node(10);
    //cout << node1 -> data << endl;
   // cout << node1 -> next << endl;
    
    //head pointed to node1
    node* head = node1; 
    node* tail = node1;
    //print(head);

    insertattail(tail, 12);

    print(head);
    
    insertattail(tail, 15);
    print(head);

    insertatpos(tail,head, 4, 22);
    print(head);    

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

    deletenode(3,head);
    print(head);  
    return 0;
    }











