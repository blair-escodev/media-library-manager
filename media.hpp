#pragma once
#include <string> 

class Media { 
private:
	int Id; 
	std::string title;	

public: 
	Media(int Id, std::string title);
	
	int getID () const;

	std::string getTitle () const;  
	virtual void displayInfo() const = 0; 
	virtual ~Media () = default; 
};
