#include "library.hpp"
#include <vector> 
#include <string> 
#include <algorithm> 
#include <memory> 
#include <random> 
#include <iostream> 

std::string Library::generateId() const { 
std::string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; 

static std::random_device rd;
static std::mt19937 engine(rd()); 
static std::uniform_int_distribution<int> pick(0, static_cast<int> (characters.size()) - 1);

while (true) { 
std::string candidate; 
for (int i = 0; i < 4; ++i) { 
	candidate += characters[pick(engine)]; 
	} 

bool taken = std::any_of(items.begin(), items.end(), 
[&candidate](const std::unique_ptr <Media>& item) {
		 return item->getID() == candidate; 
		});
		 
if(!taken) { 
  return candidate; 	

		} 
	}

}
void Library::addMovie(const std::string& title, int year, const std::string& director) { 
	std::string id = generateId(); 
	items.push_back(std::make_unique<Movie>(id, title, year, director)); 
}

void Library::addGame(const std::string& title, int year, const std::string& platform,const std::string& developer) { 
	std::string id = generateId();
       items.push_back(std::make_unique<Game>(title, id, platform, developer, year));
} 	

void Library::showAll () const  { 
for (const auto& details : items) { 
 details->displayInfo(); 

	}		 
} 
