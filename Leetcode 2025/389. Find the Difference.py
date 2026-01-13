class Solution {
public:
    char findTheDifference(string s, string t) {

        string sum = s + t;
        char a = 0;
        for (int i = 0; i < sum.length(); i++) {
            a = a ^ sum[i];
        }
        return a;
    }
};