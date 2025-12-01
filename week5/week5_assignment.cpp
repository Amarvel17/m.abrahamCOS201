#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
    string name, courseName, locationName;
    int course, location, days = 0;
    float regFee = 0, lodgingPerDay = 0, lodgingCost = 0, total = 0;
    float regDiscount = 0, lodgingDiscount = 0, promo = 0;
    bool isPAU;

    cout << "Welcome to PAU Short Courses Registration Portal!\n";
    cout << "Enter your name: ";
    cin >> name; 

    cout << "Are you a PAU student? (1 = Yes, 0 = No): ";
    cin >> isPAU;

    // If not a PAU student, exit immediately
    if (!isPAU) 
    {
        cout << "Oops! Sorry, you can't register.\n";
        return 0;
    }

    cout << "Welcome, " << name << "! Here are the available courses:\n";
    cout << "1. Photography / 3 days - 10,000\n";
    cout << "2. Painting / 5 days - 8,000\n";
    cout << "3. Fish Farming / 7 days - 15,000\n";
    cout << "4. Baking / 5 days - 13,000\n";
    cout << "5. Public Speaking / 2 days - 5,000\n";
    cout << "Select a course (1-5): ";
    cin >> course;

    // Use switch for course selection
    switch (course)
    {
        case 1:
            courseName = "Photography";
            days = 3; regFee = 10000;
            break;
        case 2:
            courseName = "Painting";
            days = 5; regFee = 8000;
            break;
        case 3:
            courseName = "Fish Farming";
            days = 7; regFee = 15000;
            break;
        case 4:
            courseName = "Baking";
            days = 5; regFee = 13000;
            break;
        case 5:
            courseName = "Public Speaking";
            days = 2; regFee = 5000;
            break;
        default:
            cout << "Invalid course selection.\n";
            return 0;
    }

    cout << "\nCamp House options:\n";
    cout << "1. Camp House A - 10,000/day\n";
    cout << "2. Camp House B - 2,500/day\n";
    cout << "3. Camp House C - 5,000/day\n";
    cout << "4. Camp House D - 13,000/day\n";
    cout << "5. Camp House E - 5,000/day\n";
    cout << "Select location (1-5): ";
    cin >> location;

    // Use switch for location selection
    switch (location)
    {
        case 1:
            locationName = "Camp House A"; lodgingPerDay = 10000;
            break;
        case 2:
            locationName = "Camp House B"; lodgingPerDay = 2500;
            break;
        case 3:
            locationName = "Camp House C"; lodgingPerDay = 5000;
            break;
        case 4:
            locationName = "Camp House D"; lodgingPerDay = 13000;
            break;
        case 5:
            locationName = "Camp House E"; lodgingPerDay = 5000;
            break;
        default:
            cout << "Invalid location selection.\n";
            return 0;
    }

    // Compute lodging cost
    lodgingCost = lodgingPerDay * days;

    // Apply PAU lodging discount (5%) if PAU student and Camp House A or B
    if (isPAU && (location == 1 || location == 2)) {
        lodgingDiscount = 0.05 * lodgingCost;
        lodgingCost -= lodgingDiscount;
    }

    // Apply registration discount (3%) if days > 5 OR regFee > 12000
    if ((days > 5) || (regFee > 12000)) {
        regDiscount = 0.03 * regFee;
        regFee -= regDiscount;
    }

    // Random promo
    srand(time(0));
    int r = rand() % 100 + 1;
    if (r == 7 || r == 77) {
        promo = 500;
    }

    // Final total
    total = regFee + lodgingCost - promo;

    // Output summary
    cout << "\n-------------------------------\n";
    cout << "Name: " << name << "   (PAU student: " << (isPAU ? "Yes" : "No") << ")\n";
    cout << "Course: " << courseName << "   Days: " << days << endl;
    cout << "Registration: " << regFee;
    cout << "  (reg discount: " << regDiscount << ")\n";
    cout << "Lodging: " << lodgingPerDay << " × " << days << " = " 
         << (lodgingPerDay * days) << "  (lodging discount: " << lodgingDiscount << ")\n";
    cout << "Random draw: " << r << "  Promo applied: " << promo << endl;
    cout << "--------------------------------\n";
    cout << "TOTAL: " << total << endl;
    cout << "--------------------------------\n";

    return 0;
}

