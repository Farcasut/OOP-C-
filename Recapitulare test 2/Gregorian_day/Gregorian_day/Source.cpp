#include <iostream>


using namespace std;


class Solution {
public:

    int myownatoi(string a) {
        int i = 0;
        int val = 0;
        while (a[i] != '\0' && a[i] != ' ' && a[i] != '\n') {

            val = val * 10;
            switch (a[i])
            {
            case '0':
                val += 0;
                break;
            case '1':
                val += 1;
                break;
            case '2':
                val += 2;
                break;
            case '3':
                val += 3;
                break;
            case '4':
                val += 4;
                break;
            case '5':
                val += 5;
                break;
            case '6':
                val += 6;
                break;
            case '7':
                val += 7;
                break;

            case '8':
                val += 8;
                break;
            case '9':
                val += 9;
                break;



            default:
                val = -1;
                break;



            }
            i++;

        }

        return val;

    }

    int leap_year(int year) {

        if (year % 400 == 0) {
            return 1;
        }
        else if (year % 100 == 0) {
            return 0;
        }
        else if (year % 4 == 0) {
            return 1;
        }
        else {
            return 0;
        }
    }
    int dayOfYear(string date) {
        // YYYY-MM-DD
        int days = 0;
        string year = date.substr(0, 4);
        string month = date.substr(5, 2);
        string day = date.substr(8, 2);
        int y = myownatoi(year);
        int m = myownatoi(month);
        int d = myownatoi(day);
        int leap = leap_year(y);
        for (int i = 0; i < m; i++) {
            switch (i)
            {
            case 1: days += 31; break; //i
            case 2:if (leap == 1) days += 29; else days += 28; break;
            case 3: days += 31; break;
            case 4: days += 30; break;
            case 5: days += 31; break;
            case 6: days += 30; break;
            case 7: days += 31; break;
            case 8: days += 31; break;
            case 9: days += 30; break;
            case 10: days += 31; break;
            case 11: days += 30; break;
            case 12: days += 31; break;
            default:
                break;
            }
        }
        days+=d;

        return days;
            
    }
  
   
};


int main()
{
    Solution s;
   cout<< s.dayOfYear("2019-02-10");

	return 0;
}