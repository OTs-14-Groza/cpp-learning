#ifndef SALESITEM_H
#define SALESITEM_H

#include <iostream>
#include <string>

class Sales_item
{
public:
    Sales_item()
        : units_sold(0), revenue(0.0)
    {
    }

    std::string isbn() const
    {
        return bookNo;
    }

    Sales_item& operator+=(const Sales_item& rhs)
    {
        units_sold += rhs.units_sold;
        revenue += rhs.revenue;
        return *this;
    }

    friend std::istream& operator>>(std::istream& in, Sales_item& item)
    {
        double price = 0;

        in >> item.bookNo >> item.units_sold >> price;

        if (in)
            item.revenue = price * item.units_sold;
        else
            item = Sales_item();

        return in;
    }

    friend std::ostream& operator<<(std::ostream& out, const Sales_item& item)
    {
        out << item.bookNo << " "
            << item.units_sold << " "
            << item.revenue << " ";

        if (item.units_sold != 0)
            out << item.revenue / item.units_sold;
        else
            out << 0;

        return out;
    }

private:
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};

Sales_item operator+(Sales_item lhs, const Sales_item& rhs)
{
    lhs += rhs;
    return lhs;
}

#endif