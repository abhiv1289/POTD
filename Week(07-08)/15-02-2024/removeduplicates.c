//remove duplicates from sorted list
//link-->https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/1175750437/



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *temp, *newNode;
    temp = head;
    
    while (temp != NULL && temp->next!=NULL) {
        bool value=true; 
        newNode = temp->next;
        if (temp->val == newNode->val) {
        temp->next = newNode->next;
        value=false;
        }
        if(value)
        temp = temp->next;
    }
    return head;
}