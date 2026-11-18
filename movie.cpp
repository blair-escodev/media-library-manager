#include "movie.hpp"
#include <iostream> 

Movie::Movie (std::string Id, std::string title, int year, std::string director ) : Media (Id, title) { 
this->director = director; 
this->year = year; 
} 

 void Movie::displayInfo() const { 
std::cout<<"Id Code: "<< getID() << std::endl; 
std::cout<<"Title: " << getTitle() << std::endl; 
std::cout<<"Director: " << getDirector() << std::endl; 
std::cout<<"Year: " << getYear() << std::endl; 
} 



