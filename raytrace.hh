#include <iostream>
#include <vector>

template <typename T>
struct vec3 {
    
    std::vector<T> v_;

    vec3() { v_ = {0., 0., 0.};  }
    vec3(T x, T y, T z) { v_ = {x,y,z}; }

    T x() const { return v_[0]; }
    T y() const { return v_[1]; }
    T z() const { return v_[2]; }

    T operator*(const T other) { return vec3<T>{other * x(), other * y(), other * z()}}
};

template<typename T>
std::ostream &operator<<(std::ostream &os, const vec3<T> &v)
{
    return os << "(" << v.x() << "," << v.y() << "," << v.z() << ")";
}

template <typename T>
struct ray3 {
    vec3<T> orig_;
    vec3<T> dir_;
    ray3 (vec3<T> origin, vec3<T> direction) {
        orig_ = origin;
        dir_ = direction;
    }

    vec3<T> origin() const { return {1., 2., 3.};  }
    vec3<T> direction() const { return dir_;  }

    vec3<T> operator()(T t) { return orig_ + t * dir_; }
};

template<typename T>
std::ostream &operator<<(std::ostream &os, const ray3<T> &v)
{
    return os << "[" << v.origin() << "; " << v.direction() << "]";
}
