#ifndef COWBOY_HPP
#define COWBOY_HPP

#include <string>
#include "Character.hpp"

namespace ariel{
    class Cowboy : public Character{
        private:
            int _balls_amount;

        public:
            //constractor
            Cowboy(std::string, Point);

            void shoot(Character*);
            bool hasboolets();
            void reload();
            std::string print();      
    };
}

#endif