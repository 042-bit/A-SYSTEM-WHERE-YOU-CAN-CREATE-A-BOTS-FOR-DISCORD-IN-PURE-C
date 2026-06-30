// ---------------------- //
// Made by abbys - 042    //
// discord @xabbys_       //
// LICENSE GPL 2.0        //
// ---------------------- //

#ifndef ENGINEC_VECTOR3_H
#define ENGINEC_VECTOR3_H

struct vector_three norm_f(struct vector_three* vec);

    struct vector_three {
        double x;
        double y;
        double z;
    };

    struct vector_three_b {
        struct vector_three vecb;
        double b;
    };

    struct vector_three_scalar {
        struct vector_three vecsc;
        double scalar_three;
    };

    struct vector_three_normalize {
        struct vector_three vecn;
        double normalize_three;
    };

extern struct vector_three addt_f(struct vector_three* vec , struct vector_three* vec_sc);
extern struct vector_three subt_f(struct vector_three* vec , struct vector_three* vec_sc);
extern struct vector_three mult_f(struct vector_three* vec, struct vector_three* vec_sc);
extern double lenghtt_f(struct vector_three* vec);
extern struct vector_three normalizet_f(struct vector_three* vec);
extern double dott_f(struct vector_three* vec, struct vector_three* vec_sc);
extern struct vector_three crosst_f(struct vector_three* vec, struct vector_three* vec_sc);

#endif //ENGINEC_VECTOR3_H