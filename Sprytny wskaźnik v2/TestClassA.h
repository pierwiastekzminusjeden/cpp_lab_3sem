#pragma once

class TestClassA{

public:
  TestClassA();
  
  TestClassA(char *buff);

  ~TestClassA();

  char *name() const { return _text; }

private:
  char *_text;
};
