#include <iostream>
#include <deque>

using namespace std;

int main(void)
{
    int n = 0;
    cin >> n;

    deque<int> d;
    while (n--)
    {
        string command;
        cin >> command;

        int value;

        if (command == "push_front")
        {
            cin >> value;
            d.push_front(value);
        }
        else if (command == "push_back")
        {
            cin >> value;
            d.push_back(value);
        }
        else if (command == "pop_front")
        {
            if (d.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << d.front() << "\n";
                d.pop_front();
            }
        }
        else if (command == "pop_back")
        {
            if (d.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << d.back() << "\n";
                d.pop_back();
            }
        }
        else if (command == "size")
        {
            cout << d.size() << "\n";
        }
        else if (command == "empty")
        {
            if (d.empty())
                cout << "1\n";
            else
                cout << "0\n";
        }
        else if (command == "front")
        {
            if (d.empty())
                cout << "-1\n";
            else
                cout << d.front() << "\n";
        }
        else if (command == "back")
        {
            if (d.empty())
                cout << "-1\n";
            else
                cout << d.back() << "\n";
        }
        else
        {
            cout << "Undefined Behavior!";
        }
    }
}
