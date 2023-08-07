#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string str;

    ifstream read("a.txt"); // ifstream==> to read files

    if (read.is_open())
    {
        while (getline(read, str))
        {
            cout << str << endl;
        }
        read.close();
    }
    else
        cout << "File opening is failed" << endl;

    return 0;
}