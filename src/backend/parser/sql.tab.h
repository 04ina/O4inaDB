/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SQL_TAB_H_INCLUDED
# define YY_YY_SQL_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NAME = 258,                    /* NAME  */
    STRING = 259,                  /* STRING  */
    INTNUM = 260,                  /* INTNUM  */
    BOOL = 261,                    /* BOOL  */
    APPROXNUM = 262,               /* APPROXNUM  */
    USERVAR = 263,                 /* USERVAR  */
    ASSIGN = 264,                  /* ASSIGN  */
    OR = 265,                      /* OR  */
    XOR = 266,                     /* XOR  */
    ANDOP = 267,                   /* ANDOP  */
    IN = 268,                      /* IN  */
    IS = 269,                      /* IS  */
    LIKE = 270,                    /* LIKE  */
    REGEXP = 271,                  /* REGEXP  */
    NOT = 272,                     /* NOT  */
    BETWEEN = 273,                 /* BETWEEN  */
    COMPARISON = 274,              /* COMPARISON  */
    SHIFT = 275,                   /* SHIFT  */
    MOD = 276,                     /* MOD  */
    EQUAL = 277,                   /* EQUAL  */
    MORE_OR_EQUAL = 278,           /* MORE_OR_EQUAL  */
    MORE = 279,                    /* MORE  */
    LESS_OR_EQUAL = 280,           /* LESS_OR_EQUAL  */
    LESS = 281,                    /* LESS  */
    NOT_EQUAL = 282,               /* NOT_EQUAL  */
    UMINUS = 283,                  /* UMINUS  */
    ADD = 284,                     /* ADD  */
    ALL = 285,                     /* ALL  */
    ALTER = 286,                   /* ALTER  */
    ANALYZE = 287,                 /* ANALYZE  */
    AND = 288,                     /* AND  */
    ANY = 289,                     /* ANY  */
    AS = 290,                      /* AS  */
    ASC = 291,                     /* ASC  */
    AUTO_INCREMENT = 292,          /* AUTO_INCREMENT  */
    BEFORE = 293,                  /* BEFORE  */
    BIGINT = 294,                  /* BIGINT  */
    BINARY = 295,                  /* BINARY  */
    BIT = 296,                     /* BIT  */
    BLOB = 297,                    /* BLOB  */
    BOTH = 298,                    /* BOTH  */
    BY = 299,                      /* BY  */
    CALL = 300,                    /* CALL  */
    CASCADE = 301,                 /* CASCADE  */
    CASE = 302,                    /* CASE  */
    CHANGE = 303,                  /* CHANGE  */
    CHAR = 304,                    /* CHAR  */
    CHECK = 305,                   /* CHECK  */
    COLLATE = 306,                 /* COLLATE  */
    COLUMN = 307,                  /* COLUMN  */
    COMMENT = 308,                 /* COMMENT  */
    CONDITION = 309,               /* CONDITION  */
    CONSTRAINT = 310,              /* CONSTRAINT  */
    CONTINUE = 311,                /* CONTINUE  */
    CONVERT = 312,                 /* CONVERT  */
    CREATE = 313,                  /* CREATE  */
    CROSS = 314,                   /* CROSS  */
    CURRENT_DATE = 315,            /* CURRENT_DATE  */
    CURRENT_TIME = 316,            /* CURRENT_TIME  */
    CURRENT_TIMESTAMP = 317,       /* CURRENT_TIMESTAMP  */
    CURRENT_USER = 318,            /* CURRENT_USER  */
    CURSOR = 319,                  /* CURSOR  */
    DATABASE = 320,                /* DATABASE  */
    DATABASES = 321,               /* DATABASES  */
    DATE = 322,                    /* DATE  */
    DATETIME = 323,                /* DATETIME  */
    DAY_HOUR = 324,                /* DAY_HOUR  */
    DAY_MICROSECOND = 325,         /* DAY_MICROSECOND  */
    DAY_MINUTE = 326,              /* DAY_MINUTE  */
    DAY_SECOND = 327,              /* DAY_SECOND  */
    DECIMAL = 328,                 /* DECIMAL  */
    DECLARE = 329,                 /* DECLARE  */
    DEFAULT = 330,                 /* DEFAULT  */
    DELAYED = 331,                 /* DELAYED  */
    DELETE = 332,                  /* DELETE  */
    DESC = 333,                    /* DESC  */
    DESCRIBE = 334,                /* DESCRIBE  */
    DETERMINISTIC = 335,           /* DETERMINISTIC  */
    DISTINCT = 336,                /* DISTINCT  */
    DISTINCTROW = 337,             /* DISTINCTROW  */
    DIV = 338,                     /* DIV  */
    DOUBLE = 339,                  /* DOUBLE  */
    DROP = 340,                    /* DROP  */
    DUAL = 341,                    /* DUAL  */
    EACH = 342,                    /* EACH  */
    ELSE = 343,                    /* ELSE  */
    ELSEIF = 344,                  /* ELSEIF  */
    END = 345,                     /* END  */
    ENUM = 346,                    /* ENUM  */
    EXIT = 347,                    /* EXIT  */
    EXPLAIN = 348,                 /* EXPLAIN  */
    FETCH = 349,                   /* FETCH  */
    FLOAT = 350,                   /* FLOAT  */
    FOR = 351,                     /* FOR  */
    FORCE = 352,                   /* FORCE  */
    FOREIGN = 353,                 /* FOREIGN  */
    FROM = 354,                    /* FROM  */
    FULLTEXT = 355,                /* FULLTEXT  */
    GRANT = 356,                   /* GRANT  */
    GROUP = 357,                   /* GROUP  */
    HAVING = 358,                  /* HAVING  */
    HIGH_PRIORITY = 359,           /* HIGH_PRIORITY  */
    HOUR_MICROSECOND = 360,        /* HOUR_MICROSECOND  */
    HOUR_MINUTE = 361,             /* HOUR_MINUTE  */
    HOUR_SECOND = 362,             /* HOUR_SECOND  */
    IF = 363,                      /* IF  */
    IGNORE = 364,                  /* IGNORE  */
    INFILE = 365,                  /* INFILE  */
    INDEX = 366,                   /* INDEX  */
    INNER = 367,                   /* INNER  */
    INOUT = 368,                   /* INOUT  */
    INSENSITIVE = 369,             /* INSENSITIVE  */
    INSERT = 370,                  /* INSERT  */
    INT = 371,                     /* INT  */
    INTEGER = 372,                 /* INTEGER  */
    INTERVAL = 373,                /* INTERVAL  */
    INTO = 374,                    /* INTO  */
    ITERATE = 375,                 /* ITERATE  */
    JOIN = 376,                    /* JOIN  */
    KEY = 377,                     /* KEY  */
    KEYS = 378,                    /* KEYS  */
    KILL = 379,                    /* KILL  */
    LEADING = 380,                 /* LEADING  */
    LEAVE = 381,                   /* LEAVE  */
    LEFT = 382,                    /* LEFT  */
    LIMIT = 383,                   /* LIMIT  */
    LINES = 384,                   /* LINES  */
    LOAD = 385,                    /* LOAD  */
    LOCALTIME = 386,               /* LOCALTIME  */
    LOCALTIMESTAMP = 387,          /* LOCALTIMESTAMP  */
    LOCK = 388,                    /* LOCK  */
    LONG = 389,                    /* LONG  */
    LONGBLOB = 390,                /* LONGBLOB  */
    LONGTEXT = 391,                /* LONGTEXT  */
    LOOP = 392,                    /* LOOP  */
    LOW_PRIORITY = 393,            /* LOW_PRIORITY  */
    MATCH = 394,                   /* MATCH  */
    MEDIUMBLOB = 395,              /* MEDIUMBLOB  */
    MEDIUMINT = 396,               /* MEDIUMINT  */
    MEDIUMTEXT = 397,              /* MEDIUMTEXT  */
    MINUTE_MICROSECOND = 398,      /* MINUTE_MICROSECOND  */
    MINUTE_SECOND = 399,           /* MINUTE_SECOND  */
    MODIFIES = 400,                /* MODIFIES  */
    NATURAL = 401,                 /* NATURAL  */
    NO_WRITE_TO_BINLOG = 402,      /* NO_WRITE_TO_BINLOG  */
    NULLX = 403,                   /* NULLX  */
    NUMBER = 404,                  /* NUMBER  */
    ON = 405,                      /* ON  */
    ONDUPLICATE = 406,             /* ONDUPLICATE  */
    OPTIMIZE = 407,                /* OPTIMIZE  */
    OPTION = 408,                  /* OPTION  */
    OPTIONALLY = 409,              /* OPTIONALLY  */
    ORDER = 410,                   /* ORDER  */
    OUT = 411,                     /* OUT  */
    OUTER = 412,                   /* OUTER  */
    OUTFILE = 413,                 /* OUTFILE  */
    PRECISION = 414,               /* PRECISION  */
    PRIMARY = 415,                 /* PRIMARY  */
    PROCEDURE = 416,               /* PROCEDURE  */
    PURGE = 417,                   /* PURGE  */
    QUICK = 418,                   /* QUICK  */
    READ = 419,                    /* READ  */
    READS = 420,                   /* READS  */
    REAL = 421,                    /* REAL  */
    REFERENCES = 422,              /* REFERENCES  */
    RELEASE = 423,                 /* RELEASE  */
    RENAME = 424,                  /* RENAME  */
    REPEAT = 425,                  /* REPEAT  */
    REPLACE = 426,                 /* REPLACE  */
    REQUIRE = 427,                 /* REQUIRE  */
    RESTRICT = 428,                /* RESTRICT  */
    RETURN = 429,                  /* RETURN  */
    REVOKE = 430,                  /* REVOKE  */
    RIGHT = 431,                   /* RIGHT  */
    ROLLUP = 432,                  /* ROLLUP  */
    SCHEMA = 433,                  /* SCHEMA  */
    SCHEMAS = 434,                 /* SCHEMAS  */
    SECOND_MICROSECOND = 435,      /* SECOND_MICROSECOND  */
    SELECT = 436,                  /* SELECT  */
    SENSITIVE = 437,               /* SENSITIVE  */
    SEPARATOR = 438,               /* SEPARATOR  */
    SET = 439,                     /* SET  */
    SHOW = 440,                    /* SHOW  */
    SMALLINT = 441,                /* SMALLINT  */
    SOME = 442,                    /* SOME  */
    SONAME = 443,                  /* SONAME  */
    SPATIAL = 444,                 /* SPATIAL  */
    SPECIFIC = 445,                /* SPECIFIC  */
    SQL = 446,                     /* SQL  */
    SQLEXCEPTION = 447,            /* SQLEXCEPTION  */
    SQLSTATE = 448,                /* SQLSTATE  */
    SQLWARNING = 449,              /* SQLWARNING  */
    SQL_BIG_RESULT = 450,          /* SQL_BIG_RESULT  */
    SQL_CALC_FOUND_ROWS = 451,     /* SQL_CALC_FOUND_ROWS  */
    SQL_SMALL_RESULT = 452,        /* SQL_SMALL_RESULT  */
    SSL = 453,                     /* SSL  */
    STARTING = 454,                /* STARTING  */
    STRAIGHT_JOIN = 455,           /* STRAIGHT_JOIN  */
    TABLE = 456,                   /* TABLE  */
    TEMPORARY = 457,               /* TEMPORARY  */
    TERMINATED = 458,              /* TERMINATED  */
    TEXT = 459,                    /* TEXT  */
    THEN = 460,                    /* THEN  */
    TIME = 461,                    /* TIME  */
    TIMESTAMP = 462,               /* TIMESTAMP  */
    TINYBLOB = 463,                /* TINYBLOB  */
    TINYINT = 464,                 /* TINYINT  */
    TINYTEXT = 465,                /* TINYTEXT  */
    TO = 466,                      /* TO  */
    TRAILING = 467,                /* TRAILING  */
    TRIGGER = 468,                 /* TRIGGER  */
    UNDO = 469,                    /* UNDO  */
    UNION = 470,                   /* UNION  */
    UNIQUE = 471,                  /* UNIQUE  */
    UNLOCK = 472,                  /* UNLOCK  */
    UNSIGNED = 473,                /* UNSIGNED  */
    UPDATE = 474,                  /* UPDATE  */
    USAGE = 475,                   /* USAGE  */
    USE = 476,                     /* USE  */
    USING = 477,                   /* USING  */
    UTC_DATE = 478,                /* UTC_DATE  */
    UTC_TIME = 479,                /* UTC_TIME  */
    UTC_TIMESTAMP = 480,           /* UTC_TIMESTAMP  */
    VALUES = 481,                  /* VALUES  */
    VARBINARY = 482,               /* VARBINARY  */
    VARCHAR = 483,                 /* VARCHAR  */
    VARYING = 484,                 /* VARYING  */
    WHEN = 485,                    /* WHEN  */
    WHERE = 486,                   /* WHERE  */
    WHILE = 487,                   /* WHILE  */
    WITH = 488,                    /* WITH  */
    WRITE = 489,                   /* WRITE  */
    YEAR = 490,                    /* YEAR  */
    YEAR_MONTH = 491,              /* YEAR_MONTH  */
    ZEROFILL = 492,                /* ZEROFILL  */
    ESCAPED = 493,                 /* ESCAPED  */
    EXISTS = 494,                  /* EXISTS  */
    FSUBSTRING = 495,              /* FSUBSTRING  */
    FTRIM = 496,                   /* FTRIM  */
    FDATE_ADD = 497,               /* FDATE_ADD  */
    FDATE_SUB = 498,               /* FDATE_SUB  */
    FCOUNT = 499                   /* FCOUNT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 37 "sql.y"

        int intval;
        double floatval;
        char *strval;
        int subtok;

#line 315 "sql.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SQL_TAB_H_INCLUDED  */
