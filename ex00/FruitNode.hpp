/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD14M-clement.muth
** File description:
** FruitNode
*/

#pragma once

#include "Fruit.hpp"

class FruitNode {
    public:
        FruitNode() = default;
        ~FruitNode() = default;

        Fruit *fruit;
        FruitNode *next;
};