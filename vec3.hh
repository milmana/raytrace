#include <iostream>
#include <vector>

template <typename T>
struct vec3 {
    
    std::vector<T> v_;

    vec3(T x, T y, T z) { v_ = {x,y,z}; };

    const T& x() const { return v_[0];  }
    const T& y() const { return v_[1];  }
    const T& z() const { return v_[2];  }

};


template<typename T>
std::ostream &operator<<(std::ostream &os, const vec3<T> &v)
{
    return os << "(" << v.x() << "," << v.y() << "," << v.z() << ")";
}