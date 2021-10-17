/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD14M-clement.muth
** File description:
** Banana
*/

#include "Banana.hpp"

Banana::Banana(int const vitamins) noexcept :
    Fruit{vitamins, "banana"} {}

std::string Banana::getName() const
{
    return (_name);
}