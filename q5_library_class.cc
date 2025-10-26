#include "book.h"
#include "library.h"




int main() {
   std::vector<Book> data = {
      Book("Война и мир", "Лев Толстой", 1869, Status::Available),
      Book("Преступление и наказание", "Фёдор Достоевский", 1866, Status::Borrowed),
      Book("Анна Каренина", "Лев Толстой", 1877, Status::Reserved),
      Book("Гарри Поттер и философский камень", "Дж. К. Роулинг", 1997, Status::Available),
      Book("Гарри Поттер и тайная комната", "Дж. К. Роулинг", 1998, Status::Available),
      Book("Мастер и Маргарита", "Михаил Булгаков", 1967, Status::Available),
      Book("Евгений Онегин", "Александр Пушкин", 1833, Status::Available),
      Book("Отцы и дети", "Иван Тургенев", 1862, Status::Borrowed),
      Book("Идиот", "Фёдор Достоевский", 1869, Status::Available),
      Book("Собачье сердце", "Михаил Булгаков", 1925, Status::Available),
      Book("Тихий Дон", "Михаил Шолохов", 1928, Status::Reserved),
      Book("Дети капитана Гранта", "Жюль Верн", 1867, Status::Available),
      Book("20 000 лье под водой", "Жюль Верн", 1870, Status::Lost),
      Book("Приключения Тома Сойера", "Марк Твен", 1876, Status::Borrowed),
      Book("Приключения Гекльберри Финна", "Марк Твен", 1884, Status::Available),
      Book("Доктор Живаго", "Борис Пастернак", 1957, Status::Available),
      Book("Маленький принц", "Антуан де Сент-Экзюпери", 1943, Status::Available),
      Book("Алхимик", "Пауло Коэльо", 1988, Status::Lost),
      Book("Властелин колец: Братство кольца", "Дж. Р. Р. Толкин", 1954, Status::Reserved),
      Book("Хоббит", "Дж. Р. Р. Толкин", 1937, Status::Available)
    };


    Library Collection(data);
}







