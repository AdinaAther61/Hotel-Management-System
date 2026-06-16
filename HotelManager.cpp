#include <iostream>
#include "HotelManager.h"

void HotelManager::addRoom(int rn, RoomType t) {
    rooms.push_back(Room(rn, t));
}

void HotelManager::showAllRooms() {
    for(int i = 0; i < rooms.size(); i++) {
        rooms[i].displayRoom();
    }
}

void HotelManager::bookARoom(int rn, string name, string time) {
    for(int i = 0; i < rooms.size(); i++) {
        // Yahan aap logic lagayein ke agar room match ho jaye toh checkIn call karein
    }
}