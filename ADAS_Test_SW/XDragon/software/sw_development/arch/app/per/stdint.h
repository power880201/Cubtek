#ifndef _STDINT
#define _STDINT

// Adapt these to your platform:

typedef signed char 			int8_t;
typedef unsigned char 			uint8_t;
typedef signed short    		int16_t;
typedef unsigned short 			uint16_t;
typedef signed long int 		int32_t;
typedef unsigned long int 		uint32_t;
typedef signed long long int 	int64_t;
typedef unsigned long long int 	uint64_t;

// These should match

#define 	INT8_MAX    0x7f
#define 	INT8_MIN    (-INT8_MAX - 1)
#define 	UINT8_MAX   (INT8_MAX * 2 + 1)
#define 	INT16_MAX   0x7fff
#define 	INT16_MIN   (-INT16_MAX - 1)
#define 	UINT16_MAX  (__CONCAT(INT16_MAX, U) * 2U + 1U)
#define 	INT32_MAX   0x7fffffffL
#define 	INT32_MIN   (-INT32_MAX - 1L)
#define 	UINT32_MAX  (__CONCAT(INT32_MAX, U) * 2UL + 1UL)
#define 	INT64_MAX   0x7fffffffffffffffLL
#define 	INT64_MIN   (-INT64_MAX - 1LL)
#define 	UINT64_MAX  (__CONCAT(INT64_MAX, U) * 2ULL + 1ULL)

// Those enums check that the typedefs above are correct.

enum { int8_t_check = 1 / !(sizeof(int8_t) != 1) };
enum { uint8_t_check = 1 / !(sizeof(uint8_t) != 1) };
enum { int16_t_check = 1 / !(sizeof(int16_t) != 2) };
enum { uint16_t_check = 1 / !(sizeof(uint16_t) != 2) };
enum { int32_t_check = 1 / !(sizeof(int32_t) != 4) };
enum { uint32_t_check = 1 / !(sizeof(uint32_t) != 4) };
enum { int64_t_check = 1 / !(sizeof(int64_t) != 8) };
enum { uint64_t_check = 1 / !(sizeof(uint64_t) != 8) };

enum { float_check = 1 / !(sizeof(float) != 4) };
enum { double_check = 1 / !(sizeof(double) != 8) };


#endif /* _STDINT */