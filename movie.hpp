#pragma once 
#include "media.hpp"

class Movie : public Media { 
private: 
	int year; 
	std::string director; 

public: 
	Movie(int Id, std::string title, int year, std::string director); 
	int getYear () const {return year; }
	const std::string& getDirector () const {return director;}
	virtual void displayInfo () const override; 

}; 
