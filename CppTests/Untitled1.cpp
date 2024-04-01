#include <stdio.h>
#include <cstring>
#include <vector>

bool compareVectors(const std::vector<size_t>& v1, const std::vector<size_t>& v2)
{
  if (v1.size() != v2.size())
    return false;

  return std::memcmp(v1.data(), v2.data(), v1.size()) == 0;
}

int main(void)
{
  printf("Olá todo mundo!\r\n");

  constexpr size_t nMaxSize = 1024;

  std::vector<size_t> vszNumbers1;
  for (size_t n = 0; n < nMaxSize; n++)
    vszNumbers1.push_back(n);

  std::vector<size_t> vszNumbers2(vszNumbers1);

  if (compareVectors(vszNumbers1, vszNumbers2))
    printf("Vectors are equal!\r\n");
  else
    printf("Vectors are different!\r\n");

  return 0;
}