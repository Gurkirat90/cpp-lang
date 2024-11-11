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
  for(int i=0;i<arr.size();i++)
    {
      node * temp = new node(arr[i]);
      mover->next=temp;
      mover=temp;
    }
  return head;
}

int main()
{
  vector<int>arr={2,5,8,7};
  node *y=new node(arr[0],nullptr);
  cout<<y->data<<endl;
  vector<int> arr1={4,5,6,7,8,9,10};
  node *head= convertarr2ll(arr1);
  cout<< head->data;
}
