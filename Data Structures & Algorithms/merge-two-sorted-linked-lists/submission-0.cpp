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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* ptr1 = list1;
        if(ptr1 == nullptr) return list2;
        ListNode* ptr2 = list2;
        if(ptr2 == nullptr) return list1;
        ListNode* temp = nullptr;
        ListNode* final_head = nullptr;

        while(ptr1!= nullptr && ptr2 != nullptr){
            int value;
            
            if(ptr1->val <= ptr2->val){
                value = ptr1->val;
                ptr1 = ptr1->next;
            }

            else if(ptr1->val > ptr2->val){   
                value = ptr2->val;
                ptr2 = ptr2->next;
            }

            ListNode* newnode = new ListNode(value);

            if(final_head == nullptr){
                final_head = newnode;
                temp = newnode;
            }
            else{
                temp->next = newnode;
                temp = temp->next;
            }
        }

        while(ptr1 != nullptr){
            temp->next = new ListNode(ptr1->val);
            temp = temp->next;
            ptr1 = ptr1->next;
        }

        while(ptr2 != nullptr){
            temp->next = new ListNode(ptr2->val);
            temp = temp->next;
            ptr2 = ptr2->next;
        }
        return final_head;

    }
};
