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
    ListNode* oddEvenList(ListNode* head) {
        if(head != nullptr) {
            ListNode* oddTail = head;
            ListNode* curr = head->next;
        
            while(curr && curr->next) {
                ListNode *evenHead = oddTail->next;
                oddTail->next = curr->next;
                oddTail = oddTail->next;
                curr->next = oddTail->next;
                oddTail->next = evenHead;
                curr = curr->next;
            }
        }
        
        return head;
    }
};
