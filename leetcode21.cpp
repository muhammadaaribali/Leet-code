#include <iostream>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode*next;
};
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

        if(list1==nullptr) return list2;
        if(list2==nullptr) return list1;

            ListNode *temp=list1;
            while(temp->next!=NULL){
                temp=temp->next;
            }

            temp->next=list2;

            temp=list1;
            ListNode*temp2;

        while(temp!=NULL){
            temp2=temp->next;
            while(temp2!=NULL){
                if(temp->val>temp2->val){
                    int tempo=temp->val;
                    temp->val=temp2->val;
                    temp2->val=tempo;
                }
                temp2=temp2->next;
            }
            temp=temp->next;
        }
        return list1;
    }
};