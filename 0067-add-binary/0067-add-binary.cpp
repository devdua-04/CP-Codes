class Solution {
public:
    string addBinary(string a, string b) {
        char carry = '0';
        int i = a.length() - 1;
        int j = b.length() - 1;
        string sol = "";

        while (i >= 0 && j >= 0) {
            if (a[i] == '1' && b[j] == '1' && carry == '0') {
                sol = '0' + sol;
                carry = '1';
            } else if (a[i] == '1' && b[j] == '1' && carry == '1') {
                sol = '1' + sol;
                carry = '1';
            } else if ((a[i] == '1' && b[j] == '0' && carry == '0') || (a[i] == '0' && b[j] == '1' && carry == '0')) {
                sol = '1' + sol;
            } else if ((a[i] == '1' && b[j] == '0' && carry == '1') || (a[i] == '0' && b[j] == '1' && carry == '1')) {
                sol = '0' + sol;
                carry = '1';
            } else if (a[i] == '0' && b[j] == '0' && carry == '0') {
                sol = '0' + sol;
            } else {
                sol = '1' + sol;
                carry = '0';
            }
            i--;
            j--;
        }

        while (i >= 0) {
            if (carry == '1' && a[i] == '1') {
                sol = '0' + sol;
            } else if (carry == '1' && a[i] == '0') {
                sol = '1' + sol;
                carry = '0';
            } else {
                sol = a[i] + sol;
            }
            i--;
        }

        while (j >= 0) {
            if (carry == '1' && b[j] == '1') {
                sol = '0' + sol;
            } else if (carry == '1' && b[j] == '0') {
                sol = '1' + sol;
                carry = '0';
            } else {
                sol = b[j] + sol;
            }
            j--;
        }

        if (carry != '0') sol = carry + sol;

        return sol;
    }
};
