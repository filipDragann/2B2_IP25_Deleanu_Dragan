#pragma once
#include <iostream>
#include <string>
using namespace std;

class Spital {
private:
    std::string type;
    std::string name;
    int age;
public:
    // constructor to initialize type
    Spital(const string &name, int age) : type("Spital"), name(name), age(age) {}

    // declare virtual function
    virtual string getType() {
        return type;
    }

};
class Person : public Spital {
private:
    std::string type;
    std::string name;
    int age;
public:
    // constructor to initialize type
    Person(const string &name,int age) : Spital(name, age), name(name), age(age) {
        this->name = name;
        this->age = age;
    }
    void setName(string name) {
        this->name = name;
    }
    std::string getName() {
        return name;
    }
    void setAge(int age) {
        this->age = age;
    }
    int getAge() {
        return age;
    }
    std::string getType() override {
        return type;
    }
};
class Departament : public Spital {
private:
    std::string name;
public:
    Departament();
};
 
class Patient : public Person {
public:
    Patient(const string& name, int age) : Person(name, age) {};
};

class Staff : public Person {
private:
    std::string specialitate;
public:
    Staff(const string& name, int age) : Person(name, age) {}

};
   /* std::string getType() override {
        return type;
    }*/
int main() {

}