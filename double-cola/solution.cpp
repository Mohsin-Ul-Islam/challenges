#include <string>
#include <vector>

std::string who_is_next(const std::vector<std::string>& names, long long r) {
  
  int nameIndex = 0;
  
  // if number of cans is less than the initial queue length
  if (r <= names.size())
    nameIndex = r;
  
  else {
    
  }
  
  return names[nameIndex];
}