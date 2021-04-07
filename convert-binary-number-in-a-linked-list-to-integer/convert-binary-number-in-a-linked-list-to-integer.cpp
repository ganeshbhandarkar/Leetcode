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
    int getDecimalValue(ListNode* head) {
        if(!head)return 0;
        ListNode * t = head;
        string s = "";
        while(t){
            s += to_string(t->val);
            t = t->next;
        }
        int ans = 0;
        int j =0;
        for(int i=s.length()-1;i>=0;i--){
            ans += ((s[i]=='1')?pow(2,j):0); 
            cout<<ans<<endl;
            j++;
        }
        return ans;
    }
};