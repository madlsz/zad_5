#pragma once
#include <iostream>

class Team
{
    public:
        std::string team_name;
        int games_won;
        int games_lost;
        int games_tied;
        int goals_scored;
        int goals_conceded;
        int points;
        Team(std::string team_name, int games_won, int games_lost, int games_tied, int goals_scored, int goals_conceded);
        friend std::ostream& operator<<(std::ostream& os, const Team& obj);
};