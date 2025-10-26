#include <string>
#include <iostream>

using Year = int;

enum class Status {
  Available,
  Borrowed,
  Reserved,
  Lost
};

class Book {
 private:
  std::string title;
  std::string author;
  Year year;
  Status BookStatus;
 public:
  Book(std::string t, std::string a, Year y, Status BookStatus);

  std::string GetTitle();
  std::string GetAuthor();
  Status GetBookStatus() const;
  Year GetYear();

  bool IsAvailable(const std::vector<Book>& vec);
};