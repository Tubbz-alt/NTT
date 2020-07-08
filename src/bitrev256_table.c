#include "bitrev256_table.h"

const uint16_t bitrev256[BITREV256_NPAIRS][2] = {
    {     1,   128 }, {     2,    64 }, {     3,   192 }, {     4,    32 },
    {     5,   160 }, {     6,    96 }, {     7,   224 }, {     8,    16 },
    {     9,   144 }, {    10,    80 }, {    11,   208 }, {    12,    48 },
    {    13,   176 }, {    14,   112 }, {    15,   240 }, {    17,   136 },
    {    18,    72 }, {    19,   200 }, {    20,    40 }, {    21,   168 },
    {    22,   104 }, {    23,   232 }, {    25,   152 }, {    26,    88 },
    {    27,   216 }, {    28,    56 }, {    29,   184 }, {    30,   120 },
    {    31,   248 }, {    33,   132 }, {    34,    68 }, {    35,   196 },
    {    37,   164 }, {    38,   100 }, {    39,   228 }, {    41,   148 },
    {    42,    84 }, {    43,   212 }, {    44,    52 }, {    45,   180 },
    {    46,   116 }, {    47,   244 }, {    49,   140 }, {    50,    76 },
    {    51,   204 }, {    53,   172 }, {    54,   108 }, {    55,   236 },
    {    57,   156 }, {    58,    92 }, {    59,   220 }, {    61,   188 },
    {    62,   124 }, {    63,   252 }, {    65,   130 }, {    67,   194 },
    {    69,   162 }, {    70,    98 }, {    71,   226 }, {    73,   146 },
    {    74,    82 }, {    75,   210 }, {    77,   178 }, {    78,   114 },
    {    79,   242 }, {    81,   138 }, {    83,   202 }, {    85,   170 },
    {    86,   106 }, {    87,   234 }, {    89,   154 }, {    91,   218 },
    {    93,   186 }, {    94,   122 }, {    95,   250 }, {    97,   134 },
    {    99,   198 }, {   101,   166 }, {   103,   230 }, {   105,   150 },
    {   107,   214 }, {   109,   182 }, {   110,   118 }, {   111,   246 },
    {   113,   142 }, {   115,   206 }, {   117,   174 }, {   119,   238 },
    {   121,   158 }, {   123,   222 }, {   125,   190 }, {   127,   254 },
    {   131,   193 }, {   133,   161 }, {   135,   225 }, {   137,   145 },
    {   139,   209 }, {   141,   177 }, {   143,   241 }, {   147,   201 },
    {   149,   169 }, {   151,   233 }, {   155,   217 }, {   157,   185 },
    {   159,   249 }, {   163,   197 }, {   167,   229 }, {   171,   213 },
    {   173,   181 }, {   175,   245 }, {   179,   205 }, {   183,   237 },
    {   187,   221 }, {   191,   253 }, {   199,   227 }, {   203,   211 },
    {   207,   243 }, {   215,   235 }, {   223,   251 }, {   239,   247 },
};
