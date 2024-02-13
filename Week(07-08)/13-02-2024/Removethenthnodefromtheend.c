// Remove Nth Node from end of list
//link-->https://leetcode.com/problems/remove-nth-node-from-end-of-list/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int length=0;
    struct ListNode *temp;
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        length++;
    }
    temp=head;
   
    int position=length-n;
    if(position==0)
    {
     head=temp->next;
     free(temp);
     return head;
    }
    int i=0;
    while(i<position-1 && temp!=NULL)
    {
        temp=temp->next;
        i++;
    }
    if(temp==NULL||temp->next==NULL)
    {
        return head;
    }
    struct ListNode *newNode;
    newNode=temp->next;
    temp->next=newNode->next;
    free(newNode);
    return head;
}