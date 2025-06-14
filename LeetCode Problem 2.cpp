/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      unsigned long long int x=0;
      unsigned long long int y=0;

      unsigned long long int placevalue=1;
      while(l1){
        x+=placevalue*(l1->val);
        placevalue*=10;
        l1=l1->next;
      }  

      placevalue=1;
      while(l2){
        y+=placevalue*(l2->val);
        placevalue*=10;
        l2=l2->next;
      }

      unsigned long long int sum = x+y;

      ListNode* bptr = new ListNode(0);
      ListNode* mptr = bptr;

      if(!sum) return bptr;

      while(sum){
        mptr->next = new ListNode(sum%10);
        mptr = mptr->next;
        sum/=10;
      }

      ListNode* result = bptr->next;
      delete bptr;
      return result;  

    }  

};