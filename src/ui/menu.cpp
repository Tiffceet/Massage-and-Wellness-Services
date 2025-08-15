#pragma once
#include "menu.hpp"
#include <iostream>
#include <lib/interface.hpp>
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
    string promptMessage = "--- Mode Select ---";
    string optionStrings[] = {
        "Customer Mode",
        "Expert Mode",
        "Admin Mode"};
    int choice = promptOptions(promptMessage, &optionStrings[0], 3);
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
    cout << "Welcome to Serenity Spa & Wellness. Service quality is our utomst priority." << endl;
    cout << "How can we help you today?" << endl;
    string promptMessage = "--- Services Available ---";
    string optionStrings[] = {
        "Facial",
        "Hair Spa",
        "Massage"};
    int choice = promptOptions(promptMessage, &optionStrings[0], 3);
    cout << "Thank you for choosing our " << optionStrings[choice - 1] << " service !" << endl;
}
