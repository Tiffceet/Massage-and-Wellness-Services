#pragma once
#include <iostream>
#include <string>
using namespace std;

string promptString(string promptMessage);
int promptOptions(string promptMessage, string *optionStrings, int optionsLength);