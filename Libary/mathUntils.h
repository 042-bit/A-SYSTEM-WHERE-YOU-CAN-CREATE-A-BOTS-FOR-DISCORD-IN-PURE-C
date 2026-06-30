// ---------------------- //
// Made by abbys - 042    //
// discord @xabbys_       //
// LICENSE GPL 2.0        //
// ---------------------- //


#ifndef MATHUUNTILS_H
#define MATHUUNTILS_H

struct clamp {
    double value;
    double min;
    double max;
};

struct lerp {
    double a;
    double b;
    double t;
};

struct degrad {
    double deg;
    double rad;
};

extern double clamp_f(struct clamp* c);
extern double lerp_f(struct lerp* rp);
extern double degToRad_f(struct degrad* d);
extern double radToDeg_f(struct degrad* d);
extern double random_range_f(struct clamp* p);
extern double smoothstep_f(struct lerp* lp, struct clamp * c);


#endif // MATHUUNTILS_H