// wumpus.cpp
// Bernard Laughlin, 2/12/20211
// Wumpus game for CS202 class

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <sstream>
using std::istringstream;
using std::string;
#include <vector>
using std::vector;
#include <random>
using std::random_device;
using std::mt19937;
using std::uniform_int_distribution;
#include<algorithm>
using std::find;

struct Cave {
    int id;
    bool hasBat = false;
    bool hasWumpus = false;
    bool hasPit = false;
    Cave* north = nullptr;
    Cave* south = nullptr;
    Cave* east = nullptr;
    Cave* west = nullptr;
};

class Game {
public:
    Game(int n) {
        roomCount = n;
        std::mt19937 m;
        std::random_device rd;
        // seed set to non-random number for development.
        // m.seed(7);
        m.seed(rd());
        std::uniform_int_distribution<int> d(1,n-1);
        placeWompus(m,d);
        placeBat(m, d);
        placePit(m, d);
        createRooms(n);
        gameLoop(m);
    }

    string getRandomDirection(mt19937 & seed){
        std::uniform_int_distribution<int> di(0,3);
        vector<string> directions = {"north", "south", "east", "west"};
        return directions.at(di(seed));
    }

    void printMap(Cave *room) {
        cout << "--------------------------------" << endl;
        cout << "You are in room " << room->id << endl;
        cout << "--------------------------------" << endl;

        // find connecting rooms
        if (room->north != NULL) {
            cout << "There is a room north" << endl;
        }
        if (room->south != NULL) {
            cout << "There is a room south" << endl;
        }
        if (room->east != NULL) {
            cout << "There is a room east" << endl;
        }
        if (room->west != NULL) {
            cout << "There is a room west" << endl;
        }
        cout << "--------------------------------" << endl;


    }
    void gameLoop(mt19937 & seed){
        Cave *currentRoom ;
        currentRoom = entrance;
        while (!isGameOver){
            checkForWumpus(currentRoom);
            checkForBat(currentRoom);
            checkForPit(currentRoom);
            if (isGameOver) break;
            printMap(currentRoom);
            checkAdjacentRooms(currentRoom);
            string input =getInput();
            if (input == "ae") {
                shootArrow("east", currentRoom, seed);
            }
            if (input == "aw") {
                shootArrow("west", currentRoom, seed);
            }
            if (input == "an") {
                shootArrow("north", currentRoom, seed);
            }
            if (input == "as") {
                shootArrow("south", currentRoom, seed);
            }
            move(input, currentRoom);
        }
    }
    string getInput(){
        string input;
        while (true) {
            cout << "--------------------------------" << endl;

            cout << "Enter n to go north, s to go south, e to go east, w to go west." << endl;
            cout << "or direction followed by a to shoot an arrow in that direction:";
            getline(cin, input);
            istringstream istream(input);
            istream >> choice;
            if (!istream) {
                cout << "Invalid input!." << endl;
            } else if (choice != "n" && choice != "s" && choice != "e" && choice != "w" &&
                    choice != "an" && choice != "as" && choice != "ae" && choice != "aw") {
                cout << "Invalid input" << endl;
            } else  return choice;
        }
    }

    void move(string direction, Cave * & room) {
        if (room->north != nullptr && (direction == "n" || direction == "north")) {
            room = room->north;
        } else
        if (room->south && (direction == "s" || direction == "south")) {
            room = room->south;
        } else
        if (room->east != nullptr && (direction == "e" || direction == "east")) {
            room = room->east;
        } else
        if (room->west != nullptr && (direction == "w" || direction == "west")) {
            room = room->west;
        }
    }

    void checkForWumpus(Cave *room){
        if (room->hasWumpus) {
            cout << "THE WUMPAS ATE YOU!" << endl;
            isGameOver = true;
        }
    }

    void checkForPit(Cave *room){
        if (room->hasPit) {
            cout << "You fell in a bottomless pit!" << endl;
            isGameOver = true;
        }
    }

    void checkForBat(Cave * & room){
        int playerLocation;
        if (room->hasBat) {
            cout << "THERE IS A BAT IN THE ROOM!" << endl;
            std::uniform_int_distribution<int> dis(1, rooms.size());
            while (true) {
                playerLocation = dis(mt);;
                cout << "Bat flew you to room " << playerLocation << endl;
                if (playerLocation -1 != wompasLocation && playerLocation -1 != pitLocation
                && playerLocation != room->id)
                    break;
            }
            room = rooms.at(playerLocation - 1);
        }
    }

    void checkAdjacentRooms(Cave *room){
        string wompusWarning = "I smell a wumpus: It’s in an adjoining room.\n\n";
        string batWarning = "I hear a bat: A giant bat is in an adjoining room.\n\n";
        string pitWarning = "I feel a breeze: One of the adjoining rooms is a bottomless pit.\n\n";
        if (room->north != nullptr){
            if (room->north->hasWumpus) cout <<  wompusWarning;
            if (room->north->hasBat) cout <<  batWarning;
            if (room->north->hasPit) cout <<  pitWarning;
        }
        if (room->south != nullptr){
            if (room->south->hasWumpus) cout << wompusWarning;
            if (room->south->hasBat) cout <<  batWarning;
            if (room->south->hasPit) cout <<  pitWarning;

        }
        if (room->west != nullptr){
            if (room->west->hasWumpus) cout << wompusWarning;
            if (room->west->hasBat) cout <<  batWarning;
            if (room->west->hasPit) cout <<  pitWarning;
        }

        if (room->east != nullptr){
            if (room->east->hasWumpus) cout << wompusWarning;
            if (room->east->hasBat) cout <<  batWarning;
            if (room->east->hasPit) cout <<  pitWarning;
        }
    }

    void shootArrow(string direaction, Cave* &room, mt19937 & seed){

        if (arrows <= 0) {
            cout << "You are out of arrows" << endl;
            return;
        }
        arrows--;
        cout << "\nYou have " << arrows << " arrows left.\n" << endl;

        // check rooms to the west
        if (direaction == "west"){
            if (room->west != nullptr) {
                if (room->west->hasWumpus) {
                    cout << "\nYOU KILLED THE WUMPAS\n";
                    isGameOver = true;
                    return;
                }
            } else return;

            if (( room->west)->west != nullptr){
                if (room->west->west->hasWumpus) {
                    cout << "\nYOU KILLED THE WUMPAS\n";
                    isGameOver = true;
                    return;
                }
            } else return;

            if ( (room->west->west)->west != nullptr){
                if (room->west->west->west->hasWumpus) {
                    cout << "\nYOU KILLED THE WUMPUS\n";
                    isGameOver = true;
                    return;
                }
            } else return;
        // check rooms to the east
        } else if (direaction == "east"){
                if (room->east != nullptr) {
                    if (room->east->hasWumpus) {
                        cout << "\nYOU KILLED THE WUMPAS\n";
                        isGameOver = true;
                        return;
                    }
                } else return;
                if (( room->east)->east != nullptr){
                    if (room->east->east->hasWumpus) {
                        cout << "\nYOU KILLED THE WUMPAS\n";
                        isGameOver = true;
                        return;
                    }
                } else return;

                if ( (room->east->east)->east != nullptr){
                    if (room->east->east->east->hasWumpus) {
                        cout << "\nYOU KILLED THE WUMPUS\n";
                        isGameOver = true;
                        return;
                    }
                } else return;
            }
        // check rooms to the north
        else if (direaction == "north"){
            if (room->north != nullptr) {
                if (room->north->hasWumpus) {
                    cout << "\nYOU KILLED THE WUMPAS\n";
                    isGameOver = true;
                    return;
                }
            } else return;
            if (( room->north)->north != nullptr){
                if (room->north->north->hasWumpus) {
                    cout << "\nYOU KILLED THE WUMPAS\n";
                    isGameOver = true;
                    return;
                }
            } else return;

            if ( (room->north->north)->north != nullptr){
                if (room->north->north->north->hasWumpus) {
                    cout << "\nYOU KILLED THE WUMPUS\n";
                    isGameOver = true;
                    return;
                }
            } else return;
        }
        // check rooms to the south
        else if (direaction == "east"){
            if (room->south != nullptr) {
                if (room->south->hasWumpus) {
                    cout << "\nYOU KILLED THE WUMPAS\n";
                    isGameOver = true;
                    return;
                }
            } else return;
            if (( room->south)->south != nullptr){
                if (room->south->south->hasWumpus) {
                    cout << "\nYOU KILLED THE WUMPAS\n";
                    isGameOver = true;
                    return;
                }
            } else return;

            if ( (room->south->south)->south != nullptr){
                if (room->south->south->south->hasWumpus) {
                    cout << "\nYOU KILLED THE WUMPUS\n";
                    isGameOver = true;
                    return;
                }
            } else return;
        }

        // Move wumpus to adjacent room
        while (true){
            string randomDirection = getRandomDirection(seed);
            if (direaction == "north" && room->north != nullptr){
                wumpusPtr->hasWumpus = false;
                room->north->hasWumpus = true;
                break;
            }
            if (direaction == "south" && room->south != nullptr){
                wumpusPtr->hasWumpus = false;
                room->south->hasWumpus = true;
                break;
            }
            if (direaction == "east" && room->east != nullptr){
                wumpusPtr->hasWumpus = false;
                room->east->hasWumpus = true;
                break;
            }
            if (direaction == "west" && room->west != nullptr){
                wumpusPtr->hasWumpus = false;
                room->west->hasWumpus = true;
                break;
            }
        }
//        cout << "Wumpus move " << direaction << " of player." << endl;

    }

    void setDirection(Cave *c, Cave *location, string direction, bool setNull, bool isReverse) {
        if (direction == "north"){
            if (setNull){ c->north = NULL;}
            else if (!isReverse) {c->south = location;}
            else {c->north = location;}
        } else if (direction == "south"){
            if (setNull) {c->south = NULL;}
            else if (!isReverse) {c->north = location;}
            else {c->south = location;}
        } else if (direction == "east"){
            if (setNull) {c->east = NULL;}
            else if (!isReverse) {c->west = location;}
            else {c->east = location;}
        }  else if (direction == "west"){
            if (setNull) {c->west = NULL;}
            else if (!isReverse) {c->east = location;}
            else {c->west = location;}
        }
    }

    void placeWompus(mt19937 & seed, uniform_int_distribution<int> & d){
        wompasLocation = d(seed);
//        cout << "placing wombus in cave: " << wompasLocation << endl;
    }

    void placePit(mt19937 & seed,uniform_int_distribution<int> & d ){
        while (true) {
            pitLocation = d(mt);
            if (pitLocation  != wompasLocation && pitLocation != 0)
                break;
        }
//        cout << "placing pit in cave: " << pitLocation << endl;
    }

    void placeBat(mt19937 & seed,uniform_int_distribution<int> & d){
        while (true) {
            batLocation  = d(mt);
            if (batLocation != wompasLocation && batLocation != pitLocation && batLocation != 0) break;
        }
//        cout << "Placed bat in room " <<  batLocation << endl;
    }


    void createRooms(int n) {
        mt19937 gen(7);
        int roomCount = 0;
        Cave* tail;
        Cave* c;
        Cave* currentRoom;
        c = new Cave;
        roomCount++;
        c->id = roomCount;
        setDirection(c, tail, "NUll", true, false);
        entrance = c;
        tail = c;
        rooms.push_back(c);
        // create 3 connecting rooms
        vector<Cave*> pointerList;
        bool firstRoomsDone = false;
        while (roomCount < n) {
            int count;
            if (firstRoomsDone) count = 2;
            else {
                count = 3;
                currentRoom = entrance;
            }
            for (auto i = 0; i < count; i++){
                c = new Cave;
                roomCount++;
                c->id = roomCount;
                if (c->id == wompasLocation) {
                    c->hasWumpus = true;
                    wumpusPtr = c;
                }
                if (c->id == batLocation) c->hasBat =true;
                if (c->id == pitLocation) c->hasPit =true;
                string direction;
                while (true){
                    direction = getRandomDirection(gen);
//                    cout << "got direction: " << direction << " for room " << currentRoom->id << endl;
                   if (direction == "north" && currentRoom->north == NULL) {
                       break;
                   }
                   if (direction == "south" && currentRoom->south == NULL){
                       break;
                   }
                   if  (direction == "east" && currentRoom->east == NULL){
                       break;
                   }
                   if (direction == "west" && currentRoom->west == NULL) {
                       break;
                   }
                }

                setDirection(c,tail,direction, false, false);
                setDirection(tail, c, direction, false, true);
//                cout << "Created room: " << roomCount << endl;
                pointerList.push_back(c);


                rooms.push_back(c);
            }
            firstRoomsDone = true;
            // go back to room created
            currentRoom = pointerList.at(0);
            pointerList.erase(pointerList.begin());
            tail = currentRoom;
//            cout << "MOVING BACK TO ROOM: " << currentRoom->id << endl;
        }
    }

private:
    vector<Cave*> rooms;
    bool isGameOver = false;
    Cave *entrance;
    string choice;
    int arrows = 3;
    std::mt19937 mt;
    std::uniform_int_distribution<int> distrib;
    int wompasLocation;
    int pitLocation;
    int batLocation;
    int roomCount;
    Cave *wumpusPtr;

};

struct node {
    int data;
    node* north;
    node* south;
    node* east;
    node* west;
};

int main() {
    Game g(10);
    return 0;
}