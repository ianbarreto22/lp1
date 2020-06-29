#include "Diary.h"
#include "Date.h"
#include "Aux.h"

#include <sstream>
#include <iostream>

Diary::Diary(const std::string& name) : filename(name), output(filename, std::ios::app), input(filename), messages(nullptr), messages_size(0), messages_capacity(10)
{
    messages = new Message[messages_capacity];
    if(messages_size == messages_capacity)
    {
        messages_capacity *= 2;
        Message* new_array = new Message[messages_capacity];
        for(int i=0; i<messages_capacity/2; ++i)
        {
            new_array[i] = messages[i];
        }
        delete[] messages;
        messages = new_array;
        delete[] new_array;
    }


}

Diary::~Diary()
{
    delete[] messages;
    input.close();
    output.close();
}

void Diary::add(const std::string& message)
{

    Message m;
    m.content = message;
    m.date.set_from_string(get_current_date());
    m.time.set_from_string(get_current_time());


    messages[messages_size] = m;
    write();
    messages_size++;
}

void Diary::write()
{
    std::string date(messages[messages_size].date.to_string());
    std::string time(messages[messages_size].time.to_string());
    std::string content(messages[messages_size].content);

    if(date_checker(messages[messages_size].date, filename))
    {
        output << "\n# " << date << "\n";
    }

    output << "- " << time << " " << content << "\n";
}

void Diary::load_messages(const std::string& filename)
{
    std::string message;
    std::string discard;
    std::string time;
    std::string date;


    while(!input.eof())
    {
        input >> discard;
        if(discard == "-")
        {
            input >> time;
            std::getline(input, message);

            messages[messages_size].time.set_from_string(time);
            messages[messages_size].date.set_from_string(date);
            messages[messages_size].content = message;
            messages_size++;

            
        }
        else if(discard == "#") 
        {
            input >> date;
        }
        else
        {
            getline(input, discard);
        }
    }
}

