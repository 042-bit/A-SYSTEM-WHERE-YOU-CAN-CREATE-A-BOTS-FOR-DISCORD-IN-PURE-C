// ---------------------- //
// Made by abbys - 042    //
// discord @xabbys_       //
// LICENSE GPL 2.0        //
// ---------------------- //

#ifndef ENGINEC_TRANSFORM_H
#define ENGINEC_TRANSFORM_H

#include "vector3.h"
#include "quaternion.h"

struct Transform {
    struct vector_three position;
    struct quaternion rotation;
    struct vector_three scale;
};

extern struct Transform default_transform(struct vector_three* vec3, struct quaternion* qut, struct vector_three* sc);
extern void getMarix_Transform(double result[4][4], struct Transform* tx);
extern void setPosition_f(struct vector_three* vec3, struct Transform* tx);
extern void setRotation_f(struct quaternion* qut, struct Transform* tx);
extern void setScale_f(struct vector_three* vecs, struct Transform* tx2);
extern void translate_f(struct Transform* tx, struct vector_three *fdel);
extern void rotate_q_f_f(struct quaternion* q, struct Transform* qrftx);
extern void get_forward(struct vector_three* vec, struct Transform* tx);
extern void get_backward(struct vector_three* vec, struct Transform* tx);
extern void get_right(struct vector_three* vec, struct Transform* tx);
extern void get_left(struct vector_three* vec, struct Transform* tx);
extern void get_up(struct vector_three* vec, struct Transform* tx);
extern void get_down(struct vector_three* vec, struct Transform* tx);
extern void lookAT(struct vector_three* target, struct Transform* tx, struct vector_three* vec);

#endif //ENGINEC_TRANSFORM_H