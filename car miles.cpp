#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    float price;
    int mileage;

public:
    Car(string b, string m, float p, int mi) {
        brand = b;
        model = m;
        price = p;
        mileage = mi;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }

   
    void drive(int distance) {
        mileage += distance;
        cout << "Updated Mileage after driving " << distance << " miles: " << mileage << " miles" << endl;
    }
};


int main() {
    
    Car myCar("Toyota", "Harrier", 90000, 2300);

   
    cout << "--- Initial Car Details ---" << endl;
    myCar.display();

    
    cout << "\n--- Driving 150 miles ---" << endl;
    myCar.drive(150);

    
    cout << "\n--- Driving 300 miles ---" << endl;
    myCar.drive(300);

    return 0;
}
       
