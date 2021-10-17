/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD14M-clement.muth
** File description:
** LittleHand
*/

#include <vector>
#include "FruitBox.hpp"
#include "LittleHand.hpp"
#include "Banana.hpp"
#include "Lemon.hpp"
#include "Lime.hpp"

void LittleHand::sortFruitBox(FruitBox& unsorted, FruitBox& lemons, FruitBox& bananas, FruitBox& lime) noexcept
{
    bool tmp = false;
    FruitBox box{unsorted.nbFruits()};
    Fruit *fruit;

    while ((fruit = unsorted.pickFruit())) {
        if (dynamic_cast<Banana *>(fruit)) tmp = bananas.putFruit(fruit);
        else if (dynamic_cast<Lime *>(fruit)) tmp = lime.putFruit(fruit);
        else if (dynamic_cast<Lemon *>(fruit)) tmp = lemons.putFruit(fruit);
        if (!tmp) box.putFruit(fruit);
        tmp = false;
    }
    while ((fruit = box.pickFruit()) && (unsorted.putFruit(fruit)));
}

static int getCoconutSize(Coconut const *const *coconuts)
{
    int i = 0;

    for (i = 0; coconuts[i]; i++);
    return (i);
}

FruitBox *const *LittleHand::organizeCoconut(Coconut const *const *coconuts) noexcept
{
    FruitBox *box;
    size_t size = getCoconutSize(coconuts);
    size_t it = 0;
    size_t i = 0;
    float tmp = (size / 6.0);
    size_t nbBox = tmp == (int)tmp ? (int)tmp + 1 : (int)tmp + 2;
    FruitBox **boxes = new FruitBox *[nbBox];

    boxes[nbBox - 1] = nullptr;
    for (size_t e = 0; e < nbBox - 1; ++e) {
        box = new FruitBox(6);
        for (i = 0; i < 6 && it < size; ++i, box->putFruit(const_cast<Coconut *>(coconuts[it])), ++it);
        boxes[e] = box;
    }
    return (boxes);
}