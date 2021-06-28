// Copyright 2021 by FORTYSS

#include <Creator.hpp>
int main(int argc, const char *argv[]){
  Creator creator;
  if (argc > 1){
    creator.create_new_random_db(argv[1]);
  } else {
    creator.create_new_random_db("/tmp/testdb");
  }
}