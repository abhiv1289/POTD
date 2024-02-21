//Rotate List
//link-->https://leetcode.com/problems/intersection-of-two-linked-lists/description/



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    struct ListNode *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    struct ListNode *currentNode , *nextNode,*prevNode;
   k=k%count;
  while(k--)
  {
    prevNode=NULL;
    currentNode=head;
    nextNode=NULL;
    while(currentNode->next!=NULL)
    {
      nextNode=currentNode->next;
      prevNode=currentNode;
      currentNode=nextNode;
    }
    prevNode->next=NULL;
    currentNode->next=head;
    head=currentNode;
    
  }
    return head;
}