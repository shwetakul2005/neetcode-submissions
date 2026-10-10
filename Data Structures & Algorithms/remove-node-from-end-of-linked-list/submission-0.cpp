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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        ListNode* prev = head;
        int cnt = 0;

        int sz=0;
        while(temp != NULL){
            temp=temp->next;
            sz++;
        }
        temp = head;

        while(temp != NULL){
            if(cnt == sz-n){
                if(temp == head){
                    head = head->next;
                    return head;
                }
                prev->next = temp->next;
                temp->next = NULL;
                return head;
            }
            prev = temp;
            temp = temp->next;
            cnt++;

        }

        return head;

    }
};
