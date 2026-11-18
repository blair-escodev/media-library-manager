#pragma once
#include "media.hpp" 
#include <string>

class Game : public Media { 
private: 
	std::string platform; 
	std::string developer; 
	int year; 

public: 
	Game(std::string title, std::string Id, std::string platform, std::string developer, int year); 
	std::string getPlatform() const {return platform;}
       	std::string getDeveloper() const {return developer;} 
	int getYear () const {return year;} 
	virtual void displayInfo () const override; 	
}; 
