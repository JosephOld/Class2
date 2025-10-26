#include "library.h"
#include <algorithm>
Library::Library(std::vector<Book> vec)
  : DataBook(vec)
{

}

void Library::AddBook(std::vector<Book>& data) {
  std::cout << "Введите количество книг,которое хотите добавить: " << "\n";
  int count;
  std::cin >> count;
  for (int i =  0; i < count; ++i) {
    std::cout << " Введите название " << i + 1 << ' ' << "книги: " << "\n";
    std::string title;
    std::cin.ignore();
    getline(std::cin,title);
    std::cout << "Введите автора " << "\n";
    std::string author;
    std::cin.ignore();
    getline(std::cin, author);
    std::cout << "Введите год издания: " ;
    Year year;
    std::cin >> year;
    Book element(title,author,year,Status::Available);
    data.push_back(element);
  }
}

  void Library::GetAvailabeleBooks(std::vector<Book> data) {
    remove_if(data.begin(),data.end(),[](Book x){ return x.GetBookStatus() != Status::Available; });
    for (Book I : data) {
      std::cout << "Доступные книги: \n "<< I.GetTitle() << "\n";
    }
  }

  int Library::CountAvailableBooks(const std::vector<Book>& data) {
    int count = 0;
    for (Book I : data) {
      if (I.GetBookStatus() == Status::Available) {
        count++;
      }
    }
    return count;
  }

  void Library::FindBooksByAuthor(const std::vector<Book>& data, std::string author) {
    for (Book I : data) {
      if (author == I.GetAuthor()) {
        std::cout << "Найденные книги: " << I.GetTitle() << "\n";
      }
    }
  }

