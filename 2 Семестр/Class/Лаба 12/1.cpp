#include "iostream"
#include "map"

typedef std::multimap<double, double> Tmap;
typedef Tmap::iterator it;

Tmap make_multimap(int size) {
    Tmap m;
    double d;
    for (int i = 0; i < size; i++) {
        std::cout << "give us element" << std::endl;
        std::cin >> d;
        m.insert(std::make_pair((double)i, d));
    }
    return m;
}

void print_map(Tmap m) {
    for (pair i : m) {
        std::cout << i.first << " : " << i.second << std::endl;
    }
}

double Max(Tmap m) {
    auto i = m.begin();
    double max = (*i).second;
    while (i != m.end()) {
        if (max < (*i).second) max = (*i).second;
        i++;
    }
    return max;
};
pair<double, int> Min_and_n(Tmap m) {
    auto i = m.begin();
    int n = 0, counter = 0;
    double min = (*i).second;
    while (i != m.end()) {
        if (min > (*i).second) {
            min = (*i).second;
            n = counter;
        }
        i++;
        counter++;
    }
    return std::make_pair(min, n);
}
double average(Tmap m) {
    double avg = 0;
    int n = 0;
    for (auto i : m) {
        n++;
        avg += i.second;
    }
    avg /= n;
    return avg;
}

int main() {
    int n;
    std::cout << "Number of elements" << std::endl;
    std::cin >> n;
    Tmap m = make_multimap(n);
    print_map(m);

    double max = Max(m);
    std::cout << "Maximum is " << max << std::endl;
    m.insert(std::make_pair((double)m.size(), max));
    print_map(m);

    int pos = Min_and_n(m).second;
    double min = Min_and_n(m).first;
    std::cout << "Minimum is on position " << pos << " and it is equal to " << min << std::endl;
    m.erase(m.begin());
    for (auto i = m.begin(); i != m.end(); ++i) {
        double d = i->second;
        if (d == min) m.erase(i);
    }
    print_map(m);

    double avg = average(m);
    std::cout << "Average is " << avg;
    for (auto i : m) {
        i.second += avg;
    }
    print_map(m);
    return 0;
}