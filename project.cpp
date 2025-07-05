#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

class MenuItem {
public:
    string name;
    int price;
    MenuItem(string n, int p) {
        name = n;
        price = p;
    }
};

class CountryMenu {
public:
    string countryName;
    vector<MenuItem> items;
    vector<string> orderedItems;

    CountryMenu(string name) {
        countryName = name;
    }

    void addItem(string name, int price) {
        items.push_back(MenuItem(name, price));
    }

    int takeOrder() {
        int total = 0, choice, quantity;
        cout << "\n--- " << countryName << " Menu ---\n";
        for (int i = 0; i < items.size(); i++)
            cout << i + 1 << ". " << items[i].name << " - " << items[i].price << " BDT\n";
        cout << "0. Done\n";

        for (int i = 0; i < items.size(); i++) {
            cout << "Choose item number (0 to finish): ";
            cin >> choice;
            if (choice == 0) break;
            if (choice < 1 || choice > items.size()) {
                cout << "Invalid choice.\n";
                continue;
            }
            cout << "Quantity: ";
            cin >> quantity;
            int cost = items[choice - 1].price * quantity;
            total += cost;

            string ordered = items[choice - 1].name + " x" + to_string(quantity) + " = " + to_string(cost) + " BDT";
            orderedItems.push_back(ordered);
        }

        return total;
    }

    void writeOrderToFile(ofstream &out) {
        if (!orderedItems.empty()) {
            out << "\n" << countryName << " Food Ordered:\n";
            for (string &line : orderedItems) {
                out << " - " << line << "\n";
            }
        }
    }
};

// Function to convert string to lowercase
string toLower(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

// Function to show all saved orders
void showSavedOrders() {
    ifstream inFile("orders.txt");
    if (!inFile) {
        cout << "No saved orders found (file missing or empty).\n";
        return;
    }

    string line;
    cout << "\n========== Saved Orders ==========\n";
    while (getline(inFile, line)) {
        cout << line << '\n';
    }
    cout << "==================================\n";
    inFile.close();
}

// Function to search for a customer's order by name or phone, case-insensitive
void findOrderByNameOrPhone() {
    ifstream inFile("orders.txt");
    if (!inFile) {
        cout << "No saved orders found.\n";
        return;
    }

    string query;
    cout << "Enter customer name or phone to search: ";
    cin.ignore();
    getline(cin, query);
    query = toLower(query); // convert query to lowercase for case-insensitive comparison

    string line;
    bool found = false;
    cout << "\n========== Matching Order ==========\n";

    while (getline(inFile, line)) {
        string lowerLine = toLower(line); // convert line to lowercase

        // Check if query matches in line
        if (lowerLine.find(query) != string::npos) {
            found = true;
            cout << line << '\n';

            // Print rest of the order block
            while (getline(inFile, line) && line.find("=============================") == string::npos) {
                cout << line << '\n';
            }
            cout << "=============================\n";
            // break; // uncomment if only first match is needed
        }
    }

    if (!found)
        cout << "No matching order found for: " << query << '\n';

    inFile.close();
}

int main() {
    int modeChoice;
    cout << "1. Take New Order\n";
    cout << "2. View Saved Orders\n";
    cout << "3. Find a Customer's Order\n";
    cout << "Enter choice: ";
    cin >> modeChoice;

    if (modeChoice == 2) {
        showSavedOrders();
        return 0;
    } else if (modeChoice == 3) {
        findOrderByNameOrPhone();
        return 0;
    }

    // Variables
    string name, phone;
    int choice, totalBill = 0;

    // Menus
    CountryMenu bangladesh("Bangladeshi");
    bangladesh.addItem("Kacchi Biryani", 250);
    bangladesh.addItem("Beef Tehari", 150);
    bangladesh.addItem("Hilsha Bhuna", 250);
    bangladesh.addItem("Morog Polao", 180);
    bangladesh.addItem("Beef Curry", 200);
    bangladesh.addItem("Chicken Curry", 120);
    bangladesh.addItem("Plain Rice with Dal", 50);
    bangladesh.addItem("Shutki Bhuna", 100);
    bangladesh.addItem("Khichuri with Egg/Meat", 220);
    bangladesh.addItem("Panta Bhaat", 40);
    bangladesh.addItem("Lassi", 120);

    CountryMenu india("Indian");
    india.addItem("Butter Chicken", 400);
    india.addItem("Paneer Butter Masala", 330);
    india.addItem("Masala Dosa", 100);
    india.addItem("Chole Bhature", 130);
    india.addItem("Chicken Biryani", 240);
    india.addItem("Rajma Chawal", 130);
    india.addItem("Pav Bhaji", 100);
    india.addItem("Vegetarian Thali", 200);
    india.addItem("Aloo Paratha", 80);
    india.addItem("Samosa", 15);

    CountryMenu china("Chinese");
    china.addItem("Chicken Fried Rice", 250);
    china.addItem("Beef Chili Dry", 350);
    china.addItem("Sweet and Sour Chicken", 350);
    china.addItem("Chicken Chow Mein", 280);
    china.addItem("Szechuan Chicken", 350);
    china.addItem("Hot and Sour Soup", 150);
    china.addItem("Spring Rolls", 45);
    china.addItem("Kung Pao Chicken", 400);
    china.addItem("Garlic Prawn", 450);
    china.addItem("Mixed Vegetable Stir Fry", 250);

    CountryMenu italy("Italian");
    italy.addItem("Margherita Pizza", 400);
    italy.addItem("Spaghetti Bolognese", 500);
    italy.addItem("Lasagna", 550);
    italy.addItem("Pasta Alfredo", 400);
    italy.addItem("Risotto", 500);
    italy.addItem("Bruschetta", 200);
    italy.addItem("Fettuccine Carbonara", 500);
    italy.addItem("Gnocchi", 450);
    italy.addItem("Tiramisu", 300);
    italy.addItem("Panna Cotta", 250);

    CountryMenu america("American");
    america.addItem("Cheeseburger", 300);
    america.addItem("Fried Chicken", 350);
    america.addItem("BBQ Chicken Wings", 250);
    america.addItem("Hot Dog", 200);
    america.addItem("Mac and Cheese", 320);
    america.addItem("Grilled Cheese Sandwich", 180);
    america.addItem("Steak (Beef/Chicken)", 600);
    america.addItem("French Fries", 100);
    america.addItem("Club Sandwich", 300);
    america.addItem("Apple Pie or Brownie", 200);

    vector<CountryMenu> menus = {bangladesh, india, china, italy, america};

    // Hotel Info
    cout << "                                ADDABAZ                   \n";
    cout << "\n                                                  cell : 01745454544\n";
    cout << "MIRPUR,Sec#7,PALLABI,DHAKA-1216                         01540167465\n";
    cout << "=======================================================================\n";

    // Customer Info
    cout << "Enter customer name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter phone number: ";
    getline(cin, phone);

    // Ordering Loop
    while (true) {
        cout << "\n--- Choose Country ---\n";
        for (int i = 0; i < menus.size(); ++i)
            cout << i + 1 << ". " << menus[i].countryName << "\n";
        cout << "0. Finish Order\n";

        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 0) break;
        if (choice < 1 || choice > menus.size()) {
            cout << "Invalid choice.\n";
            continue;
        }

        totalBill += menus[choice - 1].takeOrder();
    }

    // Discount
    int discountPercent;
    cout << "Enter discount percentage (0 if none): ";
    cin >> discountPercent;
    int discountAmount = (totalBill * discountPercent) / 100;
    int finalBill = totalBill - discountAmount;

    // Summary
    cout << "\n--- Order Summary ---\n";
    cout << "Customer: " << name << "\n";
    cout << "Phone: " << phone << "\n";
    cout << "Total Bill (before discount): " << totalBill << " BDT\n";
    cout << "Discount: " << discountAmount << " BDT (" << discountPercent << "%)\n";
    cout << "Final Bill: " << finalBill << " BDT\n";

    // Save to file
    ofstream out("orders.txt", ios::app);
    out << "\n                               ADDABAZ                 \n";
    out << "\nMIRPUR,Sec#7,PALLABI,DHAKA-1216 \n       \n 01703924655\n 01540167465\n";
    out << "\n=============================\n";
    out << "Customer: " << name << "\n";
    out << "Phone: " << phone << "\n";

    for (CountryMenu &menu : menus) {
        menu.writeOrderToFile(out);
    }

    out << "Total (before discount): " << totalBill << " BDT\n";
    out << "Discount: " << discountAmount << " BDT (" << discountPercent << "%)\n";
    out << "Final Bill: " << finalBill << " BDT\n";
    out << "=============================\n";
    out.close();

    cout << "\nFinal amount (" << finalBill << " BDT) saved to file 'orders.txt'.\nThank you!\n";
    return 0;
}

