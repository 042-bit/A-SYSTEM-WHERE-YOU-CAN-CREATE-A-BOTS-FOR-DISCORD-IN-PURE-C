// ---------------------- //
// Made by abbys - 042    //
// discord @xabbys_       //
// LICENSE GPL 2.0        //
// ---------------------- //

#ifndef ENGINEC_QUATERNION_H
#define ENGINEC_QUATERNION_H

#include "vector3.h"

struct quaternion {
    double x, y, z, w;
};

struct quaternion_mul {
    struct quaternion qu;
    double b;
};

struct quaternion_math {
    struct vector_three *axis;
    double angel;
    double pitch;
    double yaw;
    double roll;
    double v;
};

extern double lenght_q_f(struct quaternion* qua);
extern void normalize_q_t(struct quaternion* qua);
extern struct quaternion conjugate_q(struct quaternion* con);
extern struct quaternion mul(struct quaternion_mul* mult, struct quaternion* qua);
extern struct quaternion fromAxisAngle(double angle, struct vector_three* axis);
extern struct quaternion FromEuler(struct quaternion_math* math, struct quaternion* qut);
extern struct vector_three vec3rotate(struct vector_three* v, struct quaternion* q);



#endif //ENGINEC_QUATERNION_H