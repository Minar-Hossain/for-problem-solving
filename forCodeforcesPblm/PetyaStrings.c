#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD 101

int main() {
    char ch1[MAX_WORD], ch2[MAX_WORD];  
    // Read two strings from input
    scanf("%s", ch1);
    scanf("%s", ch2);

    int result = 0;

    for (int i = 0; ch1[i] != '\0'; i++) {
        char c1 = tolower(ch1[i]);
        char c2 = tolower(ch2[i]);

        if (c1 < c2) {
            result = -1;
            break;
        } else if (c1 > c2) {
            result = 1;
            break;
        }
    }

    printf("%d\n", result);
    return 0;
}



/* for reference, here is a C++ version of the same logic:

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    // Convert both strings to lowercase
    for (int i = 0; i < s1.length(); i++) {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }

    // Compare lexicographically
    if (s1 < s2)
        cout << -1 << endl;
    else if (s1 > s2)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}


*/