#include "Base.h"

#include <memory>
#include <unordered_map>
#include <string>
#include <thread>
#include <stdint.h>
#include <stdfloat>
#include <vector>

using namespace LuaInterpreter;

std::shared_ptr<Value> Metatable::at(const std::string &key) {
    if (data.contains(key)) return data[key];
    return nullptr;
}
void Metatable::set(const std::string &key, std::shared_ptr<Value> value) {
    data[key] = value;
}