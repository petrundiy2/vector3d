#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <ostream>
#include <cmath>

class vector3d {
private:
    double x;
    double y;
    double z;
public:
    const static vector3d X;
    const static vector3d Y;
    const static vector3d Z;
    const static vector3d ZERO;
    vector3d(double x,double y,double z){

    }
    double compareTo( const vector3d &other ) const {
        return((x-other.x)+(y-other.y)+(z-other.z));
    }
    vector3d operator + (const vector3d &a){
        x=x+a.x;
        y=y+a.y;
        z=z+a.z;
        return vector3d(x,y,z);
    }
    vector3d operator - (const vector3d &a){
        x=x-a.x;
        y=y-a.y;
        z=z-a.z;
        return vector3d(x,y,z);
    }
    double operator * (const vector3d &a){
        x=x*a.x;
        y=y*a.y;
        z=z*a.z;
        return (x+y+z);
    }
    vector3d operator *(const int &a){
        x=x*a;
        y=y*a;
        z=z*a;
        return vector3d(x,y,z);
    }
    vector3d operator ^(const vector3d &a){
        x=(y*a.z-z*a.y);
        y=-(x*a.z-z*a.x);
        z=(x*a.y-y*a.x);
        return vector3d(x,y,z);
    }
    double length(const vector3d &a){
        return sqrt(x*x+y*y+z*z);
    }
    vector3d normalize(const vector3d &a){
        return vector3d(x/length(a),y/length(a),z/length(a));
    }
    bool operator ==(const vector3d &a){ return compareTo(a)==0; }
    bool operator !=(const vector3d &a){ return compareTo(a)!=0; }

};


#endif
