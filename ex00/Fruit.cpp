/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD14M-clement.muth
** File description:
** Fruit
*/

#include "Fruit.hpp"

Fruit::Fruit(int vitamins, std::string const& name) noexcept :
    _vitamins{vitamins}, _name{name} {}

std::string Fruit::getName() const
{
    return (_name);
}

int Fruit::getVitamins() const noexcept
{
    return (_vitamins);
}