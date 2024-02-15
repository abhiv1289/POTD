//Odd Even Linked List
//link-->https://leetcode.com/problems/odd-even-linked-list/submissions/1176011913/



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    int count=0;
    struct ListNode *temp;
    temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    if(count<=2)
    {
        return head;
    }
   int i=1;
   struct ListNode *newNode,*even,*odd;
   temp=head;
  
   
   while(temp!=NULL && temp->next!=NULL)
   {
        if(i==(count-1))
        {
            odd=temp;
        }
       if(i==2)
       {
           even=temp;
           //printf("%d",even->val);

       }
       if(i%2==0)
       {
           newNode=temp->next;
           temp->next=newNode->next;
           temp=newNode;
       }
       else
       {
            newNode=temp->next;
           temp->next=newNode->next;
           temp=newNode;
       }
       
       i++;
   }
   //printf("%d",odd->val);
   if(count%2==0)
   {
       odd->next=even;
   }
   else
   {
     temp->next=even;
   }

   
  
   return head;
}