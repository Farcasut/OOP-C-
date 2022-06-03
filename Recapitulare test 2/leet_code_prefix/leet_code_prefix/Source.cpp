#include <iostream>
#include <vector>
using namespace std;

//public String longestCommonPrefix(String[] strs) {
//if (strs == null || strs.length == 0) return "";
//for (int i = 0; i < strs[0].length(); i++) {
//    char c = strs[0].charAt(i);
//    for (int j = 1; j < strs.length; j++) {
//        if (i == strs[j].length() || strs[j].charAt(i) != c)
//            return strs[0].substring(0, i);
//    }
//}
//return strs[0];
//}

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        char tmp;
        string ressult;
        int j = 0;
        bool fl = true;
        if (strs.empty())
            return "";
        while (fl)
        {
            if (j < strs[0].length())
            {
                tmp = strs[0][j];
            }
            else
            {
                break;
            }
            for (int i = 1; i < strs.size(); i++)
            {
                if (j >= strs[i].length())
                {
                    fl = false;
                    break;
                }
                else if (tmp != strs[i][j])
                {
                    fl = false;
              
                   
                }
            }
            if (fl)
            {
                j++;
            }
        }
        if (j == 0)
        {
            return "";
        }
        else {
            ressult.assign(strs[0], 0, j);
        }
        return ressult;
    }
};

int main()
{
    Solution s;
    vector<string> test = {"flower","flow","flight"};
    cout<<s.longestCommonPrefix(test);
    return 0;
}