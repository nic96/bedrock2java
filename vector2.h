class Vector2 {
public:
    int x, y;
    Vector2(int x, int y) : x(x), y(y) {}
    bool operator<(const Vector2& other) const {
        return y*187500 + x < other.y*187500 + other.x;
    }
};
