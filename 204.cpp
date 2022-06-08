class Solution {
public:
    bool isHappy(int n) {
        int count = 0;
        while (n != 1) {
            n = intoNext(n);
            count ++;
            if (count > 20) return false;
        }
        return true;
    }

    int intoNext(int n) {
        int res = 0;
        while (n != 0) {
            res += pow(n % 10, 2);
            n /= 10;
        }
        return res;
    }
};
