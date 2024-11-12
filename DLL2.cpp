#include<iostream>
#include<vector>
using namespace std;
class node
{
    public:
int data;
node*next;
node* prev;
public:
node(int data1,node *next1,node *prev1)
{
  data=data1;
  next=next1;
  prev= prev1;
}
node(int data1)
{
  data=data1;
  next=NULL;
  prev=NULL;
}
};

node *convertarr2ll(vector<int> &arr)
{
  node * head = new node(arr[0]);//assignning the first element ,the value of arr[0](fro start)
  node * prev = head;//mover pointer pointing to the head;
  for(int i=1;i<arr.size();i++)
    {
      node * temp = new node(arr[i],nullptr,prev);
      prev->next=temp;//link is being estalished,mover next(pointer) points to the temp
      prev=temp;//mover moves to temp
    }
  return head;
}
node *delhead(node * head)
{
  node*b=head;
  head=head->next;
  head->prev=nullptr;
  b->next=nullptr;
   delete b;
   return head;
}
node *deltail(node * head)
{
  node*b=head;
  while(b->next!=nullptr)
  {
    b=b->next;
  }
  node* prev =b->prev;
  b->prev=nullptr;
  prev->next=nullptr;
   delete b;
   return head;
}
int main()
{
  vector<int>arr={2,5,8,7};
  node *head= convertarr2ll(arr);
    head=delhead(head);
  head=deltail(head);
  node* temp= head;//points to the head of the libnked list
  while(temp)//till temp becomes null or points to the null
  {
      cout<<"|"<<temp->data<<"|"<<"->";//displays the linked list element
      temp=temp->next;//temp moves to temp->next
  }
}
