class Vector3 {
public:
    int x, y, z;
    Vector3(int x, int y, int z) : x(x), y(y), z(z) {}
    bool operator<(const Vector3& other) const {
        return y*16*16 + z*16 + x < other.y*16*16 + other.z*16 + other.x;
    }
};
