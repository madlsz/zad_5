#include <vector>
#include <algorithm>

#include "League.hpp"
#include "Team.hpp"


bool League::compare_teams(Team* team1, Team* team2)
{
    if (team1->points != team2->points)
    {
        return team1->points > team2->points;
    }
    else if(team1->games_won != team2->games_won)
    {
        return team1->games_won > team2->games_won;
    }
    else if(team1->games_lost != team2->games_lost)
    {
        return team1->games_lost < team2->games_lost;
    }
    else if(team1->goals_scored != team2->goals_scored)
    {
        return team1->goals_scored > team2->goals_scored;
    }
    else if(team1->goals_conceded != team2->goals_conceded)
    {
        return team1->goals_conceded < team2->goals_conceded;
    }
    else
    {
        return true;
    }
}


void League::add_team(Team* team)
{
    this->league.push_back(team);
}


std::ostream& operator<<(std::ostream& os, const League& obj)
{
    for(auto &team:obj.league)
    {
        os << *team << "\n";
    }
    return os;
}


void League::sort()
{
    std::sort(this->league.begin(), this->league.end(), &League::compare_teams);
}


League::~League()
{
    for(auto &team:this->league)
    {
        delete team;
    }
    this->league.clear();
}