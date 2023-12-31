#include <iostream>
using namespace std;
class ParkingLot {
private:
    int carCount;
    int bikeCount;
    int truckCount;

public:
    ParkingLot() : carCount(0), bikeCount(0), truckCount(0) {}

    void vehicleEnter(char vehicleType) {
        switch (vehicleType) {
                       case 'c':
                  carCount++;
      cout << "Car entered. Total cars: " << carCount <<  endl;
       break;
                    case 'b':
                bikeCount++;
                 cout << "Bike entered. Total bikes: " << bikeCount <<  endl;
                break;

                 case 't':
                truckCount++;
                 cout << "Truck entered. Total trucks: " << truckCount <<  endl;
                break;
            default:
                 cout << "Invalid vehicle type. Please enter 'c' for car, 'b' for bike, or 't' for truck.\n";
        }
    }

    void vehicleExit(char vehicleType) {
        switch (vehicleType) {
            case 'c':  
        if (carCount > 0) {
                    carCount--;
                     cout << "Car exited. Total cars: " << carCount <<  endl;
                } else {
         cout << "No cars to exit. Parking lot is empty for cars.\n";
                }
                break;
                //this is changed
            case 'b':
                if (bikeCount > 0) {
                    bikeCount--;
                     cout << "Bike exited. Total bikes: " << bikeCount <<  endl;
                } else {
                     cout << "No bikes to exit. Parking lot is empty for bikes.\n";
                }
                break;
            case 't':
                if (truckCount > 0) {
                    truckCount--;
                     cout << "Truck exited. Total trucks: " << truckCount <<  endl;
                } else {
                     cout << "No trucks to exit. Parking lot is empty for trucks.\n";
                }
                break;
            default:
                 cout << "Invalid vehicle type. Please enter 'c' for car, 'b' for bike, or 't' for truck.\n";
        }
    }

    void displayVehicleCount() const {
         cout << "Current vehicle count:\n";
         cout << "Cars: " << carCount <<  endl;
         cout << "Bikes: " << bikeCount <<  endl;
         cout << "Trucks: " << truckCount <<  endl;
    }
};

int main() {
    ParkingLot parkingLot;

    int choice;
    do {
         cout << "\nMenu:\n";
         cout << "1. Vehicle Enter\n";
         cout << "2. Vehicle Exit\n";
         cout << "3. Display Vehicle Count\n";
         cout << "4. Exit\n";
         cout << "Enter your choice: ";
         cin >> choice;

        char vehicleType;
        switch (choice) {
            case 1:
                 cout << "Enter vehicle type ('c' for car, 'b' for bike, 't' for truck): ";
                 cin >> vehicleType;
                parkingLot.vehicleEnter(vehicleType);
                break;
            case 2:
                 cout << "Enter vehicle type ('c' for car, 'b' for bike, 't' for truck): ";
                 cin >> vehicleType;
                parkingLot.vehicleExit(vehicleType);
                break;
            case 3:
                parkingLot.displayVehicleCount();
                break;
            case 4:
                 cout << "Exiting program. Goodbye!\n";
                break;
            default:
                 cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 4);

    return 0;
}
