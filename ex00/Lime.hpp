/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD14M-clement.muth
** File description:
** lime
*/

#pragma once

#include "Lemon.hpp"

class Lime : public Lemon {
    public:
        Lime(int const vitamins = 2) noexcept;
        virtual ~Lime() = default;
};