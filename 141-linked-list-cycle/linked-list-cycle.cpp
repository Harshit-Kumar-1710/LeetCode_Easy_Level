/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        if(head==NULL)
        {
            return false;
        }
        else if(head->next==NULL)
        {
            if(head->next==head)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        ListNode*Slow=head,*Fast=head;
        while(Fast!=NULL && Fast->next!=NULL)
        {
            Fast=Fast->next->next;
            Slow=Slow->next;
            if(Fast==Slow)
            {
                return true;
            }
        }
    return false;
        
    }
};