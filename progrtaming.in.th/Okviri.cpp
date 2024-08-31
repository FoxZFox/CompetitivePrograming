#include <iostream>

using namespace std;

int main()
{
    string word;
    cin >> word;
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < word.size(); j++)
        {

            if (i == 0 || i == 4)
            {
                if ((j + 1) % 3 == 0)
                    cout << "..*.";
                else
                    cout << "..#.";
            }
            else if (i == 1 || i == 3)
            {
                if ((j + 1) % 3 == 0)
                    cout << ".*.*";
                else
                    cout << ".#.#";
            }
            else
            {
                if ((j + 1) % 3 == 0 || ((j + 1) % 3 == 1 && j > 2))
                {
                    cout << "*." << word[j] << ".";
                }
                else
                    cout << "#." << word[j] << ".";
            }
        }
        if (i != 2)
            cout << ".\n";
        else
        {
            if (word.size() % 3 == 0)
            {
                cout << "*\n";
            }
            else
            {
                cout << "#\n";
            }
        }
    }

    return 0;
}