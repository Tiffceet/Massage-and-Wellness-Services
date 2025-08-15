#pragma once
#include "menu.hpp"
#include <iostream>
using namespace std;

void organizationLogoScreen()
{
    // Section 1: Company Name and Logo
    std::cout << "=========================================================\n";
    std::cout << "|                                                       |\n";
    std::cout << "|              Serenity Spa & Wellness                  |\n";
    std::cout << "|                                                       |\n";
    std::cout << "=========================================================\n\n";

    // Section 2: Business Vision and Mission
    std::cout << "--- Our Vision & Mission ---\n";
    std::cout << "Vision: To be the leading sanctuary for rejuvenation and \n"
              << "        well-being in our community.\n\n";
    std::cout << "Mission: To provide exceptional, personalized wellness\n"
              << "         experiences that harmonize body, mind, and spirit,\n"
              << "         using natural products and expert techniques.\n\n";

    // Section 3: Operating Hours and Contact Details
    std::cout << "--- Contact & Operating Hours ---\n";
    std::cout << "Operating Hours:\n";
    std::cout << "  - Monday - Friday: 9:00 AM - 8:00 PM\n";
    std::cout << "  - Saturday       : 10:00 AM - 6:00 PM\n";
    std::cout << "  - Sunday         : Closed\n\n";

    std::cout << "Contact Us:\n";
    std::cout << "  - Phone:   (012) 345-6789\n";
    std::cout << "  - Email:   contact@serenityspa.my\n";
    std::cout << "  - Address: 123 Wellness Lane, Bayan Lepas, Penang\n\n";

    // Section 4: Available Categories of Services
    std::cout << "--- Our Service Categories ---\n";
    std::cout << "  * Massages (Swedish, Deep Tissue, Hot Stone)\n";
    std::cout << "  * Facials (Cleansing, Anti-Aging, Hydrating)\n";
    std::cout << "  * Body Treatments (Scrubs, Wraps)\n";
    std::cout << "  * Nail Care (Manicure, Pedicure)\n\n";

    std::cout << "=========================================================\n";
}

void modeSelectScreen()
{
    cout << "--- Mode Select ---\n";
    cout << "1. Customer Mode\n";
    cout << "2. Expert Mode\n";
    cout << "3. Admin Mode\n";
    cout << "Please select a mode to continue(1/2/3): ";
    int choice = 0;
    while (!(choice > 0 && choice < 4))
    {
        cin >> choice;
    }
    switch (choice)
    {
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

// user screens
void customerMode()
{
    cout << "Would you like to login or register?\n";
    cout << "1. Login\n";
    cout << "2. Register\n";
    cout << "Please select an option (1/2): ";
    int choice = 0;
    while (choice < 1 || choice > 2)
    {
        cin >> choice;
        switch (choice)
        {
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
void customerLoginScreen()
{
    cout << "--- Login Screen ---\n";
    string username, password;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;
}

void customerRegistrationScreen()
{
    cout << "--- Registration Screen ---\n";
    string newUsername, newPassword;
    cout << "Choose a username: ";
    cin >> newUsername;
    cout << "Choose a password: ";
    cin >> newPassword;
}