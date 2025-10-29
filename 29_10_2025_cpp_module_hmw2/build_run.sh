#!/bin/bash

export LANG=en_US.UTF-8

CPP_FILES="output.cpp sort.cpp main.cpp"
EXE="shellsort"
CHARSET="-finput-charset=utf-8 -fexec-charset=utf-8"

echo "Очистка предыдущих сборок..."
rm -f "$EXE"

echo "Компиляция..."
g++ $CHARSET $CPP_FILES -o "$EXE"

if [ $? -eq 0 ]; then
    echo "Компиляция успешна!"
    echo ""
    echo "Запуск программы:"
    ./"$EXE"
    echo ""
    echo "Программа завершила работу с кодом: $?"
else
    echo "❌ Ошибка компиляции!"
    exit 1
fi