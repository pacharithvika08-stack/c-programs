#include <iostream>

class distance
{
    int feet, inch;

public:
    distance(int f = 0, int i = 0) : feet(f), inch(i) {}
    friend distance add(const distance &a, const distance &b);
    void show() const { std::cout << feet << "ft" << inch << "in\n"; }
};

distance add(const distance &a, const distance &b)
{
    int totalinch = (a.feet + b.feet) * 12 + a.inch + b.inch;
    return distance(totalinch / 12, totalinch % 12);
}

int main()
{
    distance d1(5, 8), d2(3, 7);
    distance d3 = add(d1, d2);
    d3.show();
    return 0;
}
