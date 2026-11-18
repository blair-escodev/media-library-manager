#include <iostream> 
#include <vector> 

class Vehicle { 
private: 
	std::string brand; 
	std::string model; 

public: 
	Vehicle(std::string _brand, std::string _model) { 
		this->brand = _brand; 
		this->model = _model; 
	}
	std::string getBrand () const { 
		return brand; 
	} 
	std::string getModel () const  { 
 		return model; 
	} 
       	virtual ~Vehicle () { }
        virtual void displayInfo () const = 0;
    	
}; 

class Car : public Vehicle { 
private: 
	int doors; 

public: 
	Car (std::string brand, std::string model, int _doors) : Vehicle(brand, model) { 
		this->doors = _doors;
	} 
	int getDoors() const  { 
		return doors; 
	}
	virtual void displayInfo ()  const override  { 
	std::cout << "Brand: " << getBrand() << "Model: " << getModel()  << "- Doors: " << doors<<std::endl;  
	} 
}; 

class ElectricCar : public Car { 
private: 
	double batteryKWh;
public: 
	ElectricCar (std::string brand, std::string model, int doors, double battery) : Car(brand, model, doors) { 
	this->batteryKWh = battery;
	} 
	virtual void displayInfo () const override { 
	std::cout << "Brand: " << getBrand() << "Model: " << getModel()  << " -Doors" << getDoors() << "Battery KWh : " << batteryKWh<< std:: endl; 
	}

}; 
int main () { 
std::vector<std::unique_ptr<Vehicle>> fleet; 
fleet.push_back(std::make_unique<Car>("Toyota", "Corolla", 4)); 

for (const auto& vehicle: fleet) { 
	vehicle->displayInfo(); 
} 


return 0; 
} 
