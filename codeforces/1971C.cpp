/*==================
C. Clock and Strings
time limit per test1 second
memory limit per test256 megabytes
There is a clock labeled with the numbers 1
 through 12
 in clockwise order, as shown below.


In this example, (a,b,c,d)=(2,9,10,6)
, and the strings intersect.

Alice and Bob have four distinct integers a
, b
, c
, d
 not more than 12
. Alice ties a red string connecting a
 and b
, and Bob ties a blue string connecting c
 and d
. Do the strings intersect? (The strings are straight line segments.)

Input
The first line contains a single integer t
 (1≤t≤5940
) — the number of test cases.

The only line of each test case contains four distinct integers a
, b
, c
, d
 (1≤a,b,c,d≤12
).

Output
For each test case, output "YES" (without quotes) if the strings intersect, and "NO" (without quotes) otherwise.

You can output "YES" and "NO" in any case (for example, strings "yEs", "yes", and "Yes" will be recognized as a positive response).

Example
InputCopy
15
2 9 10 6
3 8 9 1
1 2 3 4
5 3 4 12
1 8 2 10
3 12 11 8
9 10 12 1
12 1 10 2
3 12 6 9
1 9 8 4
6 7 9 12
7 12 9 6
10 12 11 1
3 9 6 12
1 4 3 5
OutputCopy
YES
NO
NO
YES
YES
NO
NO
NO
NO
NO
NO
YES
YES
YES
YES
==================*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int check=1, cnt=0;
        for (int i=min(a,b)+1;i<max(a,b);i++){
            if (c==i) cnt|=(1<<1);
            if (d==i) cnt|=(1<<0);
        }
        if (cnt==3 || cnt==0){
            check=0;
        } 
        if (check==0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}