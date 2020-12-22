#include "tommath.h"

struct m_point{
    mp_int X, Y, Z;
};

struct m_curve{
    mp_int X, Y, Z, p, q, a, b, v, u, e, d;
};
/* Точка */
void m_point_init(struct m_point *point);
void m_point_clear(struct m_point *point);
void m_point_custom(struct m_point *point, char *X, char *Y, char *Z);

/* Кривая */
void m_curve_init(struct m_curve *curve);
void m_curve_clear(struct m_curve *curve);
void m_curve_create(struct m_curve *curve);
void default_point(struct m_point *point, const struct m_curve *curve);
void point_negative(struct m_point *point, struct m_point *point2);

/* Изобр. */
void print_coordinates(const struct m_point *point);

/* Алгоритмы */
void xADD(struct m_point *result, const struct m_point *point1, const struct m_point *point2, const struct m_curve *curve);
void xDBL(struct m_point *point, const struct m_curve *curve);
void LADDER(struct m_point *point, const struct m_curve *curve, const mp_int *k);
void point_on_curve(const struct m_curve *curve, const struct m_point *point);
void binaryMethod(struct m_point *result, const struct m_point *point, const struct m_curve *curve, const mp_int *k);
void distributivity(struct m_point *point, const struct m_curve *curve);
_Bool point_cmp(struct m_point *temp1, struct m_point *temp3);

