#pragma once

using OnNumber = void(*)(int number);
using OnStr = void(*)(const char* str);
using OnBegin = void(*)();
using OnEnd = void(*)();
void parse(const char*);
void register_on_number_callback(OnNumber callback);
void register_on_str_callback(OnStr callback);
void register_begin(OnBegin callback);
void register_end(OnEnd callback);

