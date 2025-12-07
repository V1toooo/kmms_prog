#pragma once

struct MenuItem{
    const char* const title; //заголовок (текст)
    const MenuItem* (*func)(const MenuItem* current); 
    //обычная функция, возвращаемый тип: const MenuItem*, аргумент: const MenuItem* current

    const MenuItem *parent;
    const MenuItem* const *children; //массив детей из MenuItem*
    const int children_count; //количество детей
};