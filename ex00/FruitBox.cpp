/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD14M-clement.muth
** File description:
** FruitBox
*/

#include "FruitBox.hpp"

FruitBox::FruitBox(int size) noexcept :
    _count{0}, _size{size}, _head{nullptr} {}

int FruitBox::nbFruits() const noexcept
{
    return (_count);
}

FruitNode *FruitBox::head() const noexcept
{
    return (_head);
}

Fruit *FruitBox::pickFruit() noexcept
{
    if (!_head) return nullptr;
    Fruit *fruit = _head->fruit;
    FruitNode *tmp = _head;

    if (!_count) return (nullptr);
    _head = _head->next;
    delete tmp;
    _count--;
    return (fruit);
}

bool FruitBox::putFruit(Fruit *fruit) noexcept
{
    FruitNode *node = new FruitNode();
    FruitNode *cur = _head;

    if (_count >= _size) return (false);
    node->fruit = fruit;
    if (nullptr == _head) _head = node;
    else {
        while (cur->next) {
            if (fruit == cur->fruit) return (false);
            cur = cur->next;
        }
        cur->next = node;
    }
    _count++;
    return (true);
}