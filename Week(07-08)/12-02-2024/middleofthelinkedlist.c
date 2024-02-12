// Middle of the linked list
//link-->https://leetcode.com/problems/middle-of-the-linked-list/submissions/1172555403/?envType=list&envId=rrs3r4z6



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *temp;
    int count=0;
    temp=head;
    while(temp!=0)
    {
      count++;
      temp=temp->next;
    }
    int position;
    if(count%2==0)
    {
        position=(count/2)+1;
    }
    else 
    {
        position=(count+1)/2;
    }

    temp=head;
    int i=1;
    while(i<position)
    {
        temp=temp->next;
        i++;
    }
    return temp;
}