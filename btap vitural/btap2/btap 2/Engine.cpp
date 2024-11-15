#include "Engine.hpp"
#include<iostream>
using namespace std;

void PetrolEngine::displayInformation() const{
    cout<<"this is "<<this->type<<endl;
}

void DieselEngine::displayInformation() const{
    cout<<"this is "<<this->type<<endl;
}

 void Sedan::displayInfo() const{
    cout<<"Nam: "<<this->year<<endl;
    cout<<"Mau: "<<this->model;
    this->engine->displayInformation();
 }
 void SUV::displayInfo() const{
    cout<<"Nam: "<<this->year<<endl;
    cout<<"Mau: "<<this->model;
    this->engine->displayInformation();
 }