#include <iostream>
#include <cstdlib>
#include <cmath>
#include "menu.h"
#include "menu_manager.h"
#include "my_vector.h"
#include "/Users/emc2/Documents/GitHub/Lab_5/Models/Parcel/Parcel.h"
#include "/Users/emc2/Documents/GitHub/Lab_5/Models/Post/Worker.h"
#include "/Users/emc2/Documents/GitHub/Lab_5/Models/Post/Client.h"

#pragma region Функции
int sqrt25() {
    std::cout << "Квадратный корень из 25 равен " << pow(25, 0.5) << ".";
    return 0;
}

int hello() {
    char name[25]{};
    cout << "Введите ваше имя: ";
    cin.ignore(1, '\n');
    cin.getline(name, 25);

    cout << "Привет, " << name << "!";
    return 0;
}

int printgraf() {
    cout << "_________________¶¶¶1___¶¶¶____¶¶¶1_______________\n";
    cout << "__________________¶¶¶____¶¶¶____1¶¶1______________\n";
    cout << "___________________¶¶¶____¶¶¶____¶¶¶______________\n";
    cout << "___________________¶¶¶____¶¶¶____¶¶¶______________\n";
    cout << "__________________¶¶¶____1¶¶1___1¶¶1______________\n";
    cout << "________________1¶¶¶____¶¶¶____¶¶¶1_______________\n";
    cout << "______________1¶¶¶____¶¶¶1___¶¶¶1_________________\n";
    cout << "_____________¶¶¶1___1¶¶1___1¶¶1___________________\n";
    cout << "____________1¶¶1___1¶¶1___1¶¶1____________________\n";
    cout << "____________1¶¶1___1¶¶1___1¶¶¶____________________\n";
    cout << "_____________¶¶¶____¶¶¶1___¶¶¶1___________________\n";
    cout << "______________¶¶¶¶___1¶¶¶___1¶¶¶__________________\n";
    cout << "_______________1¶¶¶1___¶¶¶1___¶¶¶¶________________\n";
    cout << "_________________1¶¶1____¶¶¶____¶¶¶_______________\n";
    cout << "___________________¶¶1____¶¶1____¶¶1______________\n";
    cout << "___________________¶¶¶____¶¶¶____¶¶¶______________\n";
    cout << "__________________1¶¶1___1¶¶1____¶¶1______________\n";
    cout << "_________________¶¶¶____¶¶¶1___1¶¶1_______________\n";
    cout << "________________11_____111_____11_________________\n";
    cout << "__________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶________\n";
    cout << "1¶¶¶¶¶¶¶¶¶¶¶__¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶________\n";
    cout << "1¶¶¶¶¶¶¶¶¶¶¶__1¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶________\n";
    cout << "1¶¶_______¶¶__1¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶________\n";
    cout << "1¶¶_______¶¶__1¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶________\n";
    cout << "1¶¶_______¶¶__¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶________\n";
    cout << "1¶¶_______¶¶__1¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶________\n";
    cout << "_¶¶¶¶¶¶¶¶¶¶¶__¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶________\n";
    cout << "_¶¶¶¶¶¶¶¶¶¶¶__¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶________\n";
    cout << "__________¶¶___1¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶1________\n";
    cout << "__________1¶¶___¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶_________\n";
    cout << "____________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶11__________\n";
    cout << "11_____________________________________________111\n";
    cout << "1¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶1\n";
    cout << "__¶¶111111111¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶111111111¶__" << endl;
    return 0;
}
int exitProgram() {

    std::cout << "Выход из программы.\n\n";

    exit(0);
}

namespace YMA {

    int c1{};
    int c2{};
    int c3{};
    const int maxCount = 50;
}

int Users() {

    cout << "Вывод объекта класса Parcel" << endl;
    Parcel parcel(5000, "14.03.2022", "Kaluga");
    parcel.print();
    cout << "\nВывод объекта класса Worker" << endl;
    Worker worker("Daniil", "Zudin", 19, "log", "pas", "Postman");
    worker.print();
    cout << "\nВывод объекта класса Client" << endl;
    Client client("Nikita", "Kuzin", 18, "log", "pas", parcel.getCodeNumber());
    client.print();
    cout << "\n\n";

    return 0;
}

template <typename T>
int AddWorker(MyVector<T>& vector) {

    using namespace YMA;
    int count{};
    cout << "\nВведите кол-во объектов класса: ";
    cin >> count;
    for (int i = 0; i < count; i++) {
        cout << "\nВвод информации об объекте класса #" << i + 1;
        T worker;
        cin >> worker;
        vector.PushBack(worker);
    }

    return 1;
}

int AddClient(MyVector<Client>& clients, MyVector<Parcel>& parcels) {

    using namespace YMA;
    int count{};
    cout << "\nВведите кол-во объектов класса Клиент: ";
    cin >> count;
    for (int i = 0; i < count; i++) {
        cout << "\nВвод информации об объекте класса #" << i + 1;
        Client client;
        cin >> client;
        client.setNumber(parcels[i].getCodeNumber());
        clients.PushBack(client);
    }
    c3 += count;

    return 1;
}

void AddUser(MyVector<Worker>& workers, MyVector<Parcel>& parcels, MyVector<Client>& clients) {
    using namespace YMA;
    cout << "Выберите класс для добавления:\n1. Worker\n2. Parcel\n3. Client\nSelect >> ";
    int switcher{};
    cin >> switcher;
    switch (switcher) {
        case 1:
            AddWorker(workers);
            break;
        case 2:
            AddWorker(parcels);
            break;
        case 3:
            AddClient(clients, parcels);
            break;
    }
}

template <typename T>
int PrintWorker(MyVector<T> vector) {

    using namespace YMA;
    int j = 1;
    for (T w : vector) {
        cout << "\n\nВывод информации об объектах класса #" << j << "\n";
        cout << w;
        j++;
    }

    return 1;
}

void PrintUser(MyVector<Worker>& workers, MyVector<Parcel>& parcels, MyVector<Client>& clients) {
    using namespace YMA;
    cout << "Выберите класс для вывода информации:\n1. Worker\n2. Parcel\n3. Client\nSelect >> ";
    int switcher{};
    cin >> switcher;
    switch (switcher) {
        case 1:
            PrintWorker(workers);
            break;
        case 2:
            PrintWorker(parcels);
            break;
        case 3:
            PrintWorker(clients);
            break;
    }
}
template <typename T>
int DeleteWorker(MyVector<T>& vector) {
    using namespace YMA;
    int tempResult = PrintWorker(vector);
    cout << "\nВыберите номер объекта для удаления: ";
    int deleteNum{};
    cin >> deleteNum;
    vector.Remove(deleteNum - 1);
    return 1;
}

void DeleteUser(MyVector<Worker>& workers, MyVector<Parcel>& parcels, MyVector<Client>& clients) {
    using namespace YMA;

    cout << "Выберите класс для удаления информации:\n1. Worker\n2. Parcel\n3. Client\nSelect >> ";
    int switcher{};
    cin >> switcher;
    switch (switcher) {
        case 1:
            DeleteWorker(workers);
            break;
        case 2:
            DeleteWorker(parcels);
            break;
        case 3:
            DeleteWorker(clients);
            break;
    }
}
template <typename T>
int SortWorker(MyVector<T>& vector) {
    using namespace YMA;

    for (int j = 0; j < vector.Size(); j++) {
        for (int i = 0; i < vector.Size() - 1; i++) {
            if (vector[i] > vector[i + 1]) {
                T tempWorker = vector[i + 1];
                vector[i + 1] = vector[i];
                vector[i] = tempWorker;
            }
        }
    }
    int tempResult = PrintWorker(vector);
    return 1;
}

void SortUser(MyVector<Worker>& workers, MyVector<Parcel>& parcels, MyVector<Client>& clients) {
    using namespace YMA;

    cout << "Выберите класс для соритровки информации:\n1. Worker\n2. Parcel\n3. Client\nSelect >> ";
    int switcher{};
    cin >> switcher;
    switch (switcher) {
        case 1:
            SortWorker(workers);
            break;
        case 2:
            SortWorker(parcels);
            break;
        case 3:
            SortWorker(clients);
            break;
    }
}

template <typename T>
void FilterWorker(MyVector<T> vector) {

    string name;
    cout << "Введите имя пользователя для фильтрации: ";
    cin >> name;
    int j = 1;
    for (T w : vector) {
        if (w.getName() == name) {
            cout << "\n\nВывод информации об объектах класса #" << j << "\n";
            cout << w;
            j++;
        }
    }
    system("pause");
}

void FilterWorker(MyVector<Parcel> vector) {

    int name;
    cout << "Введите код посылки для фильтрации: ";
    cin >> name;
    int j = 1;
    for (Parcel w : vector) {
        if (w.getCodeNumber() == name) {
            cout << "\n\nВывод информации об объектах класса #" << j << "\n";
            cout << w;
            j++;
        }
    }
    system("pause");
}

void FilterUser(MyVector<Worker>& workers, MyVector<Parcel>& parcels, MyVector<Client>& clients) {
    using namespace YMA;

    cout << "Выберите класс для фильтрации информации:\n1. Worker\n2. Parcel\n3. Client\nSelect >> ";
    int switcher{};
    cin >> switcher;
    switch (switcher) {
        case 1:
            FilterWorker(workers);
            break;
        case 2:
            FilterWorker(parcels);
            break;
        case 3:
            FilterWorker(clients);
            break;
    }
}

int User() {
    return 5;
}
int AddUser() {
    return 1;
}
int PrintUser() {
    return 5;
}
int DeleteUser() {
    return 2;
}
int SortUser() {
    return 3;
}
int FilterUser() {
    return 4;
}
int BackMainMenu() {
    return 6;
}
#pragma endregion


int main() {
    using namespace YMA;


    MyVector<Parcel> parcels;
    MyVector<Worker> workers;
    MyVector<Client> clients;

    const int itemsCount = 6;
    char squareRootOf25Name[]{ "Вычислить корень из 25" };
    char helloName[]{ "Поздороваться с пользователем" };
    char printHelloName[]{ "Изобразить картинку псевдографикой" };
    char menuTitle[]{ "Главное меню" };
    char incheritance[]{ "Наследование" };
    char operatorOverloading[]{ "Перегрузка операторов" };
    char ex[]{ "Выход" };
    Item items[itemsCount]{
            Item {squareRootOf25Name, sqrt25},
            Item {helloName, hello},
            Item {printHelloName, printgraf},
            Item {incheritance, Users},
            Item {operatorOverloading, User},
            Item {ex, exitProgram} };
    Menu menu{ menuTitle, items, itemsCount };

    const int runMenuUsers = 6;
    char usersMenu[] = "Пользовательское меню";
    char addUsers[] = "Добавить пользователя";
    char deleteUsers[] = "Удалить пользователя";
    char sortUsers[] = "Сортировать массив пользователей";
    char filterUsers[] = "Фильтровать массив пользователей";
    char printUsers[] = "Вывести информацию о пользователе";
    char backToMainMenu[] = "Назад в главное меню";
    Item items_user[runMenuUsers]{
            Item {addUsers, AddUser},
            Item {deleteUsers, DeleteUser},
            Item {sortUsers, SortUser},
            Item {filterUsers, FilterUser},
            Item {printUsers, PrintUser},
            Item {backToMainMenu, BackMainMenu } };
    Menu menu_user(usersMenu, items_user, runMenuUsers);
    MenuManage managerOfMenu(menu, menu_user);

    while (managerOfMenu.runMainMenu()) {
        if (managerOfMenu.getMain_select() == User()) {
            do {

                managerOfMenu.runSubMenu();
                if (managerOfMenu.getSub_select() == AddUser()) {
                    AddUser(workers, parcels, clients);
                }
                else if (managerOfMenu.getSub_select() == PrintUser()) {
                    PrintUser(workers, parcels, clients);
                }
                else if (managerOfMenu.getSub_select() == DeleteUser()) {
                    DeleteUser(workers, parcels, clients);
                }
                else if (managerOfMenu.getSub_select() == SortUser()) {
                    SortUser(workers, parcels, clients);
                }
                else if (managerOfMenu.getSub_select() == FilterUser()) {
                    FilterUser(workers, parcels, clients);
                }
            } while (managerOfMenu.getSub_select() != BackMainMenu());

        }
    };
    return 0;
}
