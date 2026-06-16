#ifndef HOTELMANAGER_H
#define HOTELMANAGER_H
#include "Room.h"
#include <vector> // Saare rooms ko list mein rakhne ke liye

class HotelManager {
private:
    vector<Room> rooms; // Yahan hum saare rooms save karenge

public:
    void addRoom(int rn, RoomType t);
    void showAllRooms();
    void bookARoom(int rn, string name, string time);
};
#endif