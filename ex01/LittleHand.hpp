/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD14M-clement.muth
** File description:
** LittleHand
*/

#pragma once

#include "FruitBox.hpp"
#include "Coconut.hpp"

#define enoughVitamine(fruit, count) ((fruit->getVitamins() == count) ? (true) : (false))

class LittleHand {
    public:
        LittleHand() = default;
        virtual ~LittleHand() = default;

        static void sortFruitBox(FruitBox& unsorted, FruitBox& lemons, FruitBox& bananas, FruitBox& lime) noexcept;
        static FruitBox *const *organizeCoconut(Coconut const *const *coconuts) noexcept;
};