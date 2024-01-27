/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 5 "sql.y"

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

#include <parse_tree.h>

#include "sql.h"

void yyerror(char *s, ...);
void emit(char *s, ...);

void 
YYGotNAME(const char *str);

extern ParseTree   *parse_tree;
//current_val;
//current_type;



typedef enum YYCurStateType {
   YYState_SELECT,
   YYState_FROM,
   YYState_WHERE
} YYCurStateType;

YYCurStateType YYCurState;


#line 103 "sql.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "sql.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NAME = 3,                       /* NAME  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_INTNUM = 5,                     /* INTNUM  */
  YYSYMBOL_BOOL = 6,                       /* BOOL  */
  YYSYMBOL_APPROXNUM = 7,                  /* APPROXNUM  */
  YYSYMBOL_USERVAR = 8,                    /* USERVAR  */
  YYSYMBOL_ASSIGN = 9,                     /* ASSIGN  */
  YYSYMBOL_OR = 10,                        /* OR  */
  YYSYMBOL_XOR = 11,                       /* XOR  */
  YYSYMBOL_ANDOP = 12,                     /* ANDOP  */
  YYSYMBOL_IN = 13,                        /* IN  */
  YYSYMBOL_IS = 14,                        /* IS  */
  YYSYMBOL_LIKE = 15,                      /* LIKE  */
  YYSYMBOL_REGEXP = 16,                    /* REGEXP  */
  YYSYMBOL_NOT = 17,                       /* NOT  */
  YYSYMBOL_18_ = 18,                       /* '!'  */
  YYSYMBOL_BETWEEN = 19,                   /* BETWEEN  */
  YYSYMBOL_COMPARISON = 20,                /* COMPARISON  */
  YYSYMBOL_21_ = 21,                       /* '|'  */
  YYSYMBOL_22_ = 22,                       /* '&'  */
  YYSYMBOL_SHIFT = 23,                     /* SHIFT  */
  YYSYMBOL_24_ = 24,                       /* '+'  */
  YYSYMBOL_25_ = 25,                       /* '-'  */
  YYSYMBOL_26_ = 26,                       /* '*'  */
  YYSYMBOL_27_ = 27,                       /* '/'  */
  YYSYMBOL_28_ = 28,                       /* '%'  */
  YYSYMBOL_MOD = 29,                       /* MOD  */
  YYSYMBOL_30_ = 30,                       /* '^'  */
  YYSYMBOL_EQUAL = 31,                     /* EQUAL  */
  YYSYMBOL_MORE_OR_EQUAL = 32,             /* MORE_OR_EQUAL  */
  YYSYMBOL_MORE = 33,                      /* MORE  */
  YYSYMBOL_LESS_OR_EQUAL = 34,             /* LESS_OR_EQUAL  */
  YYSYMBOL_LESS = 35,                      /* LESS  */
  YYSYMBOL_NOT_EQUAL = 36,                 /* NOT_EQUAL  */
  YYSYMBOL_UMINUS = 37,                    /* UMINUS  */
  YYSYMBOL_ADD = 38,                       /* ADD  */
  YYSYMBOL_ALL = 39,                       /* ALL  */
  YYSYMBOL_ALTER = 40,                     /* ALTER  */
  YYSYMBOL_ANALYZE = 41,                   /* ANALYZE  */
  YYSYMBOL_AND = 42,                       /* AND  */
  YYSYMBOL_ANY = 43,                       /* ANY  */
  YYSYMBOL_AS = 44,                        /* AS  */
  YYSYMBOL_ASC = 45,                       /* ASC  */
  YYSYMBOL_AUTO_INCREMENT = 46,            /* AUTO_INCREMENT  */
  YYSYMBOL_BEFORE = 47,                    /* BEFORE  */
  YYSYMBOL_BIGINT = 48,                    /* BIGINT  */
  YYSYMBOL_BINARY = 49,                    /* BINARY  */
  YYSYMBOL_BIT = 50,                       /* BIT  */
  YYSYMBOL_BLOB = 51,                      /* BLOB  */
  YYSYMBOL_BOTH = 52,                      /* BOTH  */
  YYSYMBOL_BY = 53,                        /* BY  */
  YYSYMBOL_CALL = 54,                      /* CALL  */
  YYSYMBOL_CASCADE = 55,                   /* CASCADE  */
  YYSYMBOL_CASE = 56,                      /* CASE  */
  YYSYMBOL_CHANGE = 57,                    /* CHANGE  */
  YYSYMBOL_CHAR = 58,                      /* CHAR  */
  YYSYMBOL_CHECK = 59,                     /* CHECK  */
  YYSYMBOL_COLLATE = 60,                   /* COLLATE  */
  YYSYMBOL_COLUMN = 61,                    /* COLUMN  */
  YYSYMBOL_COMMENT = 62,                   /* COMMENT  */
  YYSYMBOL_CONDITION = 63,                 /* CONDITION  */
  YYSYMBOL_CONSTRAINT = 64,                /* CONSTRAINT  */
  YYSYMBOL_CONTINUE = 65,                  /* CONTINUE  */
  YYSYMBOL_CONVERT = 66,                   /* CONVERT  */
  YYSYMBOL_CREATE = 67,                    /* CREATE  */
  YYSYMBOL_CROSS = 68,                     /* CROSS  */
  YYSYMBOL_CURRENT_DATE = 69,              /* CURRENT_DATE  */
  YYSYMBOL_CURRENT_TIME = 70,              /* CURRENT_TIME  */
  YYSYMBOL_CURRENT_TIMESTAMP = 71,         /* CURRENT_TIMESTAMP  */
  YYSYMBOL_CURRENT_USER = 72,              /* CURRENT_USER  */
  YYSYMBOL_CURSOR = 73,                    /* CURSOR  */
  YYSYMBOL_DATABASE = 74,                  /* DATABASE  */
  YYSYMBOL_DATABASES = 75,                 /* DATABASES  */
  YYSYMBOL_DATE = 76,                      /* DATE  */
  YYSYMBOL_DATETIME = 77,                  /* DATETIME  */
  YYSYMBOL_DAY_HOUR = 78,                  /* DAY_HOUR  */
  YYSYMBOL_DAY_MICROSECOND = 79,           /* DAY_MICROSECOND  */
  YYSYMBOL_DAY_MINUTE = 80,                /* DAY_MINUTE  */
  YYSYMBOL_DAY_SECOND = 81,                /* DAY_SECOND  */
  YYSYMBOL_DECIMAL = 82,                   /* DECIMAL  */
  YYSYMBOL_DECLARE = 83,                   /* DECLARE  */
  YYSYMBOL_DEFAULT = 84,                   /* DEFAULT  */
  YYSYMBOL_DELAYED = 85,                   /* DELAYED  */
  YYSYMBOL_DELETE = 86,                    /* DELETE  */
  YYSYMBOL_DESC = 87,                      /* DESC  */
  YYSYMBOL_DESCRIBE = 88,                  /* DESCRIBE  */
  YYSYMBOL_DETERMINISTIC = 89,             /* DETERMINISTIC  */
  YYSYMBOL_DISTINCT = 90,                  /* DISTINCT  */
  YYSYMBOL_DISTINCTROW = 91,               /* DISTINCTROW  */
  YYSYMBOL_DIV = 92,                       /* DIV  */
  YYSYMBOL_DOUBLE = 93,                    /* DOUBLE  */
  YYSYMBOL_DROP = 94,                      /* DROP  */
  YYSYMBOL_DUAL = 95,                      /* DUAL  */
  YYSYMBOL_EACH = 96,                      /* EACH  */
  YYSYMBOL_ELSE = 97,                      /* ELSE  */
  YYSYMBOL_ELSEIF = 98,                    /* ELSEIF  */
  YYSYMBOL_END = 99,                       /* END  */
  YYSYMBOL_ENUM = 100,                     /* ENUM  */
  YYSYMBOL_EXIT = 101,                     /* EXIT  */
  YYSYMBOL_EXPLAIN = 102,                  /* EXPLAIN  */
  YYSYMBOL_FETCH = 103,                    /* FETCH  */
  YYSYMBOL_FLOAT = 104,                    /* FLOAT  */
  YYSYMBOL_FOR = 105,                      /* FOR  */
  YYSYMBOL_FORCE = 106,                    /* FORCE  */
  YYSYMBOL_FOREIGN = 107,                  /* FOREIGN  */
  YYSYMBOL_FROM = 108,                     /* FROM  */
  YYSYMBOL_FULLTEXT = 109,                 /* FULLTEXT  */
  YYSYMBOL_GRANT = 110,                    /* GRANT  */
  YYSYMBOL_GROUP = 111,                    /* GROUP  */
  YYSYMBOL_HAVING = 112,                   /* HAVING  */
  YYSYMBOL_HIGH_PRIORITY = 113,            /* HIGH_PRIORITY  */
  YYSYMBOL_HOUR_MICROSECOND = 114,         /* HOUR_MICROSECOND  */
  YYSYMBOL_HOUR_MINUTE = 115,              /* HOUR_MINUTE  */
  YYSYMBOL_HOUR_SECOND = 116,              /* HOUR_SECOND  */
  YYSYMBOL_IF = 117,                       /* IF  */
  YYSYMBOL_IGNORE = 118,                   /* IGNORE  */
  YYSYMBOL_INFILE = 119,                   /* INFILE  */
  YYSYMBOL_INDEX = 120,                    /* INDEX  */
  YYSYMBOL_INNER = 121,                    /* INNER  */
  YYSYMBOL_INOUT = 122,                    /* INOUT  */
  YYSYMBOL_INSENSITIVE = 123,              /* INSENSITIVE  */
  YYSYMBOL_INSERT = 124,                   /* INSERT  */
  YYSYMBOL_INT = 125,                      /* INT  */
  YYSYMBOL_INTEGER = 126,                  /* INTEGER  */
  YYSYMBOL_INTERVAL = 127,                 /* INTERVAL  */
  YYSYMBOL_INTO = 128,                     /* INTO  */
  YYSYMBOL_ITERATE = 129,                  /* ITERATE  */
  YYSYMBOL_JOIN = 130,                     /* JOIN  */
  YYSYMBOL_KEY = 131,                      /* KEY  */
  YYSYMBOL_KEYS = 132,                     /* KEYS  */
  YYSYMBOL_KILL = 133,                     /* KILL  */
  YYSYMBOL_LEADING = 134,                  /* LEADING  */
  YYSYMBOL_LEAVE = 135,                    /* LEAVE  */
  YYSYMBOL_LEFT = 136,                     /* LEFT  */
  YYSYMBOL_LIMIT = 137,                    /* LIMIT  */
  YYSYMBOL_LINES = 138,                    /* LINES  */
  YYSYMBOL_LOAD = 139,                     /* LOAD  */
  YYSYMBOL_LOCALTIME = 140,                /* LOCALTIME  */
  YYSYMBOL_LOCALTIMESTAMP = 141,           /* LOCALTIMESTAMP  */
  YYSYMBOL_LOCK = 142,                     /* LOCK  */
  YYSYMBOL_LONG = 143,                     /* LONG  */
  YYSYMBOL_LONGBLOB = 144,                 /* LONGBLOB  */
  YYSYMBOL_LONGTEXT = 145,                 /* LONGTEXT  */
  YYSYMBOL_LOOP = 146,                     /* LOOP  */
  YYSYMBOL_LOW_PRIORITY = 147,             /* LOW_PRIORITY  */
  YYSYMBOL_MATCH = 148,                    /* MATCH  */
  YYSYMBOL_MEDIUMBLOB = 149,               /* MEDIUMBLOB  */
  YYSYMBOL_MEDIUMINT = 150,                /* MEDIUMINT  */
  YYSYMBOL_MEDIUMTEXT = 151,               /* MEDIUMTEXT  */
  YYSYMBOL_MINUTE_MICROSECOND = 152,       /* MINUTE_MICROSECOND  */
  YYSYMBOL_MINUTE_SECOND = 153,            /* MINUTE_SECOND  */
  YYSYMBOL_MODIFIES = 154,                 /* MODIFIES  */
  YYSYMBOL_NATURAL = 155,                  /* NATURAL  */
  YYSYMBOL_NO_WRITE_TO_BINLOG = 156,       /* NO_WRITE_TO_BINLOG  */
  YYSYMBOL_NULLX = 157,                    /* NULLX  */
  YYSYMBOL_NUMBER = 158,                   /* NUMBER  */
  YYSYMBOL_ON = 159,                       /* ON  */
  YYSYMBOL_ONDUPLICATE = 160,              /* ONDUPLICATE  */
  YYSYMBOL_OPTIMIZE = 161,                 /* OPTIMIZE  */
  YYSYMBOL_OPTION = 162,                   /* OPTION  */
  YYSYMBOL_OPTIONALLY = 163,               /* OPTIONALLY  */
  YYSYMBOL_ORDER = 164,                    /* ORDER  */
  YYSYMBOL_OUT = 165,                      /* OUT  */
  YYSYMBOL_OUTER = 166,                    /* OUTER  */
  YYSYMBOL_OUTFILE = 167,                  /* OUTFILE  */
  YYSYMBOL_PRECISION = 168,                /* PRECISION  */
  YYSYMBOL_PRIMARY = 169,                  /* PRIMARY  */
  YYSYMBOL_PROCEDURE = 170,                /* PROCEDURE  */
  YYSYMBOL_PURGE = 171,                    /* PURGE  */
  YYSYMBOL_QUICK = 172,                    /* QUICK  */
  YYSYMBOL_READ = 173,                     /* READ  */
  YYSYMBOL_READS = 174,                    /* READS  */
  YYSYMBOL_REAL = 175,                     /* REAL  */
  YYSYMBOL_REFERENCES = 176,               /* REFERENCES  */
  YYSYMBOL_RELEASE = 177,                  /* RELEASE  */
  YYSYMBOL_RENAME = 178,                   /* RENAME  */
  YYSYMBOL_REPEAT = 179,                   /* REPEAT  */
  YYSYMBOL_REPLACE = 180,                  /* REPLACE  */
  YYSYMBOL_REQUIRE = 181,                  /* REQUIRE  */
  YYSYMBOL_RESTRICT = 182,                 /* RESTRICT  */
  YYSYMBOL_RETURN = 183,                   /* RETURN  */
  YYSYMBOL_REVOKE = 184,                   /* REVOKE  */
  YYSYMBOL_RIGHT = 185,                    /* RIGHT  */
  YYSYMBOL_ROLLUP = 186,                   /* ROLLUP  */
  YYSYMBOL_SCHEMA = 187,                   /* SCHEMA  */
  YYSYMBOL_SCHEMAS = 188,                  /* SCHEMAS  */
  YYSYMBOL_SECOND_MICROSECOND = 189,       /* SECOND_MICROSECOND  */
  YYSYMBOL_SELECT = 190,                   /* SELECT  */
  YYSYMBOL_SENSITIVE = 191,                /* SENSITIVE  */
  YYSYMBOL_SEPARATOR = 192,                /* SEPARATOR  */
  YYSYMBOL_SET = 193,                      /* SET  */
  YYSYMBOL_SHOW = 194,                     /* SHOW  */
  YYSYMBOL_SMALLINT = 195,                 /* SMALLINT  */
  YYSYMBOL_SOME = 196,                     /* SOME  */
  YYSYMBOL_SONAME = 197,                   /* SONAME  */
  YYSYMBOL_SPATIAL = 198,                  /* SPATIAL  */
  YYSYMBOL_SPECIFIC = 199,                 /* SPECIFIC  */
  YYSYMBOL_SQL = 200,                      /* SQL  */
  YYSYMBOL_SQLEXCEPTION = 201,             /* SQLEXCEPTION  */
  YYSYMBOL_SQLSTATE = 202,                 /* SQLSTATE  */
  YYSYMBOL_SQLWARNING = 203,               /* SQLWARNING  */
  YYSYMBOL_SQL_BIG_RESULT = 204,           /* SQL_BIG_RESULT  */
  YYSYMBOL_SQL_CALC_FOUND_ROWS = 205,      /* SQL_CALC_FOUND_ROWS  */
  YYSYMBOL_SQL_SMALL_RESULT = 206,         /* SQL_SMALL_RESULT  */
  YYSYMBOL_SSL = 207,                      /* SSL  */
  YYSYMBOL_STARTING = 208,                 /* STARTING  */
  YYSYMBOL_STRAIGHT_JOIN = 209,            /* STRAIGHT_JOIN  */
  YYSYMBOL_TABLE = 210,                    /* TABLE  */
  YYSYMBOL_TEMPORARY = 211,                /* TEMPORARY  */
  YYSYMBOL_TERMINATED = 212,               /* TERMINATED  */
  YYSYMBOL_TEXT = 213,                     /* TEXT  */
  YYSYMBOL_THEN = 214,                     /* THEN  */
  YYSYMBOL_TIME = 215,                     /* TIME  */
  YYSYMBOL_TIMESTAMP = 216,                /* TIMESTAMP  */
  YYSYMBOL_TINYBLOB = 217,                 /* TINYBLOB  */
  YYSYMBOL_TINYINT = 218,                  /* TINYINT  */
  YYSYMBOL_TINYTEXT = 219,                 /* TINYTEXT  */
  YYSYMBOL_TO = 220,                       /* TO  */
  YYSYMBOL_TRAILING = 221,                 /* TRAILING  */
  YYSYMBOL_TRIGGER = 222,                  /* TRIGGER  */
  YYSYMBOL_UNDO = 223,                     /* UNDO  */
  YYSYMBOL_UNION = 224,                    /* UNION  */
  YYSYMBOL_UNIQUE = 225,                   /* UNIQUE  */
  YYSYMBOL_UNLOCK = 226,                   /* UNLOCK  */
  YYSYMBOL_UNSIGNED = 227,                 /* UNSIGNED  */
  YYSYMBOL_UPDATE = 228,                   /* UPDATE  */
  YYSYMBOL_USAGE = 229,                    /* USAGE  */
  YYSYMBOL_USE = 230,                      /* USE  */
  YYSYMBOL_USING = 231,                    /* USING  */
  YYSYMBOL_UTC_DATE = 232,                 /* UTC_DATE  */
  YYSYMBOL_UTC_TIME = 233,                 /* UTC_TIME  */
  YYSYMBOL_UTC_TIMESTAMP = 234,            /* UTC_TIMESTAMP  */
  YYSYMBOL_VALUES = 235,                   /* VALUES  */
  YYSYMBOL_VARBINARY = 236,                /* VARBINARY  */
  YYSYMBOL_VARCHAR = 237,                  /* VARCHAR  */
  YYSYMBOL_VARYING = 238,                  /* VARYING  */
  YYSYMBOL_WHEN = 239,                     /* WHEN  */
  YYSYMBOL_WHERE = 240,                    /* WHERE  */
  YYSYMBOL_WHILE = 241,                    /* WHILE  */
  YYSYMBOL_WITH = 242,                     /* WITH  */
  YYSYMBOL_WRITE = 243,                    /* WRITE  */
  YYSYMBOL_YEAR = 244,                     /* YEAR  */
  YYSYMBOL_YEAR_MONTH = 245,               /* YEAR_MONTH  */
  YYSYMBOL_ZEROFILL = 246,                 /* ZEROFILL  */
  YYSYMBOL_ESCAPED = 247,                  /* ESCAPED  */
  YYSYMBOL_EXISTS = 248,                   /* EXISTS  */
  YYSYMBOL_FSUBSTRING = 249,               /* FSUBSTRING  */
  YYSYMBOL_FTRIM = 250,                    /* FTRIM  */
  YYSYMBOL_FDATE_ADD = 251,                /* FDATE_ADD  */
  YYSYMBOL_FDATE_SUB = 252,                /* FDATE_SUB  */
  YYSYMBOL_FCOUNT = 253,                   /* FCOUNT  */
  YYSYMBOL_254_ = 254,                     /* ';'  */
  YYSYMBOL_255_ = 255,                     /* '.'  */
  YYSYMBOL_256_ = 256,                     /* '('  */
  YYSYMBOL_257_ = 257,                     /* ')'  */
  YYSYMBOL_258_ = 258,                     /* ','  */
  YYSYMBOL_YYACCEPT = 259,                 /* $accept  */
  YYSYMBOL_stmt_list = 260,                /* stmt_list  */
  YYSYMBOL_expr = 261,                     /* expr  */
  YYSYMBOL_val_list = 262,                 /* val_list  */
  YYSYMBOL_opt_val_list = 263,             /* opt_val_list  */
  YYSYMBOL_trim_ltb = 264,                 /* trim_ltb  */
  YYSYMBOL_interval_exp = 265,             /* interval_exp  */
  YYSYMBOL_case_list = 266,                /* case_list  */
  YYSYMBOL_stmt = 267,                     /* stmt  */
  YYSYMBOL_select_stmt = 268,              /* select_stmt  */
  YYSYMBOL_state_where = 269,              /* state_where  */
  YYSYMBOL_opt_where = 270,                /* opt_where  */
  YYSYMBOL_opt_groupby = 271,              /* opt_groupby  */
  YYSYMBOL_state_select = 272,             /* state_select  */
  YYSYMBOL_select_expr_list = 273,         /* select_expr_list  */
  YYSYMBOL_select_expr = 274,              /* select_expr  */
  YYSYMBOL_state_from = 275,               /* state_from  */
  YYSYMBOL_table_references = 276,         /* table_references  */
  YYSYMBOL_groupby_list = 277,             /* groupby_list  */
  YYSYMBOL_opt_asc_desc = 278,             /* opt_asc_desc  */
  YYSYMBOL_opt_with_rollup = 279,          /* opt_with_rollup  */
  YYSYMBOL_opt_having = 280,               /* opt_having  */
  YYSYMBOL_opt_orderby = 281,              /* opt_orderby  */
  YYSYMBOL_opt_limit = 282,                /* opt_limit  */
  YYSYMBOL_opt_into_list = 283,            /* opt_into_list  */
  YYSYMBOL_column_list = 284,              /* column_list  */
  YYSYMBOL_opt_as = 285,                   /* opt_as  */
  YYSYMBOL_delete_stmt = 286,              /* delete_stmt  */
  YYSYMBOL_delete_opts = 287,              /* delete_opts  */
  YYSYMBOL_delete_list = 288,              /* delete_list  */
  YYSYMBOL_opt_dot_star = 289,             /* opt_dot_star  */
  YYSYMBOL_insert_stmt = 290,              /* insert_stmt  */
  YYSYMBOL_opt_ondupupdate = 291,          /* opt_ondupupdate  */
  YYSYMBOL_insert_opts = 292,              /* insert_opts  */
  YYSYMBOL_opt_into = 293,                 /* opt_into  */
  YYSYMBOL_opt_col_names = 294,            /* opt_col_names  */
  YYSYMBOL_insert_vals_list = 295,         /* insert_vals_list  */
  YYSYMBOL_insert_vals = 296,              /* insert_vals  */
  YYSYMBOL_insert_asgn_list = 297,         /* insert_asgn_list  */
  YYSYMBOL_replace_stmt = 298,             /* replace_stmt  */
  YYSYMBOL_update_stmt = 299,              /* update_stmt  */
  YYSYMBOL_update_opts = 300,              /* update_opts  */
  YYSYMBOL_update_asgn_list = 301,         /* update_asgn_list  */
  YYSYMBOL_create_database_stmt = 302,     /* create_database_stmt  */
  YYSYMBOL_opt_if_not_exists = 303,        /* opt_if_not_exists  */
  YYSYMBOL_create_table_stmt = 304,        /* create_table_stmt  */
  YYSYMBOL_opt_temporary = 305,            /* opt_temporary  */
  YYSYMBOL_create_col_list = 306,          /* create_col_list  */
  YYSYMBOL_create_definition = 307,        /* create_definition  */
  YYSYMBOL_308_1 = 308,                    /* $@1  */
  YYSYMBOL_column_atts = 309,              /* column_atts  */
  YYSYMBOL_opt_length = 310,               /* opt_length  */
  YYSYMBOL_opt_binary = 311,               /* opt_binary  */
  YYSYMBOL_opt_uz = 312,                   /* opt_uz  */
  YYSYMBOL_opt_csc = 313,                  /* opt_csc  */
  YYSYMBOL_data_type = 314,                /* data_type  */
  YYSYMBOL_enum_list = 315,                /* enum_list  */
  YYSYMBOL_create_select_statement = 316,  /* create_select_statement  */
  YYSYMBOL_opt_ignore_replace = 317,       /* opt_ignore_replace  */
  YYSYMBOL_set_stmt = 318,                 /* set_stmt  */
  YYSYMBOL_set_list = 319,                 /* set_list  */
  YYSYMBOL_set_expr = 320                  /* set_expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1602

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  259
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  264
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  547

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   499


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    18,     2,     2,     2,    28,    22,     2,
     256,   257,    26,    24,   258,    25,   255,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   254,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    30,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    21,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    19,    20,    23,    29,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   316,   316,   317,   324,   325,   326,   327,   328,   329,
     330,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   358,   359,   360,   361,   364,   365,
     366,   367,   369,   372,   375,   376,   379,   380,   383,   384,
     385,   386,   387,   391,   395,   396,   398,   399,   400,   402,
     403,   406,   407,   408,   411,   412,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   425,   426,   427,   428,   431,
     432,   435,   436,   439,   440,   443,   444,   445,   448,   458,
     461,   462,   474,   475,   478,   479,   481,   482,   487,   493,
     494,   495,   499,   502,   507,   508,   512,   514,   518,   519,
     520,   523,   524,   527,   528,   530,   531,   534,   534,   535,
     538,   539,   542,   543,   566,   567,   635,   639,   644,   645,
     646,   647,   651,   656,   657,   661,   661,   664,   672,   675,
     681,   682,   685,   686,   687,   688,   689,   692,   692,   695,
     696,   699,   700,   703,   704,   705,   706,   708,   715,   718,
     721,   724,   729,   735,   738,   744,   750,   756,   759,   766,
     767,   768,   772,   775,   778,   781,   789,   793,   795,   799,
     800,   806,   809,   813,   818,   823,   827,   833,   838,   839,
     842,   843,   846,   847,   848,   849,   850,   853,   853,   856,
     857,   858,   859,   861,   863,   865,   867,   869,   871,   872,
     873,   874,   878,   879,   880,   883,   884,   887,   888,   889,
     892,   893,   894,   898,   899,   900,   901,   902,   903,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,   921,   922,   923,   924,
     925,   926,   927,   930,   931,   934,   937,   938,   939,   944,
     947,   949,   949,   952,   954
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NAME", "STRING",
  "INTNUM", "BOOL", "APPROXNUM", "USERVAR", "ASSIGN", "OR", "XOR", "ANDOP",
  "IN", "IS", "LIKE", "REGEXP", "NOT", "'!'", "BETWEEN", "COMPARISON",
  "'|'", "'&'", "SHIFT", "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'",
  "EQUAL", "MORE_OR_EQUAL", "MORE", "LESS_OR_EQUAL", "LESS", "NOT_EQUAL",
  "UMINUS", "ADD", "ALL", "ALTER", "ANALYZE", "AND", "ANY", "AS", "ASC",
  "AUTO_INCREMENT", "BEFORE", "BIGINT", "BINARY", "BIT", "BLOB", "BOTH",
  "BY", "CALL", "CASCADE", "CASE", "CHANGE", "CHAR", "CHECK", "COLLATE",
  "COLUMN", "COMMENT", "CONDITION", "CONSTRAINT", "CONTINUE", "CONVERT",
  "CREATE", "CROSS", "CURRENT_DATE", "CURRENT_TIME", "CURRENT_TIMESTAMP",
  "CURRENT_USER", "CURSOR", "DATABASE", "DATABASES", "DATE", "DATETIME",
  "DAY_HOUR", "DAY_MICROSECOND", "DAY_MINUTE", "DAY_SECOND", "DECIMAL",
  "DECLARE", "DEFAULT", "DELAYED", "DELETE", "DESC", "DESCRIBE",
  "DETERMINISTIC", "DISTINCT", "DISTINCTROW", "DIV", "DOUBLE", "DROP",
  "DUAL", "EACH", "ELSE", "ELSEIF", "END", "ENUM", "EXIT", "EXPLAIN",
  "FETCH", "FLOAT", "FOR", "FORCE", "FOREIGN", "FROM", "FULLTEXT", "GRANT",
  "GROUP", "HAVING", "HIGH_PRIORITY", "HOUR_MICROSECOND", "HOUR_MINUTE",
  "HOUR_SECOND", "IF", "IGNORE", "INFILE", "INDEX", "INNER", "INOUT",
  "INSENSITIVE", "INSERT", "INT", "INTEGER", "INTERVAL", "INTO", "ITERATE",
  "JOIN", "KEY", "KEYS", "KILL", "LEADING", "LEAVE", "LEFT", "LIMIT",
  "LINES", "LOAD", "LOCALTIME", "LOCALTIMESTAMP", "LOCK", "LONG",
  "LONGBLOB", "LONGTEXT", "LOOP", "LOW_PRIORITY", "MATCH", "MEDIUMBLOB",
  "MEDIUMINT", "MEDIUMTEXT", "MINUTE_MICROSECOND", "MINUTE_SECOND",
  "MODIFIES", "NATURAL", "NO_WRITE_TO_BINLOG", "NULLX", "NUMBER", "ON",
  "ONDUPLICATE", "OPTIMIZE", "OPTION", "OPTIONALLY", "ORDER", "OUT",
  "OUTER", "OUTFILE", "PRECISION", "PRIMARY", "PROCEDURE", "PURGE",
  "QUICK", "READ", "READS", "REAL", "REFERENCES", "RELEASE", "RENAME",
  "REPEAT", "REPLACE", "REQUIRE", "RESTRICT", "RETURN", "REVOKE", "RIGHT",
  "ROLLUP", "SCHEMA", "SCHEMAS", "SECOND_MICROSECOND", "SELECT",
  "SENSITIVE", "SEPARATOR", "SET", "SHOW", "SMALLINT", "SOME", "SONAME",
  "SPATIAL", "SPECIFIC", "SQL", "SQLEXCEPTION", "SQLSTATE", "SQLWARNING",
  "SQL_BIG_RESULT", "SQL_CALC_FOUND_ROWS", "SQL_SMALL_RESULT", "SSL",
  "STARTING", "STRAIGHT_JOIN", "TABLE", "TEMPORARY", "TERMINATED", "TEXT",
  "THEN", "TIME", "TIMESTAMP", "TINYBLOB", "TINYINT", "TINYTEXT", "TO",
  "TRAILING", "TRIGGER", "UNDO", "UNION", "UNIQUE", "UNLOCK", "UNSIGNED",
  "UPDATE", "USAGE", "USE", "USING", "UTC_DATE", "UTC_TIME",
  "UTC_TIMESTAMP", "VALUES", "VARBINARY", "VARCHAR", "VARYING", "WHEN",
  "WHERE", "WHILE", "WITH", "WRITE", "YEAR", "YEAR_MONTH", "ZEROFILL",
  "ESCAPED", "EXISTS", "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB",
  "FCOUNT", "';'", "'.'", "'('", "')'", "','", "$accept", "stmt_list",
  "expr", "val_list", "opt_val_list", "trim_ltb", "interval_exp",
  "case_list", "stmt", "select_stmt", "state_where", "opt_where",
  "opt_groupby", "state_select", "select_expr_list", "select_expr",
  "state_from", "table_references", "groupby_list", "opt_asc_desc",
  "opt_with_rollup", "opt_having", "opt_orderby", "opt_limit",
  "opt_into_list", "column_list", "opt_as", "delete_stmt", "delete_opts",
  "delete_list", "opt_dot_star", "insert_stmt", "opt_ondupupdate",
  "insert_opts", "opt_into", "opt_col_names", "insert_vals_list",
  "insert_vals", "insert_asgn_list", "replace_stmt", "update_stmt",
  "update_opts", "update_asgn_list", "create_database_stmt",
  "opt_if_not_exists", "create_table_stmt", "opt_temporary",
  "create_col_list", "create_definition", "$@1", "column_atts",
  "opt_length", "opt_binary", "opt_uz", "opt_csc", "data_type",
  "enum_list", "create_select_statement", "opt_ignore_replace", "set_stmt",
  "set_list", "set_expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-304)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-184)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -63,   -53,  -304,  -304,  -304,  -304,    55,     6,    18,  -188,
    -304,   115,  -304,  -304,  -304,  -304,  -304,  -304,  -304,   -10,
     -10,  -304,   -89,     8,   335,   335,    99,   -99,  -304,   144,
     184,  -304,   -42,  -304,  -304,  -304,   -94,  -304,   -33,   214,
     247,   -10,    20,   258,  -304,  -304,  -304,   -92,  -304,  -304,
    -304,  -304,  -304,   260,   261,   485,   485,    55,     9,    10,
    -304,    94,  -304,  -304,   287,   184,  -304,  -304,  -304,   290,
     276,  -304,   322,  -205,   184,   302,  -150,  -136,   -65,  -304,
    -304,  -304,  -304,   300,   485,   485,   485,   485,   189,  -304,
    -304,  -304,    67,    84,    86,    92,   113,   122,  1396,  1396,
    -304,   309,  -304,   204,  -108,  -304,  -304,   485,   222,   184,
    -192,    20,   397,   406,  -153,   397,  -130,   408,   485,   485,
    1141,  1141,  -304,  -304,   485,   941,   -82,   228,   485,   164,
     485,   485,   248,   485,   485,   485,   175,    22,   485,   485,
     138,   485,   107,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   -15,
    -118,   332,  -304,  -304,   448,   234,  -304,   412,  1396,   399,
     320,  -192,  -304,  -304,   442,  -135,  -304,    27,   238,   304,
    -135,   238,   304,  -304,   620,  -304,   221,  1396,  1029,   -77,
     485,  -304,   485,   227,   585,   252,  -304,  -304,  -304,   262,
     485,   647,   729,   263,   825,  1518,   984,  1542,   264,  -304,
      29,  -304,  1566,  1566,   239,   485,   485,  1450,   265,   272,
     273,   228,   841,   857,  1158,  1181,  1203,  1203,   441,   441,
     441,   441,   340,   472,   362,   243,   208,   494,  -304,   485,
     532,   535,   222,   486,   428,   -51,   111,   286,   289,   416,
      42,  -304,   540,  -304,   228,   485,   485,  -304,  -304,   321,
     418,   545,  -304,  -304,   547,   376,  -120,  -304,  -304,  -120,
    -304,   485,  -304,   485,   485,  -304,  1315,  1064,  -304,   485,
    -304,  -304,  1288,   424,   424,  -304,  -304,   295,   301,  -304,
    -304,   264,  1566,  1566,   485,   228,   228,   228,   303,  1492,
     537,   -14,   320,   485,   485,   222,   234,  -304,   305,   307,
     406,   406,   308,    56,   234,  1053,  -304,  1423,   323,   763,
    -304,  1396,   331,   546,  -304,  -304,  1396,    50,   311,  -304,
    -304,  -304,  1396,  1342,  -304,   485,   790,   485,   485,   325,
     326,  -304,  -304,   327,   328,   696,   329,   330,   334,  -304,
     485,   485,   562,  -304,  -208,  1396,   320,    64,   406,   406,
      73,    79,   406,  -304,  -304,   336,   336,   336,  -304,   336,
    -304,  -304,   336,   336,   337,   336,   336,   336,  -304,   529,
    -304,   336,   529,   336,   338,   336,   529,  -304,  -304,  -304,
     336,   529,   366,   367,  -304,  -304,  -304,  -304,  -304,   485,
     485,   397,   462,  -304,   519,   376,  -304,  1396,   485,  -304,
     381,   914,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  1492,
    1492,   559,   479,  -304,   556,    57,   109,   131,  -304,  -304,
     149,   682,  -304,  -304,  -304,  -304,  -304,  -304,   685,  -304,
    -304,  -304,  -304,  -304,  -304,  -304,  -304,   685,  -304,  -304,
    -304,  -304,   692,   693,   230,  1423,  1396,   432,  -304,  1396,
    -304,  1396,   169,   887,  -304,  -304,  -304,  -304,  -304,  -304,
    -304,  -304,  -304,  -304,   485,  -304,   406,  -304,  -304,  -304,
    -304,  -304,   172,  -178,   -22,  -178,  -178,  -304,   176,  -178,
    -178,  -178,   -22,  -178,   -22,  -178,   178,  -178,   -22,  -178,
     -22,   444,   446,   542,  -304,   701,   417,  -304,  -304,   575,
    -107,  -304,  -304,  -304,  1492,   449,  -304,   703,  -304,  -304,
     554,   762,  -304,   777,  -304,  -304,  -304,  -304,  -304,  -304,
    -304,  -304,  -304,  -304,  -304,   406,   551,   823,  -304,   -22,
    -304,   -22,   -22,   192,  -304,  -304,  -304
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      90,   188,   131,   142,   142,    98,     0,   142,    90,     0,
      89,     0,   126,   138,   163,   167,   176,   181,   259,   179,
     179,   189,     0,     0,   148,   148,     0,   260,   261,     0,
     104,     1,     0,     2,   102,   101,     0,    99,     0,     0,
       0,   179,   135,     0,   130,   128,   129,     0,   144,   145,
     146,   147,   143,     0,     0,     0,     0,     0,   146,   143,
     105,     0,     3,   103,     0,   104,   180,   177,   178,     0,
       0,   133,    92,     0,   104,     0,   149,   149,     4,     7,
       8,    10,     9,     6,     0,     0,     0,     0,     0,    86,
      87,    85,     0,     0,     0,     0,     0,     0,   264,   263,
     262,     0,   100,    92,   256,   136,    93,     0,   115,   104,
      92,   135,     0,     0,    90,     0,    90,     0,    46,     0,
      25,    26,    17,    88,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    96,   257,   258,     0,   197,   185,   125,    95,     0,
     117,    92,   132,   134,     0,   140,   122,     0,     0,   140,
     140,     0,   140,     5,    44,    47,     0,    42,     0,     0,
       0,    77,     0,     0,    44,     0,    63,    61,    62,     0,
       0,     0,     0,     0,     0,    19,    20,    18,    90,    40,
       0,    38,    81,    83,     0,     0,     0,     0,     0,     0,
       0,    90,    33,    21,    22,    24,    11,    12,    13,    14,
      15,    16,    23,    27,    30,    29,    32,    31,    28,     0,
       0,     0,   115,     0,   113,   256,     0,     0,     0,     0,
       0,   190,     0,   124,    90,     0,     0,   127,   137,     0,
       0,     0,   157,   150,     0,     0,   140,   162,   165,   140,
     166,     0,    53,     0,     0,    75,     0,     0,    52,     0,
      56,    59,     0,     0,     0,    54,    55,     0,     0,    41,
      39,    90,    82,    84,     0,    90,    90,    90,     0,   172,
       0,     0,   117,     0,     0,   115,   197,   187,     0,     0,
       0,     0,     0,   256,   197,     0,   255,   108,   116,   118,
     159,   158,     0,     0,   123,   154,   153,     0,     0,   139,
     164,    45,    79,     0,    78,     0,     0,     0,     0,     0,
       0,    48,    50,     0,     0,    43,     0,     0,     0,    34,
       0,     0,     0,   168,   111,   114,   117,     0,     0,     0,
       0,     0,     0,   184,   191,   212,   212,   212,   244,   212,
     234,   237,   212,   212,     0,   212,   212,   212,   246,   215,
     245,   212,   215,   212,     0,   212,   215,   235,   236,   243,
     212,   215,     0,     0,   238,   199,   109,   110,   106,     0,
       0,     0,     0,   151,     0,     0,    76,    80,     0,    57,
       0,     0,    64,    65,    49,    51,    37,    35,    36,   173,
     174,     0,     0,    97,   120,   256,     0,     0,   194,   193,
       0,     0,   217,   241,   223,   220,   217,   217,     0,   217,
     217,   217,   216,   220,   217,   220,   217,     0,   217,   220,
     217,   220,     0,     0,   198,   108,   119,   141,   161,   160,
     156,   155,     0,     0,    60,    66,    67,    68,    69,    72,
      73,    74,    71,    70,     0,   112,     0,    91,   186,   195,
     196,   192,     0,   229,   239,   233,   231,   253,     0,   232,
     227,   228,   250,   226,   249,   230,     0,   225,   248,   224,
     247,     0,     0,     0,   206,     0,     0,   210,   201,     0,
       0,   107,   152,    58,   175,   121,   213,     0,   218,   219,
       0,     0,   220,     0,   220,   242,   220,   200,   211,   202,
     203,   205,   204,   209,   208,     0,     0,     0,   222,   251,
     254,   252,   240,     0,   214,   221,   207
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -304,  -304,   -55,    15,  -304,  -304,   544,   704,   822,   -69,
    -304,   191,  -304,  -304,  -304,   767,  -304,     0,   530,   377,
    -304,  -304,  -172,  -275,  -304,  -303,  -304,  -304,  -304,   791,
     783,  -304,  -138,    47,   871,   855,   778,   573,  -113,  -304,
    -304,  -304,  -304,  -304,   168,  -304,  -304,   673,   666,  -304,
    -304,   319,  -161,   669,   -41,  -304,   534,  -242,  -304,  -304,
    -304,   925
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     8,   184,   185,   186,   200,   339,   126,     9,    10,
     107,   108,   244,    11,    36,    37,    65,    61,   318,   398,
     423,   305,   170,   257,   477,   177,   254,    12,    23,    47,
      71,    13,   262,    24,    53,   114,   266,   327,   175,    14,
      15,    30,   160,    16,    39,    17,    22,   250,   251,   252,
     454,   432,   443,   483,   484,   395,   488,   166,   167,    18,
      27,    28
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      98,    99,   180,   307,     1,   239,   351,   360,   361,  -169,
     162,    42,  -171,  -170,    63,   190,    74,   191,    31,   -94,
     274,    19,   275,     2,   534,   260,   109,   353,   209,   120,
     121,   122,   123,   125,   422,   289,   520,     5,   521,   210,
     260,   267,   268,   112,   270,   179,   -94,   182,   106,   518,
     399,    25,   168,    75,    29,   426,   427,   115,   193,   430,
       5,     3,   -94,    26,   187,   103,    33,   162,   519,   188,
     302,   363,   163,   194,   110,   201,   202,   204,   205,   206,
     207,   424,   178,   212,   213,     1,   217,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,     2,   181,   113,    38,    55,   171,
      78,    79,    80,    81,    82,    83,    43,     4,    34,    56,
     113,    41,   106,   261,    84,    85,    44,     5,   329,   163,
       6,   330,    86,   356,    20,   276,   -94,   277,   328,   288,
     241,    35,     3,   195,   199,   282,   218,   164,   165,   535,
     219,   214,   298,   215,   216,    45,    87,   192,    21,    57,
     292,   293,   192,    88,    64,     7,    75,    78,    79,    80,
      81,    82,    83,   515,   162,   162,    89,    90,    91,   211,
      46,    84,    85,   478,   299,   316,   290,    60,    40,    86,
     117,   118,    78,    79,    80,    81,    82,    83,     4,  -169,
     317,   319,  -171,  -170,   321,   306,    84,    85,     5,    69,
     326,     6,    62,    87,    86,    66,   196,    67,   332,   333,
      88,   445,   344,   287,   336,   449,   346,   347,   348,    48,
     451,   308,   543,    89,    90,    91,   163,   163,    87,   345,
     240,   352,   309,   157,   158,    88,     7,   503,   317,   355,
      68,    78,    79,    80,    81,    82,    83,    49,    89,    90,
      91,    72,    58,    76,    77,    84,    85,    78,    79,    80,
      81,    82,    83,    86,   203,    70,   504,   156,   157,   158,
     407,    84,    85,   411,   263,   264,   331,   101,   457,    86,
      34,    59,   505,   104,   161,   419,   420,    87,   197,   313,
     314,   172,   105,   220,    88,   111,   343,   403,   404,   119,
    -182,  -183,   159,    87,   506,   -94,   -94,    89,    90,    91,
      88,   425,   314,   127,    78,    79,    80,    81,    82,    83,
     428,   264,   -94,    89,    90,    91,   429,   264,    84,    85,
     128,   -94,   129,   246,   455,   456,    86,   459,   130,   461,
     326,   242,   410,   463,   247,    92,    93,    94,    95,    96,
      97,   507,   258,   221,   -94,   248,   479,   264,   -94,   131,
      87,   153,   154,   155,   156,   157,   158,    88,   132,    78,
      79,    80,    81,    82,    83,   198,   169,   508,   480,   264,
      89,    90,    91,    84,    85,   155,   156,   157,   158,   509,
     174,    86,   492,   249,   494,   320,   481,   264,   498,   176,
     500,   183,    92,    93,    94,    95,    96,    97,     5,   514,
      48,   529,   530,   531,   532,    87,   512,   404,   124,   516,
     517,   208,    88,   522,   523,   524,   523,    92,    93,    94,
      95,    96,    97,   243,   106,    89,    90,    91,    49,   546,
     264,   245,   255,    50,     5,   510,   253,   256,   -94,   -94,
     325,   -94,   259,    51,   260,    78,    79,    80,    81,    82,
      83,   152,   153,   154,   155,   156,   157,   158,   272,    84,
      85,   539,    52,   541,   278,   542,   -94,    86,    78,    79,
      80,    81,    82,    83,   265,   291,    92,    93,    94,    95,
      96,    97,    84,    85,   154,   155,   156,   157,   158,   280,
      86,    87,    92,    93,    94,    95,    96,    97,    88,   281,
     285,   295,    78,    79,    80,    81,    82,    83,   296,   297,
     158,    89,    90,    91,    87,   300,    84,    85,   301,   303,
     304,    88,   310,   315,    86,   311,   458,   312,   323,   322,
     324,   338,   341,  -135,    89,    90,    91,   350,   342,   401,
     349,   358,   106,   359,   362,   421,   402,   405,    87,    92,
      93,    94,    95,    96,    97,    88,   -94,    70,   442,   474,
    -135,   399,   412,   413,   414,   415,   416,   417,    89,    90,
      91,   418,   431,   438,   447,   133,   134,   135,   136,   137,
     138,   139,   140,   460,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   452,   453,    92,    93,    94,    95,    96,    97,
     133,   134,   135,   136,   137,   138,   139,   140,   464,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   133,   134,   135,
     136,   137,   138,   139,   140,   475,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   476,   433,   434,   482,   435,   487,
     261,   436,   437,   279,   439,   440,   441,   501,   502,   527,
     444,   525,   446,   526,   448,   528,   533,   264,   536,   450,
      92,    93,    94,    95,    96,    97,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,    92,    93,    94,    95,    96,    97,   133,
     134,   135,   136,   137,   138,   139,   140,   537,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   538,    92,    93,    94,
      95,    96,    97,   133,   134,   135,   136,   137,   138,   139,
     140,   540,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     133,   134,   135,   136,   137,   138,   139,   140,   544,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   545,   340,   189,
      32,   102,   511,   354,    73,   133,   134,   135,   136,   137,
     138,   139,   140,   271,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   271,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   173,   408,    54,   133,   134,   135,
     136,   137,   138,   139,   140,   283,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   133,   134,   135,   136,   137,   138,
     139,   140,   116,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   133,   134,   135,   136,   137,   138,   139,   140,   269,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   462,   357,
     364,   496,   100,     0,     0,     0,     0,   284,     0,     0,
       0,     0,   465,   466,   467,   468,   135,   136,   137,   138,
     139,   140,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   400,     0,     0,     0,     0,     0,     0,   469,   470,
     471,     0,     0,     0,     0,     0,     0,     0,     0,   133,
     134,   135,   136,   137,   138,   139,   140,   409,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     0,     0,     0,     0,
       0,     0,     0,     0,   133,   134,   135,   136,   137,   138,
     139,   140,   286,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   365,   366,   367,   368,   485,   486,     0,   489,   490,
     491,   369,     0,   493,     0,   495,     0,   497,     0,   499,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   370,
     371,     0,     0,     0,     0,   372,     0,     0,     0,     0,
       0,     0,     0,     0,   513,     0,   373,     0,     0,     0,
       0,     0,     0,   374,     0,     0,     0,   375,   472,   473,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   376,   377,
     124,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,     0,     0,   378,   379,     0,
       0,     0,   380,   381,   382,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   383,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
       0,     0,     0,   273,     0,     0,   384,     0,   385,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   386,     0,   387,   388,
     389,   390,   391,     0,     0,     0,     0,     0,   335,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   392,
     393,     0,     0,     0,     0,     0,     0,   394,   133,   134,
     135,   136,   137,   138,   139,   140,     0,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   133,   134,   135,   136,   137,
     138,   139,   140,     0,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   133,   134,   135,   136,   137,   138,   139,   140,
       0,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   337,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   133,   134,   135,   136,
     137,   138,   139,   140,   334,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   133,   134,   135,   136,   137,   138,   139,
     140,   406,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     133,   134,   135,   136,   137,   138,   139,   140,   396,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,     0,     0,     0,
       0,     0,   294,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   133,   134,   135,   136,   137,   138,   139,     0,
     397,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   134,
     135,   136,   137,   138,   139,   140,     0,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   136,   137,   138,   139,   140,
       0,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,  -184,
    -184,  -184,  -184,   140,     0,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158
};

static const yytype_int16 yycheck[] =
{
      55,    56,   115,   245,    67,    20,    20,   310,   311,     3,
     118,     3,     3,     3,   108,    97,   108,    99,     0,   137,
      97,    74,    99,    86,   131,   160,   231,   302,     6,    84,
      85,    86,    87,    88,   242,     6,    58,   190,    60,    17,
     160,   179,   180,   193,   182,   114,   164,   116,   240,   227,
     258,     4,   107,   258,     7,   358,   359,   193,   127,   362,
     190,   124,   254,     8,   119,    65,   254,   118,   246,   124,
     242,   313,   180,   128,    74,   130,   131,   132,   133,   134,
     135,   356,   235,   138,   139,    67,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,    86,   235,   256,   117,     9,   109,
       3,     4,     5,     6,     7,     8,   108,   180,     3,    20,
     256,   210,   240,   258,    17,    18,   118,   190,   266,   180,
     193,   269,    25,   305,   187,   190,   254,   192,   258,   208,
     258,    26,   124,   128,   129,   200,    39,   255,   256,   256,
      43,    13,   221,    15,    16,   147,    49,   239,   211,   258,
     215,   216,   239,    56,   258,   228,   258,     3,     4,     5,
       6,     7,     8,   476,   118,   118,    69,    70,    71,   157,
     172,    17,    18,   425,   239,   254,   157,     3,    20,    25,
     255,   256,     3,     4,     5,     6,     7,     8,   180,   193,
     255,   256,   193,   193,   259,   256,    17,    18,   190,    41,
     265,   193,   254,    49,    25,   248,    52,     3,   273,   274,
      56,   382,   291,   208,   279,   386,   295,   296,   297,    85,
     391,   120,   535,    69,    70,    71,   180,   180,    49,   294,
     255,   255,   131,    35,    36,    56,   228,    17,   303,   304,
       3,     3,     4,     5,     6,     7,     8,   113,    69,    70,
      71,     3,   118,     3,     3,    17,    18,     3,     4,     5,
       6,     7,     8,    25,    26,   255,    46,    34,    35,    36,
     335,    17,    18,   338,   257,   258,   271,   193,   401,    25,
       3,   147,    62,     3,   103,   350,   351,    49,   134,   257,
     258,   110,    26,   196,    56,     3,   291,   257,   258,     9,
     254,   254,     3,    49,    84,   111,   112,    69,    70,    71,
      56,   257,   258,   256,     3,     4,     5,     6,     7,     8,
     257,   258,   128,    69,    70,    71,   257,   258,    17,    18,
     256,   137,   256,   109,   399,   400,    25,   402,   256,   404,
     405,   160,   337,   408,   120,   248,   249,   250,   251,   252,
     253,   131,   171,   256,   160,   131,   257,   258,   164,   256,
      49,    31,    32,    33,    34,    35,    36,    56,   256,     3,
       4,     5,     6,     7,     8,   221,   164,   157,   257,   258,
      69,    70,    71,    17,    18,    33,    34,    35,    36,   169,
       3,    25,   443,   169,   445,    84,   257,   258,   449,     3,
     451,     3,   248,   249,   250,   251,   252,   253,   190,   474,
      85,     4,     5,     6,     7,    49,   257,   258,   239,   257,
     258,   256,    56,   257,   258,   257,   258,   248,   249,   250,
     251,   252,   253,   111,   240,    69,    70,    71,   113,   257,
     258,     3,    53,   118,   190,   225,    44,   137,   254,   137,
      84,   257,    20,   128,   160,     3,     4,     5,     6,     7,
       8,    30,    31,    32,    33,    34,    35,    36,   257,    17,
      18,   522,   147,   524,   257,   526,   164,    25,     3,     4,
       5,     6,     7,     8,   256,   256,   248,   249,   250,   251,
     252,   253,    17,    18,    32,    33,    34,    35,    36,   257,
      25,    49,   248,   249,   250,   251,   252,   253,    56,   257,
     257,   256,     3,     4,     5,     6,     7,     8,   256,   256,
      36,    69,    70,    71,    49,     3,    17,    18,     3,    53,
     112,    56,   256,     3,    25,   256,    84,   131,     3,   131,
       3,   127,   257,   231,    69,    70,    71,    20,   257,   228,
     257,   256,   240,   256,   256,     3,    20,   256,    49,   248,
     249,   250,   251,   252,   253,    56,   254,   255,    49,    20,
     258,   258,   257,   257,   257,   257,   257,   257,    69,    70,
      71,   257,   256,   256,   256,    10,    11,    12,    13,    14,
      15,    16,    17,    84,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,   256,   256,   248,   249,   250,   251,   252,   253,
      10,    11,    12,    13,    14,    15,    16,    17,   257,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    10,    11,    12,
      13,    14,    15,    16,    17,   186,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,   128,   366,   367,     5,   369,     4,
     258,   372,   373,   108,   375,   376,   377,     5,     5,   157,
     381,   257,   383,   257,   385,     4,   131,   258,     5,   390,
     248,   249,   250,   251,   252,   253,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,   248,   249,   250,   251,   252,   253,    10,
      11,    12,    13,    14,    15,    16,    17,   193,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     4,   248,   249,   250,
     251,   252,   253,    10,    11,    12,    13,    14,    15,    16,
      17,     4,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      10,    11,    12,    13,    14,    15,    16,    17,   257,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,     4,   284,   125,
       8,    64,   455,   303,    43,    10,    11,    12,    13,    14,
      15,    16,    17,   258,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,   258,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,   111,   105,    25,    10,    11,    12,
      13,    14,    15,    16,    17,   258,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    10,    11,    12,    13,    14,    15,
      16,    17,    77,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    10,    11,    12,    13,    14,    15,    16,    17,   181,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,   405,   306,
     314,   447,    57,    -1,    -1,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,   258,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,   257,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,   257,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    48,    49,    50,    51,   436,   437,    -1,   439,   440,
     441,    58,    -1,   444,    -1,   446,    -1,   448,    -1,   450,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   257,    -1,    93,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,   104,   244,   245,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,   125,   126,
     239,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,   144,   145,    -1,
      -1,    -1,   149,   150,   151,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,   214,    -1,    -1,   193,    -1,   195,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,   215,   216,
     217,   218,   219,    -1,    -1,    -1,    -1,    -1,   214,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,
     237,    -1,    -1,    -1,    -1,    -1,    -1,   244,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    99,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    10,    11,    12,    13,    14,    15,    16,
      17,    99,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      10,    11,    12,    13,    14,    15,    16,    17,    45,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      87,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    67,    86,   124,   180,   190,   193,   228,   260,   267,
     268,   272,   286,   290,   298,   299,   302,   304,   318,    74,
     187,   211,   305,   287,   292,   292,     8,   319,   320,   292,
     300,     0,   267,   254,     3,    26,   273,   274,   117,   303,
     303,   210,     3,   108,   118,   147,   172,   288,    85,   113,
     118,   128,   147,   293,   293,     9,    20,   258,   118,   147,
       3,   276,   254,   108,   258,   275,   248,     3,     3,   303,
     255,   289,     3,   288,   108,   258,     3,     3,     3,     4,
       5,     6,     7,     8,    17,    18,    25,    49,    56,    69,
      70,    71,   248,   249,   250,   251,   252,   253,   261,   261,
     320,   193,   274,   276,     3,    26,   240,   269,   270,   231,
     276,     3,   193,   256,   294,   193,   294,   255,   256,     9,
     261,   261,   261,   261,   239,   261,   266,   256,   256,   256,
     256,   256,   256,    10,    11,    12,    13,    14,    15,    16,
      17,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,     3,
     301,   270,   118,   180,   255,   256,   316,   317,   261,   164,
     281,   276,   270,   289,     3,   297,     3,   284,   235,   268,
     297,   235,   268,     3,   261,   262,   263,   261,   261,   266,
      97,    99,   239,   268,   261,   262,    52,   134,   221,   262,
     264,   261,   261,    26,   261,   261,   261,   261,   256,     6,
      17,   157,   261,   261,    13,    15,    16,   261,    39,    43,
     196,   256,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,    20,
     255,   258,   270,   111,   271,     3,   109,   120,   131,   169,
     306,   307,   308,    44,   285,    53,   137,   282,   270,    20,
     160,   258,   291,   257,   258,   256,   295,   291,   291,   295,
     291,   258,   257,   214,    97,    99,   261,   261,   257,   108,
     257,   257,   261,   258,   258,   257,   257,   262,   268,     6,
     157,   256,   261,   261,    42,   256,   256,   256,   268,   261,
       3,     3,   281,    53,   112,   280,   256,   316,   120,   131,
     256,   256,   131,   257,   258,     3,   268,   261,   277,   261,
      84,   261,   131,     3,     3,    84,   261,   296,   258,   291,
     291,   262,   261,   261,    99,   214,   261,   108,   127,   265,
     265,   257,   257,   262,   268,   261,   268,   268,   268,   257,
      20,    20,   255,   282,   277,   261,   281,   306,   256,   256,
     284,   284,   256,   316,   307,    48,    49,    50,    51,    58,
      76,    77,    82,    93,   100,   104,   125,   126,   144,   145,
     149,   150,   151,   175,   193,   195,   213,   215,   216,   217,
     218,   219,   236,   237,   244,   314,    45,    87,   278,   258,
     258,   228,    20,   257,   258,   256,    99,   261,   105,   257,
     262,   261,   257,   257,   257,   257,   257,   257,   257,   261,
     261,     3,   242,   279,   282,   257,   284,   284,   257,   257,
     284,   256,   310,   310,   310,   310,   310,   310,   256,   310,
     310,   310,    49,   311,   310,   311,   310,   256,   310,   311,
     310,   311,   256,   256,   309,   261,   261,   297,    84,   261,
      84,   261,   296,   261,   257,    78,    79,    80,    81,   114,
     115,   116,   244,   245,    20,   186,   128,   283,   316,   257,
     257,   257,     5,   312,   313,   312,   312,     4,   315,   312,
     312,   312,   313,   312,   313,   312,   315,   312,   313,   312,
     313,     5,     5,    17,    46,    62,    84,   131,   157,   169,
     225,   278,   257,   257,   261,   284,   257,   258,   227,   246,
      58,    60,   257,   258,   257,   257,   257,   157,     4,     4,
       5,     6,     7,   131,   131,   256,     5,   193,     4,   313,
       4,   313,   313,   284,   257,     4,   257
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   259,   260,   260,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   262,   262,   263,   263,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   264,   264,   264,   261,   261,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   261,   261,   261,   261,   266,
     266,   261,   261,   261,   261,   261,   261,   261,   261,   267,
     268,   268,   269,   269,   270,   270,   271,   271,   272,   273,
     273,   273,   274,   275,   276,   276,   277,   277,   278,   278,
     278,   279,   279,   280,   280,   281,   281,   282,   282,   282,
     283,   283,   284,   284,   285,   285,   267,   286,   287,   287,
     287,   287,   286,   288,   288,   289,   289,   286,   267,   290,
     291,   291,   292,   292,   292,   292,   292,   293,   293,   294,
     294,   295,   295,   296,   296,   296,   296,   290,   297,   297,
     297,   297,   290,   267,   298,   298,   298,   267,   299,   300,
     300,   300,   301,   301,   301,   301,   267,   302,   302,   303,
     303,   267,   304,   304,   304,   304,   304,   304,   305,   305,
     306,   306,   307,   307,   307,   307,   307,   308,   307,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   310,   310,   310,   311,   311,   312,   312,   312,
     313,   313,   313,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   315,   315,   316,   317,   317,   317,   267,
     318,   319,   319,   320,   320
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     5,     6,     6,     6,     3,     4,
       3,     4,     3,     5,     1,     3,     0,     1,     5,     6,
       5,     6,     4,     4,     4,     4,     4,     6,     8,     4,
       7,     1,     1,     1,     6,     6,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     6,     3,     5,     4,
       5,     3,     4,     3,     4,     1,     1,     1,     2,     1,
       0,    10,     0,     1,     0,     2,     0,     4,     1,     1,
       3,     1,     1,     1,     0,     1,     2,     4,     0,     1,
       1,     0,     2,     0,     2,     0,     3,     0,     2,     4,
       0,     2,     1,     3,     1,     0,     1,     7,     2,     2,
       2,     0,     6,     2,     4,     0,     2,     7,     1,     8,
       0,     4,     0,     2,     2,     2,     2,     1,     0,     0,
       3,     3,     5,     1,     1,     3,     3,     7,     3,     3,
       5,     5,     7,     1,     8,     7,     7,     1,     8,     0,
       2,     2,     3,     5,     5,     7,     1,     4,     4,     0,
       2,     1,     8,    10,     9,     6,    11,     8,     0,     1,
       1,     3,     5,     4,     4,     5,     5,     0,     4,     0,
       3,     2,     3,     3,     3,     3,     2,     5,     3,     3,
       2,     3,     0,     3,     5,     0,     1,     0,     2,     2,
       0,     4,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     3,
       5,     2,     4,     1,     1,     1,     1,     3,     3,     3,
       3,     5,     5,     1,     3,     3,     0,     1,     1,     1,
       2,     1,     3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* expr: NAME  */
#line 324 "sql.y"
                   { printf("IA VSTRETIL NAME; %s, AHYETb\n",(yyvsp[0].strval)); free((yyvsp[0].strval)); printf("%p", parse_tree);   }
#line 2045 "sql.tab.c"
    break;

  case 5: /* expr: NAME '.' NAME  */
#line 325 "sql.y"
                   { printf("FIELDNAME %s.%s\n", (yyvsp[-2].strval), (yyvsp[0].strval)); free((yyvsp[-2].strval)); free((yyvsp[0].strval)); }
#line 2051 "sql.tab.c"
    break;

  case 6: /* expr: USERVAR  */
#line 326 "sql.y"
                   { printf("USERVAR %s\n", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2057 "sql.tab.c"
    break;

  case 7: /* expr: STRING  */
#line 327 "sql.y"
                   { printf("STRING %s\n", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2063 "sql.tab.c"
    break;

  case 8: /* expr: INTNUM  */
#line 328 "sql.y"
                   { printf("NUMBER %d\n", (yyvsp[0].intval)); }
#line 2069 "sql.tab.c"
    break;

  case 9: /* expr: APPROXNUM  */
#line 329 "sql.y"
                   { printf("FLOAT %g\n", (yyvsp[0].floatval)); }
#line 2075 "sql.tab.c"
    break;

  case 10: /* expr: BOOL  */
#line 330 "sql.y"
                   { printf("BOOL %d\n", (yyvsp[0].intval)); }
#line 2081 "sql.tab.c"
    break;

  case 11: /* expr: expr '+' expr  */
#line 333 "sql.y"
                    { emit("ADD"); }
#line 2087 "sql.tab.c"
    break;

  case 12: /* expr: expr '-' expr  */
#line 334 "sql.y"
                   { emit("SUB"); }
#line 2093 "sql.tab.c"
    break;

  case 13: /* expr: expr '*' expr  */
#line 335 "sql.y"
                   { emit("MUL"); }
#line 2099 "sql.tab.c"
    break;

  case 14: /* expr: expr '/' expr  */
#line 336 "sql.y"
                   { emit("DIV"); }
#line 2105 "sql.tab.c"
    break;

  case 15: /* expr: expr '%' expr  */
#line 337 "sql.y"
                   { emit("MOD"); }
#line 2111 "sql.tab.c"
    break;

  case 16: /* expr: expr MOD expr  */
#line 338 "sql.y"
                   { emit("MOD"); }
#line 2117 "sql.tab.c"
    break;

  case 17: /* expr: '-' expr  */
#line 339 "sql.y"
                           { emit("NEG"); }
#line 2123 "sql.tab.c"
    break;

  case 18: /* expr: expr ANDOP expr  */
#line 340 "sql.y"
                     { emit("AND"); }
#line 2129 "sql.tab.c"
    break;

  case 19: /* expr: expr OR expr  */
#line 341 "sql.y"
                  { emit("OR"); }
#line 2135 "sql.tab.c"
    break;

  case 20: /* expr: expr XOR expr  */
#line 342 "sql.y"
                   { emit("XOR"); }
#line 2141 "sql.tab.c"
    break;

  case 21: /* expr: expr '|' expr  */
#line 343 "sql.y"
                   { emit("BITOR"); }
#line 2147 "sql.tab.c"
    break;

  case 22: /* expr: expr '&' expr  */
#line 344 "sql.y"
                   { emit("BITAND"); }
#line 2153 "sql.tab.c"
    break;

  case 23: /* expr: expr '^' expr  */
#line 345 "sql.y"
                   { emit("BITXOR"); }
#line 2159 "sql.tab.c"
    break;

  case 24: /* expr: expr SHIFT expr  */
#line 346 "sql.y"
                     { emit("SHIFT %s", (yyvsp[-1].subtok)==1?"left":"right"); }
#line 2165 "sql.tab.c"
    break;

  case 25: /* expr: NOT expr  */
#line 347 "sql.y"
              { emit("NOT"); }
#line 2171 "sql.tab.c"
    break;

  case 26: /* expr: '!' expr  */
#line 348 "sql.y"
              { emit("NOT"); }
#line 2177 "sql.tab.c"
    break;

  case 27: /* expr: expr EQUAL expr  */
#line 349 "sql.y"
                     { printf("ebat ravno\n"); }
#line 2183 "sql.tab.c"
    break;

  case 28: /* expr: expr NOT_EQUAL expr  */
#line 350 "sql.y"
                         { printf("ebat ravno\n"); }
#line 2189 "sql.tab.c"
    break;

  case 29: /* expr: expr MORE expr  */
#line 351 "sql.y"
                    { printf("ebat ravno\n"); }
#line 2195 "sql.tab.c"
    break;

  case 30: /* expr: expr MORE_OR_EQUAL expr  */
#line 352 "sql.y"
                             { printf("ebat ravno\n"); }
#line 2201 "sql.tab.c"
    break;

  case 31: /* expr: expr LESS expr  */
#line 353 "sql.y"
                    { printf("ebat ravno\n"); }
#line 2207 "sql.tab.c"
    break;

  case 32: /* expr: expr LESS_OR_EQUAL expr  */
#line 354 "sql.y"
                             { printf("ebat ravno\n"); }
#line 2213 "sql.tab.c"
    break;

  case 33: /* expr: expr COMPARISON expr  */
#line 355 "sql.y"
                          { printf("CMP " ); }
#line 2219 "sql.tab.c"
    break;

  case 34: /* expr: expr COMPARISON '(' select_stmt ')'  */
#line 358 "sql.y"
                                         { emit("CMPSELECT %d", (yyvsp[-3].subtok)); }
#line 2225 "sql.tab.c"
    break;

  case 35: /* expr: expr COMPARISON ANY '(' select_stmt ')'  */
#line 359 "sql.y"
                                             { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2231 "sql.tab.c"
    break;

  case 36: /* expr: expr COMPARISON SOME '(' select_stmt ')'  */
#line 360 "sql.y"
                                              { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2237 "sql.tab.c"
    break;

  case 37: /* expr: expr COMPARISON ALL '(' select_stmt ')'  */
#line 361 "sql.y"
                                             { emit("CMPALLSELECT %d", (yyvsp[-4].subtok)); }
#line 2243 "sql.tab.c"
    break;

  case 38: /* expr: expr IS NULLX  */
#line 364 "sql.y"
                         { emit("ISNULL"); }
#line 2249 "sql.tab.c"
    break;

  case 39: /* expr: expr IS NOT NULLX  */
#line 365 "sql.y"
                         { emit("ISNULL"); emit("NOT"); }
#line 2255 "sql.tab.c"
    break;

  case 40: /* expr: expr IS BOOL  */
#line 366 "sql.y"
                         { emit("ISBOOL %d", (yyvsp[0].intval)); }
#line 2261 "sql.tab.c"
    break;

  case 41: /* expr: expr IS NOT BOOL  */
#line 367 "sql.y"
                         { emit("ISBOOL %d", (yyvsp[0].intval)); emit("NOT"); }
#line 2267 "sql.tab.c"
    break;

  case 42: /* expr: USERVAR ASSIGN expr  */
#line 369 "sql.y"
                         { emit("ASSIGN @%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2273 "sql.tab.c"
    break;

  case 43: /* expr: expr BETWEEN expr AND expr  */
#line 372 "sql.y"
                                               { emit("BETWEEN"); }
#line 2279 "sql.tab.c"
    break;

  case 44: /* val_list: expr  */
#line 375 "sql.y"
               { (yyval.intval) = 1; }
#line 2285 "sql.tab.c"
    break;

  case 45: /* val_list: expr ',' val_list  */
#line 376 "sql.y"
                       { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2291 "sql.tab.c"
    break;

  case 46: /* opt_val_list: %empty  */
#line 379 "sql.y"
                        { (yyval.intval) = 0; }
#line 2297 "sql.tab.c"
    break;

  case 48: /* expr: expr IN '(' val_list ')'  */
#line 383 "sql.y"
                                     { emit("ISIN %d", (yyvsp[-1].intval)); }
#line 2303 "sql.tab.c"
    break;

  case 49: /* expr: expr NOT IN '(' val_list ')'  */
#line 384 "sql.y"
                                     { emit("ISIN %d", (yyvsp[-1].intval)); emit("NOT"); }
#line 2309 "sql.tab.c"
    break;

  case 50: /* expr: expr IN '(' select_stmt ')'  */
#line 385 "sql.y"
                                     { emit("CMPANYSELECT 4"); }
#line 2315 "sql.tab.c"
    break;

  case 51: /* expr: expr NOT IN '(' select_stmt ')'  */
#line 386 "sql.y"
                                     { emit("CMPALLSELECT 3"); }
#line 2321 "sql.tab.c"
    break;

  case 52: /* expr: EXISTS '(' select_stmt ')'  */
#line 387 "sql.y"
                                     { emit("EXISTSSELECT"); if((yyvsp[-3].subtok))emit("NOT"); }
#line 2327 "sql.tab.c"
    break;

  case 53: /* expr: NAME '(' opt_val_list ')'  */
#line 391 "sql.y"
                                {  emit("CALL %d %s", (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2333 "sql.tab.c"
    break;

  case 54: /* expr: FCOUNT '(' '*' ')'  */
#line 395 "sql.y"
                         { emit("COUNTALL"); }
#line 2339 "sql.tab.c"
    break;

  case 55: /* expr: FCOUNT '(' expr ')'  */
#line 396 "sql.y"
                         { emit(" CALL 1 COUNT"); }
#line 2345 "sql.tab.c"
    break;

  case 56: /* expr: FSUBSTRING '(' val_list ')'  */
#line 398 "sql.y"
                                                {  emit("CALL %d SUBSTR", (yyvsp[-1].intval)); }
#line 2351 "sql.tab.c"
    break;

  case 57: /* expr: FSUBSTRING '(' expr FROM expr ')'  */
#line 399 "sql.y"
                                                {  emit("CALL 2 SUBSTR"); }
#line 2357 "sql.tab.c"
    break;

  case 58: /* expr: FSUBSTRING '(' expr FROM expr FOR expr ')'  */
#line 400 "sql.y"
                                                {  emit("CALL 3 SUBSTR"); }
#line 2363 "sql.tab.c"
    break;

  case 59: /* expr: FTRIM '(' val_list ')'  */
#line 402 "sql.y"
                                                { emit("CALL %d TRIM", (yyvsp[-1].intval)); }
#line 2369 "sql.tab.c"
    break;

  case 60: /* expr: FTRIM '(' trim_ltb expr FROM val_list ')'  */
#line 403 "sql.y"
                                                { emit("CALL 3 TRIM"); }
#line 2375 "sql.tab.c"
    break;

  case 61: /* trim_ltb: LEADING  */
#line 406 "sql.y"
                  { emit("NUMBER 1"); }
#line 2381 "sql.tab.c"
    break;

  case 62: /* trim_ltb: TRAILING  */
#line 407 "sql.y"
                  { emit("NUMBER 2"); }
#line 2387 "sql.tab.c"
    break;

  case 63: /* trim_ltb: BOTH  */
#line 408 "sql.y"
                  { emit("NUMBER 3"); }
#line 2393 "sql.tab.c"
    break;

  case 64: /* expr: FDATE_ADD '(' expr ',' interval_exp ')'  */
#line 411 "sql.y"
                                              { emit("CALL 3 DATE_ADD"); }
#line 2399 "sql.tab.c"
    break;

  case 65: /* expr: FDATE_SUB '(' expr ',' interval_exp ')'  */
#line 412 "sql.y"
                                              { emit("CALL 3 DATE_SUB"); }
#line 2405 "sql.tab.c"
    break;

  case 66: /* interval_exp: INTERVAL expr DAY_HOUR  */
#line 415 "sql.y"
                                     { emit("NUMBER 1"); }
#line 2411 "sql.tab.c"
    break;

  case 67: /* interval_exp: INTERVAL expr DAY_MICROSECOND  */
#line 416 "sql.y"
                                     { emit("NUMBER 2"); }
#line 2417 "sql.tab.c"
    break;

  case 68: /* interval_exp: INTERVAL expr DAY_MINUTE  */
#line 417 "sql.y"
                                     { emit("NUMBER 3"); }
#line 2423 "sql.tab.c"
    break;

  case 69: /* interval_exp: INTERVAL expr DAY_SECOND  */
#line 418 "sql.y"
                                     { emit("NUMBER 4"); }
#line 2429 "sql.tab.c"
    break;

  case 70: /* interval_exp: INTERVAL expr YEAR_MONTH  */
#line 419 "sql.y"
                                     { emit("NUMBER 5"); }
#line 2435 "sql.tab.c"
    break;

  case 71: /* interval_exp: INTERVAL expr YEAR  */
#line 420 "sql.y"
                                     { emit("NUMBER 6"); }
#line 2441 "sql.tab.c"
    break;

  case 72: /* interval_exp: INTERVAL expr HOUR_MICROSECOND  */
#line 421 "sql.y"
                                     { emit("NUMBER 7"); }
#line 2447 "sql.tab.c"
    break;

  case 73: /* interval_exp: INTERVAL expr HOUR_MINUTE  */
#line 422 "sql.y"
                                     { emit("NUMBER 8"); }
#line 2453 "sql.tab.c"
    break;

  case 74: /* interval_exp: INTERVAL expr HOUR_SECOND  */
#line 423 "sql.y"
                                     { emit("NUMBER 9"); }
#line 2459 "sql.tab.c"
    break;

  case 75: /* expr: CASE expr case_list END  */
#line 425 "sql.y"
                                        { emit("CASEVAL %d 0", (yyvsp[-1].intval)); }
#line 2465 "sql.tab.c"
    break;

  case 76: /* expr: CASE expr case_list ELSE expr END  */
#line 426 "sql.y"
                                        { emit("CASEVAL %d 1", (yyvsp[-3].intval)); }
#line 2471 "sql.tab.c"
    break;

  case 77: /* expr: CASE case_list END  */
#line 427 "sql.y"
                                        { emit("CASE %d 0", (yyvsp[-1].intval)); }
#line 2477 "sql.tab.c"
    break;

  case 78: /* expr: CASE case_list ELSE expr END  */
#line 428 "sql.y"
                                        { emit("CASE %d 1", (yyvsp[-3].intval)); }
#line 2483 "sql.tab.c"
    break;

  case 79: /* case_list: WHEN expr THEN expr  */
#line 431 "sql.y"
                                   { (yyval.intval) = 1; }
#line 2489 "sql.tab.c"
    break;

  case 80: /* case_list: case_list WHEN expr THEN expr  */
#line 432 "sql.y"
                                         { (yyval.intval) = (yyvsp[-4].intval)+1; }
#line 2495 "sql.tab.c"
    break;

  case 81: /* expr: expr LIKE expr  */
#line 435 "sql.y"
                     { emit("LIKE"); }
#line 2501 "sql.tab.c"
    break;

  case 82: /* expr: expr NOT LIKE expr  */
#line 436 "sql.y"
                        { emit("LIKE"); emit("NOT"); }
#line 2507 "sql.tab.c"
    break;

  case 83: /* expr: expr REGEXP expr  */
#line 439 "sql.y"
                       { emit("REGEXP"); }
#line 2513 "sql.tab.c"
    break;

  case 84: /* expr: expr NOT REGEXP expr  */
#line 440 "sql.y"
                          { emit("REGEXP"); emit("NOT"); }
#line 2519 "sql.tab.c"
    break;

  case 85: /* expr: CURRENT_TIMESTAMP  */
#line 443 "sql.y"
                        { emit("NOW"); }
#line 2525 "sql.tab.c"
    break;

  case 86: /* expr: CURRENT_DATE  */
#line 444 "sql.y"
                        { emit("NOW"); }
#line 2531 "sql.tab.c"
    break;

  case 87: /* expr: CURRENT_TIME  */
#line 445 "sql.y"
                        { emit("NOW"); }
#line 2537 "sql.tab.c"
    break;

  case 88: /* expr: BINARY expr  */
#line 448 "sql.y"
                               { emit("STRTOBIN"); }
#line 2543 "sql.tab.c"
    break;

  case 89: /* stmt: select_stmt  */
#line 458 "sql.y"
                  { emit("STMT"); }
#line 2549 "sql.tab.c"
    break;

  case 91: /* select_stmt: state_select select_expr_list state_from table_references opt_where opt_groupby opt_having opt_orderby opt_limit opt_into_list  */
#line 466 "sql.y"
     { 
         return 1;
     }
#line 2557 "sql.tab.c"
    break;

  case 93: /* state_where: WHERE  */
#line 475 "sql.y"
           { YYCurState = YYState_WHERE; }
#line 2563 "sql.tab.c"
    break;

  case 95: /* opt_where: state_where expr  */
#line 479 "sql.y"
                      { emit("WHERE"); }
#line 2569 "sql.tab.c"
    break;

  case 97: /* opt_groupby: GROUP BY groupby_list opt_with_rollup  */
#line 483 "sql.y"
                             { emit("GROUPBYLIST %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2575 "sql.tab.c"
    break;

  case 98: /* state_select: SELECT  */
#line 488 "sql.y"
   { 
      YYCurState = YYState_SELECT;
      AddPTModule_SELECT();
   }
#line 2584 "sql.tab.c"
    break;

  case 101: /* select_expr_list: '*'  */
#line 495 "sql.y"
         { YYGotNAME("*"); }
#line 2590 "sql.tab.c"
    break;

  case 102: /* select_expr: NAME  */
#line 499 "sql.y"
                  { YYGotNAME((yyvsp[0].strval));}
#line 2596 "sql.tab.c"
    break;

  case 103: /* state_from: FROM  */
#line 503 "sql.y"
   { 
      YYCurState = YYState_FROM; 
   }
#line 2604 "sql.tab.c"
    break;

  case 105: /* table_references: NAME  */
#line 508 "sql.y"
         { YYGotNAME((yyvsp[0].strval)); }
#line 2610 "sql.tab.c"
    break;

  case 106: /* groupby_list: expr opt_asc_desc  */
#line 513 "sql.y"
                             { emit("GROUPBY %d",  (yyvsp[0].intval)); (yyval.intval) = 1; }
#line 2616 "sql.tab.c"
    break;

  case 107: /* groupby_list: groupby_list ',' expr opt_asc_desc  */
#line 515 "sql.y"
                             { emit("GROUPBY %d",  (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2622 "sql.tab.c"
    break;

  case 108: /* opt_asc_desc: %empty  */
#line 518 "sql.y"
                        { (yyval.intval) = 0; }
#line 2628 "sql.tab.c"
    break;

  case 109: /* opt_asc_desc: ASC  */
#line 519 "sql.y"
                        { (yyval.intval) = 0; }
#line 2634 "sql.tab.c"
    break;

  case 110: /* opt_asc_desc: DESC  */
#line 520 "sql.y"
                        { (yyval.intval) = 1; }
#line 2640 "sql.tab.c"
    break;

  case 111: /* opt_with_rollup: %empty  */
#line 523 "sql.y"
                            { (yyval.intval) = 0; }
#line 2646 "sql.tab.c"
    break;

  case 112: /* opt_with_rollup: WITH ROLLUP  */
#line 524 "sql.y"
                  { (yyval.intval) = 1; }
#line 2652 "sql.tab.c"
    break;

  case 114: /* opt_having: HAVING expr  */
#line 528 "sql.y"
                 { emit("HAVING"); }
#line 2658 "sql.tab.c"
    break;

  case 116: /* opt_orderby: ORDER BY groupby_list  */
#line 531 "sql.y"
                           { emit("ORDERBY %d", (yyvsp[0].intval)); }
#line 2664 "sql.tab.c"
    break;

  case 118: /* opt_limit: LIMIT expr  */
#line 534 "sql.y"
                                  { emit("LIMIT 1"); }
#line 2670 "sql.tab.c"
    break;

  case 119: /* opt_limit: LIMIT expr ',' expr  */
#line 535 "sql.y"
                                    { emit("LIMIT 2"); }
#line 2676 "sql.tab.c"
    break;

  case 121: /* opt_into_list: INTO column_list  */
#line 539 "sql.y"
                      { emit("INTO %d", (yyvsp[0].intval)); }
#line 2682 "sql.tab.c"
    break;

  case 122: /* column_list: NAME  */
#line 542 "sql.y"
                  { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2688 "sql.tab.c"
    break;

  case 123: /* column_list: column_list ',' NAME  */
#line 543 "sql.y"
                          { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2694 "sql.tab.c"
    break;

  case 126: /* stmt: delete_stmt  */
#line 635 "sql.y"
                  { emit("STMT"); }
#line 2700 "sql.tab.c"
    break;

  case 127: /* delete_stmt: DELETE delete_opts FROM NAME opt_where opt_orderby opt_limit  */
#line 641 "sql.y"
                  { emit("DELETEONE %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2706 "sql.tab.c"
    break;

  case 128: /* delete_opts: delete_opts LOW_PRIORITY  */
#line 644 "sql.y"
                                      { (yyval.intval) = (yyvsp[-1].intval) + 01; }
#line 2712 "sql.tab.c"
    break;

  case 129: /* delete_opts: delete_opts QUICK  */
#line 645 "sql.y"
                       { (yyval.intval) = (yyvsp[-1].intval) + 02; }
#line 2718 "sql.tab.c"
    break;

  case 130: /* delete_opts: delete_opts IGNORE  */
#line 646 "sql.y"
                        { (yyval.intval) = (yyvsp[-1].intval) + 04; }
#line 2724 "sql.tab.c"
    break;

  case 131: /* delete_opts: %empty  */
#line 647 "sql.y"
               { (yyval.intval) = 0; }
#line 2730 "sql.tab.c"
    break;

  case 132: /* delete_stmt: DELETE delete_opts delete_list FROM table_references opt_where  */
#line 654 "sql.y"
            { emit("DELETEMULTI %d %d %d", (yyvsp[-4].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2736 "sql.tab.c"
    break;

  case 133: /* delete_list: NAME opt_dot_star  */
#line 656 "sql.y"
                               { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = 1; }
#line 2742 "sql.tab.c"
    break;

  case 134: /* delete_list: delete_list ',' NAME opt_dot_star  */
#line 658 "sql.y"
            { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2748 "sql.tab.c"
    break;

  case 137: /* delete_stmt: DELETE delete_opts FROM delete_list USING table_references opt_where  */
#line 667 "sql.y"
            { emit("DELETEMULTI %d %d %d", (yyvsp[-5].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2754 "sql.tab.c"
    break;

  case 138: /* stmt: insert_stmt  */
#line 672 "sql.y"
                  { emit("STMT"); }
#line 2760 "sql.tab.c"
    break;

  case 139: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 678 "sql.y"
                     { emit("INSERTVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 2766 "sql.tab.c"
    break;

  case 141: /* opt_ondupupdate: ONDUPLICATE KEY UPDATE insert_asgn_list  */
#line 682 "sql.y"
                                             { emit("DUPUPDATE %d", (yyvsp[0].intval)); }
#line 2772 "sql.tab.c"
    break;

  case 142: /* insert_opts: %empty  */
#line 685 "sql.y"
                       { (yyval.intval) = 0; }
#line 2778 "sql.tab.c"
    break;

  case 143: /* insert_opts: insert_opts LOW_PRIORITY  */
#line 686 "sql.y"
                              { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 2784 "sql.tab.c"
    break;

  case 144: /* insert_opts: insert_opts DELAYED  */
#line 687 "sql.y"
                         { (yyval.intval) = (yyvsp[-1].intval) | 02 ; }
#line 2790 "sql.tab.c"
    break;

  case 145: /* insert_opts: insert_opts HIGH_PRIORITY  */
#line 688 "sql.y"
                               { (yyval.intval) = (yyvsp[-1].intval) | 04 ; }
#line 2796 "sql.tab.c"
    break;

  case 146: /* insert_opts: insert_opts IGNORE  */
#line 689 "sql.y"
                        { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 2802 "sql.tab.c"
    break;

  case 150: /* opt_col_names: '(' column_list ')'  */
#line 696 "sql.y"
                         { emit("INSERTCOLS %d", (yyvsp[-1].intval)); }
#line 2808 "sql.tab.c"
    break;

  case 151: /* insert_vals_list: '(' insert_vals ')'  */
#line 699 "sql.y"
                                      { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = 1; }
#line 2814 "sql.tab.c"
    break;

  case 152: /* insert_vals_list: insert_vals_list ',' '(' insert_vals ')'  */
#line 700 "sql.y"
                                              { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2820 "sql.tab.c"
    break;

  case 153: /* insert_vals: expr  */
#line 703 "sql.y"
          { (yyval.intval) = 1; }
#line 2826 "sql.tab.c"
    break;

  case 154: /* insert_vals: DEFAULT  */
#line 704 "sql.y"
             { emit("DEFAULT"); (yyval.intval) = 1; }
#line 2832 "sql.tab.c"
    break;

  case 155: /* insert_vals: insert_vals ',' expr  */
#line 705 "sql.y"
                          { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2838 "sql.tab.c"
    break;

  case 156: /* insert_vals: insert_vals ',' DEFAULT  */
#line 706 "sql.y"
                             { emit("DEFAULT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2844 "sql.tab.c"
    break;

  case 157: /* insert_stmt: INSERT insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 711 "sql.y"
     { emit("INSERTASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2850 "sql.tab.c"
    break;

  case 158: /* insert_asgn_list: NAME COMPARISON expr  */
#line 716 "sql.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
       emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2857 "sql.tab.c"
    break;

  case 159: /* insert_asgn_list: NAME COMPARISON DEFAULT  */
#line 719 "sql.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2864 "sql.tab.c"
    break;

  case 160: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON expr  */
#line 722 "sql.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
                 emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2871 "sql.tab.c"
    break;

  case 161: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON DEFAULT  */
#line 725 "sql.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2878 "sql.tab.c"
    break;

  case 162: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 731 "sql.y"
                    { emit("INSERTSELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2884 "sql.tab.c"
    break;

  case 163: /* stmt: replace_stmt  */
#line 735 "sql.y"
                   { emit("STMT"); }
#line 2890 "sql.tab.c"
    break;

  case 164: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 741 "sql.y"
                     { emit("REPLACEVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 2896 "sql.tab.c"
    break;

  case 165: /* replace_stmt: REPLACE insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 747 "sql.y"
     { emit("REPLACEASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2902 "sql.tab.c"
    break;

  case 166: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 752 "sql.y"
                    { emit("REPLACESELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2908 "sql.tab.c"
    break;

  case 167: /* stmt: update_stmt  */
#line 756 "sql.y"
                  { emit("STMT"); }
#line 2914 "sql.tab.c"
    break;

  case 168: /* update_stmt: UPDATE update_opts table_references SET update_asgn_list opt_where opt_orderby opt_limit  */
#line 763 "sql.y"
                  { emit("UPDATE %d %d %d", (yyvsp[-6].intval), (yyvsp[-5].intval), (yyvsp[-3].intval)); }
#line 2920 "sql.tab.c"
    break;

  case 169: /* update_opts: %empty  */
#line 766 "sql.y"
                       { (yyval.intval) = 0; }
#line 2926 "sql.tab.c"
    break;

  case 170: /* update_opts: insert_opts LOW_PRIORITY  */
#line 767 "sql.y"
                              { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 2932 "sql.tab.c"
    break;

  case 171: /* update_opts: insert_opts IGNORE  */
#line 768 "sql.y"
                        { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 2938 "sql.tab.c"
    break;

  case 172: /* update_asgn_list: NAME COMPARISON expr  */
#line 773 "sql.y"
     { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
	 emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2945 "sql.tab.c"
    break;

  case 173: /* update_asgn_list: NAME '.' NAME COMPARISON expr  */
#line 776 "sql.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-4].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2952 "sql.tab.c"
    break;

  case 174: /* update_asgn_list: update_asgn_list ',' NAME COMPARISON expr  */
#line 779 "sql.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2959 "sql.tab.c"
    break;

  case 175: /* update_asgn_list: update_asgn_list ',' NAME '.' NAME COMPARISON expr  */
#line 782 "sql.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update  assignment to %s.$s", (yyvsp[-4].strval), (yyvsp[-2].strval)); 
          YYERROR; }
         emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2967 "sql.tab.c"
    break;

  case 176: /* stmt: create_database_stmt  */
#line 789 "sql.y"
                           { emit("STMT"); }
#line 2973 "sql.tab.c"
    break;

  case 177: /* create_database_stmt: CREATE DATABASE opt_if_not_exists NAME  */
#line 794 "sql.y"
       { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2979 "sql.tab.c"
    break;

  case 178: /* create_database_stmt: CREATE SCHEMA opt_if_not_exists NAME  */
#line 796 "sql.y"
       { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2985 "sql.tab.c"
    break;

  case 179: /* opt_if_not_exists: %empty  */
#line 799 "sql.y"
                              { (yyval.intval) = 0; }
#line 2991 "sql.tab.c"
    break;

  case 180: /* opt_if_not_exists: IF EXISTS  */
#line 801 "sql.y"
       { if(!(yyvsp[0].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; }
                        (yyval.intval) = (yyvsp[0].subtok); /* NOT EXISTS hack */ }
#line 2998 "sql.tab.c"
    break;

  case 181: /* stmt: create_table_stmt  */
#line 806 "sql.y"
                        { emit("STMT"); }
#line 3004 "sql.tab.c"
    break;

  case 182: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')'  */
#line 810 "sql.y"
                           { emit("CREATE %d %d %d %s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3010 "sql.tab.c"
    break;

  case 183: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')'  */
#line 814 "sql.y"
                           { emit("CREATE %d %d %d %s.%s", (yyvsp[-8].intval), (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-5].strval), (yyvsp[-3].strval));
                          free((yyvsp[-5].strval)); free((yyvsp[-3].strval)); }
#line 3017 "sql.tab.c"
    break;

  case 184: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')' create_select_statement  */
#line 820 "sql.y"
                                { emit("CREATESELECT %d %d %d %s", (yyvsp[-7].intval), (yyvsp[-5].intval), (yyvsp[-2].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3023 "sql.tab.c"
    break;

  case 185: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME create_select_statement  */
#line 824 "sql.y"
                           { emit("CREATESELECT %d %d 0 %s", (yyvsp[-4].intval), (yyvsp[-2].intval), (yyvsp[-1].strval)); free((yyvsp[-1].strval)); }
#line 3029 "sql.tab.c"
    break;

  case 186: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')' create_select_statement  */
#line 829 "sql.y"
                            { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-9].intval), (yyvsp[-7].intval), (yyvsp[-6].strval), (yyvsp[-4].strval));
                              free((yyvsp[-6].strval)); free((yyvsp[-4].strval)); }
#line 3036 "sql.tab.c"
    break;

  case 187: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME create_select_statement  */
#line 834 "sql.y"
                           { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-3].strval), (yyvsp[-1].strval));
                          free((yyvsp[-3].strval)); free((yyvsp[-1].strval)); }
#line 3043 "sql.tab.c"
    break;

  case 188: /* opt_temporary: %empty  */
#line 838 "sql.y"
                           { (yyval.intval) = 0; }
#line 3049 "sql.tab.c"
    break;

  case 189: /* opt_temporary: TEMPORARY  */
#line 839 "sql.y"
               { (yyval.intval) = 1;}
#line 3055 "sql.tab.c"
    break;

  case 190: /* create_col_list: create_definition  */
#line 842 "sql.y"
                                   { (yyval.intval) = 1; }
#line 3061 "sql.tab.c"
    break;

  case 191: /* create_col_list: create_col_list ',' create_definition  */
#line 843 "sql.y"
                                            { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3067 "sql.tab.c"
    break;

  case 192: /* create_definition: PRIMARY KEY '(' column_list ')'  */
#line 846 "sql.y"
                                                      { emit("PRIKEY %d", (yyvsp[-1].intval)); }
#line 3073 "sql.tab.c"
    break;

  case 193: /* create_definition: KEY '(' column_list ')'  */
#line 847 "sql.y"
                                         { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3079 "sql.tab.c"
    break;

  case 194: /* create_definition: INDEX '(' column_list ')'  */
#line 848 "sql.y"
                                         { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3085 "sql.tab.c"
    break;

  case 195: /* create_definition: FULLTEXT INDEX '(' column_list ')'  */
#line 849 "sql.y"
                                         { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3091 "sql.tab.c"
    break;

  case 196: /* create_definition: FULLTEXT KEY '(' column_list ')'  */
#line 850 "sql.y"
                                         { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3097 "sql.tab.c"
    break;

  case 197: /* $@1: %empty  */
#line 853 "sql.y"
                   { emit("STARTCOL"); }
#line 3103 "sql.tab.c"
    break;

  case 198: /* create_definition: $@1 NAME data_type column_atts  */
#line 854 "sql.y"
                   { emit("COLUMNDEF %d %s", (yyvsp[-1].intval), (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3109 "sql.tab.c"
    break;

  case 199: /* column_atts: %empty  */
#line 856 "sql.y"
                       { (yyval.intval) = 0; }
#line 3115 "sql.tab.c"
    break;

  case 200: /* column_atts: column_atts NOT NULLX  */
#line 857 "sql.y"
                                        { emit("ATTR NOTNULL"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3121 "sql.tab.c"
    break;

  case 202: /* column_atts: column_atts DEFAULT STRING  */
#line 860 "sql.y"
        { emit("ATTR DEFAULT STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3127 "sql.tab.c"
    break;

  case 203: /* column_atts: column_atts DEFAULT INTNUM  */
#line 862 "sql.y"
        { emit("ATTR DEFAULT NUMBER %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3133 "sql.tab.c"
    break;

  case 204: /* column_atts: column_atts DEFAULT APPROXNUM  */
#line 864 "sql.y"
        { emit("ATTR DEFAULT FLOAT %g", (yyvsp[0].floatval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3139 "sql.tab.c"
    break;

  case 205: /* column_atts: column_atts DEFAULT BOOL  */
#line 866 "sql.y"
        { emit("ATTR DEFAULT BOOL %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3145 "sql.tab.c"
    break;

  case 206: /* column_atts: column_atts AUTO_INCREMENT  */
#line 868 "sql.y"
        { emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3151 "sql.tab.c"
    break;

  case 207: /* column_atts: column_atts UNIQUE '(' column_list ')'  */
#line 870 "sql.y"
        { emit("ATTR UNIQUEKEY %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3157 "sql.tab.c"
    break;

  case 208: /* column_atts: column_atts UNIQUE KEY  */
#line 871 "sql.y"
                             { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3163 "sql.tab.c"
    break;

  case 209: /* column_atts: column_atts PRIMARY KEY  */
#line 872 "sql.y"
                              { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3169 "sql.tab.c"
    break;

  case 210: /* column_atts: column_atts KEY  */
#line 873 "sql.y"
                      { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3175 "sql.tab.c"
    break;

  case 211: /* column_atts: column_atts COMMENT STRING  */
#line 875 "sql.y"
        { emit("ATTR COMMENT %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3181 "sql.tab.c"
    break;

  case 212: /* opt_length: %empty  */
#line 878 "sql.y"
                      { (yyval.intval) = 0; }
#line 3187 "sql.tab.c"
    break;

  case 213: /* opt_length: '(' INTNUM ')'  */
#line 879 "sql.y"
                    { (yyval.intval) = (yyvsp[-1].intval); }
#line 3193 "sql.tab.c"
    break;

  case 214: /* opt_length: '(' INTNUM ',' INTNUM ')'  */
#line 880 "sql.y"
                               { (yyval.intval) = (yyvsp[-3].intval) + 1000*(yyvsp[-1].intval); }
#line 3199 "sql.tab.c"
    break;

  case 215: /* opt_binary: %empty  */
#line 883 "sql.y"
                      { (yyval.intval) = 0; }
#line 3205 "sql.tab.c"
    break;

  case 216: /* opt_binary: BINARY  */
#line 884 "sql.y"
            { (yyval.intval) = 4000; }
#line 3211 "sql.tab.c"
    break;

  case 217: /* opt_uz: %empty  */
#line 887 "sql.y"
                  { (yyval.intval) = 0; }
#line 3217 "sql.tab.c"
    break;

  case 218: /* opt_uz: opt_uz UNSIGNED  */
#line 888 "sql.y"
                     { (yyval.intval) = (yyvsp[-1].intval) | 1000; }
#line 3223 "sql.tab.c"
    break;

  case 219: /* opt_uz: opt_uz ZEROFILL  */
#line 889 "sql.y"
                     { (yyval.intval) = (yyvsp[-1].intval) | 2000; }
#line 3229 "sql.tab.c"
    break;

  case 221: /* opt_csc: opt_csc CHAR SET STRING  */
#line 893 "sql.y"
                             { emit("COLCHARSET %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3235 "sql.tab.c"
    break;

  case 222: /* opt_csc: opt_csc COLLATE STRING  */
#line 894 "sql.y"
                            { emit("COLCOLLATE %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3241 "sql.tab.c"
    break;

  case 223: /* data_type: BIT opt_length  */
#line 898 "sql.y"
                    { (yyval.intval) = 10000 + (yyvsp[0].intval); }
#line 3247 "sql.tab.c"
    break;

  case 224: /* data_type: TINYINT opt_length opt_uz  */
#line 899 "sql.y"
                               { (yyval.intval) = 10000 + (yyvsp[-1].intval); }
#line 3253 "sql.tab.c"
    break;

  case 225: /* data_type: SMALLINT opt_length opt_uz  */
#line 900 "sql.y"
                                { (yyval.intval) = 20000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3259 "sql.tab.c"
    break;

  case 226: /* data_type: MEDIUMINT opt_length opt_uz  */
#line 901 "sql.y"
                                 { (yyval.intval) = 30000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3265 "sql.tab.c"
    break;

  case 227: /* data_type: INT opt_length opt_uz  */
#line 902 "sql.y"
                           { (yyval.intval) = 40000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3271 "sql.tab.c"
    break;

  case 228: /* data_type: INTEGER opt_length opt_uz  */
#line 903 "sql.y"
                               { (yyval.intval) = 50000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3277 "sql.tab.c"
    break;

  case 229: /* data_type: BIGINT opt_length opt_uz  */
#line 904 "sql.y"
                              { (yyval.intval) = 60000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3283 "sql.tab.c"
    break;

  case 230: /* data_type: REAL opt_length opt_uz  */
#line 905 "sql.y"
                            { (yyval.intval) = 70000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3289 "sql.tab.c"
    break;

  case 231: /* data_type: DOUBLE opt_length opt_uz  */
#line 906 "sql.y"
                              { (yyval.intval) = 80000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3295 "sql.tab.c"
    break;

  case 232: /* data_type: FLOAT opt_length opt_uz  */
#line 907 "sql.y"
                             { (yyval.intval) = 90000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3301 "sql.tab.c"
    break;

  case 233: /* data_type: DECIMAL opt_length opt_uz  */
#line 908 "sql.y"
                               { (yyval.intval) = 110000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3307 "sql.tab.c"
    break;

  case 234: /* data_type: DATE  */
#line 909 "sql.y"
          { (yyval.intval) = 100001; }
#line 3313 "sql.tab.c"
    break;

  case 235: /* data_type: TIME  */
#line 910 "sql.y"
          { (yyval.intval) = 100002; }
#line 3319 "sql.tab.c"
    break;

  case 236: /* data_type: TIMESTAMP  */
#line 911 "sql.y"
               { (yyval.intval) = 100003; }
#line 3325 "sql.tab.c"
    break;

  case 237: /* data_type: DATETIME  */
#line 912 "sql.y"
              { (yyval.intval) = 100004; }
#line 3331 "sql.tab.c"
    break;

  case 238: /* data_type: YEAR  */
#line 913 "sql.y"
          { (yyval.intval) = 100005; }
#line 3337 "sql.tab.c"
    break;

  case 239: /* data_type: CHAR opt_length opt_csc  */
#line 914 "sql.y"
                             { (yyval.intval) = 120000 + (yyvsp[-1].intval); }
#line 3343 "sql.tab.c"
    break;

  case 240: /* data_type: VARCHAR '(' INTNUM ')' opt_csc  */
#line 915 "sql.y"
                                    { (yyval.intval) = 130000 + (yyvsp[-2].intval); }
#line 3349 "sql.tab.c"
    break;

  case 241: /* data_type: BINARY opt_length  */
#line 916 "sql.y"
                       { (yyval.intval) = 140000 + (yyvsp[0].intval); }
#line 3355 "sql.tab.c"
    break;

  case 242: /* data_type: VARBINARY '(' INTNUM ')'  */
#line 917 "sql.y"
                              { (yyval.intval) = 150000 + (yyvsp[-1].intval); }
#line 3361 "sql.tab.c"
    break;

  case 243: /* data_type: TINYBLOB  */
#line 918 "sql.y"
              { (yyval.intval) = 160001; }
#line 3367 "sql.tab.c"
    break;

  case 244: /* data_type: BLOB  */
#line 919 "sql.y"
          { (yyval.intval) = 160002; }
#line 3373 "sql.tab.c"
    break;

  case 245: /* data_type: MEDIUMBLOB  */
#line 920 "sql.y"
                { (yyval.intval) = 160003; }
#line 3379 "sql.tab.c"
    break;

  case 246: /* data_type: LONGBLOB  */
#line 921 "sql.y"
              { (yyval.intval) = 160004; }
#line 3385 "sql.tab.c"
    break;

  case 247: /* data_type: TINYTEXT opt_binary opt_csc  */
#line 922 "sql.y"
                                 { (yyval.intval) = 170000 + (yyvsp[-1].intval); }
#line 3391 "sql.tab.c"
    break;

  case 248: /* data_type: TEXT opt_binary opt_csc  */
#line 923 "sql.y"
                             { (yyval.intval) = 171000 + (yyvsp[-1].intval); }
#line 3397 "sql.tab.c"
    break;

  case 249: /* data_type: MEDIUMTEXT opt_binary opt_csc  */
#line 924 "sql.y"
                                   { (yyval.intval) = 172000 + (yyvsp[-1].intval); }
#line 3403 "sql.tab.c"
    break;

  case 250: /* data_type: LONGTEXT opt_binary opt_csc  */
#line 925 "sql.y"
                                 { (yyval.intval) = 173000 + (yyvsp[-1].intval); }
#line 3409 "sql.tab.c"
    break;

  case 251: /* data_type: ENUM '(' enum_list ')' opt_csc  */
#line 926 "sql.y"
                                    { (yyval.intval) = 200000 + (yyvsp[-2].intval); }
#line 3415 "sql.tab.c"
    break;

  case 252: /* data_type: SET '(' enum_list ')' opt_csc  */
#line 927 "sql.y"
                                   { (yyval.intval) = 210000 + (yyvsp[-2].intval); }
#line 3421 "sql.tab.c"
    break;

  case 253: /* enum_list: STRING  */
#line 930 "sql.y"
                  { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 3427 "sql.tab.c"
    break;

  case 254: /* enum_list: enum_list ',' STRING  */
#line 931 "sql.y"
                          { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3433 "sql.tab.c"
    break;

  case 255: /* create_select_statement: opt_ignore_replace opt_as select_stmt  */
#line 934 "sql.y"
                                                                  { emit("CREATESELECT %d", (yyvsp[-2].intval)); }
#line 3439 "sql.tab.c"
    break;

  case 256: /* opt_ignore_replace: %empty  */
#line 937 "sql.y"
                              { (yyval.intval) = 0; }
#line 3445 "sql.tab.c"
    break;

  case 257: /* opt_ignore_replace: IGNORE  */
#line 938 "sql.y"
            { (yyval.intval) = 1; }
#line 3451 "sql.tab.c"
    break;

  case 258: /* opt_ignore_replace: REPLACE  */
#line 939 "sql.y"
             { (yyval.intval) = 2; }
#line 3457 "sql.tab.c"
    break;

  case 259: /* stmt: set_stmt  */
#line 944 "sql.y"
               { emit("STMT"); }
#line 3463 "sql.tab.c"
    break;

  case 263: /* set_expr: USERVAR COMPARISON expr  */
#line 952 "sql.y"
                              { if ((yyvsp[-1].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[-2].strval)); YYERROR; }
                 emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3470 "sql.tab.c"
    break;

  case 264: /* set_expr: USERVAR ASSIGN expr  */
#line 954 "sql.y"
                          { emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3476 "sql.tab.c"
    break;


#line 3480 "sql.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 957 "sql.y"

void
emit(char *s, ...)
{
}

void
yyerror(char *s, ...)
{
}

void 
YYGotNAME(const char *str)
{
   switch (YYCurState)
   {
      case YYState_SELECT:
         PushAttIntoPTModule_SELECT(str);
         break;
      case YYState_FROM:
         AddRelationNameIntoPT(str);
         break; 
   }
   return;   
}

/*
void 
GotInt
void
main(int ac, char **av)
{

  if(!yyparse())
    printf("SQL parse worked\n");
  else
    printf("SQL parse failed\n");

}
*/
