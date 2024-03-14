#include <vector>
#include <sstream>








class Product {
public:
    void Print();
    void FillClass();
    void EditName();
    void EditPrise();
    void EditQuantity();
    void EditScore();
    void EditDate();
    void SaveClass(const std::string& filename);
    void LoadClass(const std::string& filename);

    Product()
    {
        // Здесь можно инициализировать члены класса значениями по умолчанию
        name = "Unnamed Product";
        prise = 0.0f;
        quantity = 0;
        score = 0;
        date = "Unknown";
    }

    // Конструктор с параметрами
    Product(const std::string& pname, float pprise, int pquantity, int pscore, const std::string& pdate)
        : name(pname), prise(pprise), quantity(pquantity), score(pscore), date(pdate) {}



        // Метод для добавления продукта в массив
        void addProduct(const Product& product);
        // Метод для удаления продукта из массива
        void removeProduct(int index);
        // Метод для сохранения массива продуктов в файл
        void saveToFile(const string& filename);
        // Метод для загрузки массива продуктов из файла
        void loadFromFile(const string& filename);
        // Метод для вывода массива продуктов на экран
        void printProducts();





private:
    std::string name;
    float prise;
    int quantity;
    int score;
    std::string date;
    int rating;
    vector<Product> products; // Вектор для хранения продуктов
};







