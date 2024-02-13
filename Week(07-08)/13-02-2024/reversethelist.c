// Reverse the list
//link-->https://leetcode.com/problems/reverse-linked-list/?envType=list&envId=rrs3r4z6


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *currentNode,*prevNode,*nextNode;
    currentNode=head;
    prevNode=NULL;
    nextNode=head;
    while(nextNode!=NULL)
    {
        nextNode=nextNode->next;
        currentNode->next=prevNode;
        
        prevNode=currentNode;
        currentNode=nextNode;
    }
    head=prevNode;
    return head;    
   
}