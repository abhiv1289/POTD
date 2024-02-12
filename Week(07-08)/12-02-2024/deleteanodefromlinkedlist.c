// Delete a node from the linked list
//link->https://leetcode.com/problems/delete-node-in-a-linked-list/submissions/1172755181/?envType=list&envId=rrs3r4z6



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
   struct ListNode *temp;
   temp=node;
   temp=temp->next;
   node->next=temp->next;
   node->val=temp->val; 
}