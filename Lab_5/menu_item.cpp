#include <iostream>
#include "menu_item.h"

namespace YMA {
    char* Item::getName() {
        return m_itemName;
    }
    Item::func_t Item::getFunc() {
        return m_itemFunc;
    }
    void Item::print() {
        std::cout << m_itemName;
    }
    Item::Item(char* itemName, func_t itemFunc) : m_itemName(itemName),
                                                  m_itemFunc(itemFunc) {}
}
