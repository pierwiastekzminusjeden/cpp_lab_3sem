#pragma once

class Angle{

public:
    static const Angle fromRadians(double rad = 0);
    
    static const Angle fromDegrees(double deg = 0);
    
    static const Angle distance(const Angle &first, const Angle &second);

    Angle &add(const Angle &toAdd);

    double toDeg() const;
    
    double toRad() const;

    void less();

    operator double() const;

    ~Angle();

private:

    double _rad;

    Angle(double rad);
};
