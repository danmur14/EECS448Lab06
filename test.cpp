#include "test.h"
#include "LinkedListOfInts.h"
#include <iostream>

Test::Test(){}

int Test::runTests()
{
    // run all tests
    int total = 0;
    if(testOne()){total++;}
    if(testTwo()){total++;}
    if(testThree()){total++;}
    if(testFour()){total++;}
    if(testFive()){total++;}
    if(testSix()){total++;}
    if(testSeven()){total++;}
    if(testEight()){total++;}

    // output results
    std::cout << "\nTesting complete." << std::endl;
    std::cout << "\nTests passed: " << total << "/9" << std::endl;
    return total;
}

bool Test::testOne()
{
  bool result = false;
  LinkedListOfInts list;

  std::cout << "\nTest One: Size of empty list returns 0: ";
  if(list.size() == 0)
  {
    result = true;
    std::cout << "PASS." << std::endl;
  }
  else
  {
    std::cout << "FAIL" << "\n" << "Expected size: 0" << "\n";
    std::cout << "Actual size: " << list.size() << std::endl;
  }

  return result;
}

bool Test::testTwo()
{
  bool result = false;
  LinkedListOfInts list;

  std::cout << "\nTest Two: Size after 1 addFront returns 1:  ";
  list.addFront(1);

  if(list.size() == 1)
  {
    result = true;
    std::cout << "PASS." << std::endl;
  }
  else
  {
    std::cout << "FAIL" << "\n" << "Expected size: 1" << "\n";
    std::cout << "Actual size: " << list.size() << std::endl;
  }

  return result;
}

bool Test::testThree()
{
  bool result = false;
  LinkedListOfInts list;

  std::cout << "\nTest Three: isEmpty returns false after 1 addFront:  ";
  list.addFront(1);

  if(!(list.isEmpty()))
  {
    result = true;
    std::cout << "PASS." << std::endl;
  }
  else
  {
    std::cout << "FAIL" << std::endl;
  }

  return result;
}

bool Test::testFour()
{
  bool result = false;
  LinkedListOfInts list;

  std::cout << "\nTest Four: Search finds correct value in list: ";

  list.addFront(1);
  list.addFront(2);
  list.addFront(3);

  if(list.search(2))
  {
    result = true;
    std::cout << "PASS." << std::endl;
  }
  else
  {
    std::cout << "FAIL\n Value not found." << std::endl;
  }

  return result;
}

/* Another possible bug here.  Using removeBack() does not decrease the size count */
bool Test::testFive()
{
  bool result = false;
  LinkedListOfInts list;

  std::cout << "\nTest Five: Correct size after 2 addFront, 1 removeBack: ";

  list.addFront(1);
  list.addFront(2);
  list.removeBack();

  if(list.size() == 1)
  {
    result = true;
    std::cout << "PASS." << std::endl;
  }
  else
  {
    std::cout << "FAIL" << "\n" << "Expected size: 1" << "\n";
    std::cout << "Actual size: " << list.size() << std::endl;
  }

  return result;
}

bool Test::testSix()
{
  bool result = false;
  LinkedListOfInts list;

  std::cout << "\nTest Six: Correct size after 2 addFront, 1 removeFront: ";

  list.addFront(1);
  list.addFront(2);
  list.removeFront();

  if(list.size() == 1)
  {
    result = true;
    std::cout << "PASS." << std::endl;
  }
  else
  {
    std::cout << "FAIL" << "\n" << "Expected size: 1" << "\n";
    std::cout << "Actual size: " << list.size() << std::endl;
  }

  return result;
}

bool Test::testSeven()
{
  bool result = false;
  LinkedListOfInts list;

  std::vector<int> expected = {1,2,3,4};
  std::cout << "\nTest Seven: Correct list after 2 addBack, 2 addFront: ";

  list.addBack(4);
  list.addBack(3);
  list.addFront(2);
  list.addFront(1);

  std::vector<int> actual = list.toVector();

  int i = 0;
  while(i < 4) {
    if(expected[i] != actual[i]) {
      std::cout << "FAIL" << "\n";
      std::cout << "Expected: 1 2 3 4" << std::endl;
      std::cout << "Actual: ";

      while(i < 4) {
        std::cout << actual[i] << " ";
      }
      std::cout << std::endl;

      result = false;
      return result;
    }
    i++;
  }

  std::cout << "PASS!" << std::endl;
  result = true;
  return result;
}

bool Test::testEight()
{
  bool result = false;
  LinkedListOfInts list;

  std::vector<int> expected = {3,4};
  std::cout << "\nTest Eight: Correct list after 4 addFront, 2 removeFront: ";

  list.addFront(4);
  list.addFront(3);
  list.addFront(2);
  list.addFront(1);
  list.removeFront();
  list.removeFront();

  std::vector<int> actual = list.toVector();

  int i = 0;
  if(list.size() != 2) {
    std::cout << "FAIL" << "\n";
    std::cout << "Expected: 3 4" << std::endl;
    std::cout << "Actual: ";

    int j = 0;
    while(j < 4) {
      std::cout << actual[j] << " ";
      j++;
    }
    std::cout << std::endl;

    result = false;
    return result;
  }
  while(i < 4) {
    if(expected[i] != actual[i]) {
      std::cout << "FAIL" << "\n";
      std::cout << "Expected: 3 4" << std::endl;
      std::cout << "Actual: ";

      int j = 0;
      while(j < 4) {
        std::cout << actual[j] << " ";
        j++;
      }
      std::cout << std::endl;

      result = false;
      return result;
    }
    i++;
  }

  std::cout << "PASS!" << std::endl;
  result = true;
  return result;
}
