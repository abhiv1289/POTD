//Remove linked list elements
//link-->https://leetcode.com/problems/remove-linked-list-elements/description/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *newNode , *temp;
    temp=head;
     
    while(temp!=NULL)
    {
        bool value=true;
        if(temp->next!=NULL)
        {
        if(temp->next->val==val)
        {
           value=false;
           newNode=temp->next;
           temp->next=newNode->next;
           
          
        }
        }
        if(head->val==val)
        {
           newNode=head;
           head=newNode->next;
            //temp=head;
           
        }
        if(value)   
        temp=temp->next;
        else
        temp=head;
     
    }
    return head;
}