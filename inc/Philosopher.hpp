#pragma once

#include <string>
#include <thread>

#include "Table.hpp"

class Philosopher
{
    const std::string name_;
    Table const& dinnerTable_; 
    Fork& leftFork_;
    Fork& rightFork_;
    mutable std::mutex mtxLockPrint;

    public:
    Philosopher(const std::string& name, 
                Table const& dinnerTable, 
                Fork& leftFork, 
                Fork& rightFork);
    ~Philosopher();
    void print(std::string text) const;           
    void dine();
    void think();
    void eat();
    void joinToTable();
    std::string getName() const;
};
