

#include "Span.hpp"

Span::Span()
{
    this->max_len = 0;
}

Span::Span(unsigned int size)
{
    this->max_len = size;
}

Span::~Span()
{
    return ;
}

Span::Span(Span const & other)
{
    this->arr.insert(this->arr.end(), other.arr.begin(), other.arr.end());
    this->max_len = other.max_len;
}

Span& Span::operator=(Span const & other)
{
    if (this != &other)
    {
        this->~Span();
        *this = Span(other);
    }
    return (*this);
}

void Span::addNumber(int number)
{
    if (this->arr.size() == this->max_len)
    {
        throw std::exception();
    }
    else
    {
        this->arr.push_back(number);
    }
}

void Span::addNumber(int *numbers, int len)
{
    if (this->arr.size() + len >= this->max_len)
    {
        throw std::exception();
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            this->arr.push_back(numbers[i]);
        }
    }
}

int Span::longestSpan(void)
{
    if (arr.size() < 2)
        throw std::exception();
    int mini = this->arr[0];
    int maxi = this->arr[1];

    for (int i = 0; i < arr.size(); i++)
    {
        mini = std::min(mini, arr[i]);
        maxi = std::max(maxi, arr[i]);
    }
    return (maxi - mini);
}

int Span::shortestSpan(void)
{
    if (arr.size() < 2)
        throw std::exception();
    sort(this->arr.begin(), this->arr.end());
    int current = arr[1] - arr[0];
    for (int i = 1; i < arr.size() - 1; i++)
    {
        current = std::min(current, arr[i + 1] - arr[i]);
    }
    return (current);
}