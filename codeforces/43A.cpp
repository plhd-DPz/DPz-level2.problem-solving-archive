/*==================
A. Football
time limit per test2 seconds
memory limit per test256 megabytes
One day Vasya decided to have a look at the results of Berland 1910 Football Championship’s finals. Unfortunately he didn't find the overall score of the match; however, he got hold of a profound description of the match's process. On the whole there are n lines in that description each of which described one goal. Every goal was marked with the name of the team that had scored it. Help Vasya, learn the name of the team that won the finals. It is guaranteed that the match did not end in a tie.

Input
The first line contains an integer n (1 ≤ n ≤ 100) — the number of lines in the description. Then follow n lines — for each goal the names of the teams that scored it. The names are non-empty lines consisting of uppercase Latin letters whose lengths do not exceed 10 symbols. It is guaranteed that the match did not end in a tie and the description contains no more than two different teams.

Output
Print the name of the winning team. We remind you that in football the team that scores more goals is considered the winner.

Examples
InputCopy
1
ABC
OutputCopy
ABC
InputCopy
5
A
ABA
ABA
A
A
OutputCopy
A
==================*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string, int> mp;
    for (int i=0;i<n;i++){
        string x;
        cin >> x;
        mp[x]++;
    }
    string wint ="";
    int best=0;
    for (auto p : mp){
        if (p.second>best){
            best=p.second;
            wint=p.first;
        }
    }
    cout << wint;
    return 0;
}