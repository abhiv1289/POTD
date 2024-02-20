//Reverse Linked List II
//link-->https://leetcode.com/problems/reverse-linked-list-ii/description/



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
   struct ListNode *l1=NULL,*l2,*r1,*r2=NULL;
   struct ListNode *temp;
   int length=0;
   temp=head;
   while(temp!=NULL)
   {
       length++;
       temp=temp->next;
       
   }
   int i=1;
   temp=head;
   while(temp!=NULL)
   {
       if(i==left-1)
       {
           l1=temp;
       }
       if(i==left)
       {
           l2=temp;
       }
       if(i==right)
       {
           r1=temp;
       }
       if(i==right+1)
       {
           r2=temp;
       }
       temp=temp->next;
       i++;
   }
  
   struct ListNode *prevNode,*currentNode,*nextNode;
    prevNode=NULL;
    currentNode=l2;
    nextNode=l2;
    while(nextNode!=r2)
    {
      nextNode=nextNode->next;
      currentNode->next=prevNode;
      prevNode=currentNode;
      currentNode=nextNode;
    }
    if(l1==NULL)
    {
        head=r1;
    }
    else{
   l1->next=r1;
    }
   l2->next=r2;
    
    
  return head;
}