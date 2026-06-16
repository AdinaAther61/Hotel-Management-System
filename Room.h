
#ifndef ROOM_H
#define ROOM_H
#include <string>
using namespace std;

enum RoomType { ECONOMIC, LUXURY }; // Enumeration

class Room {
private:
    int roomNumber;
    RoomType type;
    bool isBooked;
    string guestName;
    string checkInTime;

public:
    Room(int rn, RoomType t);
    void checkIn(string name, string time);
    void checkOut();
    void displayRoom();
};
#endif