/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD14M-clement.muth
** File description:
** FruitBox
*/

#pragma once

#include "Fruit.hpp"
#include "FruitNode.hpp"

class FruitBox {
    public:
        FruitBox(int size) noexcept;
        FruitBox() = delete;
        virtual ~FruitBox() = default;

        FruitNode *head() const noexcept;
        int nbFruits() const noexcept;

        bool putFruit(Fruit *fruit) noexcept;
        Fruit *pickFruit() noexcept;

    protected:
        int _count;
        int _size;
        FruitNode *_head;
};