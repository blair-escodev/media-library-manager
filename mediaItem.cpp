#include "media.hpp"
#include <iostream> 

Media::Media (int Id, std::string title) { 
this->Id = Id; 
this->title = title; 
} 

int Media::getID () const { 
return Id; 
} 

std::string Media::getTitle () const { 
return title; 
} 


int main () { 


return 0; 
}
