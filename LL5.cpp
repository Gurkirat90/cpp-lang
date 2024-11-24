class Solution {
public:
ListNode *HEAD;

    Solution(ListNode* head) {
        HEAD=head;
    }
    
    int getRandom() {
        int count =1;
        int result=0;
        ListNode* temp= HEAD;
        while(temp!=nullptr)
        {
            if(rand() % count == 0)
            result=temp->val;
            temp=temp->next;
            count++;
        }
        return result; 
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
