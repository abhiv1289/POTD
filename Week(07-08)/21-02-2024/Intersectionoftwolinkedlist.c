//Intersection of Two Linked List
//link-->https://leetcode.com/problems/intersection-of-two-linked-lists/description/



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* getIntersectionNode(struct ListNode* headA,struct ListNode* headB) {
    struct ListNode *tempA = headA, *tempB = headB;
    if (headA == NULL || headB == NULL) {
        return NULL;
    }

    if (headA->next == NULL) {
        while (tempB != NULL) {
            if (tempB->next == headA) {
                return headA;
            }
            tempB = tempB->next;
        }
    }
    if (headB->next == NULL) {
        while (tempA != NULL) {
            if (tempA->next == headB) {
                return headB;
            }
            tempA = tempA->next;
        }
    }

    tempA = headA, tempB = headB;
    while (tempA != NULL) {
        tempB = headB;
        while (tempB != NULL) {
            if (headA == headB) {
                return headA;
            }
            if (tempB->next == tempA->next) {
                return tempA = tempA->next;
            }
            if (tempB->next == tempA) {
                return tempA;
            }
            if (tempB == tempA->next) {
                return tempA->next;
            }
            tempB = tempB->next;
        }
        tempA = tempA->next;
    }
    return NULL;
}