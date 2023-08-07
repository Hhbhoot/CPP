#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream abc("a.txt"); // ofstream-> to wright on files

    if (abc.is_open())
    {

        abc << "Welcome to skillqode" << endl;
        abc << "We completed cpp" << endl;
    }
    abc.close();
}