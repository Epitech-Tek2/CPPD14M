/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD14M-clement.muth
** File description:
** Lemon
*/

#pragma once

#include "Fruit.hpp"

class Lemon : public Fruit {
    public:
        Lemon(int const vitamins = 3) noexcept;
        virtual ~Lemon() = default;

        virtual std::string getName() const;
};