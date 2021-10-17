/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD14M-clement.muth
** File description:
** Lemon
*/

#include "Lemon.hpp"

Lemon::Lemon(int const vitamins) noexcept :
    Fruit{vitamins, "lemon"} {}

std::string Lemon::getName() const
{
    return (_name);
}