/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD14M-clement.muth
** File description:
** Coconut
*/

#pragma once

#include "Fruit.hpp"

class Coconut : public Fruit {
    public:
        Coconut(int const vitamins = 15) noexcept;
        virtual ~Coconut() = default;
};