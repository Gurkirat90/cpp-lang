class Solution {
public:
    ListNode *detectCycle(ListNode *head)
    {
        if(head ==nullptr || head->next == nullptr)
        return NULL;

        ListNode* p=head;
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=nullptr&&fast->next!= nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)break;
        }
        if(slow!= fast) return nullptr;
        while(p!= slow)
        {
            p=p->next;
            slow=slow->next;
        }
        return p;
    }
};
