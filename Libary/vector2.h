// ---------------------- //
// Made by abbys - 042    //
// discord @xabbys_       //
// LICENSE GPL 2.0        //
// ---------------------- //

#ifndef ENGINEC_VECTOR2_H
#define ENGINEC_VECTOR2_H


struct vector_two {
    double x;
    double y;
};

struct vector_two_b {
    struct vector_two vecb;
    double b;
};

struct vector_two_scalar {
    struct vector_two sc;
    double scalar;
};

struct vector_two_normalize {
    struct vector_two nmr;
    double norm;
};


extern struct vector_two add_f(struct vector_two* vec, struct vector_two* vec_sc);
extern struct vector_two sub_f(struct vector_two* vec, struct vector_two* vec_sc);
extern struct vector_two scalar_f(struct vector_two_scalar *vs);
extern double lenght_f(struct vector_two* vec);
extern struct vector_two norm_f(struct vector_two* vec);

#endif //ENGINEC_VECTOR2_H