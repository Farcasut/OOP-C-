#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {

        stack<char> paranteze;
        for (int i = 0; i < s.size(); i++)
        {
            switch (s.at(i))
            {
            case '(': paranteze.push(s.at(i)); break;
            case '[': paranteze.push(s.at(i)); break;
            case '{': paranteze.push(s.at(i)); break;
            case ')': if (paranteze.size() && paranteze.top() == '(')
            {
                paranteze.pop();
            }
           else {
                return 0;
            }
                    ; break;
            case ']':if (paranteze.size() && paranteze.top() == '[')
            {
                paranteze.pop();
            }
                    else {
                return 0;
            }
                break;
            case '}':if (paranteze.size() && paranteze.top() == '{')
            {
                paranteze.pop();
            }
                    else {
                return 0;
            } break;

            }
        }
        if (paranteze.size() == 0)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Solution s;
    cout<<s.isValid("[]");
	return 0;
}