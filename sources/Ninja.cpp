#include "Ninja.hpp"

using namespace std;

namespace ariel{
    Ninja::Ninja(std::string name, Point& location, int hp, int speed):
    Character(name, location, hp), _speed(speed){}

    void Ninja::move(Character*  other){
        Point *thisLocation = this->getLocation();
        Point position = thisLocation->moveTowards(*(thisLocation), *(other->getLocation()), _speed);
        this->setLocation(&(position));
    }

    void Ninja::slash(Character* other){
        if(this->isAlive() && (this->distance(other) <= 1)){
            other->hit(13);
        }
    }

    string Ninja::print(){
        string rv;
        if(isAlive()){
            return  "Name: " + _name + 
            "\nHP: " + std::to_string(_hp) + 
            "\nPoint: " + _location->print() + "\n";
        }
        return "N(" + _name + ")\n";
    }
}