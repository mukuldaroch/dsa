#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include <cctype>
#include <iostream>
#include <string>
using namespace std;

class Solution {
  public:
    string generateTag(string caption) {
        string output = "#";

        for (int i = 0; i < caption.length(); i++) {
            if (i == 0) {
                output += tolower(caption[i]);
            } else if (caption[i] == ' ') {
                if (i + 1 < caption.length()) {
                    output += toupper(caption[i + 1]);
                    i++;
                }
            } else {
                output += caption[i];
            }
            if(i == 99){
                return output;
            }
        }

        return output;
    }
};

int main() {
    Solution test;
    cout << test.generateTag("Hello mukul this Is") << endl;
}
