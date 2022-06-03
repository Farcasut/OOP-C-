#pragma once
//
//Satisface daor 792/1568 de cazuri si e inceata
//

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = l1;
        int vec[101] = {};
        int vec2[101] = {};
        int i, j;
        i = j = 0;
        while (temp != nullptr)
        {
            vec[i++] = temp->val;
            temp = temp->next;
        }
        temp = l2;
        while (temp != nullptr)
        {
            vec2[j++] = temp->val;
            temp = temp->next;
        }
        unsigned long long int num1 = 0;
        for (; j >= 0; j--)
        {
            num1 *= 10;
            num1 += vec2[j];
        }
        unsigned long long int num2 = 0;
        for (; i >= 0; i--)
        {
            num2 *= 10;
            num2 += vec[i];
        }
        int r = num1 + num2;
        ListNode* result = new ListNode;
        temp = result;
        while (r)
        {
            temp->val = r % 10;
            r = r / 10;
            if (r == 0)
                break;
            temp->next = new ListNode;
            temp = temp->next;
        }
        temp = result;
        while (temp != nullptr)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        return result;
    }
};