#pragma once
#include <vector>

#include "Team.hpp"

class League
{
    public:
        std::vector<Team*> league;
        static bool compare_teams(Team* team1, Team* team2);
        void add_team(Team* team);
        void sort();
        ~League();
        friend std::ostream& operator<<(std::ostream& os, const League& obj);
};