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
    ListNode* partition(ListNode* head, int x) {
        ListNode *smallList = new ListNode(0);
        ListNode *largeList = new ListNode(0);
        ListNode *smallPointer = smallList;
        ListNode *largePointer = largeList;

        while(head){
            if(head->val < x){
                smallPointer->next = head;
                smallPointer = smallPointer->next;
            }else{
                largePointer->next = head;
                largePointer= largePointer->next;
            }
            head = head->next;
        }
        smallPointer->next = largeList->next;
        largePointer->next = nullptr;


        return smallList->next;
    }
};
