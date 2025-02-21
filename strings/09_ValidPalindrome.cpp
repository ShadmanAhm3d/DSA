
#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        if (s == " ")
            return true;

        int l = 0;
        int r = s.size() - 1;

        while (l < r) {
            char x = (int)tolower(s[l]);
            char y = (int)tolower(s[r]);
            cout << x << " " << y << endl;
while (!(x >= 65 || x <= 90) && l < r) { l = l+1; x = (int)tolower(s[l]); cout << "L " << l << " " ; } while (!(y >= 65 || y <= 90) && l < r) { r--;
                y = (int)tolower(s[r]);
            }

            if (x != y) {
                return false;
            }

            l++;
            r--;
           
        }
        return true;
    }
};

int main(){


  Solution sol = *new Solution();

  
 cout <<  sol.isPalindrome("A man, a plan, a canal: Panama");


}
