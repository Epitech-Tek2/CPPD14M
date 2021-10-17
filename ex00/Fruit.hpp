/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD14M-clement.muth
** File description:
** Fruit
*/

#pragma once

#include <iostream>

class Fruit
{
    public:
        Fruit() = delete;
        Fruit(int const vitamins, std::string const& name) noexcept;
        virtual ~Fruit() = default;

        virtual std::string getName() const;
        int getVitamins() const noexcept;

    protected:
        int _vitamins;
        std::string _name;
};