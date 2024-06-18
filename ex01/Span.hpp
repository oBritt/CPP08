#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <vector>
#include <iostream>
#include <cmath>

class Span
{
    private:
        unsigned int max_len;
        std::vector<int> arr;
        Span();

    public:
        ~Span();
        Span(unsigned int size);
        Span(Span const & other);
        Span& operator=(Span const & other);
        int shortestSpan(void);
        int longestSpan(void);
        void addNumber(int number);
        void addNumber(int *numbers, int len);

};


#endif