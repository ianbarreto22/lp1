#ifndef W5N_DIARY_H
#define W5N_DIARY_H

#include "Message.h"

#include <string>
#include <fstream>

struct Diary
{
    Diary(const std::string& filename);
    ~Diary();

    std::string filename;
    Message* messages;
    size_t messages_size;
    size_t messages_capacity;
    std::ofstream output;
    std::ifstream input;

    void add(const std::string& message);
    void write();
    void load_messages(const std::string& filename);
};
#endif
