#include "Character.hpp"

using namespace std;

namespace ariel{
    
    Character::Character(string name, Point& location, int hp):
    _name(name), _location(&location), _hp(hp){}

    bool Character::isAlive(){
        if(_hp > 0){
            return true;
        }
        return false;
    }

    double Character::distance(Character* other){
        double distance = _location->distance(*(other->getLocation()));
        return distance;
    }

    void Character::hit(int damage){
        if(_hp > 0){
            _hp -= damage;
            if(_hp < 0){
                _hp = 0;
            }
        }
        else{
            throw runtime_error("Character is dead");
        }
    }
}