class Solution {
public:
    ListNode* oddEvenList(ListNode* head) 
    {
        if(head!= nullptr&&head->next!=nullptr)
        {
            ListNode* odd =head;
            ListNode* even =head->next;
            
            ListNode* evenstart =head->next;

        while(even!=nullptr && even->next!=nullptr)
        {
            odd->next=even->next;
            even->next=even->next->next;

            odd=odd->next;
            even=even->next;
        }
        odd->next=evenstart;
        }
        return head;
        
    }
};
