#include "Character.hpp"

using namespace std;

namespace ariel{
    
    Character::Character(string name, Point* location, int hp):
    _name(name), _location(location), _hp(hp){}

    bool Character::isAlive(){
        if(_hp > 0){
            return true;
        }
        return false;
    }

    double Character::distance(Character* other){
        return _location.distance(other.getLocation());
    }

    void Character::hit(int damage){
        _hp -= damage;
    }
}