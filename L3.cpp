//1.suppose linked list have 2 nodes(1->2),what we'll do is {head(1)->next}(2)->next = head,previosly it 
//was pointing to the nullptr
//2.now head->next will be made to point towards null;
//3.still head is 2,but before making 2 head acknowledge 1 as last element 1;resturn last
//use recusion 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head==NULL||head->next==NULL)return head;
        ListNode* last =reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return last;
        
    }
};
//reverse  inlist between  2 given elements
//using dummy node
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==nullptr||head->next == nullptr)
        return head;
        ListNode * dummy= new ListNode(0);
        dummy->next=head;
        ListNode* prev =dummy;
        for(int i=1;i<left;i++)prev=prev->next;
        
        ListNode * curr= prev->next;
        for(int i=1;i<=right-left;i++)
        {
            ListNode* temp= prev->next;
            prev->next=curr->next;
            curr->next=curr->next->next;
            prev->next->next=temp;
        }
        return dummy->next;
    }
};//rotate linked list.....
