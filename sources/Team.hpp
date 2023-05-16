#ifndef TEAM_HPP
#define TEAM_HPP

#include "Point.hpp"
#include "Cowboy.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include "OldNinja.hpp"

namespace ariel{
    class Team{
        private:
            Character* _champions[10];
            Character* _team_leader;
            int _champions_count;

        public:
            //constructor
            Team(Character*);

            //distructor
            // ~Team();
            
            //Team methods
            void add(Character*);
            void attack(Team*);
            int stillAlive();
            void print();

    };
}

#endif