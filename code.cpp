#include <iostream>
#include <string>
using namespace std;

class PopSalon {
private:
    string name, mobileNumber, emailAddress, flavor, quality;
    double totalAmount;
    bool giftWrapper, chocolateSauce, caramelSauce, meltedCheese;
    string packSize;
    
public:
    PopSalon() {
        totalAmount = 0;
        giftWrapper = false;
        chocolateSauce = false;
        caramelSauce = false;
        meltedCheese = false;
    }

    void inputDetails() {
        cout << "Enter your name: ";
        getline(cin, name);
        cout << "Enter your mobile number: ";
        getline(cin, mobileNumber);
        cout << "Enter your email address: ";
        getline(cin, emailAddress);

        cout << "How would you rate the service quality (good/neutral/bad)? ";
        getline(cin, quality);
    }

    void showMenu() {
        int choice;
        cout << "\nPopSalon Ice Cream Vendor Menu:\n";
        cout << "1. Chocolate\n2. English Toffee\n3. Salted Caramel\n4. Caramel\n5. Jalapeno\n";
        cout << "6. Cheese\n7. Spiced Cheese\n8. Plain Salted\n9. Buttered\n10. Salt and Pepper\n11. Garlic\n";
        cout << "Please select the flavor (1-11): ";
        cin >> choice;

        switch(choice) {
            case 1: flavor = "Chocolate"; break;
            case 2: flavor = "English Toffee"; break;
            case 3: flavor = "Salted Caramel"; break;
            case 4: flavor = "Caramel"; break;
            case 5: flavor = "Jalapeno"; break;
            case 6: flavor = "Cheese"; break;
            case 7: flavor = "Spiced Cheese"; break;
            case 8: flavor = "Plain Salted"; break;
            case 9: flavor = "Buttered"; break;
            case 10: flavor = "Salt and Pepper"; break;
            case 11: flavor = "Garlic"; break;
            default:
                cout << "Invalid input. Please try again.\n";
                showMenu();
                return;
        }
    }

    void selectPackSize() {
        int packChoice;
        cout << "\nSelect the pack size:\n";
        cout << "1. Small (Rs. 100)\n2. Medium (Rs. 250)\n3. Large (Rs. 500)\n4. Tin (Rs. 750)\n";
        cout << "Please select the pack size (1-4): ";
        cin >> packChoice;

        switch(packChoice) {
            case 1: 
                packSize = "Small"; 
                totalAmount += 100; 
                break;
            case 2: 
                packSize = "Medium"; 
                totalAmount += 250; 
                break;
            case 3: 
                packSize = "Large"; 
                totalAmount += 500; 
                break;
            case 4: 
                packSize = "Tin"; 
                totalAmount += 750; 
                break;
            default:
                cout << "Invalid input. Please try again.\n";
                selectPackSize();
                return;
        }
    }

    void addToppings() {
        int toppingChoice;
        cout << "\nSelect additional toppings (enter 0 to skip):\n";
        cout << "1. Chocolate Sauce (Rs. 50)\n2. Caramel Sauce (Rs. 30)\n3. Melted Cheese (Rs. 60)\n";
        cout << "Please select toppings (1-3): ";
        cin >> toppingChoice;

        if (toppingChoice == 1) {
            chocolateSauce = true;
            totalAmount += 50;
        } else if (toppingChoice == 2) {
            caramelSauce = true;
            totalAmount += 30;
        } else if (toppingChoice == 3) {
            meltedCheese = true;
            totalAmount += 60;
        }
    }

    void addGiftWrapper() {
        char choice;
        cout << "\nDo you want a gift wrapper for Rs. 50 (y/n)? ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            giftWrapper = true;
            totalAmount += 50;
        }
    }

    void displayBill() {
        cout << "\n        PopSalon Final Bill \n";
        cout << "Name: " << name << "\n";
        cout << "Mobile: " << mobileNumber << "\n";
        cout << "Email: " << emailAddress << "\n";
        cout << "Flavor: " << flavor << "\n";
        cout << "Pack Size: " << packSize << "\n";

        if (chocolateSauce) {
            cout << "Topping: Chocolate Sauce\n";
        }
        if (caramelSauce) {
            cout << "Topping: Caramel Sauce\n";
        }
        if (meltedCheese) {
            cout << "Topping: Melted Cheese\n";
        }

        if (giftWrapper) {
            cout << "Gift Wrapper: Yes\n";
        }

        cout << "Total Amount: Rs. " << totalAmount << "\n";
    }

    ~PopSalon() {
        cout << "\nThank you for shopping at PopSalon! Have a great day!\n";
    }
};

int main() {
    PopSalon customer;
    
    customer.inputDetails();
    customer.showMenu();
    customer.selectPackSize();
    customer.addToppings();
    customer.addGiftWrapper();
    customer.displayBill();

    return 0;
}
