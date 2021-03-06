#include <iostream>

using namespace std;

template<typename T>
class unique_ptr {
private:
    T* _ptr;
public:
    unique_ptr(T& t) {
        _ptr = &t;
    }
    unique_ptr(unique_ptr<T>&& uptr) {
        _ptr = std::move(uptr._ptr);
        uptr._ptr = nullptr;
    }
    ~unique_ptr() {
        delete _ptr;
    }
    unique_ptr<T>& operator=(unique_ptr<T>&& uptr) {
        if (this == uptr) return *this;
        _ptr = std::move(uptr._ptr);
        uptr._ptr = nullptr;
        return *this;
    }

    unique_ptr(const unique_ptr<T>& uptr) = delete;
    unique_ptr<T>& operator=(const unique_ptr<T>& uptr) = delete;
};

int main() {
    double a = 5.4;
    cout << "Pole kwadratu: "<< (int)a*(int)a << endl;
    return 0;
}