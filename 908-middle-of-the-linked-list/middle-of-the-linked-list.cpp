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
    ListNode* middleNode(ListNode* head) 
    {
        ListNode* temp=head;
        int c=0;
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        int k=(c/2)+1;
        c=0;
        temp=head;
        while(temp!=NULL)
        {
            c++;
            if(k==c)
            {
                break;
            }
        temp=temp->next;
        }
        head=temp;
    return head;
    }
};