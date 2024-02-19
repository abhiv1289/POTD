//Palindrome linked list
//link-->https://discord.com/channels/1183032844751208528/1189532279542923294/1208842914659180586


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    if(head==NULL)
    {
        return true;
    }
   int length=0;
   int arr[100000];
   
  struct ListNode *temp=head;
  while(temp!=NULL)
  {
      arr[length]=temp->val;
      length++;
      temp=(temp)->next;
  }
  int s=0;
  int e=length-1;
  while(s<=e)
  {
      if(arr[s]!=arr[e])
      {
          return false;
      }
      s++;
      e--;

  }
  return true;
}