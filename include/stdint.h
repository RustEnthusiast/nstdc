#ifndef NSTDC_STDINT_H
#define NSTDC_STDINT_H

/// Smallest signed integer type with width of at least 8 bits.
typedef signed char int_least8_t;
/// Smallest signed integer type with width of at least 16 bits.
typedef signed short int_least16_t;
/// Smallest signed integer type with width of at least 32 bits.
#ifdef _WIN16
typedef signed long int_least32_t;
#else
typedef signed int int_least32_t;
#endif
/// Smallest signed integer type with width of at least 64 bits.
typedef signed long long int_least64_t;

/// Smallest unsigned integer type with width of at least 8 bits.
typedef unsigned char uint_least8_t;
/// Smallest unsigned integer type with width of at least 16 bits.
typedef unsigned short uint_least16_t;
/// Smallest unsigned integer type with width of at least 32 bits.
#ifdef _WIN16
typedef unsigned long uint_least32_t;
#else
typedef unsigned int uint_least32_t;
#endif
/// Smallest unsigned integer type with width of at least 64 bits.
typedef unsigned long long uint_least64_t;

#endif
