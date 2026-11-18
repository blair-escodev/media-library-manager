#include "game.hpp"
#include <iostream> 

Game::Game (std::string title, std::string Id, std::string platform, std::string developer, int year) :Media (Id,title) { 
this->platform = platform; 
this->developer = developer; 
this->year = year; 
} 

void Game::displayInfo() const { 
std::cout <<"ID Code: " << getID() << std::endl; 
std::cout <<"Title: " << getTitle() << std::endl; 
std::cout <<"Platform: " <<getPlatform() << std::endl; 
std::cout <<"Developer: " << getDeveloper() << std::endl; 
std::cout <<"Year: " << getYear() << std::endl; 
} 


