#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    map<int, string> charactor;
    charactor[0] = "Adrian";
    charactor[1] = "Bruno";
    charactor[2] = "Goran";
    int qustion;
    string answer;
    int maxscore;
    int score[3] = {0, 0, 0};

    cin >> qustion >> answer;

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < qustion; j++)
        {
            switch (i)
            {
            case 0:
                switch (j % 3)
                {
                case 0:
                    if (answer[j] == 'A')
                    {
                        score[0]++;
                    }
                    break;
                case 1:
                    if (answer[j] == 'B')
                    {
                        score[0]++;
                    }
                    break;
                default:
                    if (answer[j] == 'C')
                    {
                        score[0]++;
                    }
                    break;
                }
                break;
            case 1:
                switch (j % 4)
                {
                case 0:
                    if (answer[j] == 'B')
                    {
                        score[1]++;
                    }
                    break;
                case 1:
                    if (answer[j] == 'A')
                    {
                        score[1]++;
                    }
                    break;
                case 2:
                    if (answer[j] == 'B')
                    {
                        score[1]++;
                    }
                    break;
                default:
                    if (answer[j] == 'C')
                    {
                        score[1]++;
                    }
                    break;
                }
                break;
            default:
                switch (j % 6)
                {
                case 0:
                    if (answer[j] == 'C')
                    {
                        score[2]++;
                    }
                    break;
                case 1:
                    if (answer[j] == 'C')
                    {
                        score[2]++;
                    }
                    break;
                case 2:
                    if (answer[j] == 'A')
                    {
                        score[2]++;
                    }
                    break;
                case 3:
                    if (answer[j] == 'A')
                    {
                        score[2]++;
                    }
                    break;
                case 4:
                    if (answer[j] == 'B')
                    {
                        score[2]++;
                    }
                    break;
                default:
                    if (answer[j] == 'B')
                    {
                        score[2]++;
                    }
                    break;
                }
                break;
            }
        }
    }
    maxscore = max({score[0], score[1], score[2]});
    printf("%d\n", maxscore);
    for (size_t i = 0; i < 3; i++)
    {
        if (score[i] == maxscore)
        {
            printf("%s\n", charactor[i].c_str());
        }
    }

    return 0;
}