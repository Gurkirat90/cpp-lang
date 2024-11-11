#include<iostream>
#include<vector>
using namespace std;
class node
{
    public:
int data;
node*next;
public:
node(int data1,node *next1)
{
  data=data1;
  next=next1;
}
node(int data1)
{
  data=data1;
  next=NULL;
}
};

node *convertarr2ll(vector<int> &arr)
{
  node * head = new node(arr[0]);//assignning the first element ,the value of arr[0](fro start)
  node * mover = head;//mover pointer pointing to the head;
  for(int i=1;i<arr.size();i++)
    {
      node * temp = new node(arr[i]);
      mover->next=temp;//link is being estalished,mover next(pointer) points to the temp
      mover=temp;//mover moves to temp
    }
  return head;
}
int lengthofll(node * head)
{
    int cnt=0;
    node*temp=head;
    while(temp)
    {temp=temp->next;
        cnt++;
    }
    return cnt;
}
bool checkif(node *head,int val)
{
    node*temp=head;
    while(temp)
    {
        if(temp->data==val)
        return 1;
        temp=temp->next;
    }
    return 0;
}
    

int main()
{
  vector<int>arr={2,5,8,7};
  node *y=new node(arr[0],nullptr);
  cout<<y->data<<endl;
  vector<int> arr1={4,5,6,7,8,9,10};
  node *head= convertarr2ll(arr1);
  cout<< head->data<<endl;
  //now time for the traversal
  node* temp= head;//points to the head of the libnked list
  while(temp)//till temp becomes null or points to the null
  {
      cout<<"|"<<temp->data<<"|"<<"->";//displays the linked list element
      temp=temp->next;//temp moves to temp->next
  }
  //length of the linked list
  cout<<endl<<lengthofll(head);
  //search the element in linkedlist
  if(checkif(head,90))cout<<endl<<"present";
  
}
