#include <iostream>
#include <vector>

template <typename T>
struct vec3 {
    
    std::vector<T> val;

    vec3() { val = {0., 0., 0.};  }
    vec3(T x, T y, T z) { val = {x,y,z}; }

    vec3<T> operator*(const vec3<T> &rhs) { return {val[0] * rhs.val[0], val[1] * rhs.val[1], val[2] * rhs.val[2]}; }

    vec3<T> operator*(const T &rhs) { return {val[0] * rhs, val[1] * rhs, val[2] * rhs}; }

    vec3<T> operator+(const vec3<T> &rhs) { return {val[0] + rhs.val[0], val[1] + rhs.val[1], val[2] + rhs.val[2]}; }

    vec3<T> operator+(const T &rhs) { return {val[0] + rhs, val[1] + rhs, val[2] + rhs}; }

};

template<typename T>
std::ostream &operator<<(std::ostream &os, const vec3<T> &v)
{
    return os << "(" << v.val[0] << "," << v.val[1] << "," << v.val[2] << ")";
}

template <typename T>
struct ray3 {

    // p = a + tb
    // a := origin
    // b := direction

    vec3<T> a, b;
    
    ray3 (vec3<T> orig, vec3<T> dir) {
        a = orig;
        b = dir;
    }

    vec3<T> operator()(const T t) { return a + b * t;  }
};

template<typename T>
std::ostream &operator<<(std::ostream &os, const ray3<T> &v)
{
    return os << "[" << v.a << "; " << v.b << "]";
}
