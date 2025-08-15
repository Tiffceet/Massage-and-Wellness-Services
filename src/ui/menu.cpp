#pragma once
#include "menu.hpp"
#include <iostream>
using namespace std;


void organizationLogoScreen() {
    cout << "========================================\n";
    cout << "|                                      |\n";
    cout << "|          Massage & Wellness          |\n";
    cout << "|                                      |\n";
    cout << "========================================\n";
    cout << "\n";
};

void modeSelectScreen() {
    cout << "--- Mode Select ---\n";
    cout << "1. Customer Mode\n";
    cout << "2. Expert Mode\n";
    cout << "3. Admin Mode\n";
    cout << "Please select a mode to continue(1/2/3): ";
    int choice = 0;
    while (!(choice > 0  && choice < 4)) {
        cin >> choice;
	}
        switch (choice) {
            case 1:
                cout << "\n";
                customerMode();
                break;
            case 2:
                // expertMode();
                break;
            case 3:
                // adminMode();
                break;
			default:
                cout << "Invalid. Please select again (1/2/3): ";
		}
};


//user screens
void customerMode() {
	cout << "Would you like to login or register?\n";
    cout << "1. Login\n";
    cout << "2. Register\n";
    cout << "Please select an option (1/2): ";
    int choice = 0;
    while (choice < 1 || choice > 2) {
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "\n";
                customerLoginScreen();
                break;
            case 2:
                cout << "\n";
                customerRegistrationScreen();
                break;
            default:
                cout << "Invalid. Please select again (1/2): ";
        }
	}
}
void customerLoginScreen() {
    cout << "--- Login Screen ---\n";
     string username, password;
     cout << "Username: ";
     cin >> username;
     cout << "Password: ";
     cin >> password;
}

void customerRegistrationScreen() {
    cout << "--- Registration Screen ---\n";
     string newUsername, newPassword;
     cout << "Choose a username: ";
     cin >> newUsername;
     cout << "Choose a password: ";
     cin >> newPassword;
}