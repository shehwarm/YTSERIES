#include <iostream>
#include <vector>
#include <string>

using namespace std;

class SubmarineSandwich {
private:
    string breadType; // Type of bread (e.g., Italian, Whole Wheat, etc.)
    vector<string> fillings; // List of fillings (e.g., Mortadella, Turkey, etc.)
    vector<string> cheeses; // List of cheeses (e.g., Cheddar, Swiss, etc.)
    vector<string> sauces; // List of sauces (e.g., Mayo, Mustard, etc.)
    vector<string> vegetables; // List of vegetables (e.g., Lettuce, Tomato, etc.)
    bool toasted; // Whether the sandwich is toasted or not

public:
    // Constructor
    SubmarineSandwich(string bread, bool isToasted = false)
        : breadType(bread), toasted(isToasted) {}

    // Function to add a filling
    void addFilling(const string& filling) {
        fillings.push_back(filling);
    }

    // Function to add cheese
    void addCheese(const string& cheese) {
        cheeses.push_back(cheese);
    }

    // Function to add a sauce
    void addSauce(const string& sauce) {
        sauces.push_back(sauce);
    }

    // Function to add a vegetable
    void addVegetable(const string& vegetable) {
        vegetables.push_back(vegetable);
    }

    // Function to display the sandwich details
    void displaySandwich() const {
        cout << "Submarine Sandwich Details:\n";
        cout << "Bread Type: " << breadType << "\n";
        cout << "Toasted: " << (toasted ? "Yes" : "No") << "\n";
        
        cout << "Fillings: ";
        for (const auto& filling : fillings) {
            cout << filling << " ";
        }
        cout << "\n";

        cout << "Cheeses: ";
        for (const auto& cheese : cheeses) {
            cout << cheese << " ";
        }
        cout << "\n";

        cout << "Sauces: ";
        for (const auto& sauce : sauces) {
            cout << sauce << " ";
        }
        cout << "\n";

        cout << "Vegetables: ";
        for (const auto& vegetable : vegetables) {
            cout << vegetable << " ";
        }
        cout << "\n";
    }
};

int main() {
    // Create a submarine sandwich
    SubmarineSandwich mySandwich("Italian", true);
    mySandwich.addFilling("Mortadella");
    mySandwich.addFilling("Turkey");
    mySandwich.addCheese("Provolone");
    mySandwich.addSauce("Mayo");
    mySandwich.addSauce("Mustard");
    mySandwich.addVegetable("Lettuce");
    mySandwich.addVegetable("Tomato");
    mySandwich.addVegetable("Onion");

    // Display the sandwich details
    mySandwich.displaySandwich();

    return 0;
}