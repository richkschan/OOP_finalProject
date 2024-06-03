#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book {
public:
    Book(string date, string title, string author, string publisher, string lang, float price) 
        : date(date), title(title), author(author), publisher(publisher), lang(lang), price(price) { }
    void setPublisher(const string publisher) { this->publisher = publisher; }
    void setTitle(const string title) {this->title = title;}
    void setPrice(const float price) {this->price=price;}
    void setDate(const string date) {this->date = date;}
    void setAuthor(const string author) {this->author = author;}
    void setLang(const string lang) {this->lang = lang;}    

    string getPublisher() const {return this->publisher;}
    string getTitle() const {return this->title;}
    float getPrice() const {return this->price;}
    string getDate() const {return this->date;}
    string getAuthor() const { return this->author;}
    string getLang() const {return this->lang;}    

protected:
    string date;
    string title;
    string author;
    string publisher;
    string lang;
    float price;
    vector<string> detailGenre;

    
private:
    friend class BookManager;
    friend class BookRecoommender;
};

class Literature : public Book {
};

class Non_fiction : public Book {
};

class Practical : public Book {

};

class TeenAndChild : public Book {

};