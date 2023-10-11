#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int year;

public:
    Vehicle(string make, string model, int year)
        : make(make), model(model), year(year) {}

    // Getters
    string getMake() const {
        return make;
    }

    string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }

    // Setters
    void setMake(string make) {
        this->make = make;
    }

    void setModel(string model) {
        this->model = model;
    }

    void setYear(int year) {
        this->year = year;
    }
};

class Car : public Vehicle {
private:
    int seatingCapacity;
    string fuelType;

public:
    Car(string make, string model, int year, int seatingCapacity, string fuelType)
        : Vehicle(make, model, year), seatingCapacity(seatingCapacity), fuelType(fuelType) {}

    // Getters
    int getSeatingCapacity() const {
        return seatingCapacity;
    }

    string getFuelType() const {
        return fuelType;
    }

    // Setters
    void setSeatingCapacity(int seatingCapacity) {
        this->seatingCapacity = seatingCapacity;
    }

    void setFuelType(string fuelType) {
        this->fuelType = fuelType;
    }
};

class Truck : public Vehicle {
private:
    double payloadCapacity;
    double towingCapacity;

public:
    Truck(string make, string model, int year, double payloadCapacity, double towingCapacity)
        : Vehicle(make, model, year), payloadCapacity(payloadCapacity), towingCapacity(towingCapacity) {}

    // Getters
    double getPayloadCapacity() const {
        return payloadCapacity;
    }

    double getTowingCapacity() const {
        return towingCapacity;
    }

    // Setters
    void setPayloadCapacity(double payloadCapacity) {
        this->payloadCapacity = payloadCapacity;
    }

    void setTowingCapacity(double towingCapacity) {
        this->towingCapacity = towingCapacity;
    }
};

int main() {
    Car myCar("Toyota", "Camry", 2022, 5, "Gasoline");
    cout << "Car Make: " << myCar.getMake() << endl;
    cout << "Car Model: " << myCar.getModel() << endl;
    cout << "Car Year: " << myCar.getYear() << endl;
    cout << "Seating Capacity: " << myCar.getSeatingCapacity() << endl;
    cout << "Fuel Type: " << myCar.getFuelType() << endl;

    Truck myTruck("Ford", "F-150", 2022, 1500.0, 7500.0);
    cout << "\nTruck Make: " << myTruck.getMake() << endl;
    cout << "Truck Model: " << myTruck.getModel() << endl;
    cout << "Truck Year: " << myTruck.getYear() << endl;
    cout << "Payload Capacity: " << myTruck.getPayloadCapacity() << " lbs" << endl;
    cout << "Towing Capacity: " << myTruck.getTowingCapacity() << " lbs" << endl;

    return 0;
}
