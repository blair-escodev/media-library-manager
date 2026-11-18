#pragma once
#include <string> 

class Media { 
private:
	std::string Id; 
	std::string title;	

public: 
	Media(std::string Id, std::string title);
	
	std::string getID () const;

	std::string getTitle () const;  
	virtual void displayInfo() const = 0; 
	virtual ~Media () = default; 
};
