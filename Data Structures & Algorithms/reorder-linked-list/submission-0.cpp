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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;

        while(curr != nullptr){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
    void reorderList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return;
        ListNode* slow = head;
        ListNode* fast = head;
        // if(fast == NULL) return;

        while(fast-> next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* st2 = slow->next;
        slow->next = NULL;
        

        ListNode* temp = head;
        ListNode* temp2 = reverseList(st2);
        ListNode* fwd1;
        ListNode* fwd2;
        while(temp2 != NULL){
            fwd1 = temp->next;
            fwd2 = temp2->next;

            temp->next = temp2;
            temp2->next = fwd1;
            
            temp = fwd1;
            temp2 = fwd2;
        }

        return;
    }
};
