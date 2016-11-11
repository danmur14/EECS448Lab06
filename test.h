#ifndef TEST_H
#define TEST_H


class Test
{
  public:
    Test();

    // Runs tests
    int runTests();

    // Test One: Size of empty list returns 0
    bool testOne();

    // Test Two: Size after 1 addFront returns 1
    bool testTwo();

    // Test Three: isEmpty returns false after 1 addFront
    bool testThree();

    // Test Four: Search finds correct value in list 
    bool testFour();

    // Test Five: Correct size after 2 addFront, 1 removeBack 
    bool testFive();

    // Test Six: Correct size after 2 addFront, 1 removeFront 
    bool testSix();

    // Test Seven: Correct list after 2 addBack, 2 addFront
    bool testSeven();

    // Test Eight: Correct list after 4 addFront, 2 removeFront
    bool testEight();
};


#endif