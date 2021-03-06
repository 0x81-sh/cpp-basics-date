#pragma once

enum DISPLAY_LENGTH {SHORT, MEDIUM, FULL};

class Date {
private:
    int day;
    int month;
    int year;
    void setDate(const Date &date);
public:
    Date(int day = 1, int month = 1, int year = 2000);
    void setDate(int day, int month, int year);
    bool isLeapYear() const;
    void show(DISPLAY_LENGTH type) const;
    void add(int days);
    int diff(const Date &date) const;
    bool operator== (const Date &b) const;

    static bool isLeapYear(int year);
    static bool dateIsValid(int d, int m, int y);
    static int monthDays(int m, int y);
    static int yearDays(int y);
    static int toDay(const Date &date);
    static Date* toDate(int d);

    int getDay() const;
    int getMonth() const;
    int getYear() const;
};



