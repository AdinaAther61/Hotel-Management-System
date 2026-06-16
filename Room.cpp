#include <iostream>
#include "Room.h"
using namespace std;

Room::Room(int rn, RoomType t) : roomNumber(rn), type(t), isBooked(false) {}

void Room::checkIn(string name, string time) {
    if(!isBooked) {
        guestName = name;
        checkInTime = time;
        isBooked = true;
        cout << "Check-in successful for " << name << endl;
    } else {
        cout << "Room already booked!" << endl;
    }
}

void Room::displayRoom() {
    cout << "Room " << roomNumber << " [" << (type == LUXURY ? "Luxury" : "Economic") << "] "
         << "- Status: " << (isBooked ? "Booked by " + guestName : "Available") << endl;
}