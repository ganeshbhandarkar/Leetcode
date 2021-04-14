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
        if(!head)return 0;
        ListNode *t = head;
        // int a[201] = {0};
        vector<int> m;
        vector<int> v;
        int i = 0;
        while(t){
            if(t->val < x){
                m.push_back(t->val);
                // m[t->val].first = i;
                // m[t->val].second++; 
            }else{
                v.push_back(t->val); 
            }            
            t = t-> next;
            // i++;
        }
        t = head;
        for(auto i : m){
            // while(i.second.second > 0){
                t->val = i;
                // i.second.second--;
                t = t->next;
            // }
        }
        for(auto i : v){
            t->val = i;
            t = t->next;
        }
        return head;
    }
};