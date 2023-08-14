#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // write file

    char input[100];

    ofstream os;

    os.open("abc.txt");
    cout << "Writing to a text file" << endl;
    cin.getline(input, 100);
    os << input << endl;

    cout << "please Enter contact number " << endl;
    cin >> input;

    cin.ignore();

    os << input << endl;
    os.close();

    // Read only
    ifstream is;
    string line;
    is.open("abc.txt");

    cout << "Reading from a text file " << endl;

    while (getline(is, line))
    {
        cout << line << endl;
    }

    is.close();
    return 0;
}