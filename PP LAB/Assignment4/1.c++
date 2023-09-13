#include <iostream>
#include <string>

class Vehicle {
private:
    float price;
    std::string manufacturer;
public:
    Vehicle() : price(0), manufacturer("") {}
    Vehicle(float price, std::string manufacturer) : price(price), manufacturer(manufacturer) {}
    Vehicle(const Vehicle& other) : price(other.price), manufacturer(other.manufacturer) {}

    Vehicle& operator=(const Vehicle& other) {
        if (this != &other) {
            price = other.price;
            manufacturer = other.manufacturer;
        }
        return *this;
    }

    void readData() {
        std::cout << "Enter price: ";
        std::cin >> price;
        std::cout << "Enter manufacturer: ";
        std::cin >> manufacturer;
    }

    void displayData() {
        std::cout << "Price: " << price << std::endl;
        std::cout << "Manufacturer: " << manufacturer << std::endl;
    }
};

class Car : public Vehicle {
private:
    std::string color;
    int numSeats;
    std::string model;
public:
    Car() : color(""), numSeats(0), model("") {}
    Car(float price, std::string manufacturer, std::string color, int numSeats, std::string model)
        : Vehicle(price, manufacturer), color(color), numSeats(numSeats), model(model) {}
    Car(const Car& other) : Vehicle(other), color(other.color), numSeats(other.numSeats), model(other.model) {}

    Car& operator=(const Car& other) {
        if (this != &other) {
            Vehicle::operator=(other);
            color = other.color;
            numSeats = other.numSeats;
            model = other.model;
        }
        return *this;
    }

    void readData() {
        Vehicle::readData();
        std::cout << "Enter color: ";
        std::cin >> color;
        std::cout << "Enter number of seats: ";
        std::cin >> numSeats;
        std::cout << "Enter model: ";
        std::cin >> model;
    }

    void displayData() {
        Vehicle::displayData();
        std::cout << "Color: " << color << std::endl;
        std::cout << "Number of seats: " << numSeats << std::endl;
        std::cout << "Model: " << model << std::endl;
    }
};

int main() {
    Car myCar(20000, "Toyota", "Red", 4, "Corolla");
    myCar.displayData();
    std::cout << std::endl;
    
    Car anotherCar;
    anotherCar.readData();
    std::cout << std::endl;
    anotherCar.displayData();
    std::cout << std::endl;

    Car yetAnother = myCar;
    yetAnother.displayData();

    return 0;
}