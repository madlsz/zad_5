#include <iostream>

#include "League.hpp"
#include "Team.hpp"


int main()
{
    League league;

    for(int i=0; i<10; i++)
    {
        std::string team_name = "team_" + std::to_string(i);
        league.add_team(new Team(team_name, i+5, i+3, i, i*2, i*1.8));
    }

    league.sort();
    #ifdef _WIN32
        system("color");
    #endif
    std::cout << league;

    return 0;
}