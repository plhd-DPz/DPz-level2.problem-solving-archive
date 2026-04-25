/*==================
A. 1-1
time limit per test1 second
memory limit per test256 megabytes


Let n be a positive integer. Mario has a binary string∗ s of length n. In one move, he can choose any position i(2≤i≤n−1) such that it's between two 1's, i.e., si−1=si+1=1, and then set si to either 0 or 1.

Mario can perform this operation as many times as he wants (possibly zero). What's the minimum and maximum number of 1's that can be in the resulting string?

∗
A binary string is a string whose characters are either 0 or 1.

Input
Each test contains multiple test cases. The first line contains the number of test cases t(1≤t≤500). The description of the test cases follows.

The first line of each test case contains an integer n(3≤n≤100) — the length of the string.

The second line of each test case contains a string s of length n consisting of characters 0 or 1.

Output
For each test case, output two integers — the minimum and maximum number of 1's in the resulting string after some number of moves.

Example
InputCopy
4
3
111
6
011011
7
1011101
9
100101101
OutputCopy
2 3
3 5
4 7
5 7
Note
In the first test case, the minimum number of 1's that can be in the resulting string is 2
. This is done by transforming the string as follows:
11––1→101.
The maximum number of 1's that can be in the resulting string is 3
, by doing nothing.

In the second test case, the minimum number of 1's that can be in the resulting string is 3
. This is done by transforming the string as follows:
0110––11→011––111→01011––1→010101.
The maximum number of 1's that can be in the resulting string is 5
. This is done by transforming the string as follows:
0110––11→011111.
==================*/

#include <iostream> 
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i=1;i<n-1;i++){
            if (s[i-1]=='1' && s[i+1]=='1') s[i]='1';
        }
        int maxa=0;
        for (int i=0;i<n;i++){
            if (s[i]=='1') maxa++;
        }
        for (int i=1;i<n-1;i++){
            if (s[i-1]=='1' && s[i+1]=='1') s[i]='0';
        }
        int mina=0;
        for (int i=0;i<n;i++){
            if (s[i]=='1') mina++;
        }
        cout << mina << ' ' << maxa << '\n';
    }
    return 0;
}