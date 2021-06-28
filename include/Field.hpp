// Copyright 2021 by FORTYSS

#ifndef STORAGE_FIELD_HPP_
#define STORAGE_FIELD_HPP_

#include <string>
#include <utility>

struct Field{
  Field(std::string  value_, std::string  key_) : value(std::move(value_)),
                                      key(std::move(key_)){}
  std::string value;
  std::string key;
};
#endif  // STORAGE_FIELD_HPP_
