#include <iostream>
#include <string>
using namespace std;
string promptString(string promptMessage)
{
    if (!promptMessage.empty())
    {
        cout << promptMessage << endl;
    }
    string answer;
    cin >> answer;
    return answer;
}

int promptOptions(string promptMessage, string *optionStrings, int optionsLength)
{
    string optionRangeString = "[1-" + to_string(optionsLength) + "]";
    cout << promptMessage << endl;
    for (int i = 0; i < optionsLength; i++)
    {
        int num = i + 1;
        cout << num << ". " << optionStrings[i] << endl;
    }
    cout << "Please select an option " << optionRangeString << ": ";

    int option;
    cin >> option;

    while (option <= 0 || option > optionsLength)
    {
        cout << "Invalid option. Please enter again " << optionRangeString << ": ";
        cin >> option;
    }

    cout << "Selected \"" << option << ". " << optionStrings[option - 1] << "\"." << endl;
    return option;
}