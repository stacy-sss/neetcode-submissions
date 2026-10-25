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
        int count = 0;
        std::unordered_map<int, ListNode*> m;
        ListNode* cur = head;
        while(cur != nullptr){
            ListNode* nex = cur->next;
            m[count] = cur;
            count++;
            cur = nex;
        }

        int target = count - n;

        if (target == 0) {
            return head->next;
        }
        ListNode* prev = m[target - 1];
        prev->next = prev->next->next;
        return head;
    }

};
