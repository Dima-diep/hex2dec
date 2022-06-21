#include <string>
#include <cmath>
#include <stdio.h>
using namespace std;

int hex2dec(const string hexnum) {
    static int decout = 0;
    const int hexconst = hexnum.length() - 1;
    for (unsigned int k=0; k < hexnum.length(); k++) {
        if (hexnum[k]=='A') {
            decout += (10 * pow(16, (hexconst - k)));
        } else if (hexnum[k]=='B') {
            decout += (11 * pow(16, (hexconst - k)));
        } else if (hexnum[k]=='C') {
            decout += (12 * pow(16, (hexconst - k)));
        } else if (hexnum[k]=='D') {
            decout += (13 * pow(16, (hexconst - k)));
        } else if (hexnum[k]=='E') {
            decout += (14 * pow(16, (hexconst - k)));
        } else if (hexnum[k]=='F') {
            decout += (15 * pow(16, (hexconst - k)));
        } else {
            char sym = hexnum[k];
            int isym = sym - '0';
            decout += (isym * pow(16, (hexconst - k)));
        }
    }
    return decout;
}

int main(int argc, char **argv) {
    if (argc==1) {
        printf("Usage: hex2dec (hexnum1) (hexnum2)\n");
    } else {
        string num;
        for (unsigned int k=1; k < argc; ++k) {
            num = argv[k];
            int decim = hex2dec(num.c_str());
            printf("%d ", decim);
        }
        printf("\n");
    }
    return 0;
}
