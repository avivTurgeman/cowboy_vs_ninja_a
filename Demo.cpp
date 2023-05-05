/**
 * Demo file for the exercise on binary tree
 *
 * @author Evgeny Hershkovitch Neiterman
 * @since 2023-03
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
using namespace std;

#include "sources/Team.hpp" //no need for other includes

using namespace ariel;


int main() {
    Point a(32.3,44),b(1.3,3.5);
    assert(a.distance(b) == b.distance(a));
    Cowboy* tom = new Cowboy("Tom", a);
    OldNinja* sushi = new OldNinja("sushi", b);
    tom->shoot(sushi);
    tom->Print();

    sushi->move(tom);
    sushi->slash(tom);

    Team aT(tom); 
    aT.add(new YoungNinja("Yogi", Point(64,57)));

    // Team b(&tom); should throw tom is already in team a

     Team bT(sushi);
     bT.add(new TrainedNinja("Hikari", Point(12,81)));


     while(aT.stillAlive() > 0 && bT.stillAlive() > 0){
        aT.attack(&bT);
        bT.attack(&aT);
        aT.print();
        bT.print();
     }

     if (aT.stillAlive() > 0) cout << "winner is a" << endl;
     else cout << "winner is b" << endl;

     return 0; // no memory issues. Team should free the memory of its members. both a and b teams are on the stack. 

}