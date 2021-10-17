/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD14M-clement.muth
** File description:
** Mixer
*/

#pragma once

#include "MixerBase.hpp"

class Mixer : public MixerBase
{
    public:
        Mixer() noexcept;
        virtual ~Mixer() = default;
        int mix(FruitBox& fruits);

        void setPlug(bool plug) noexcept;
};