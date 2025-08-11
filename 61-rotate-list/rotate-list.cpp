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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        ListNode* temp=head;
        if(temp==NULL)
        {
            return head;
        }
        else if(temp->next==NULL)
        {
            return head;
        }
        int c=0;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        int t=k%c;
        while(t>0)
        {
            ListNode*temp=head;
            while(temp->next->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next->next=head;
            head=temp->next;
            temp->next=NULL;
            t--;
        }
    return head;
    }
};