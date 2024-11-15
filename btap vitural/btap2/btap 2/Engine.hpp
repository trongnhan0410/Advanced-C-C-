#ifndef _ENGINE_HPP_
#define _ENGINE_HPP_

#include <string>


class Engine {
    protected:
        std::string type;
    public:
        virtual void displayInformation()  const =0;
    
};

class PetrolEngine : public Engine {
public:
    PetrolEngine(){
        this->type = "Petrol";
    };
    void displayInformation() const override;
};

class DieselEngine : public Engine {
public:
    DieselEngine(){
        this->type = "Diesel";
    };
    void displayInformation() const override;
};

class Car {
protected:
    std::string model;
    int year;
    Engine* engine;
public:
    Car(){};
    virtual void displayInfo() const = 0;
   // virtual void inputInfo() = 0;
    ~Car(){
        delete engine;
    }
};

class SUV : public Car {
public:
    SUV(std::string model,int year,std::string type){
        this->model = model;
        this->year = year;
        if(type=="Petrol"){
            engine = new PetrolEngine();
        }else if(type == "Diesel"){
            engine = new DieselEngine();
        }
    }
    void displayInfo() const override;
    //void inputInfo() override;
};

class Sedan : public Car {
public:
    Sedan(std::string model,int year,std::string type){
        this->model = model;
        this->year = year;
        if(type=="Petrol"){
            engine = new PetrolEngine();
        }else if(type == "Diesel"){
            engine = new DieselEngine();
        }
    }
    void displayInfo() const override;
   // void inputInfo() override;
};

#endif // !_ENGINE_HPP_
