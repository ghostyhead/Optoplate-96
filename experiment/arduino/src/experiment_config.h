/* This is an auto generated file.
Generated using ../Matlab/FlashExperiment.m */

#ifndef _EXPERIMENT_CONFIG_H
#define _EXPERIMENT_CONFIG_H

#include "LED.h"
#include <Arduino.h>

const uint8_t amplitudes[] PROGMEM = {
 108, 101, 180, 198,  57, 198,  44, 171,   0, 157,  60, 125,  61,  73, 166, 202, 251, 154, 209, 250, 130, 151, 242, 113, 193,  62,  84, 181,  43,  80,  46,  56,  36, 176,  34, 210, 202, 164, 133, 242, 240, 110,  24,  21, 129,  42, 130,   4,  98, 244,   6,  76, 244, 215,   8,  91, 145, 166,  10, 201,  81,  47,   5, 254,  44, 160,   2, 187, 164, 196,  79, 138, 123, 232, 204, 141,  13,  69, 247, 154,  52, 101,  82,  11,  71, 145,  27, 167,  68, 131, 227, 115,  87, 101, 242, 131,
};

const uint16_t pulseNumbs[] PROGMEM = {
   125,   238,   121,   125,   240,    56,   148,   165,   142,   130,    47,   178,   168,    96,   131,   155,   133,    61,   121,    39,   251,   154,   196,   241,   129,   194,   122,   183,    38,    98,   169,    13,    41,   226,   229,    55,   189,   205,   108,    35,   165,     8,   201,     3,    40,    31,   132,   192,   241,   205,    45,   149,   149,    88,    48,    50,    41,    74,   216,   133,   204,   152,    71,    49,    79,   141,   246,   135,    20,    15,    58,   194,   112,    83,   224,    16,   172,   142,   136,    37,   183,    36,   109,   225,    23,   191,   223,    16,   101,    17,   234,    18,   114,    17,    94,    60,
};

const uint16_t pusleStartTimes[] PROGMEM = {
   240,   211,   171,   214,   224,   126,   222,    33,    16,   224,   175,    44,     6,   100,   188,   230,    41,   181,   248,   248,   113,    31,   203,   195,   143,   159,   209,   115,    90,   170,    29,   240,   139,   208,   135,   117,   227,   247,   174,   253,    14,   212,   130,   238,   138,   250,   193,   155,    42,   212,    84,     8,   113,    66,   193,   251,   201,    59,   128,    93,   108,   208,     8,   220,   112,   196,    28,   177,   153,   233,   232,   102,    83,   244,    30,   135,    83,   105,     8,   179,   242,   173,    31,   186,   145,    46,    72,   249,   234,    14,   112,    95,   161,   185,   218,   244,
};

const uint16_t pulseHighTimes[] PROGMEM = {
   224,   212,   163,   232,    37,    89,   117,   186,     5,   174,   116,    13,   156,   108,   152,   202,    78,   136,   187,   233,   202,   219,   152,    66,   247,   186,    41,    34,   199,   191,   142,   231,    48,   223,    28,    62,   162,   239,   106,   140,   124,   248,   254,    20,   243,   229,    88,   181,   198,    75,    94,    13,   140,   177,    99,     8,   197,   215,    67,   168,   230,    79,    20,   173,   224,    69,   225,   146,   209,   124,   148,    30,    58,   140,    60,   210,   253,   243,   228,     2,   109,   125,   111,    33,    25,   141,   254,   233,     4,   232,    98,    50,    76,    16,   106,    19,
};

const uint16_t pulseLowTimes[] PROGMEM = {
   188,   181,    52,   222,   172,    42,   147,   244,   102,   226,   154,     8,   142,    33,   158,   209,    62,   176,   189,   160,    11,    87,   153,   106,   213,   134,   178,   151,    43,   164,   192,   209,    51,    52,   164,   152,    27,    11,    80,     0,   220,   210,   142,    48,    10,   203,   236,    50,    65,    25,   206,   241,    83,    96,   205,   192,   163,     6,    56,   203,    13,   120,    45,   202,    83,    28,   171,    56,    64,    10,   226,    54,   168,   181,    61,   102,   102,   220,   136,   106,   107,   135,    12,    44,    71,   153,   152,   223,   195,   182,   175,   202,    43,   238,   207,   157,
};

const uint16_t subpulseHighTimes[] PROGMEM = {
   240,   222,    81,    90,    88,    18,     4,   185,    89,    13,   183,   209,   169,   149,    67,   244,   224,   112,   226,   127,   224,    20,   125,    63,    55,   143,    75,    62,   192,   155,    53,   155,    23,     3,    19,   130,   233,     0,   109,   191,   111,    78,   175,    89,    52,    49,   135,   205,    97,    32,    49,    99,   102,   104,    39,   134,    77,     6,   170,   130,     8,    54,   145,   216,    95,    25,   249,   204,    89,   120,   155,    77,    58,   211,   168,    95,   113,   122,   128,    70,   186,    62,   107,   220,   232,    99,   175,   181,    97,    74,   228,    74,   226,   235,    28,    14,
};

const uint16_t subpulseLowTimes[] PROGMEM = {
   187,   104,   186,   212,   133,   198,    63,   189,   159,    86,   251,    61,   230,    32,   123,   178,    19,   162,    74,    25,    84,    78,    23,   252,   118,   236,    86,    85,    14,   192,     4,   210,    71,   165,   175,   216,   120,     1,    60,   148,    66,   191,    88,    58,   111,   235,   237,   203,    39,    47,   115,    73,   112,   150,    36,    27,    89,   228,    36,   230,   246,    82,    47,    67,    72,   197,   105,   169,   224,   255,   226,   199,   224,    12,    83,    66,   173,   100,    39,   244,     1,    18,     5,   214,   125,    37,    67,   173,   243,   154,   212,   208,   178,    33,    87,    82,
};

#endif
