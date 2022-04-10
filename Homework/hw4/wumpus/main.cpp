#include <iostream>
using std::cout;
using std::endl;
using std::string;
#include <vector>
using std::vector;
#include <random>
using std::random_device;
using std::mt19937;
using std::uniform_int_distribution;
#include<algorithm>
using std::find;

// create game class
// create room struct that has connecting room vector, contents(player, bat, wumpus)
// create function to make map that has a parameter number of room to make, need to randomly chose N, S
// E, W for 3 connecting rooms, create a loop that fills up a cave vector and stops when room count parameter is
// equal to cave count.
// randomly assign were wumpus and bat is
// create a function to shoot and check if wumpus will be killed if not killed move wumpus
// create method to display text of what is in the room and options where to go
// create a method to get user input

struct Cave {
    int id;
    vector<Cave> connectingRooms;
    bool hasPlayer = false;
    bool hasBat = false;
    bool hasWumpus = false;
    Cave* north = NULL;
    Cave* south = NULL;
    Cave* east = NULL;
    Cave* west = NULL;
};

class Game {
public:
    Game()  { createRooms(10);}
    string getRandomDirection(mt19937 & seed){
        std::uniform_int_distribution<int> distrib(0,3);
        vector<string> directions = {"north", "south", "east", "west"};
        return directions.at(distrib(seed));
    }

    void printMap(Cave room) {
        cout << "You are in room " << room.id << endl;
        for (auto room : rooms){
            cout << "room: " <<  room.id << endl;
        }

        // find connecting rooms
        if (room.north != nullptr) {
            cout << "There is a room north" << endl;
        }
        if (room.south) {
            cout << "There is a room south" << endl;
        }
        if (room.east != nullptr) {
            cout << "There is a room east" << endl;
        }
        if (room.west != nullptr) {
            cout << "There is a room west" << endl;
        }

    }

    void connectRooms(Cave & currentRoom , vector<Cave> & needsRooms, int & count,mt19937 & seed, int roomsToMake) {
        for (auto i = 0; i < 3; i++) {
            if (count >= roomsToMake) break;
            Cave newRoom;
            count++;
            newRoom.id = count;
            string direction = getRandomDirection(seed);
            bool isConnected = false;
            while (true) {
                // check if room is not already connected
                if (direction == "north") {
                    if (currentRoom.north == NULL) break;
                } else if (direction == "south") {
                    if (currentRoom.south == NULL) break;
                } else if (direction == "east") {
                    if (currentRoom.east == NULL) break;
                } else if (direction == "west") {
                    cout << "checking if connected in west" << endl;
                    if (currentRoom.west == NULL) {
                        cout << "null" << endl;
                        break;
                    } else {
                        cout << " not null" << endl;
                    }
                }
                direction = getRandomDirection(seed);
            }
            if (direction == "north") {
                currentRoom.north = &newRoom;
                newRoom.south = &currentRoom;
            } else if (direction == "south") {
                currentRoom.south = &newRoom;
                newRoom.north = &currentRoom;
            } else if (direction == "east") {
                currentRoom.east = &newRoom;
                newRoom.west = &currentRoom;
            } else if (direction == "west") {
                currentRoom.west = &newRoom;
                newRoom.east = &currentRoom;
            }
            needsRooms.push_back(newRoom);
            rooms.push_back(newRoom);
            cout << "Created room: " << newRoom.id << " it is  " << direction <<  " of room " << currentRoom.id << endl;
        }
    }

    void createRooms(int n) {
        mt19937 gen(7);
        int roomCount = 0;
        vector<Cave> needsRooms;
        while (roomCount < n) {
            cout << "Start of creation" << endl;
            roomCount++;
            entrance.id = roomCount;
            cout << "Created room: " << entrance.id << endl;
            //create connecting rooms
            connectRooms(entrance, needsRooms, roomCount, gen, n);
            while (true) {
                if (roomCount >= n) break;
                Cave currentRoom = needsRooms.at(needsRooms.size() - 1);
                needsRooms.pop_back();
                connectRooms(currentRoom, needsRooms, roomCount, gen, n);
            }
            for (auto r: needsRooms) {
                cout << "Room " << r.id << endl;
            }
        }
    }
private:
    vector<Cave>  rooms;
    bool isGameOver = false;
    Cave entrance;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Game g;
    return 0;
}