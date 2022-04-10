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
    string getRandomDirection(mt19937 & seed){
        std::uniform_int_distribution<int> distrib(0,3);
        vector<string> directions = {"north", "south", "east", "west"};
        return directions.at(distrib(seed));
    }

    void createRooms(int n) {
    }
private:
    vector<Cave> rooms;
    bool isGameOver = false;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}