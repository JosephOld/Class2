#include <vector>
#include "book.h"

class Library {
 private:
  std::vector<Book> DataBook;
 public:
  Library(std::vector<Book> vec);
  void AddBook(std::vector<Book>& data);
  void GetAvailabeleBooks(std::vector<Book> data);
  int CountAvailableBooks(const std::vector<Book>& data);
  void FindBooksByAuthor(const std::vector<Book>& data, std::string author);
};