#include "Team.hpp"

using namespace std;

namespace ariel{
    Team::Team(Character *team_leader){
        _team_leader = team_leader;
        _champions[0] = team_leader;
        _champions_count = 1;
    }

    void Team::add(Character *champion){
        if(_champions_count < 10){
            _champions[_champions_count++] = champion;
        }
        else{
            throw new std::runtime_error("Team can have at most 10 champions");
        }
    }

    void attack(Team *){
        
    }

    int stillAlive(){
        return 1;
    }
    void print(){

    }
}