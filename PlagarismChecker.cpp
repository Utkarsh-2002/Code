#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int LCS(string s1, string s2) {
    int m = s1.length();
    int n = s2.length();
    int lcs[m+1][n+1];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                lcs[i][j] = 0;
            } else if (s1[i-1] == s2[j-1]) {
                lcs[i][j] = lcs[i-1][j-1] + 1;
            } else {
                lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
            }
        }
    }
    return lcs[m][n];
}

int main() {
    string s1, s2;
    cout << "Enter the first string: ";
    getline(cin, s1);
    cout << "Enter the second string: ";
    getline(cin, s2);
    int length = LCS(s1, s2);
    double similarity = (double) length / (double) max(s1.length(), s2.length());
    cout << "Length of the LCS: " << setw(30) << length << endl;
    cout << "Similarity: " << setw(30) << similarity << endl;
    if (similarity > 0.8) {
        cout << "These texts are similar and may be plagiarized." << endl;
    } else {
        cout << "These texts are not similar and are likely original." << endl;
    }
    return 0;
}

