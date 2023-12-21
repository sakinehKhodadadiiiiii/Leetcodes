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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return nullptr;
        return mergeKlistsHelper(lists,0,lists.size()-1);
    }
    ListNode* mergeKlistsHelper(vector<ListNode*>& lists,int start,int end){
        if(start == end) return lists[start];
        if(start + 1 == end) return merge(lists[start],lists[end]);
        int mid = (start + end)/2;
        ListNode * left = mergeKlistsHelper(lists, start,mid);
        ListNode * right = mergeKlistsHelper(lists, mid+1, end);
        return merge(left,right);
    }
    ListNode * merge(ListNode* l1, ListNode* l2){
        ListNode* dummy = new ListNode();
        ListNode* curr = dummy;

        while(l1 && l2){
            if(l1->val < l2->val){
                curr->next = l1;
                l1 = l1->next;
            }
            else{
                curr->next = l2;
                l2 =  l2->next;
            }
            curr = curr->next;
        }
        if(l1) curr->next = l1;
        else curr->next = l2;

        return dummy->next;
    }

};