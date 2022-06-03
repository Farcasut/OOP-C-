
#include<iostream>
#include <vector>
using namespace std;


 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
 class Solution {
 public:

     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode* temp = l1;
         int vec[101] = {};
         int vec2[101] = {};
         int i, j;
         i = j = 100;
         while (temp != nullptr)
         {
             vec[i--] = temp->val;
             temp = temp->next;
         }
         temp = l2;
         int size = i < j ? i : j;
         while (temp != nullptr)
         {
             vec2[j--] = temp->val;
             temp = temp->next;
         }
         for (int k = 100; k >= 0; k--)
         {
             vec[k] += vec2[k];
             if (vec[k] >= 10)
             {
                 vec[k - 1] += vec[k] / 10;
                 vec[k] = vec[k] % 10;
             }

         }
         ListNode* result = new ListNode;
         temp = result;
         int ls = 100;
         while (ls != size)
         {
             temp->val = vec[ls--];
             if ((ls) == size)
                 break;
             temp->next = new ListNode;
             temp = temp->next;
         }


         return result;
     }
 };

void addNode(ListNode* l1,int value)
{
    ListNode* temp = l1;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = new ListNode;
    temp->val = value;
}
int main()
{
    Solution s;
    ListNode* list1 = new ListNode;
    ListNode* list2 = new ListNode;
    addNode(list1, 9);
    addNode(list1, 9);
    addNode(list1, 9);
    addNode(list1, 9);
    addNode(list1, 9);
    addNode(list1, 9);
    addNode(list1, 9);
    addNode(list2, 9);
    addNode(list2, 9);
    addNode(list2, 9);
    addNode(list2, 9);

    ListNode* temp = s.addTwoNumbers(list1, list2);

    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}