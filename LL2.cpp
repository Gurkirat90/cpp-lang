node *inserthead(node *head,int val)
{
    return new node(val,head);
}
node*insertend(node*head,int  val)
{
    node *temp =head;
    while(temp->next )
    {
        temp=temp->next;
    }
        node *newnode=new node(val);
        temp->next=newnode;
        //temp ka aga hoga new node;
        return head;
}

node* insertk(node* head, int val,int k)
{
    if(head==nullptr)
    {
        if(k==1)
        return new node(val,head);
        
    }
    if (k==1)
    {
        node* temp= new node(val,head);
    }
    int cnt=0;
    node *temp=head;
    while(temp)
    {
        cnt++;
        if(cnt==k-1)
        {
            node* add= new node(val);
            add->next=temp->next;
            temp->next=add;
            break;
        }
        temp=temp->next;
    }
    return head;
}
node* insertpos(node* head, int val,int val1)
{
    if(head==nullptr)
    {
        return new node(val,head);
    }
    node *temp=head;
    while(temp)
    {
        if(temp->data==val1)//for before useif(temp->next-
        >data==val1)
        {
            node* add= new node(val);
            add->next=temp->next;
            temp->next=add;
            break;
        }
        temp=temp->next;
    }
    return head;
}
