#ifndef _SPHERE_H
#define _SPHERE_H

class Sphere {
    private:
        // private members here
        double radius, volume, s_area;

    public:
        // public members here
        void Set_Rad(double);
        void CalcVolume();
        void CalcSurfaceArea();
        void PrintSphere();
};

#endif