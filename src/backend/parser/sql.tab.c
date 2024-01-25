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
GotStringArg(const char *str);

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
  YYSYMBOL_state_select = 269,             /* state_select  */
  YYSYMBOL_state_from = 270,               /* state_from  */
  YYSYMBOL_state_where = 271,              /* state_where  */
  YYSYMBOL_opt_where = 272,                /* opt_where  */
  YYSYMBOL_opt_groupby = 273,              /* opt_groupby  */
  YYSYMBOL_groupby_list = 274,             /* groupby_list  */
  YYSYMBOL_opt_asc_desc = 275,             /* opt_asc_desc  */
  YYSYMBOL_opt_with_rollup = 276,          /* opt_with_rollup  */
  YYSYMBOL_opt_having = 277,               /* opt_having  */
  YYSYMBOL_opt_orderby = 278,              /* opt_orderby  */
  YYSYMBOL_opt_limit = 279,                /* opt_limit  */
  YYSYMBOL_opt_into_list = 280,            /* opt_into_list  */
  YYSYMBOL_column_list = 281,              /* column_list  */
  YYSYMBOL_select_expr_list = 282,         /* select_expr_list  */
  YYSYMBOL_select_expr = 283,              /* select_expr  */
  YYSYMBOL_opt_as_alias = 284,             /* opt_as_alias  */
  YYSYMBOL_table_references = 285,         /* table_references  */
  YYSYMBOL_opt_as = 286,                   /* opt_as  */
  YYSYMBOL_delete_stmt = 287,              /* delete_stmt  */
  YYSYMBOL_delete_opts = 288,              /* delete_opts  */
  YYSYMBOL_delete_list = 289,              /* delete_list  */
  YYSYMBOL_opt_dot_star = 290,             /* opt_dot_star  */
  YYSYMBOL_insert_stmt = 291,              /* insert_stmt  */
  YYSYMBOL_opt_ondupupdate = 292,          /* opt_ondupupdate  */
  YYSYMBOL_insert_opts = 293,              /* insert_opts  */
  YYSYMBOL_opt_into = 294,                 /* opt_into  */
  YYSYMBOL_opt_col_names = 295,            /* opt_col_names  */
  YYSYMBOL_insert_vals_list = 296,         /* insert_vals_list  */
  YYSYMBOL_insert_vals = 297,              /* insert_vals  */
  YYSYMBOL_insert_asgn_list = 298,         /* insert_asgn_list  */
  YYSYMBOL_replace_stmt = 299,             /* replace_stmt  */
  YYSYMBOL_update_stmt = 300,              /* update_stmt  */
  YYSYMBOL_update_opts = 301,              /* update_opts  */
  YYSYMBOL_update_asgn_list = 302,         /* update_asgn_list  */
  YYSYMBOL_create_database_stmt = 303,     /* create_database_stmt  */
  YYSYMBOL_opt_if_not_exists = 304,        /* opt_if_not_exists  */
  YYSYMBOL_create_table_stmt = 305,        /* create_table_stmt  */
  YYSYMBOL_opt_temporary = 306,            /* opt_temporary  */
  YYSYMBOL_create_col_list = 307,          /* create_col_list  */
  YYSYMBOL_create_definition = 308,        /* create_definition  */
  YYSYMBOL_309_1 = 309,                    /* $@1  */
  YYSYMBOL_column_atts = 310,              /* column_atts  */
  YYSYMBOL_opt_length = 311,               /* opt_length  */
  YYSYMBOL_opt_binary = 312,               /* opt_binary  */
  YYSYMBOL_opt_uz = 313,                   /* opt_uz  */
  YYSYMBOL_opt_csc = 314,                  /* opt_csc  */
  YYSYMBOL_data_type = 315,                /* data_type  */
  YYSYMBOL_enum_list = 316,                /* enum_list  */
  YYSYMBOL_create_select_statement = 317,  /* create_select_statement  */
  YYSYMBOL_opt_ignore_replace = 318,       /* opt_ignore_replace  */
  YYSYMBOL_set_stmt = 319,                 /* set_stmt  */
  YYSYMBOL_set_list = 320,                 /* set_list  */
  YYSYMBOL_set_expr = 321                  /* set_expr  */
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
#define YYLAST   1762

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  259
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  269
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  551

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
     461,   462,   472,   473,   479,   480,   482,   483,   486,   487,
     489,   490,   494,   496,   500,   501,   502,   505,   506,   509,
     510,   512,   513,   516,   516,   517,   520,   521,   524,   525,
     529,   530,   531,   534,   536,   537,   538,   542,   543,   556,
     557,   625,   629,   634,   635,   636,   637,   641,   646,   647,
     651,   651,   654,   662,   665,   671,   672,   675,   676,   677,
     678,   679,   682,   682,   685,   686,   689,   690,   693,   694,
     695,   696,   698,   705,   708,   711,   714,   719,   725,   728,
     734,   740,   746,   749,   756,   757,   758,   762,   765,   768,
     771,   779,   783,   785,   789,   790,   796,   799,   803,   808,
     813,   817,   823,   828,   829,   832,   833,   836,   837,   838,
     839,   840,   843,   843,   846,   847,   848,   849,   851,   853,
     855,   857,   859,   861,   862,   863,   864,   868,   869,   870,
     873,   874,   877,   878,   879,   882,   883,   884,   888,   889,
     890,   891,   892,   893,   894,   895,   896,   897,   898,   899,
     900,   901,   902,   903,   904,   905,   906,   907,   908,   909,
     910,   911,   912,   913,   914,   915,   916,   917,   920,   921,
     924,   927,   928,   929,   934,   937,   939,   939,   942,   944
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
  "case_list", "stmt", "select_stmt", "state_select", "state_from",
  "state_where", "opt_where", "opt_groupby", "groupby_list",
  "opt_asc_desc", "opt_with_rollup", "opt_having", "opt_orderby",
  "opt_limit", "opt_into_list", "column_list", "select_expr_list",
  "select_expr", "opt_as_alias", "table_references", "opt_as",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "insert_stmt", "opt_ondupupdate", "insert_opts", "opt_into",
  "opt_col_names", "insert_vals_list", "insert_vals", "insert_asgn_list",
  "replace_stmt", "update_stmt", "update_opts", "update_asgn_list",
  "create_database_stmt", "opt_if_not_exists", "create_table_stmt",
  "opt_temporary", "create_col_list", "create_definition", "$@1",
  "column_atts", "opt_length", "opt_binary", "opt_uz", "opt_csc",
  "data_type", "enum_list", "create_select_statement",
  "opt_ignore_replace", "set_stmt", "set_list", "set_expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-400)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-189)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     173,   -32,  -400,  -400,  -400,  -400,    37,    10,     2,  -216,
    -400,   276,  -400,  -400,  -400,  -400,  -400,  -400,  -400,   -54,
     -54,  -400,  -143,    24,   213,   213,   143,  -165,  -400,   201,
     121,  -400,  -121,  -400,  -180,  -400,  -400,  -400,  -400,   141,
     597,   597,   597,  -400,   597,   305,  -400,  -400,  -400,  -102,
     -71,   -48,   -45,   -34,   -21,  1576,   -91,  -400,     7,   266,
     269,   -54,    34,   297,  -400,  -400,  -400,   -88,  -400,  -400,
    -400,  -400,  -400,   312,   321,   597,   597,    37,    12,    13,
    -400,   110,  -400,   324,   597,   597,   777,   777,  -400,  -400,
     597,  1054,   -62,  -134,   597,   131,   597,   597,   382,  -400,
     597,   597,   597,    84,     8,   597,   597,   248,   597,     1,
     597,   597,   597,   597,   597,   597,   597,   597,   597,   597,
     597,   597,   597,   597,   597,   597,   339,  -400,  -400,   597,
     121,  -400,  -400,  -400,   341,   323,  -400,   256,  -185,   121,
     348,  -140,  -139,  1513,  1513,  -400,   352,  -400,   700,  -400,
     102,  1513,  1134,   -58,   597,  -400,   597,   105,   673,   116,
    -400,  -400,  -400,   139,   597,   841,   868,   155,   967,  1677,
    1702,   724,   221,  -400,    15,  -400,  1726,  1726,   142,   597,
     597,  1618,   162,   167,   189,  -134,   884,  1150,  1274,  1209,
     628,   628,   425,   425,   425,   425,   448,   335,   300,   240,
     181,   359,  -400,  -400,  -400,  1120,   -36,  -400,  -400,   597,
     264,   121,   -78,    34,   447,   462,    31,   447,    83,   -19,
     -17,   597,  -400,   597,   597,  -400,  1432,  1179,  -400,   597,
    -400,  -400,  1405,   340,   340,  -400,  -400,   209,   218,  -400,
    -400,   221,  1726,  1726,   597,  -134,  -134,  -134,   219,   366,
    -400,  -400,   483,   293,  -400,   444,  1513,   436,   353,   -78,
    -400,  -400,   471,  -137,  -400,    30,   236,   333,  -137,   236,
     333,   597,   491,   492,   264,  -400,  1513,  1459,  -400,   597,
     940,   597,   597,   244,   245,  -400,  -400,   246,   247,   802,
     249,   250,   251,  -400,   452,   385,   -96,    79,   253,   259,
     381,    49,  -400,   519,  -400,  -113,   597,   597,  -400,  -400,
     429,   392,   529,  -400,  -400,   530,   513,  -136,  -400,  -400,
    -136,  -400,  1651,   514,   -10,   353,  -400,  1513,   597,  -400,
     278,  1027,  -400,  -400,  -400,  -400,  -400,  -400,  -400,   597,
     597,   264,   293,  -400,   280,   281,   462,   462,   283,   -40,
     293,  1170,  -400,  1540,   282,   913,  -400,  1513,   313,   522,
    -400,  -400,  1513,    63,   287,  -400,  -400,   597,   597,   548,
    -400,   994,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -199,  1513,   353,    81,   462,   462,   107,   120,
     462,  -400,  -400,   296,   296,   296,  -400,   296,  -400,  -400,
     296,   296,   307,   296,   296,   296,  -400,   512,  -400,   296,
     512,   296,   308,   296,   512,  -400,  -400,  -400,   296,   512,
     309,   310,  -400,  -400,  -400,  -400,  -400,   597,   597,   447,
     542,  -400,   568,   513,  1651,  1651,   550,  -400,   391,  -400,
     440,   -22,   152,   157,  -400,  -400,   168,   573,  -400,  -400,
    -400,  -400,  -400,  -400,   575,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,   575,  -400,  -400,  -400,  -400,   576,   582,
     147,  1540,  1513,   322,  -400,  1513,  -400,  1513,   172,   597,
    -400,   462,  -400,  -400,  -400,  -400,  -400,   182,  -166,   184,
    -166,  -166,  -400,   185,  -166,  -166,  -166,   184,  -166,   184,
    -166,   191,  -166,   184,  -166,   184,   331,   332,   433,  -400,
     588,   399,  -400,  -400,   463,   -99,  -400,  -400,  1651,   337,
    -400,   591,  -400,  -400,   406,   602,  -400,   603,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,   462,
     351,   605,  -400,   184,  -400,   184,   184,   206,  -400,  -400,
    -400
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      92,   193,   136,   147,   147,    93,     0,   147,    92,     0,
      89,     0,   131,   143,   168,   172,   181,   186,   264,   184,
     184,   194,     0,     0,   153,   153,     0,   265,   266,     0,
     127,     1,     0,     2,     4,     7,     8,    10,     9,     6,
       0,     0,     0,   122,     0,     0,    86,    87,    85,     0,
       0,     0,     0,     0,     0,   126,    94,   120,     0,     0,
       0,   184,   140,     0,   135,   133,   134,     0,   149,   150,
     151,   152,   148,     0,     0,     0,     0,     0,   151,   148,
     128,     0,     3,     0,    46,     0,    25,    26,    17,    88,
       0,     0,     0,    92,     0,     0,     0,     0,     0,   125,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   123,    95,     0,
     127,   185,   182,   183,     0,     0,   138,    96,     0,   127,
       0,   154,   154,   269,   268,   267,     0,     5,    44,    47,
       0,    42,     0,     0,     0,    77,     0,     0,    44,     0,
      63,    61,    62,     0,     0,     0,     0,     0,     0,    19,
      20,    18,    90,    40,     0,    38,    81,    83,     0,     0,
       0,     0,     0,     0,     0,    92,    33,    21,    22,    24,
      11,    12,    13,    14,    15,    16,    23,    27,    30,    29,
      32,    31,    28,   124,   121,    96,   261,   141,    97,     0,
     111,   127,    96,   140,     0,     0,    92,     0,    92,     0,
      96,     0,    53,     0,     0,    75,     0,     0,    52,     0,
      56,    59,     0,     0,     0,    54,    55,     0,     0,    41,
      39,    90,    82,    84,     0,    92,    92,    92,     0,   100,
     262,   263,     0,   202,   190,   130,    99,     0,   113,    96,
     137,   139,     0,   145,   118,     0,     0,   145,   145,     0,
     145,     0,     0,     0,   111,    45,    79,     0,    78,     0,
       0,     0,     0,     0,     0,    48,    50,     0,     0,    43,
       0,     0,     0,    34,     0,   109,   261,     0,     0,     0,
       0,     0,   195,     0,   129,    92,     0,     0,   132,   142,
       0,     0,     0,   162,   155,     0,     0,   145,   167,   170,
     145,   171,   177,     0,     0,   113,    76,    80,     0,    57,
       0,     0,    64,    65,    49,    51,    37,    35,    36,     0,
       0,   111,   202,   192,     0,     0,     0,     0,     0,   261,
     202,     0,   260,   104,   112,   114,   164,   163,     0,     0,
     119,   159,   158,     0,     0,   144,   169,     0,     0,     0,
     173,     0,    60,    66,    67,    68,    69,    72,    73,    74,
      71,    70,   107,   110,   113,     0,     0,     0,     0,     0,
       0,   189,   196,   217,   217,   217,   249,   217,   239,   242,
     217,   217,     0,   217,   217,   217,   251,   220,   250,   217,
     220,   217,     0,   217,   220,   240,   241,   248,   217,   220,
       0,     0,   243,   204,   105,   106,   102,     0,     0,     0,
       0,   156,     0,     0,   178,   179,     0,    58,     0,   101,
     116,   261,     0,     0,   199,   198,     0,     0,   222,   246,
     228,   225,   222,   222,     0,   222,   222,   222,   221,   225,
     222,   225,   222,     0,   222,   225,   222,   225,     0,     0,
     203,   104,   115,   146,   166,   165,   161,   160,     0,     0,
     108,     0,    91,   191,   200,   201,   197,     0,   234,   244,
     238,   236,   258,     0,   237,   232,   233,   255,   231,   254,
     235,     0,   230,   253,   229,   252,     0,     0,     0,   211,
       0,     0,   215,   206,     0,     0,   103,   157,   180,   117,
     218,     0,   223,   224,     0,     0,   225,     0,   225,   247,
     225,   205,   216,   207,   208,   210,   209,   214,   213,     0,
       0,     0,   227,   256,   259,   257,   245,     0,   219,   226,
     212
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -400,  -400,   -11,   -47,  -400,  -400,   376,   525,   610,   -57,
    -400,  -400,  -400,   138,  -400,   284,   148,  -400,  -400,  -155,
    -233,  -400,  -335,  -400,   496,  -400,   -81,  -400,  -400,  -400,
     557,   408,  -400,   124,   171,   604,   485,   367,   195,  -214,
    -400,  -400,  -400,  -400,  -400,   146,  -400,  -400,   298,   291,
    -400,  -400,   716,  -152,   316,  -399,  -400,   179,  -268,  -400,
    -400,  -400,   566
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     8,   148,   149,   150,   164,   283,    92,     9,    10,
      11,   130,   209,   210,   295,   354,   426,   439,   341,   258,
     308,   482,   265,    56,    57,   127,    81,   305,    12,    23,
      67,   136,    13,   313,    24,    73,   216,   317,   363,   263,
      14,    15,    30,   220,    16,    59,    17,    22,   301,   302,
     303,   470,   448,   459,   488,   489,   423,   493,   254,   255,
      18,    27,    28
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,   271,    31,   268,    34,    35,    36,    37,    38,    39,
     368,   388,   389,  -174,   173,  -176,  -175,   128,    40,    41,
     139,   239,   250,   311,   311,   174,    42,    62,   343,    86,
      87,    88,   538,    89,    91,   154,   157,   155,    33,   224,
     182,   225,    19,   438,   183,    26,   211,   159,   163,   205,
      44,   442,   443,   214,   217,   446,     5,    45,   212,   427,
     497,   522,   499,    58,   143,   144,   503,    61,   505,     1,
      46,    47,    48,   140,   151,    83,    84,     5,   250,   152,
     523,   391,   250,   158,   251,   165,   166,   168,     2,   169,
     170,   171,   370,    77,   176,   177,   250,   181,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   238,   215,   215,    55,   325,
     -98,   312,   364,   -90,    80,   237,     3,   543,   248,   545,
     259,   546,    63,    82,    34,    35,    36,    37,    38,    39,
     251,   -90,    64,   226,   251,   227,   519,   -98,    40,    41,
      85,   440,    75,   232,    93,    20,    42,   539,   251,   267,
     342,   270,   208,    76,   508,   175,    60,   129,   242,   243,
     140,    65,   240,   483,   275,    25,   -98,   156,    29,    21,
      44,   156,     4,   160,   288,    94,   384,    45,   290,   291,
     292,   -90,     5,   509,   287,     6,    66,   184,   256,   344,
      46,    47,    48,  -174,   547,  -176,  -175,   134,    95,   510,
     345,    96,   276,   277,  -187,   473,   124,   125,   280,   252,
     253,     5,    97,   208,    34,    35,    36,    37,    38,    39,
       7,   511,  -188,   289,   330,    98,   272,   -98,    40,    41,
       1,   273,   524,   -90,   525,   369,    42,   -92,   352,    49,
      50,    51,    52,    53,    54,   131,   -90,   185,   461,     2,
     322,   178,   465,   179,   180,   161,   266,   467,   327,   132,
      44,   331,   133,     5,   123,   124,   125,    45,   512,    34,
      35,    36,    37,    38,    39,   -90,    68,   314,   315,   135,
      46,    47,    48,    40,    41,   353,   355,     3,    68,   357,
     137,    42,    43,   146,   513,   362,   349,   350,    34,    35,
      36,    37,    38,    39,    69,   141,   514,   371,   269,    78,
     431,   432,    40,    41,   142,    44,    69,   147,   353,   383,
      42,    70,    45,   122,   123,   124,   125,   -90,   441,   350,
     172,    71,   203,   249,   206,    46,    47,    48,    79,   207,
     260,   213,   162,     4,    44,   219,   434,   435,   274,   222,
      72,    45,   228,     5,   444,   315,     6,   121,   122,   123,
     124,   125,   515,   230,    46,    47,    48,   445,   315,    49,
      50,    51,    52,    53,    54,    34,    35,    36,    37,    38,
      39,   318,   319,   -98,   321,   125,   231,   309,   241,    40,
      41,     7,   297,   533,   534,   535,   536,    42,   167,   484,
     315,     5,   235,   298,   485,   315,   471,   472,   245,   475,
     -98,   477,   362,   246,   299,   486,   315,   -90,   257,   517,
     432,    44,    34,    35,    36,    37,    38,    39,    45,   520,
     521,   365,   526,   527,   366,   247,    40,    41,   528,   527,
     262,    46,    47,    48,    42,   119,   120,   121,   122,   123,
     124,   125,   300,   550,   315,   264,   285,   282,   518,    49,
      50,    51,    52,    53,    54,   286,   293,   294,    44,   120,
     121,   122,   123,   124,   125,    45,   296,  -140,   304,   306,
     307,   310,   316,   311,   323,   324,   208,   340,    46,    47,
      48,   332,   333,   334,   335,   339,   336,   337,   338,   346,
     -98,   135,   348,   356,  -140,   347,    34,    35,    36,    37,
      38,    39,   351,   358,    49,    50,    51,    52,    53,    54,
      40,    41,   359,   360,   367,   372,   386,   387,    42,   390,
     427,   429,   430,   433,    90,    34,    35,    36,    37,    38,
      39,   436,   447,    49,    50,    51,    52,    53,    54,    40,
      41,   458,    44,   454,   463,   468,   469,    42,   481,    45,
     479,    34,    35,    36,    37,    38,    39,   480,   487,   492,
     312,   506,    46,    47,    48,    40,    41,   507,   529,   530,
     531,    44,   532,    42,   537,   315,   540,   361,    45,   541,
      34,    35,    36,    37,    38,    39,   542,   544,   548,   549,
     284,    46,    47,    48,    40,    41,   153,    44,    32,   516,
     138,   261,    42,   382,    45,   204,   474,   218,   478,    74,
      49,    50,    51,    52,    53,    54,   320,    46,    47,    48,
     385,   392,   501,   145,     0,     0,    44,     0,     0,     0,
       0,     0,   476,    45,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,     0,    46,    47,    48,     0,
       0,     0,     0,     0,     0,     0,     0,    49,    50,    51,
      52,    53,    54,   100,   101,   102,   103,   104,   105,   106,
     107,     0,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     100,   101,   102,   103,   104,   105,   106,   107,     0,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   103,   104,   105,
     106,   107,     0,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,    49,    50,    51,    52,    53,    54,     0,   490,   491,
       0,   494,   495,   496,     0,     0,   498,     0,   500,     0,
     502,   229,   504,     0,     0,     0,     0,     0,     0,     0,
      49,    50,    51,    52,    53,    54,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,     0,     0,    49,    50,    51,    52,
      53,    54,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,     0,
       0,     0,     0,     0,     0,    49,    50,    51,    52,    53,
      54,   100,   101,   102,   103,   104,   105,   106,   107,     0,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   100,   101,
     102,   103,   104,   105,   106,   107,     0,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,     0,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   221,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     100,   101,   102,   103,   104,   105,   106,   107,   221,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   100,   101,   102,
     103,   104,   105,   106,   107,     0,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   100,   101,   102,   103,   104,   105,
     106,   107,     0,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,     0,     0,     0,     0,     0,     0,   100,   101,   102,
     103,   104,   105,   106,   107,   328,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   100,   101,   102,   103,   104,   105,
     106,   107,     0,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,     0,     0,     0,     0,     0,     0,     0,     0,   233,
       0,     0,     0,     0,     0,   373,   374,   375,   376,     0,
     449,   450,     0,   451,     0,     0,   452,   453,     0,   455,
     456,   457,     0,     0,     0,   460,   234,   462,     0,   464,
       0,     0,     0,     0,   466,     0,     0,     0,     0,     0,
       0,   377,   378,   379,   100,   101,   102,   103,   104,   105,
     106,   107,     0,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   428,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,     0,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   329,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,     0,     0,   393,   394,
     395,   396,     0,     0,   236,     0,     0,     0,   397,     0,
       0,   -98,   -98,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   398,   399,   -98,     0,
       0,   437,   400,     0,     0,     0,     0,   -98,     0,     0,
       0,     0,     0,   401,     0,     0,     0,     0,     0,     0,
     402,   380,   381,     0,   403,     0,     0,     0,     0,     0,
     -98,     0,     0,     0,   -98,     0,     0,     0,     0,     0,
       0,     0,     0,    90,     0,   404,   405,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,     0,     0,     0,   406,   407,     0,     0,     0,   408,
     409,   410,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   411,     0,     0,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     208,     0,     0,   412,     0,   413,     0,     0,     0,     0,
       0,     0,     0,     0,   -98,     0,     0,   -98,     0,     0,
       0,     0,     0,   414,     0,   415,   416,   417,   418,   419,
       0,     0,     0,   279,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   420,   421,     0,     0,
       0,     0,     0,     0,   422,   100,   101,   102,   103,   104,
     105,   106,   107,     0,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   100,   101,   102,   103,   104,   105,   106,   107,
       0,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   100,
     101,   102,   103,   104,   105,   106,   107,     0,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   281,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   278,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     100,   101,   102,   103,   104,   105,   106,   107,   326,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,     0,     0,    99,
       0,     0,     0,     0,     0,   424,   100,   101,   102,   103,
     104,   105,   106,   107,     0,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,     0,     0,     0,     0,     0,     0,     0,
     126,     0,     0,     0,     0,     0,     0,   425,   100,   101,
     102,   103,   104,   105,   106,   107,     0,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,     0,     0,     0,     0,     0,
     244,   100,   101,   102,   103,   104,   105,   106,     0,     0,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   101,   102,
     103,   104,   105,   106,   107,     0,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   102,   103,   104,   105,   106,   107,
       0,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,  -189,
    -189,  -189,  -189,   107,     0,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125
};

static const yytype_int16 yycheck[] =
{
      11,    20,     0,   217,     3,     4,     5,     6,     7,     8,
      20,   346,   347,     3,     6,     3,     3,   108,    17,    18,
     108,     6,   118,   160,   160,    17,    25,     3,   296,    40,
      41,    42,   131,    44,    45,    97,    93,    99,   254,    97,
      39,    99,    74,   242,    43,     8,   231,    94,    95,   130,
      49,   386,   387,   193,   193,   390,   190,    56,   139,   258,
     459,   227,   461,   117,    75,    76,   465,   210,   467,    67,
      69,    70,    71,   258,    85,   255,   256,   190,   118,    90,
     246,   349,   118,    94,   180,    96,    97,    98,    86,   100,
     101,   102,   325,   258,   105,   106,   118,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   172,   256,   256,   129,   274,
     137,   258,   258,   257,     3,   172,   124,   526,   185,   528,
     211,   530,   108,   254,     3,     4,     5,     6,     7,     8,
     180,   254,   118,   154,   180,   156,   481,   164,    17,    18,
       9,   384,     9,   164,   256,   187,    25,   256,   180,   216,
     256,   218,   240,    20,    17,   157,    20,   258,   179,   180,
     258,   147,   157,   441,   221,     4,   254,   239,     7,   211,
      49,   239,   180,    52,   241,   256,   341,    56,   245,   246,
     247,   160,   190,    46,   241,   193,   172,   196,   209,   120,
      69,    70,    71,   193,   539,   193,   193,    61,   256,    62,
     131,   256,   223,   224,   254,   429,    35,    36,   229,   255,
     256,   190,   256,   240,     3,     4,     5,     6,     7,     8,
     228,    84,   254,   244,   281,   256,   255,   254,    17,    18,
      67,   258,    58,   160,    60,   255,    25,    26,   305,   248,
     249,   250,   251,   252,   253,   248,   254,   256,   410,    86,
     271,    13,   414,    15,    16,   134,   235,   419,   279,     3,
      49,   282,     3,   190,    34,    35,    36,    56,   131,     3,
       4,     5,     6,     7,     8,   254,    85,   257,   258,   255,
      69,    70,    71,    17,    18,   306,   307,   124,    85,   310,
       3,    25,    26,   193,   157,   316,   257,   258,     3,     4,
       5,     6,     7,     8,   113,     3,   169,   328,   235,   118,
     257,   258,    17,    18,     3,    49,   113,     3,   339,   340,
      25,   118,    56,    33,    34,    35,    36,   254,   257,   258,
     256,   128,     3,   205,     3,    69,    70,    71,   147,    26,
     212,     3,   221,   180,    49,     3,   367,   368,   220,   257,
     147,    56,   257,   190,   257,   258,   193,    32,    33,    34,
      35,    36,   225,   257,    69,    70,    71,   257,   258,   248,
     249,   250,   251,   252,   253,     3,     4,     5,     6,     7,
       8,   267,   268,   137,   270,    36,   257,   259,   256,    17,
      18,   228,   109,     4,     5,     6,     7,    25,    26,   257,
     258,   190,   257,   120,   257,   258,   427,   428,   256,   430,
     164,   432,   433,   256,   131,   257,   258,   254,   164,   257,
     258,    49,     3,     4,     5,     6,     7,     8,    56,   257,
     258,   317,   257,   258,   320,   256,    17,    18,   257,   258,
       3,    69,    70,    71,    25,    30,    31,    32,    33,    34,
      35,    36,   169,   257,   258,     3,   257,   127,   479,   248,
     249,   250,   251,   252,   253,   257,   257,   111,    49,    31,
      32,    33,    34,    35,    36,    56,     3,   231,    44,    53,
     137,    20,   256,   160,     3,     3,   240,   112,    69,    70,
      71,   257,   257,   257,   257,    53,   257,   257,   257,   256,
     254,   255,   131,    84,   258,   256,     3,     4,     5,     6,
       7,     8,     3,   131,   248,   249,   250,   251,   252,   253,
      17,    18,     3,     3,    20,   257,   256,   256,    25,   256,
     258,   228,    20,   256,   239,     3,     4,     5,     6,     7,
       8,     3,   256,   248,   249,   250,   251,   252,   253,    17,
      18,    49,    49,   256,   256,   256,   256,    25,   128,    56,
      20,     3,     4,     5,     6,     7,     8,   186,     5,     4,
     258,     5,    69,    70,    71,    17,    18,     5,   257,   257,
     157,    49,     4,    25,   131,   258,     5,    84,    56,   193,
       3,     4,     5,     6,     7,     8,     4,     4,   257,     4,
     234,    69,    70,    71,    17,    18,    91,    49,     8,   471,
      63,   213,    25,   339,    56,   129,    84,   142,   433,    25,
     248,   249,   250,   251,   252,   253,   269,    69,    70,    71,
     342,   350,   463,    77,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    84,    56,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    69,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,   249,   250,
     251,   252,   253,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,   248,   249,   250,   251,   252,   253,    -1,   452,   453,
      -1,   455,   456,   457,    -1,    -1,   460,    -1,   462,    -1,
     464,   108,   466,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     248,   249,   250,   251,   252,   253,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,   248,   249,   250,   251,
     252,   253,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,   248,   249,   250,   251,   252,
     253,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      17,   258,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      10,    11,    12,    13,    14,    15,    16,    17,   258,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,   105,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   258,
      -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    -1,
     394,   395,    -1,   397,    -1,    -1,   400,   401,    -1,   403,
     404,   405,    -1,    -1,    -1,   409,   258,   411,    -1,   413,
      -1,    -1,    -1,    -1,   418,    -1,    -1,    -1,    -1,    -1,
      -1,   114,   115,   116,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,   258,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,   257,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    48,    49,
      50,    51,    -1,    -1,   257,    -1,    -1,    -1,    58,    -1,
      -1,   111,   112,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    76,    77,   128,    -1,
      -1,   257,    82,    -1,    -1,    -1,    -1,   137,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,
     100,   244,   245,    -1,   104,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,    -1,   164,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   239,    -1,   125,   126,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,   144,   145,    -1,    -1,    -1,   149,
     150,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   175,    -1,    -1,   214,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,   193,    -1,   195,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   254,    -1,    -1,   257,    -1,    -1,
      -1,    -1,    -1,   213,    -1,   215,   216,   217,   218,   219,
      -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   236,   237,    -1,    -1,
      -1,    -1,    -1,    -1,   244,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    11,    12,    13,    14,    15,    16,
      17,    99,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      10,    11,    12,    13,    14,    15,    16,    17,    99,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    45,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    87,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      42,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    12,    13,    14,    15,    16,    17,
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
     268,   269,   287,   291,   299,   300,   303,   305,   319,    74,
     187,   211,   306,   288,   293,   293,     8,   320,   321,   293,
     301,     0,   267,   254,     3,     4,     5,     6,     7,     8,
      17,    18,    25,    26,    49,    56,    69,    70,    71,   248,
     249,   250,   251,   252,   253,   261,   282,   283,   117,   304,
     304,   210,     3,   108,   118,   147,   172,   289,    85,   113,
     118,   128,   147,   294,   294,     9,    20,   258,   118,   147,
       3,   285,   254,   255,   256,     9,   261,   261,   261,   261,
     239,   261,   266,   256,   256,   256,   256,   256,   256,     3,
      10,    11,    12,    13,    14,    15,    16,    17,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    44,   284,   108,   258,
     270,   248,     3,     3,   304,   255,   290,     3,   289,   108,
     258,     3,     3,   261,   261,   321,   193,     3,   261,   262,
     263,   261,   261,   266,    97,    99,   239,   268,   261,   262,
      52,   134,   221,   262,   264,   261,   261,    26,   261,   261,
     261,   261,   256,     6,    17,   157,   261,   261,    13,    15,
      16,   261,    39,    43,   196,   256,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,     3,   283,   285,     3,    26,   240,   271,
     272,   231,   285,     3,   193,   256,   295,   193,   295,     3,
     302,   258,   257,   214,    97,    99,   261,   261,   257,   108,
     257,   257,   261,   258,   258,   257,   257,   262,   268,     6,
     157,   256,   261,   261,    42,   256,   256,   256,   268,   272,
     118,   180,   255,   256,   317,   318,   261,   164,   278,   285,
     272,   290,     3,   298,     3,   281,   235,   268,   298,   235,
     268,    20,   255,   258,   272,   262,   261,   261,    99,   214,
     261,   108,   127,   265,   265,   257,   257,   262,   268,   261,
     268,   268,   268,   257,   111,   273,     3,   109,   120,   131,
     169,   307,   308,   309,    44,   286,    53,   137,   279,   272,
      20,   160,   258,   292,   257,   258,   256,   296,   292,   292,
     296,   292,   261,     3,     3,   278,    99,   261,   105,   257,
     262,   261,   257,   257,   257,   257,   257,   257,   257,    53,
     112,   277,   256,   317,   120,   131,   256,   256,   131,   257,
     258,     3,   268,   261,   274,   261,    84,   261,   131,     3,
       3,    84,   261,   297,   258,   292,   292,    20,    20,   255,
     279,   261,   257,    78,    79,    80,    81,   114,   115,   116,
     244,   245,   274,   261,   278,   307,   256,   256,   281,   281,
     256,   317,   308,    48,    49,    50,    51,    58,    76,    77,
      82,    93,   100,   104,   125,   126,   144,   145,   149,   150,
     151,   175,   193,   195,   213,   215,   216,   217,   218,   219,
     236,   237,   244,   315,    45,    87,   275,   258,   258,   228,
      20,   257,   258,   256,   261,   261,     3,   257,   242,   276,
     279,   257,   281,   281,   257,   257,   281,   256,   311,   311,
     311,   311,   311,   311,   256,   311,   311,   311,    49,   312,
     311,   312,   311,   256,   311,   312,   311,   312,   256,   256,
     310,   261,   261,   298,    84,   261,    84,   261,   297,    20,
     186,   128,   280,   317,   257,   257,   257,     5,   313,   314,
     313,   313,     4,   316,   313,   313,   313,   314,   313,   314,
     313,   316,   313,   314,   313,   314,     5,     5,    17,    46,
      62,    84,   131,   157,   169,   225,   275,   257,   261,   281,
     257,   258,   227,   246,    58,    60,   257,   258,   257,   257,
     257,   157,     4,     4,     5,     6,     7,   131,   131,   256,
       5,   193,     4,   314,     4,   314,   314,   281,   257,     4,
     257
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
     268,   268,   269,   269,   270,   270,   271,   271,   272,   272,
     273,   273,   274,   274,   275,   275,   275,   276,   276,   277,
     277,   278,   278,   279,   279,   279,   280,   280,   281,   281,
     282,   282,   282,   283,   284,   284,   284,   285,   285,   286,
     286,   267,   287,   288,   288,   288,   288,   287,   289,   289,
     290,   290,   287,   267,   291,   292,   292,   293,   293,   293,
     293,   293,   294,   294,   295,   295,   296,   296,   297,   297,
     297,   297,   291,   298,   298,   298,   298,   291,   267,   299,
     299,   299,   267,   300,   301,   301,   301,   302,   302,   302,
     302,   267,   303,   303,   304,   304,   267,   305,   305,   305,
     305,   305,   305,   306,   306,   307,   307,   308,   308,   308,
     308,   308,   309,   308,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   311,   311,   311,
     312,   312,   313,   313,   313,   314,   314,   314,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   316,   316,
     317,   318,   318,   318,   267,   319,   320,   320,   321,   321
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
       0,    10,     0,     1,     0,     1,     0,     1,     0,     2,
       0,     4,     2,     4,     0,     1,     1,     0,     2,     0,
       2,     0,     3,     0,     2,     4,     0,     2,     1,     3,
       1,     3,     1,     2,     2,     1,     0,     0,     1,     1,
       0,     1,     7,     2,     2,     2,     0,     6,     2,     4,
       0,     2,     7,     1,     8,     0,     4,     0,     2,     2,
       2,     2,     1,     0,     0,     3,     3,     5,     1,     1,
       3,     3,     7,     3,     3,     5,     5,     7,     1,     8,
       7,     7,     1,     8,     0,     2,     2,     3,     5,     5,
       7,     1,     4,     4,     0,     2,     1,     8,    10,     9,
       6,    11,     8,     0,     1,     1,     3,     5,     4,     4,
       5,     5,     0,     4,     0,     3,     2,     3,     3,     3,
       3,     2,     5,     3,     3,     2,     3,     0,     3,     5,
       0,     1,     0,     2,     2,     0,     4,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     3,     5,     2,     4,     1,     1,
       1,     1,     3,     3,     3,     3,     5,     5,     1,     3,
       3,     0,     1,     1,     1,     2,     1,     3,     3,     3
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
                   { printf("IA VSTRETIL NAME; %s, AHYETb\n",(yyvsp[0].strval)); free((yyvsp[0].strval)); printf("%p", parse_tree);}
#line 2081 "sql.tab.c"
    break;

  case 5: /* expr: NAME '.' NAME  */
#line 325 "sql.y"
                   { printf("FIELDNAME %s.%s\n", (yyvsp[-2].strval), (yyvsp[0].strval)); free((yyvsp[-2].strval)); free((yyvsp[0].strval)); }
#line 2087 "sql.tab.c"
    break;

  case 6: /* expr: USERVAR  */
#line 326 "sql.y"
                   { printf("USERVAR %s\n", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2093 "sql.tab.c"
    break;

  case 7: /* expr: STRING  */
#line 327 "sql.y"
                   { printf("STRING %s\n", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2099 "sql.tab.c"
    break;

  case 8: /* expr: INTNUM  */
#line 328 "sql.y"
                   { printf("NUMBER %d\n", (yyvsp[0].intval)); }
#line 2105 "sql.tab.c"
    break;

  case 9: /* expr: APPROXNUM  */
#line 329 "sql.y"
                   { printf("FLOAT %g\n", (yyvsp[0].floatval)); }
#line 2111 "sql.tab.c"
    break;

  case 10: /* expr: BOOL  */
#line 330 "sql.y"
                   { printf("BOOL %d\n", (yyvsp[0].intval)); }
#line 2117 "sql.tab.c"
    break;

  case 11: /* expr: expr '+' expr  */
#line 333 "sql.y"
                    { emit("ADD"); }
#line 2123 "sql.tab.c"
    break;

  case 12: /* expr: expr '-' expr  */
#line 334 "sql.y"
                   { emit("SUB"); }
#line 2129 "sql.tab.c"
    break;

  case 13: /* expr: expr '*' expr  */
#line 335 "sql.y"
                   { emit("MUL"); }
#line 2135 "sql.tab.c"
    break;

  case 14: /* expr: expr '/' expr  */
#line 336 "sql.y"
                   { emit("DIV"); }
#line 2141 "sql.tab.c"
    break;

  case 15: /* expr: expr '%' expr  */
#line 337 "sql.y"
                   { emit("MOD"); }
#line 2147 "sql.tab.c"
    break;

  case 16: /* expr: expr MOD expr  */
#line 338 "sql.y"
                   { emit("MOD"); }
#line 2153 "sql.tab.c"
    break;

  case 17: /* expr: '-' expr  */
#line 339 "sql.y"
                           { emit("NEG"); }
#line 2159 "sql.tab.c"
    break;

  case 18: /* expr: expr ANDOP expr  */
#line 340 "sql.y"
                     { emit("AND"); }
#line 2165 "sql.tab.c"
    break;

  case 19: /* expr: expr OR expr  */
#line 341 "sql.y"
                  { emit("OR"); }
#line 2171 "sql.tab.c"
    break;

  case 20: /* expr: expr XOR expr  */
#line 342 "sql.y"
                   { emit("XOR"); }
#line 2177 "sql.tab.c"
    break;

  case 21: /* expr: expr '|' expr  */
#line 343 "sql.y"
                   { emit("BITOR"); }
#line 2183 "sql.tab.c"
    break;

  case 22: /* expr: expr '&' expr  */
#line 344 "sql.y"
                   { emit("BITAND"); }
#line 2189 "sql.tab.c"
    break;

  case 23: /* expr: expr '^' expr  */
#line 345 "sql.y"
                   { emit("BITXOR"); }
#line 2195 "sql.tab.c"
    break;

  case 24: /* expr: expr SHIFT expr  */
#line 346 "sql.y"
                     { emit("SHIFT %s", (yyvsp[-1].subtok)==1?"left":"right"); }
#line 2201 "sql.tab.c"
    break;

  case 25: /* expr: NOT expr  */
#line 347 "sql.y"
              { emit("NOT"); }
#line 2207 "sql.tab.c"
    break;

  case 26: /* expr: '!' expr  */
#line 348 "sql.y"
              { emit("NOT"); }
#line 2213 "sql.tab.c"
    break;

  case 27: /* expr: expr EQUAL expr  */
#line 349 "sql.y"
                     { printf("ebat ravno\n"); }
#line 2219 "sql.tab.c"
    break;

  case 28: /* expr: expr NOT_EQUAL expr  */
#line 350 "sql.y"
                         { printf("ebat ravno\n"); }
#line 2225 "sql.tab.c"
    break;

  case 29: /* expr: expr MORE expr  */
#line 351 "sql.y"
                    { printf("ebat ravno\n"); }
#line 2231 "sql.tab.c"
    break;

  case 30: /* expr: expr MORE_OR_EQUAL expr  */
#line 352 "sql.y"
                             { printf("ebat ravno\n"); }
#line 2237 "sql.tab.c"
    break;

  case 31: /* expr: expr LESS expr  */
#line 353 "sql.y"
                    { printf("ebat ravno\n"); }
#line 2243 "sql.tab.c"
    break;

  case 32: /* expr: expr LESS_OR_EQUAL expr  */
#line 354 "sql.y"
                             { printf("ebat ravno\n"); }
#line 2249 "sql.tab.c"
    break;

  case 33: /* expr: expr COMPARISON expr  */
#line 355 "sql.y"
                          { printf("CMP " ); }
#line 2255 "sql.tab.c"
    break;

  case 34: /* expr: expr COMPARISON '(' select_stmt ')'  */
#line 358 "sql.y"
                                         { emit("CMPSELECT %d", (yyvsp[-3].subtok)); }
#line 2261 "sql.tab.c"
    break;

  case 35: /* expr: expr COMPARISON ANY '(' select_stmt ')'  */
#line 359 "sql.y"
                                             { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2267 "sql.tab.c"
    break;

  case 36: /* expr: expr COMPARISON SOME '(' select_stmt ')'  */
#line 360 "sql.y"
                                              { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2273 "sql.tab.c"
    break;

  case 37: /* expr: expr COMPARISON ALL '(' select_stmt ')'  */
#line 361 "sql.y"
                                             { emit("CMPALLSELECT %d", (yyvsp[-4].subtok)); }
#line 2279 "sql.tab.c"
    break;

  case 38: /* expr: expr IS NULLX  */
#line 364 "sql.y"
                         { emit("ISNULL"); }
#line 2285 "sql.tab.c"
    break;

  case 39: /* expr: expr IS NOT NULLX  */
#line 365 "sql.y"
                         { emit("ISNULL"); emit("NOT"); }
#line 2291 "sql.tab.c"
    break;

  case 40: /* expr: expr IS BOOL  */
#line 366 "sql.y"
                         { emit("ISBOOL %d", (yyvsp[0].intval)); }
#line 2297 "sql.tab.c"
    break;

  case 41: /* expr: expr IS NOT BOOL  */
#line 367 "sql.y"
                         { emit("ISBOOL %d", (yyvsp[0].intval)); emit("NOT"); }
#line 2303 "sql.tab.c"
    break;

  case 42: /* expr: USERVAR ASSIGN expr  */
#line 369 "sql.y"
                         { emit("ASSIGN @%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2309 "sql.tab.c"
    break;

  case 43: /* expr: expr BETWEEN expr AND expr  */
#line 372 "sql.y"
                                               { emit("BETWEEN"); }
#line 2315 "sql.tab.c"
    break;

  case 44: /* val_list: expr  */
#line 375 "sql.y"
               { (yyval.intval) = 1; }
#line 2321 "sql.tab.c"
    break;

  case 45: /* val_list: expr ',' val_list  */
#line 376 "sql.y"
                       { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2327 "sql.tab.c"
    break;

  case 46: /* opt_val_list: %empty  */
#line 379 "sql.y"
                        { (yyval.intval) = 0; }
#line 2333 "sql.tab.c"
    break;

  case 48: /* expr: expr IN '(' val_list ')'  */
#line 383 "sql.y"
                                     { emit("ISIN %d", (yyvsp[-1].intval)); }
#line 2339 "sql.tab.c"
    break;

  case 49: /* expr: expr NOT IN '(' val_list ')'  */
#line 384 "sql.y"
                                     { emit("ISIN %d", (yyvsp[-1].intval)); emit("NOT"); }
#line 2345 "sql.tab.c"
    break;

  case 50: /* expr: expr IN '(' select_stmt ')'  */
#line 385 "sql.y"
                                     { emit("CMPANYSELECT 4"); }
#line 2351 "sql.tab.c"
    break;

  case 51: /* expr: expr NOT IN '(' select_stmt ')'  */
#line 386 "sql.y"
                                     { emit("CMPALLSELECT 3"); }
#line 2357 "sql.tab.c"
    break;

  case 52: /* expr: EXISTS '(' select_stmt ')'  */
#line 387 "sql.y"
                                     { emit("EXISTSSELECT"); if((yyvsp[-3].subtok))emit("NOT"); }
#line 2363 "sql.tab.c"
    break;

  case 53: /* expr: NAME '(' opt_val_list ')'  */
#line 391 "sql.y"
                                {  emit("CALL %d %s", (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2369 "sql.tab.c"
    break;

  case 54: /* expr: FCOUNT '(' '*' ')'  */
#line 395 "sql.y"
                         { emit("COUNTALL"); }
#line 2375 "sql.tab.c"
    break;

  case 55: /* expr: FCOUNT '(' expr ')'  */
#line 396 "sql.y"
                         { emit(" CALL 1 COUNT"); }
#line 2381 "sql.tab.c"
    break;

  case 56: /* expr: FSUBSTRING '(' val_list ')'  */
#line 398 "sql.y"
                                                {  emit("CALL %d SUBSTR", (yyvsp[-1].intval)); }
#line 2387 "sql.tab.c"
    break;

  case 57: /* expr: FSUBSTRING '(' expr FROM expr ')'  */
#line 399 "sql.y"
                                                {  emit("CALL 2 SUBSTR"); }
#line 2393 "sql.tab.c"
    break;

  case 58: /* expr: FSUBSTRING '(' expr FROM expr FOR expr ')'  */
#line 400 "sql.y"
                                                {  emit("CALL 3 SUBSTR"); }
#line 2399 "sql.tab.c"
    break;

  case 59: /* expr: FTRIM '(' val_list ')'  */
#line 402 "sql.y"
                                                { emit("CALL %d TRIM", (yyvsp[-1].intval)); }
#line 2405 "sql.tab.c"
    break;

  case 60: /* expr: FTRIM '(' trim_ltb expr FROM val_list ')'  */
#line 403 "sql.y"
                                                { emit("CALL 3 TRIM"); }
#line 2411 "sql.tab.c"
    break;

  case 61: /* trim_ltb: LEADING  */
#line 406 "sql.y"
                  { emit("NUMBER 1"); }
#line 2417 "sql.tab.c"
    break;

  case 62: /* trim_ltb: TRAILING  */
#line 407 "sql.y"
                  { emit("NUMBER 2"); }
#line 2423 "sql.tab.c"
    break;

  case 63: /* trim_ltb: BOTH  */
#line 408 "sql.y"
                  { emit("NUMBER 3"); }
#line 2429 "sql.tab.c"
    break;

  case 64: /* expr: FDATE_ADD '(' expr ',' interval_exp ')'  */
#line 411 "sql.y"
                                              { emit("CALL 3 DATE_ADD"); }
#line 2435 "sql.tab.c"
    break;

  case 65: /* expr: FDATE_SUB '(' expr ',' interval_exp ')'  */
#line 412 "sql.y"
                                              { emit("CALL 3 DATE_SUB"); }
#line 2441 "sql.tab.c"
    break;

  case 66: /* interval_exp: INTERVAL expr DAY_HOUR  */
#line 415 "sql.y"
                                     { emit("NUMBER 1"); }
#line 2447 "sql.tab.c"
    break;

  case 67: /* interval_exp: INTERVAL expr DAY_MICROSECOND  */
#line 416 "sql.y"
                                     { emit("NUMBER 2"); }
#line 2453 "sql.tab.c"
    break;

  case 68: /* interval_exp: INTERVAL expr DAY_MINUTE  */
#line 417 "sql.y"
                                     { emit("NUMBER 3"); }
#line 2459 "sql.tab.c"
    break;

  case 69: /* interval_exp: INTERVAL expr DAY_SECOND  */
#line 418 "sql.y"
                                     { emit("NUMBER 4"); }
#line 2465 "sql.tab.c"
    break;

  case 70: /* interval_exp: INTERVAL expr YEAR_MONTH  */
#line 419 "sql.y"
                                     { emit("NUMBER 5"); }
#line 2471 "sql.tab.c"
    break;

  case 71: /* interval_exp: INTERVAL expr YEAR  */
#line 420 "sql.y"
                                     { emit("NUMBER 6"); }
#line 2477 "sql.tab.c"
    break;

  case 72: /* interval_exp: INTERVAL expr HOUR_MICROSECOND  */
#line 421 "sql.y"
                                     { emit("NUMBER 7"); }
#line 2483 "sql.tab.c"
    break;

  case 73: /* interval_exp: INTERVAL expr HOUR_MINUTE  */
#line 422 "sql.y"
                                     { emit("NUMBER 8"); }
#line 2489 "sql.tab.c"
    break;

  case 74: /* interval_exp: INTERVAL expr HOUR_SECOND  */
#line 423 "sql.y"
                                     { emit("NUMBER 9"); }
#line 2495 "sql.tab.c"
    break;

  case 75: /* expr: CASE expr case_list END  */
#line 425 "sql.y"
                                        { emit("CASEVAL %d 0", (yyvsp[-1].intval)); }
#line 2501 "sql.tab.c"
    break;

  case 76: /* expr: CASE expr case_list ELSE expr END  */
#line 426 "sql.y"
                                        { emit("CASEVAL %d 1", (yyvsp[-3].intval)); }
#line 2507 "sql.tab.c"
    break;

  case 77: /* expr: CASE case_list END  */
#line 427 "sql.y"
                                        { emit("CASE %d 0", (yyvsp[-1].intval)); }
#line 2513 "sql.tab.c"
    break;

  case 78: /* expr: CASE case_list ELSE expr END  */
#line 428 "sql.y"
                                        { emit("CASE %d 1", (yyvsp[-3].intval)); }
#line 2519 "sql.tab.c"
    break;

  case 79: /* case_list: WHEN expr THEN expr  */
#line 431 "sql.y"
                                   { (yyval.intval) = 1; }
#line 2525 "sql.tab.c"
    break;

  case 80: /* case_list: case_list WHEN expr THEN expr  */
#line 432 "sql.y"
                                         { (yyval.intval) = (yyvsp[-4].intval)+1; }
#line 2531 "sql.tab.c"
    break;

  case 81: /* expr: expr LIKE expr  */
#line 435 "sql.y"
                     { emit("LIKE"); }
#line 2537 "sql.tab.c"
    break;

  case 82: /* expr: expr NOT LIKE expr  */
#line 436 "sql.y"
                        { emit("LIKE"); emit("NOT"); }
#line 2543 "sql.tab.c"
    break;

  case 83: /* expr: expr REGEXP expr  */
#line 439 "sql.y"
                       { emit("REGEXP"); }
#line 2549 "sql.tab.c"
    break;

  case 84: /* expr: expr NOT REGEXP expr  */
#line 440 "sql.y"
                          { emit("REGEXP"); emit("NOT"); }
#line 2555 "sql.tab.c"
    break;

  case 85: /* expr: CURRENT_TIMESTAMP  */
#line 443 "sql.y"
                        { emit("NOW"); }
#line 2561 "sql.tab.c"
    break;

  case 86: /* expr: CURRENT_DATE  */
#line 444 "sql.y"
                        { emit("NOW"); }
#line 2567 "sql.tab.c"
    break;

  case 87: /* expr: CURRENT_TIME  */
#line 445 "sql.y"
                        { emit("NOW"); }
#line 2573 "sql.tab.c"
    break;

  case 88: /* expr: BINARY expr  */
#line 448 "sql.y"
                               { emit("STRTOBIN"); }
#line 2579 "sql.tab.c"
    break;

  case 89: /* stmt: select_stmt  */
#line 458 "sql.y"
                  { emit("STMT"); }
#line 2585 "sql.tab.c"
    break;

  case 91: /* select_stmt: state_select select_expr_list state_from table_references opt_where opt_groupby opt_having opt_orderby opt_limit opt_into_list  */
#line 466 "sql.y"
     { 
        printf("%d %d", (yyvsp[-8].intval), (yyvsp[-6].intval));
     }
#line 2593 "sql.tab.c"
    break;

  case 93: /* state_select: SELECT  */
#line 474 "sql.y"
   {
      YYCurState = YYState_SELECT; 
   
   }
#line 2602 "sql.tab.c"
    break;

  case 95: /* state_from: FROM  */
#line 480 "sql.y"
          { YYCurState = YYState_FROM; }
#line 2608 "sql.tab.c"
    break;

  case 97: /* state_where: WHERE  */
#line 483 "sql.y"
           { YYCurState = YYState_WHERE; }
#line 2614 "sql.tab.c"
    break;

  case 99: /* opt_where: state_where expr  */
#line 487 "sql.y"
                      { emit("WHERE"); }
#line 2620 "sql.tab.c"
    break;

  case 101: /* opt_groupby: GROUP BY groupby_list opt_with_rollup  */
#line 491 "sql.y"
                             { emit("GROUPBYLIST %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2626 "sql.tab.c"
    break;

  case 102: /* groupby_list: expr opt_asc_desc  */
#line 495 "sql.y"
                             { emit("GROUPBY %d",  (yyvsp[0].intval)); (yyval.intval) = 1; }
#line 2632 "sql.tab.c"
    break;

  case 103: /* groupby_list: groupby_list ',' expr opt_asc_desc  */
#line 497 "sql.y"
                             { emit("GROUPBY %d",  (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2638 "sql.tab.c"
    break;

  case 104: /* opt_asc_desc: %empty  */
#line 500 "sql.y"
                        { (yyval.intval) = 0; }
#line 2644 "sql.tab.c"
    break;

  case 105: /* opt_asc_desc: ASC  */
#line 501 "sql.y"
                        { (yyval.intval) = 0; }
#line 2650 "sql.tab.c"
    break;

  case 106: /* opt_asc_desc: DESC  */
#line 502 "sql.y"
                        { (yyval.intval) = 1; }
#line 2656 "sql.tab.c"
    break;

  case 107: /* opt_with_rollup: %empty  */
#line 505 "sql.y"
                            { (yyval.intval) = 0; }
#line 2662 "sql.tab.c"
    break;

  case 108: /* opt_with_rollup: WITH ROLLUP  */
#line 506 "sql.y"
                  { (yyval.intval) = 1; }
#line 2668 "sql.tab.c"
    break;

  case 110: /* opt_having: HAVING expr  */
#line 510 "sql.y"
                 { emit("HAVING"); }
#line 2674 "sql.tab.c"
    break;

  case 112: /* opt_orderby: ORDER BY groupby_list  */
#line 513 "sql.y"
                           { emit("ORDERBY %d", (yyvsp[0].intval)); }
#line 2680 "sql.tab.c"
    break;

  case 114: /* opt_limit: LIMIT expr  */
#line 516 "sql.y"
                                  { emit("LIMIT 1"); }
#line 2686 "sql.tab.c"
    break;

  case 115: /* opt_limit: LIMIT expr ',' expr  */
#line 517 "sql.y"
                                    { emit("LIMIT 2"); }
#line 2692 "sql.tab.c"
    break;

  case 117: /* opt_into_list: INTO column_list  */
#line 521 "sql.y"
                      { emit("INTO %d", (yyvsp[0].intval)); }
#line 2698 "sql.tab.c"
    break;

  case 118: /* column_list: NAME  */
#line 524 "sql.y"
                  { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2704 "sql.tab.c"
    break;

  case 119: /* column_list: column_list ',' NAME  */
#line 525 "sql.y"
                          { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2710 "sql.tab.c"
    break;

  case 120: /* select_expr_list: select_expr  */
#line 529 "sql.y"
                              { (yyval.intval) = 1; }
#line 2716 "sql.tab.c"
    break;

  case 121: /* select_expr_list: select_expr_list ',' select_expr  */
#line 530 "sql.y"
                                       {(yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2722 "sql.tab.c"
    break;

  case 122: /* select_expr_list: '*'  */
#line 531 "sql.y"
          { emit("SELECTALL"); (yyval.intval) = 1; }
#line 2728 "sql.tab.c"
    break;

  case 124: /* opt_as_alias: AS NAME  */
#line 536 "sql.y"
                      { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2734 "sql.tab.c"
    break;

  case 125: /* opt_as_alias: NAME  */
#line 537 "sql.y"
                      { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2740 "sql.tab.c"
    break;

  case 128: /* table_references: NAME  */
#line 543 "sql.y"
         { printf("TABLE NAME; %s, AHYETb\n",(yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2746 "sql.tab.c"
    break;

  case 131: /* stmt: delete_stmt  */
#line 625 "sql.y"
                  { emit("STMT"); }
#line 2752 "sql.tab.c"
    break;

  case 132: /* delete_stmt: DELETE delete_opts FROM NAME opt_where opt_orderby opt_limit  */
#line 631 "sql.y"
                  { emit("DELETEONE %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2758 "sql.tab.c"
    break;

  case 133: /* delete_opts: delete_opts LOW_PRIORITY  */
#line 634 "sql.y"
                                      { (yyval.intval) = (yyvsp[-1].intval) + 01; }
#line 2764 "sql.tab.c"
    break;

  case 134: /* delete_opts: delete_opts QUICK  */
#line 635 "sql.y"
                       { (yyval.intval) = (yyvsp[-1].intval) + 02; }
#line 2770 "sql.tab.c"
    break;

  case 135: /* delete_opts: delete_opts IGNORE  */
#line 636 "sql.y"
                        { (yyval.intval) = (yyvsp[-1].intval) + 04; }
#line 2776 "sql.tab.c"
    break;

  case 136: /* delete_opts: %empty  */
#line 637 "sql.y"
               { (yyval.intval) = 0; }
#line 2782 "sql.tab.c"
    break;

  case 137: /* delete_stmt: DELETE delete_opts delete_list FROM table_references opt_where  */
#line 644 "sql.y"
            { emit("DELETEMULTI %d %d %d", (yyvsp[-4].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2788 "sql.tab.c"
    break;

  case 138: /* delete_list: NAME opt_dot_star  */
#line 646 "sql.y"
                               { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = 1; }
#line 2794 "sql.tab.c"
    break;

  case 139: /* delete_list: delete_list ',' NAME opt_dot_star  */
#line 648 "sql.y"
            { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2800 "sql.tab.c"
    break;

  case 142: /* delete_stmt: DELETE delete_opts FROM delete_list USING table_references opt_where  */
#line 657 "sql.y"
            { emit("DELETEMULTI %d %d %d", (yyvsp[-5].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2806 "sql.tab.c"
    break;

  case 143: /* stmt: insert_stmt  */
#line 662 "sql.y"
                  { emit("STMT"); }
#line 2812 "sql.tab.c"
    break;

  case 144: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 668 "sql.y"
                     { emit("INSERTVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 2818 "sql.tab.c"
    break;

  case 146: /* opt_ondupupdate: ONDUPLICATE KEY UPDATE insert_asgn_list  */
#line 672 "sql.y"
                                             { emit("DUPUPDATE %d", (yyvsp[0].intval)); }
#line 2824 "sql.tab.c"
    break;

  case 147: /* insert_opts: %empty  */
#line 675 "sql.y"
                       { (yyval.intval) = 0; }
#line 2830 "sql.tab.c"
    break;

  case 148: /* insert_opts: insert_opts LOW_PRIORITY  */
#line 676 "sql.y"
                              { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 2836 "sql.tab.c"
    break;

  case 149: /* insert_opts: insert_opts DELAYED  */
#line 677 "sql.y"
                         { (yyval.intval) = (yyvsp[-1].intval) | 02 ; }
#line 2842 "sql.tab.c"
    break;

  case 150: /* insert_opts: insert_opts HIGH_PRIORITY  */
#line 678 "sql.y"
                               { (yyval.intval) = (yyvsp[-1].intval) | 04 ; }
#line 2848 "sql.tab.c"
    break;

  case 151: /* insert_opts: insert_opts IGNORE  */
#line 679 "sql.y"
                        { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 2854 "sql.tab.c"
    break;

  case 155: /* opt_col_names: '(' column_list ')'  */
#line 686 "sql.y"
                         { emit("INSERTCOLS %d", (yyvsp[-1].intval)); }
#line 2860 "sql.tab.c"
    break;

  case 156: /* insert_vals_list: '(' insert_vals ')'  */
#line 689 "sql.y"
                                      { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = 1; }
#line 2866 "sql.tab.c"
    break;

  case 157: /* insert_vals_list: insert_vals_list ',' '(' insert_vals ')'  */
#line 690 "sql.y"
                                              { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2872 "sql.tab.c"
    break;

  case 158: /* insert_vals: expr  */
#line 693 "sql.y"
          { (yyval.intval) = 1; }
#line 2878 "sql.tab.c"
    break;

  case 159: /* insert_vals: DEFAULT  */
#line 694 "sql.y"
             { emit("DEFAULT"); (yyval.intval) = 1; }
#line 2884 "sql.tab.c"
    break;

  case 160: /* insert_vals: insert_vals ',' expr  */
#line 695 "sql.y"
                          { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2890 "sql.tab.c"
    break;

  case 161: /* insert_vals: insert_vals ',' DEFAULT  */
#line 696 "sql.y"
                             { emit("DEFAULT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2896 "sql.tab.c"
    break;

  case 162: /* insert_stmt: INSERT insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 701 "sql.y"
     { emit("INSERTASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2902 "sql.tab.c"
    break;

  case 163: /* insert_asgn_list: NAME COMPARISON expr  */
#line 706 "sql.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
       emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2909 "sql.tab.c"
    break;

  case 164: /* insert_asgn_list: NAME COMPARISON DEFAULT  */
#line 709 "sql.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2916 "sql.tab.c"
    break;

  case 165: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON expr  */
#line 712 "sql.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
                 emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2923 "sql.tab.c"
    break;

  case 166: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON DEFAULT  */
#line 715 "sql.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2930 "sql.tab.c"
    break;

  case 167: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 721 "sql.y"
                    { emit("INSERTSELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2936 "sql.tab.c"
    break;

  case 168: /* stmt: replace_stmt  */
#line 725 "sql.y"
                   { emit("STMT"); }
#line 2942 "sql.tab.c"
    break;

  case 169: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 731 "sql.y"
                     { emit("REPLACEVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 2948 "sql.tab.c"
    break;

  case 170: /* replace_stmt: REPLACE insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 737 "sql.y"
     { emit("REPLACEASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2954 "sql.tab.c"
    break;

  case 171: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 742 "sql.y"
                    { emit("REPLACESELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2960 "sql.tab.c"
    break;

  case 172: /* stmt: update_stmt  */
#line 746 "sql.y"
                  { emit("STMT"); }
#line 2966 "sql.tab.c"
    break;

  case 173: /* update_stmt: UPDATE update_opts table_references SET update_asgn_list opt_where opt_orderby opt_limit  */
#line 753 "sql.y"
                  { emit("UPDATE %d %d %d", (yyvsp[-6].intval), (yyvsp[-5].intval), (yyvsp[-3].intval)); }
#line 2972 "sql.tab.c"
    break;

  case 174: /* update_opts: %empty  */
#line 756 "sql.y"
                       { (yyval.intval) = 0; }
#line 2978 "sql.tab.c"
    break;

  case 175: /* update_opts: insert_opts LOW_PRIORITY  */
#line 757 "sql.y"
                              { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 2984 "sql.tab.c"
    break;

  case 176: /* update_opts: insert_opts IGNORE  */
#line 758 "sql.y"
                        { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 2990 "sql.tab.c"
    break;

  case 177: /* update_asgn_list: NAME COMPARISON expr  */
#line 763 "sql.y"
     { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
	 emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2997 "sql.tab.c"
    break;

  case 178: /* update_asgn_list: NAME '.' NAME COMPARISON expr  */
#line 766 "sql.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-4].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3004 "sql.tab.c"
    break;

  case 179: /* update_asgn_list: update_asgn_list ',' NAME COMPARISON expr  */
#line 769 "sql.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3011 "sql.tab.c"
    break;

  case 180: /* update_asgn_list: update_asgn_list ',' NAME '.' NAME COMPARISON expr  */
#line 772 "sql.y"
       { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update  assignment to %s.$s", (yyvsp[-4].strval), (yyvsp[-2].strval)); 
          YYERROR; }
         emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3019 "sql.tab.c"
    break;

  case 181: /* stmt: create_database_stmt  */
#line 779 "sql.y"
                           { emit("STMT"); }
#line 3025 "sql.tab.c"
    break;

  case 182: /* create_database_stmt: CREATE DATABASE opt_if_not_exists NAME  */
#line 784 "sql.y"
       { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3031 "sql.tab.c"
    break;

  case 183: /* create_database_stmt: CREATE SCHEMA opt_if_not_exists NAME  */
#line 786 "sql.y"
       { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3037 "sql.tab.c"
    break;

  case 184: /* opt_if_not_exists: %empty  */
#line 789 "sql.y"
                              { (yyval.intval) = 0; }
#line 3043 "sql.tab.c"
    break;

  case 185: /* opt_if_not_exists: IF EXISTS  */
#line 791 "sql.y"
       { if(!(yyvsp[0].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; }
                        (yyval.intval) = (yyvsp[0].subtok); /* NOT EXISTS hack */ }
#line 3050 "sql.tab.c"
    break;

  case 186: /* stmt: create_table_stmt  */
#line 796 "sql.y"
                        { emit("STMT"); }
#line 3056 "sql.tab.c"
    break;

  case 187: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')'  */
#line 800 "sql.y"
                           { emit("CREATE %d %d %d %s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3062 "sql.tab.c"
    break;

  case 188: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')'  */
#line 804 "sql.y"
                           { emit("CREATE %d %d %d %s.%s", (yyvsp[-8].intval), (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-5].strval), (yyvsp[-3].strval));
                          free((yyvsp[-5].strval)); free((yyvsp[-3].strval)); }
#line 3069 "sql.tab.c"
    break;

  case 189: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')' create_select_statement  */
#line 810 "sql.y"
                                { emit("CREATESELECT %d %d %d %s", (yyvsp[-7].intval), (yyvsp[-5].intval), (yyvsp[-2].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3075 "sql.tab.c"
    break;

  case 190: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME create_select_statement  */
#line 814 "sql.y"
                           { emit("CREATESELECT %d %d 0 %s", (yyvsp[-4].intval), (yyvsp[-2].intval), (yyvsp[-1].strval)); free((yyvsp[-1].strval)); }
#line 3081 "sql.tab.c"
    break;

  case 191: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')' create_select_statement  */
#line 819 "sql.y"
                            { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-9].intval), (yyvsp[-7].intval), (yyvsp[-6].strval), (yyvsp[-4].strval));
                              free((yyvsp[-6].strval)); free((yyvsp[-4].strval)); }
#line 3088 "sql.tab.c"
    break;

  case 192: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME create_select_statement  */
#line 824 "sql.y"
                           { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-3].strval), (yyvsp[-1].strval));
                          free((yyvsp[-3].strval)); free((yyvsp[-1].strval)); }
#line 3095 "sql.tab.c"
    break;

  case 193: /* opt_temporary: %empty  */
#line 828 "sql.y"
                           { (yyval.intval) = 0; }
#line 3101 "sql.tab.c"
    break;

  case 194: /* opt_temporary: TEMPORARY  */
#line 829 "sql.y"
               { (yyval.intval) = 1;}
#line 3107 "sql.tab.c"
    break;

  case 195: /* create_col_list: create_definition  */
#line 832 "sql.y"
                                   { (yyval.intval) = 1; }
#line 3113 "sql.tab.c"
    break;

  case 196: /* create_col_list: create_col_list ',' create_definition  */
#line 833 "sql.y"
                                            { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3119 "sql.tab.c"
    break;

  case 197: /* create_definition: PRIMARY KEY '(' column_list ')'  */
#line 836 "sql.y"
                                                      { emit("PRIKEY %d", (yyvsp[-1].intval)); }
#line 3125 "sql.tab.c"
    break;

  case 198: /* create_definition: KEY '(' column_list ')'  */
#line 837 "sql.y"
                                         { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3131 "sql.tab.c"
    break;

  case 199: /* create_definition: INDEX '(' column_list ')'  */
#line 838 "sql.y"
                                         { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3137 "sql.tab.c"
    break;

  case 200: /* create_definition: FULLTEXT INDEX '(' column_list ')'  */
#line 839 "sql.y"
                                         { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3143 "sql.tab.c"
    break;

  case 201: /* create_definition: FULLTEXT KEY '(' column_list ')'  */
#line 840 "sql.y"
                                         { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3149 "sql.tab.c"
    break;

  case 202: /* $@1: %empty  */
#line 843 "sql.y"
                   { emit("STARTCOL"); }
#line 3155 "sql.tab.c"
    break;

  case 203: /* create_definition: $@1 NAME data_type column_atts  */
#line 844 "sql.y"
                   { emit("COLUMNDEF %d %s", (yyvsp[-1].intval), (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3161 "sql.tab.c"
    break;

  case 204: /* column_atts: %empty  */
#line 846 "sql.y"
                       { (yyval.intval) = 0; }
#line 3167 "sql.tab.c"
    break;

  case 205: /* column_atts: column_atts NOT NULLX  */
#line 847 "sql.y"
                                        { emit("ATTR NOTNULL"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3173 "sql.tab.c"
    break;

  case 207: /* column_atts: column_atts DEFAULT STRING  */
#line 850 "sql.y"
        { emit("ATTR DEFAULT STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3179 "sql.tab.c"
    break;

  case 208: /* column_atts: column_atts DEFAULT INTNUM  */
#line 852 "sql.y"
        { emit("ATTR DEFAULT NUMBER %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3185 "sql.tab.c"
    break;

  case 209: /* column_atts: column_atts DEFAULT APPROXNUM  */
#line 854 "sql.y"
        { emit("ATTR DEFAULT FLOAT %g", (yyvsp[0].floatval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3191 "sql.tab.c"
    break;

  case 210: /* column_atts: column_atts DEFAULT BOOL  */
#line 856 "sql.y"
        { emit("ATTR DEFAULT BOOL %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3197 "sql.tab.c"
    break;

  case 211: /* column_atts: column_atts AUTO_INCREMENT  */
#line 858 "sql.y"
        { emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3203 "sql.tab.c"
    break;

  case 212: /* column_atts: column_atts UNIQUE '(' column_list ')'  */
#line 860 "sql.y"
        { emit("ATTR UNIQUEKEY %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3209 "sql.tab.c"
    break;

  case 213: /* column_atts: column_atts UNIQUE KEY  */
#line 861 "sql.y"
                             { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3215 "sql.tab.c"
    break;

  case 214: /* column_atts: column_atts PRIMARY KEY  */
#line 862 "sql.y"
                              { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3221 "sql.tab.c"
    break;

  case 215: /* column_atts: column_atts KEY  */
#line 863 "sql.y"
                      { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3227 "sql.tab.c"
    break;

  case 216: /* column_atts: column_atts COMMENT STRING  */
#line 865 "sql.y"
        { emit("ATTR COMMENT %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3233 "sql.tab.c"
    break;

  case 217: /* opt_length: %empty  */
#line 868 "sql.y"
                      { (yyval.intval) = 0; }
#line 3239 "sql.tab.c"
    break;

  case 218: /* opt_length: '(' INTNUM ')'  */
#line 869 "sql.y"
                    { (yyval.intval) = (yyvsp[-1].intval); }
#line 3245 "sql.tab.c"
    break;

  case 219: /* opt_length: '(' INTNUM ',' INTNUM ')'  */
#line 870 "sql.y"
                               { (yyval.intval) = (yyvsp[-3].intval) + 1000*(yyvsp[-1].intval); }
#line 3251 "sql.tab.c"
    break;

  case 220: /* opt_binary: %empty  */
#line 873 "sql.y"
                      { (yyval.intval) = 0; }
#line 3257 "sql.tab.c"
    break;

  case 221: /* opt_binary: BINARY  */
#line 874 "sql.y"
            { (yyval.intval) = 4000; }
#line 3263 "sql.tab.c"
    break;

  case 222: /* opt_uz: %empty  */
#line 877 "sql.y"
                  { (yyval.intval) = 0; }
#line 3269 "sql.tab.c"
    break;

  case 223: /* opt_uz: opt_uz UNSIGNED  */
#line 878 "sql.y"
                     { (yyval.intval) = (yyvsp[-1].intval) | 1000; }
#line 3275 "sql.tab.c"
    break;

  case 224: /* opt_uz: opt_uz ZEROFILL  */
#line 879 "sql.y"
                     { (yyval.intval) = (yyvsp[-1].intval) | 2000; }
#line 3281 "sql.tab.c"
    break;

  case 226: /* opt_csc: opt_csc CHAR SET STRING  */
#line 883 "sql.y"
                             { emit("COLCHARSET %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3287 "sql.tab.c"
    break;

  case 227: /* opt_csc: opt_csc COLLATE STRING  */
#line 884 "sql.y"
                            { emit("COLCOLLATE %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3293 "sql.tab.c"
    break;

  case 228: /* data_type: BIT opt_length  */
#line 888 "sql.y"
                    { (yyval.intval) = 10000 + (yyvsp[0].intval); }
#line 3299 "sql.tab.c"
    break;

  case 229: /* data_type: TINYINT opt_length opt_uz  */
#line 889 "sql.y"
                               { (yyval.intval) = 10000 + (yyvsp[-1].intval); }
#line 3305 "sql.tab.c"
    break;

  case 230: /* data_type: SMALLINT opt_length opt_uz  */
#line 890 "sql.y"
                                { (yyval.intval) = 20000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3311 "sql.tab.c"
    break;

  case 231: /* data_type: MEDIUMINT opt_length opt_uz  */
#line 891 "sql.y"
                                 { (yyval.intval) = 30000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3317 "sql.tab.c"
    break;

  case 232: /* data_type: INT opt_length opt_uz  */
#line 892 "sql.y"
                           { (yyval.intval) = 40000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3323 "sql.tab.c"
    break;

  case 233: /* data_type: INTEGER opt_length opt_uz  */
#line 893 "sql.y"
                               { (yyval.intval) = 50000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3329 "sql.tab.c"
    break;

  case 234: /* data_type: BIGINT opt_length opt_uz  */
#line 894 "sql.y"
                              { (yyval.intval) = 60000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3335 "sql.tab.c"
    break;

  case 235: /* data_type: REAL opt_length opt_uz  */
#line 895 "sql.y"
                            { (yyval.intval) = 70000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3341 "sql.tab.c"
    break;

  case 236: /* data_type: DOUBLE opt_length opt_uz  */
#line 896 "sql.y"
                              { (yyval.intval) = 80000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3347 "sql.tab.c"
    break;

  case 237: /* data_type: FLOAT opt_length opt_uz  */
#line 897 "sql.y"
                             { (yyval.intval) = 90000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3353 "sql.tab.c"
    break;

  case 238: /* data_type: DECIMAL opt_length opt_uz  */
#line 898 "sql.y"
                               { (yyval.intval) = 110000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3359 "sql.tab.c"
    break;

  case 239: /* data_type: DATE  */
#line 899 "sql.y"
          { (yyval.intval) = 100001; }
#line 3365 "sql.tab.c"
    break;

  case 240: /* data_type: TIME  */
#line 900 "sql.y"
          { (yyval.intval) = 100002; }
#line 3371 "sql.tab.c"
    break;

  case 241: /* data_type: TIMESTAMP  */
#line 901 "sql.y"
               { (yyval.intval) = 100003; }
#line 3377 "sql.tab.c"
    break;

  case 242: /* data_type: DATETIME  */
#line 902 "sql.y"
              { (yyval.intval) = 100004; }
#line 3383 "sql.tab.c"
    break;

  case 243: /* data_type: YEAR  */
#line 903 "sql.y"
          { (yyval.intval) = 100005; }
#line 3389 "sql.tab.c"
    break;

  case 244: /* data_type: CHAR opt_length opt_csc  */
#line 904 "sql.y"
                             { (yyval.intval) = 120000 + (yyvsp[-1].intval); }
#line 3395 "sql.tab.c"
    break;

  case 245: /* data_type: VARCHAR '(' INTNUM ')' opt_csc  */
#line 905 "sql.y"
                                    { (yyval.intval) = 130000 + (yyvsp[-2].intval); }
#line 3401 "sql.tab.c"
    break;

  case 246: /* data_type: BINARY opt_length  */
#line 906 "sql.y"
                       { (yyval.intval) = 140000 + (yyvsp[0].intval); }
#line 3407 "sql.tab.c"
    break;

  case 247: /* data_type: VARBINARY '(' INTNUM ')'  */
#line 907 "sql.y"
                              { (yyval.intval) = 150000 + (yyvsp[-1].intval); }
#line 3413 "sql.tab.c"
    break;

  case 248: /* data_type: TINYBLOB  */
#line 908 "sql.y"
              { (yyval.intval) = 160001; }
#line 3419 "sql.tab.c"
    break;

  case 249: /* data_type: BLOB  */
#line 909 "sql.y"
          { (yyval.intval) = 160002; }
#line 3425 "sql.tab.c"
    break;

  case 250: /* data_type: MEDIUMBLOB  */
#line 910 "sql.y"
                { (yyval.intval) = 160003; }
#line 3431 "sql.tab.c"
    break;

  case 251: /* data_type: LONGBLOB  */
#line 911 "sql.y"
              { (yyval.intval) = 160004; }
#line 3437 "sql.tab.c"
    break;

  case 252: /* data_type: TINYTEXT opt_binary opt_csc  */
#line 912 "sql.y"
                                 { (yyval.intval) = 170000 + (yyvsp[-1].intval); }
#line 3443 "sql.tab.c"
    break;

  case 253: /* data_type: TEXT opt_binary opt_csc  */
#line 913 "sql.y"
                             { (yyval.intval) = 171000 + (yyvsp[-1].intval); }
#line 3449 "sql.tab.c"
    break;

  case 254: /* data_type: MEDIUMTEXT opt_binary opt_csc  */
#line 914 "sql.y"
                                   { (yyval.intval) = 172000 + (yyvsp[-1].intval); }
#line 3455 "sql.tab.c"
    break;

  case 255: /* data_type: LONGTEXT opt_binary opt_csc  */
#line 915 "sql.y"
                                 { (yyval.intval) = 173000 + (yyvsp[-1].intval); }
#line 3461 "sql.tab.c"
    break;

  case 256: /* data_type: ENUM '(' enum_list ')' opt_csc  */
#line 916 "sql.y"
                                    { (yyval.intval) = 200000 + (yyvsp[-2].intval); }
#line 3467 "sql.tab.c"
    break;

  case 257: /* data_type: SET '(' enum_list ')' opt_csc  */
#line 917 "sql.y"
                                   { (yyval.intval) = 210000 + (yyvsp[-2].intval); }
#line 3473 "sql.tab.c"
    break;

  case 258: /* enum_list: STRING  */
#line 920 "sql.y"
                  { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 3479 "sql.tab.c"
    break;

  case 259: /* enum_list: enum_list ',' STRING  */
#line 921 "sql.y"
                          { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3485 "sql.tab.c"
    break;

  case 260: /* create_select_statement: opt_ignore_replace opt_as select_stmt  */
#line 924 "sql.y"
                                                                  { emit("CREATESELECT %d", (yyvsp[-2].intval)); }
#line 3491 "sql.tab.c"
    break;

  case 261: /* opt_ignore_replace: %empty  */
#line 927 "sql.y"
                              { (yyval.intval) = 0; }
#line 3497 "sql.tab.c"
    break;

  case 262: /* opt_ignore_replace: IGNORE  */
#line 928 "sql.y"
            { (yyval.intval) = 1; }
#line 3503 "sql.tab.c"
    break;

  case 263: /* opt_ignore_replace: REPLACE  */
#line 929 "sql.y"
             { (yyval.intval) = 2; }
#line 3509 "sql.tab.c"
    break;

  case 264: /* stmt: set_stmt  */
#line 934 "sql.y"
               { emit("STMT"); }
#line 3515 "sql.tab.c"
    break;

  case 268: /* set_expr: USERVAR COMPARISON expr  */
#line 942 "sql.y"
                              { if ((yyvsp[-1].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[-2].strval)); YYERROR; }
                 emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3522 "sql.tab.c"
    break;

  case 269: /* set_expr: USERVAR ASSIGN expr  */
#line 944 "sql.y"
                          { emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3528 "sql.tab.c"
    break;


#line 3532 "sql.tab.c"

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

#line 947 "sql.y"

void
emit(char *s, ...)
{
}

void
yyerror(char *s, ...)
{
}

void 
GotStringArg(const char *str)
{

   switch (YYCurState)
   {
      case YYState_SELECT:
         //
         break;
      case YYState_FROM:

         break; 
   }
   
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
