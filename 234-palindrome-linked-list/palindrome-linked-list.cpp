/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* M)
    {
        ListNode*ptr=NULL;
        ListNode*front;
        while(M!=NULL)
        {
            front=M->next;
            M->next=ptr;
            ptr=M;
            M=front;
        }
    return ptr;
    }
    bool isPalindrome(ListNode* head) 
    {
        if(head==NULL || head->next==NULL)
        {
            return true;
        }
        ListNode*slow=head,*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* NewNode=reverse(slow->next);
        ListNode*first=head,*second=NewNode;
        while(second!=NULL)
        {
            if(first->val!=second->val)
            {
                reverse(NewNode);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        reverse(NewNode);
        return true;
        
    }
};