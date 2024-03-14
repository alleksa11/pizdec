
#include "library.h"
#include "f.cpp"



int main() {
    Product potato;
    int choice;

    setlocale(LC_ALL, "Russian");

    do {
        cout << "0.Ввести все\n1.Имя\n2.Цена\n3.Количество\n4.Рейтинг\n5.Дата изготовления\n6.Сохранить\n7.Загрузить\n8.Вывести всё\n9.Выход\n\n\n\n \t\tВаш выбор\n ";
        cin >> choice;

        switch (choice) {
        case 0:
            potato.FillClass();
            break;
        case 1:
            potato.EditName();
            break;
        case 2:
            potato.EditPrise();
            break;
        case 3:
            potato.EditQuantity();
            break;
        case 4:
            potato.EditScore();
            break;
        case 5:
            potato.EditDate();
            break;
        case 6:
            potato.SaveClass("product_info.txt");
            break;
        case 7:
            potato.LoadClass("product_info.txt");
            break;
        case 8:
            potato.Print();
            break;
        case 9:
            potato.printProducts();
            break;
        case 10:
            cout << "До свидания!" << endl;
            break;
        default:
            cout << "Неверный выбор" << endl;
            break;
        }
    } while (choice != 9);

    return 0;
}
