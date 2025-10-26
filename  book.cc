#include "book.h"
#include "library.h"
Book::Book(std::string t, std::string a, Year y, Status BookStatus) : title(t), author(a), year(y), BookStatus(BookStatus)
  {

}

std::string Book::GetTitle() {
  return title;
}
std::string Book::GetAuthor() {
  return author;
}
Year Book::GetYear() {
  return year;
}
Status Book::GetBookStatus() const {
  return BookStatus;
}

bool Book::IsAvailable(const std::vector<Book>& vec) {
  bool result = false;
  auto search = std::find_if(vec.begin(), vec.end(), [&](const Book& x) { return x.GetBookStatus() == Status::Available; }); //возвращает адрес первого элемент который соответствует заданному условия в фигурных скобках
  if (search != vec.end()) {
    result = true;
  }
  return result;
}