#ifndef NSTDC_STDDEF_H
#define NSTDC_STDDEF_H

/// Null pointer constant.
#define NULL 0

/// Signed integer type returned when subtracting two pointers.
#ifdef _WIN64
typedef signed long long ptrdiff_t;
#else
typedef signed long ptrdiff_t;
#endif

/// Unsigned integer type returned by the `sizeof` operator.
#ifdef _WIN64
typedef unsigned long long size_t;
#else
typedef unsigned long size_t;
#endif

#endif
