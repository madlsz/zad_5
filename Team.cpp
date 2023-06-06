#include <iostream>

#include "Team.hpp"


Team::Team(std::string team_name, int games_won, int games_lost, int games_tied, int goals_scored, int goals_conceded)
{
    this->team_name = team_name;
    this->games_won = games_won;
    this->games_lost = games_lost;
    this->games_tied = games_tied;
    this->goals_scored = goals_scored;
    this->goals_conceded = goals_conceded;
    this->points = games_won*3 + games_tied;
}


std::ostream& operator<<(std::ostream& os, const Team& obj)
{
    os << "\033[1;37m" << obj.team_name << "\t\033[0m"
    << "\033[;32m" << obj.games_won << "\t\033[0m"
    << "\033[;37m" << obj.games_tied << "\t\033[0m"
    << "\033[;31m" << obj.games_lost << "\t\033[0m"
    << "\033[;32m" << obj.goals_scored << "\t\033[0m"
    << "\033[;31m" << obj.goals_conceded << "\033[0m";
    return os;
}
