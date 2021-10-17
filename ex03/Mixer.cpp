/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD14M-clement.muth
** File description:
** Mixer
*/

#include "Mixer.hpp"

static int mixTmpFunc(FruitBox& box)
{
    int vitamins = 0;

    for (Fruit const *tmp = nullptr; (tmp = box.pickFruit()) != nullptr; vitamins += tmp->getVitamins());
    return (vitamins);
}

Mixer::Mixer() noexcept
{
    _plugged = false;
    _mixfunc = &mixTmpFunc;
}

void Mixer::setPlug(bool plug) noexcept
{
    _plugged = plug;
}

int Mixer::mix(FruitBox& fruits)
{
    return (*mixTmpFunc)(fruits);
}
