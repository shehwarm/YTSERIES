#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    string LicensePlate_No;
    string Model_No;
    string Type;
    string Color;

public:

    Vehicle() {
        LicensePlate_No = "Unknown";
        Model_No = "Unknown";
        Type = "Unknown";
        Color = "Unknown";
    }

    Vehicle(string l, string m, string t, string c) {
        LicensePlate_No = l;
        Model_No = m;
        Type = t;
        Color = c;
    }

    void setLicensePlate_No(string l) { 
        LicensePlate_No = l; 
    }
    string getLicensePlate_No() {
         return LicensePlate_No;
         }

    void setModel_No(string m) { 
        Model_No = m; 
    }
    string getModel_No() { 
        return Model_No; 
    }

    void setType(string t) { 
        Type = t; 
    }
    string getType() {
         return Type; 
        }

    void setColor(string c){
        Color = c; 
    }
    string getColor() { 
        return Color;
     }

    
    void registerVehicle() {
        cout << "Enter License Plate Number: ";
        cin >> LicensePlate_No;
        cout << "Enter Model Number: ";
        cin >> Model_No;
        cout << "Enter Type (Car, Bike, Truck, etc.): ";
        cin >> Type;
        cout << "Enter Color: ";
        cin >> Color;
    }

    void updateVehicle() {
        int choice;
        cout << "Select the field to update:\n";
        cout << "1. License Plate No\n";
        cout << "2. Model No\n";
        cout << "3. Type\n";
        cout << "4. Color\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter new License Plate Number: ";
                cin >> LicensePlate_No;
                break;
            case 2:
                cout << "Enter new Model Number: ";
                cin >> Model_No;
                break;
            case 3:
                cout << "Enter new Type (Car, Bike, Truck, etc.): ";
                cin >> Type;
                break;
            case 4:
                cout << "Enter new Color: ";
                cin >> Color;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    }

    void deleteVehicle() {
        LicensePlate_No = "Unknown";
        Model_No = "Unknown";
        Type = "Unknown";
        Color = "Unknown";
        cout << "Vehicle information has been deleted!" << endl;
    }

    void searchVehicle(string l) {
        if (LicensePlate_No == l) {
            cout << "Vehicle found!" << endl;
            cout << "License Plate No: " << LicensePlate_No << endl;
            cout << "Model No: " << Model_No << endl;
            cout << "Type: " << Type << endl;
            cout << "Color: " << Color << endl;
        } else {
            cout << "Vehicle not found!" << endl;
        }
    }

    void displayVehicle() {
        cout << "Vehicle Information: " << endl;
        cout << "License Plate No: " << LicensePlate_No << endl;
        cout << "Model No: " << Model_No << endl;
        cout << "Type: " << Type << endl;
        cout << "Color: " << Color << endl;
    }
};

int main() {
    Vehicle v;  

    int choice;
    
        cout << "\nMenu: \n";
        cout << "1. Register Vehicle\n";
        cout << "2. Update Vehicle\n";
        cout << "3. Delete Vehicle\n";
        cout << "4. Search Vehicle\n";
        cout << "5. Display Vehicle Info\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                v.registerVehicle();
                break;
            case 2:
                v.updateVehicle();
                break;
            case 3:
                v.deleteVehicle();
                break;
            case 4: {
                string l;
                cout << "Enter License Plate to search: ";
                cin >> l;
                v.searchVehicle(l);
                break;
            }
            case 5:
                v.displayVehicle();
                break;
            case 6:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }

    return 0;
}
