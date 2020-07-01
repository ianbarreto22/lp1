#ifndef W5N_DIARY_H
#define W5N_DIARY_H

#include "Message.h"

#include <string>
#include <fstream>
#include <vector>

struct Diary
{
    Diary(const std::string& filename);
    ~Diary();

    std::string filename;
    std::vector<Message> messages;
    std::ofstream output;
    std::ifstream input;

    void add(const std::string& message);
    void write();
    void load_messages(const std::string& filename);
    std::vector<Message*> search(const std::string& what);
};
#endif
