#include "media.hpp"
#include <iostream> 

Media::Media (std::string Id, std::string title) { 
this->Id = Id; 
this->title = title; 
} 

std::string Media::getID () const { 
return Id; 
} 

std::string Media::getTitle () const { 
return title; 
} 


