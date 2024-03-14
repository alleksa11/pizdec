
#include "head.cpp"



void Product::Print()
{
    cout << name << "Цена:" << prise << "\n количество:" << quantity << "\n рейтинг:" << score << "\n дата изготовления:" << date << endl;
}

void Product::FillClass()
{
    int i;
    int d = 1; // Исправлено: Инициализация переменной d, чтобы избежать предупреждения о неинициализированной переменной
    do {
        cout << "Какие данные вы хотите заполнить?" << endl;
        cout << "1.Имя\n 2.Цена \n 3.Количество \n 4.Рейтинг \n 5.Дата изготовления \n 6.Заполнить все сразу" << endl;
        cin >> i;
        switch (i)
        {
        case 1:
            cout << "Введите имя:" ;
            cin >> name;
            break;
        case 2:
            cout << "Введите цену:" ;
            cin >> prise;
            break;
        case 3:
            cout << "Введите количество:" ;
            cin >> quantity;
            break;
        case 4:
            cout << "Введите рейтинг:" << endl;
            cin >> score;
            break;
        case 5:
            cout << "Введите дату изготовления:" << endl;
            cin >> date;
            break;
        case 6:
            cout << "Введите все данные:" << endl;
            cout << "Введите имя:" << endl;
            cin >> name;
            cout << "Введите цену:" << endl;
            cin >> prise;
            cout << "Введите количество:" << endl;
            cin >> quantity;
            cout << "Введите рейтинг:" << endl;
            cin >> score;
            cout << "Введите дату изготовления:" << endl;
            cin >> date;
            cout << "Желаете изменить данные?\n0.Да\nОстальное нет" << endl;
            break;
        default:
            cout << "Неверный выбор" << endl;
            d = 0;
            break;
        }
    } while (d == 0);
}

void Product::EditName()
{
    cout << "Введите новое имя:" << endl;
    cin >> name;
}

void Product::EditPrise()
{
    cout << "Введите новую цену:" << endl;
    cin >> prise;
}

void Product::EditQuantity()
{
    cout << "Введите новое количество:" << endl;
    cin >> quantity;
}

void Product::EditScore()
{
    cout << "Введите новый рейтинг:" << endl;
    cin >> score;
}

void Product::EditDate()
{
    cout << "Введите новую дату изготовления:" << endl;
    cin >> date;
}

void Product::SaveClass(const string& filename) {
    ofstream file(filename);
    if (!file) {
        cout << "Не удалось открыть файл " << filename << endl;
        return;
    }

    file.imbue(locale(""));
    file << "0. Имя продукта: " << name << "\n";
    file << "1. Цена продукта: " << prise << "\n";
    file << "2. Количество продукта: " << quantity << "\n";
    file << "3. Оценка: " << score << "\n";
    file << "4. Дата изготовления: " << date << "\n";

    file.close();

}
void Product::LoadClass(const std::string& filename) {
    ifstream file(filename); // открываем файл для чтения
    if (file.is_open()) {
        // читаем информацию из файла и присваиваем её переменным класса
        getline(file, name);
        file >> prise >> quantity >> score;
        file.ignore(); // игнорируем символ новой строки после score
        getline(file, date);
        file.close(); // закрываем файл
        cout << "Информация загружена из файла успешно." << endl;

        // Выводим информацию на экран
        cout << "Имя: " << name << endl;
        cout << "Цена: " << prise << endl;
        cout << "Количество: " << quantity << endl;
        cout << "Рейтинг: " << score << endl;
        cout << "Дата изготовления: " << date << endl;
    }
    else {
        cout << "Не удалось открыть файл для чтения." << endl;
    }
}







