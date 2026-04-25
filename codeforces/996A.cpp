/*==================
A. Hit the Lottery
time limit per test1 second
memory limit per test256 megabytes
Allen has a LOT of money. He has n
 dollars in the bank. For security reasons, he wants to withdraw it in cash (we will not disclose the reasons here). The denominations for dollar bills are 1
, 5
, 10
, 20
, 100
. What is the minimum number of bills Allen could receive after withdrawing his entire balance?

Input
The first and only line of input contains a single integer n
 (1≤n≤109
).

Output
Output the minimum number of bills that Allen could receive.

Examples
InputCopy
125
OutputCopy
3
InputCopy
43
OutputCopy
5
InputCopy
1000000000
OutputCopy
10000000
==================*/

#include <iostream>

using namespace std;

int main(){
    int n, count=0;
    cin >> n;
    while (n>0){
        if (n>=100) n-=100;
        else if (n>=20) n-=20;
        else if (n>=10) n-=10;
        else if (n>=5) n-=5;
        else n-=1;
        count++;
    }
    cout << count;
    return 0;
}