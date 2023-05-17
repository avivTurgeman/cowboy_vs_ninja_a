#ifndef TEAM_HPP
#define TEAM_HPP

#include "Point.hpp"
#include "Cowboy.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include "OldNinja.hpp"
#include "Ninja.hpp"
#include "Character.hpp"

namespace ariel{
    class Team{
        private:
            Character* _champions[10];
            Character* _team_leader;
            int _champions_count;

        public:
            //constructor
            Team(Character*);

            //Team methods
            void add(Character*);
            virtual void attack(Team*);
            int stillAlive() const;
            virtual void print() const;

    };
}

#endif