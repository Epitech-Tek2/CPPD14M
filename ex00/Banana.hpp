/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD14M-clement.muth
** File description:
** Banana
*/

#pragma once

#include "Fruit.hpp"

class Banana : public Fruit {
    public:
        Banana(int const vitamins = 5) noexcept;
        virtual ~Banana() = default;

        virtual std::string getName() const;

    protected:
    private:
};