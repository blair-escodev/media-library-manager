#pragma once
#include <vector>
#include <memory>
#include <string>
#include "media.hpp"
#include "game.hpp" 
#include "movie.hpp" 


class Library  {
private: 
	std::vector<std::unique_ptr<Media>> items; 
	std::string generateId() const; 

public: 
	void addMovie (const std::string& title, int year, const std::string& director);
	void addGame (const std::string& title, int year, const std::string& platform, const std::string& developer); 
	std::vector<std::unique_ptr<Media>> searchByTitle (std::vectro<std::unique_ptr<Media>> items) {return items; }	
	void showAll() const;
}; 
