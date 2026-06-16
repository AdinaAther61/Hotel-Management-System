#include <iostream>
#include "HotelManager.h"
using namespace std;

int main() {
    HotelManager myHotel;
    int choice;
    
    // Yahan hum rooms add kar rahe hain
    myHotel.addRoom(101, ECONOMIC);
    myHotel.addRoom(102, LUXURY);

    cout << "Welcome to Adina's Hotel System!" << endl;
    
    // Simple Menu
    cout << "1. View All Rooms" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if(choice == 1) {
        myHotel.showAllRooms();
    }

    return 0;
}