#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define ld long double
#define llmax LONG_LONG_MAX
#define llmin LONG_LONG_MIN
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define fi first
#define se second
using namespace std;
struct team
{
    string name;
    int score = 0;
    int goal = 0;
    int tgoal = 0;
};

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    vector<team> vec(4);
    int p[4][4];
    for (int i = 0; i < 4; i++)
    {
        string s;
        getline(cin, s);
        vec[i].name = s;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> p[i][j];
        }
    }
    int s = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = s; j < 4; j++)
        {
            vec[i].goal += p[i][j];
            vec[j].goal += p[j][i];
            vec[i].tgoal += p[j][i];
            vec[j].tgoal += p[i][j];
            if (p[i][j] > p[j][i])
            {
                vec[i].score += 3;
            }
            else if (p[i][j] < p[j][i])
            {
                vec[j].score += 3;
            }
            else
            {
                vec[i].score++;
                vec[j].score++;
            }
        }
        s++;
    }

    sort(all(vec), [](team a, team b)
         { 
        if(a.score == b.score)
        {
            if(a.goal - a.tgoal == b.goal - b.tgoal)
            {
                return a.goal > b.goal;
            }
            else
            {
                return a.goal - a.tgoal > b.goal - b.tgoal;
            }
        }
        else
        {
            return a.score > b.score;
        } });

    for (auto i : vec)
    {
        cout << i.name << " " << i.score << '\n';
    }
    return 0;
}