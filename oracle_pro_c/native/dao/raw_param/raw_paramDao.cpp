
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[18];
};
static const struct sqlcxp sqlfpn =
{
    17,
    "raw_paramDao.pcpp"
};


static unsigned int sqlctx = 10322556;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
            void  *sqhstv[5];
   unsigned int   sqhstl[5];
            int   sqhsts[5];
            void  *sqindv[5];
            int   sqinds[5];
   unsigned int   sqharm[5];
   unsigned int   *sqharc[5];
   unsigned short  sqadto[5];
   unsigned short  sqtdso[5];
} sqlstm = {12,5};

// Prototypes
extern "C" {
  void sqlcxt (void **, unsigned int *,
               struct sqlexd *, const struct sqlcxp *);
  void sqlcx2t(void **, unsigned int *,
               struct sqlexd *, const struct sqlcxp *);
  void sqlbuft(void **, char *);
  void sqlgs2t(void **, char *);
  void sqlorat(void **, unsigned int *, void *);
}

// Forms Interface
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern "C" { void sqliem(unsigned char *, signed int *); }

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4130,1,0,0,
5,0,0,1,118,0,4,77,0,0,5,1,0,1,0,2,68,0,0,2,9,0,0,2,68,0,0,2,9,0,0,1,68,0,0,
40,0,0,2,55,0,3,113,0,0,4,4,0,1,0,1,68,0,0,1,68,0,0,1,9,0,0,1,68,0,0,
71,0,0,3,109,0,5,122,0,0,5,5,0,1,0,1,68,0,0,1,9,0,0,1,68,0,0,1,9,0,0,1,68,0,0,
106,0,0,4,46,0,2,135,0,0,1,1,0,1,0,1,68,0,0,
125,0,0,5,56,0,3,168,0,0,4,4,0,1,0,1,68,0,0,1,68,0,0,1,9,0,0,1,68,0,0,
156,0,0,6,108,0,5,183,0,0,5,5,0,1,0,1,68,0,0,1,9,0,0,1,68,0,0,1,9,0,0,1,68,0,0,
191,0,0,7,46,0,2,198,0,0,1,1,0,1,0,1,68,0,0,
};


#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
//#include<vector>
#include"raw_param.h"
#include"raw_paramDao.h"

namespace nrp {

#include<sqlca.h>
#include"../../main.h"
  
  /* EXEC SQL BEGIN DECLARE SECTION; */ 

  //for scalar case
  unsigned long long  ull_t;
  unsigned short  us_t_1;
  unsigned short  us_t_2;
  static /* varchar c20_t_1[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } c20_t_1;

  static /* varchar c20_t_2[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } c20_t_2;

  //cycle's increment varialble
  unsigned short loop;
  //for vector case
  unsigned long long  aull_t[100];
  unsigned short  aus_t_1[100];
  unsigned short  aus_t_2[100];
  static /* varchar ac20_t_1[100][20]; */ 
struct { unsigned short len; unsigned char arr[22]; } ac20_t_1[100];

  static /* varchar ac20_t_2[100][20]; */ 
struct { unsigned short len; unsigned char arr[22]; } ac20_t_2[100];

  /* EXEC SQL END DECLARE SECTION; */ 

  
  using namespace std;

  void rawParamDao::copy(rawParam *rp)
  {
    char *value = rp->getDateTime();
    ull_t = rp->getId();
    us_t_1 = rp->getPointId();
    for (int i = 0; i < 19; ++i)
      c20_t_1.arr[i] = value[i];
    c20_t_1.arr[19] = '\0';
    c20_t_1.len = ustrlen(c20_t_1.arr);
    us_t_2  = rp->getPrediction();
    value = rp->getVorticityAdvection();
    for (int i = 0; i < 19; ++i)
      c20_t_2.arr[i] = value[i];
    c20_t_2.arr[19] = '\0';
    c20_t_2.len = ustrlen(c20_t_2.arr);
  }

  void rawParamDao::acopy(rawParam *arp, int size_a)
  {
    char *value;

    for (int i = 0; i < size_a; ++i) {
      value = arp[i].getDateTime();
      aull_t[i] = arp[i].getId();
      aus_t_1[i] = arp[i].getPointId();
      for (int j = 0; j < 19; ++j)
	ac20_t_1[i].arr[j] = value[j];
      ac20_t_1[i].arr[19] = '\0';
      ac20_t_1[i].len = ustrlen(ac20_t_1[i].arr);
      aus_t_2[i] = arp[i].getPrediction();
      value = arp[i].getVorticityAdvection();
      for (int j = 0; j < 19; ++j)
	ac20_t_2[i].arr[j] = value[j];
      ac20_t_2[i].arr[19] = '\0';
      ac20_t_2[i].len = ustrlen(ac20_t_2[i].arr);
    }
  }
 
  rawParam *rawParamDao::findById(const ull id)
  {    
    //set id for sql select query
    ull_t = id;
    
    //sql query with oracle pro*C/C++ 
    /* EXEC SQL SELECT      
      point_id,
      datetime,
      prediction,
      vorticity_advection
      INTO :us_t_1, :c20_t_1, :us_t_2, :c20_t_2 
      FROM raw_param
      WHERE raw_param_id = :ull_t; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "select point_id ,datetime ,prediction ,vorticity_advectio\
n into :b0,:b1,:b2,:b3  from raw_param where raw_param_id=:b4";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )5;
    sqlstm.selerr = (unsigned short)1;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&us_t_1;
    sqlstm.sqhstl[0] = (unsigned int  )sizeof(short);
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&c20_t_1;
    sqlstm.sqhstl[1] = (unsigned int  )22;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&us_t_2;
    sqlstm.sqhstl[2] = (unsigned int  )sizeof(short);
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&c20_t_2;
    sqlstm.sqhstl[3] = (unsigned int  )22;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&ull_t;
    sqlstm.sqhstl[4] = (unsigned int  )sizeof(long long);
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



    //copy values to local variables
    cId = ull_t;
    cPointId = us_t_1;
    for (int i = 0; i < 19; ++i)
      cDateTime[i] = c20_t_1.arr[i];
    cDateTime[19] = '\0';
    cPrediction = us_t_2;
    for (int i = 0; i < 19; ++i)
      cVorticityAdvection[i] = c20_t_2.arr[i];
    cVorticityAdvection[19] = '\0';

    //set new object with selected values
    rawParam *rp = new rawParam();
    rp->setId(cId);
    rp->setPointId(cPointId);
    rp->setDateTime(cDateTime);
    rp->setPrediction(cPrediction);
    rp->setVorticityAdvection(cVorticityAdvection);

    //printf("result - id = %llu name = %s type = %u\n", rp->getId(), rp->getName(), rp->getType());
    return rp;
  }

  void rawParamDao::insert(rawParam *rp)
  {
    cout << "insert scalar mode"  << endl;
    this->copy(rp);
    /* EXEC SQL INSERT INTO raw_param 
      VALUES(:ull_t, :us_t_1, :c20_t_1, :us_t_2, c20_t_2); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into raw_param  values (:b0,:b1,:b2,:b3,c20_t_2)";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )40;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&ull_t;
    sqlstm.sqhstl[0] = (unsigned int  )sizeof(long long);
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&us_t_1;
    sqlstm.sqhstl[1] = (unsigned int  )sizeof(short);
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&c20_t_1;
    sqlstm.sqhstl[2] = (unsigned int  )22;
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&us_t_2;
    sqlstm.sqhstl[3] = (unsigned int  )sizeof(short);
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    //EXEC SQL COMMIT;
  }

  void rawParamDao::update(rawParam *rp)
  {
    cout << "update scalar mode" << endl;
    this->copy(rp);
    /* EXEC SQL UPDATE raw_param SET
      point_id=:us_t_1,
      datetime=:c20_t_1,
      prediction=:us_t_2,
      vorticity_advection=:c20_t_2
      WHERE raw_param_id=:ull_t; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "update raw_param  set point_id=:b0,datetime=:b1,predictio\
n=:b2,vorticity_advection=:b3 where raw_param_id=:b4";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )71;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&us_t_1;
    sqlstm.sqhstl[0] = (unsigned int  )sizeof(short);
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&c20_t_1;
    sqlstm.sqhstl[1] = (unsigned int  )22;
    sqlstm.sqhsts[1] = (         int  )0;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)&us_t_2;
    sqlstm.sqhstl[2] = (unsigned int  )sizeof(short);
    sqlstm.sqhsts[2] = (         int  )0;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)&c20_t_2;
    sqlstm.sqhstl[3] = (unsigned int  )22;
    sqlstm.sqhsts[3] = (         int  )0;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)&ull_t;
    sqlstm.sqhstl[4] = (unsigned int  )sizeof(long long);
    sqlstm.sqhsts[4] = (         int  )0;
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    //EXEC SQL COMMIT WORK RELEASE;
  }

  void rawParamDao::remove(rawParam *rp)
  {
    cout << "delete scalar mode" << endl;
    this->copy(rp);
    /* EXEC SQL DELETE FROM raw_param WHERE raw_param_id=:ull_t; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "delete  from raw_param  where raw_param_id=:b0";
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )106;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&ull_t;
    sqlstm.sqhstl[0] = (unsigned int  )sizeof(long long);
    sqlstm.sqhsts[0] = (         int  )0;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    //EXEC SQL COMMIT WORK RELEASE;
  }

  rawParam *rawParamDao::findById(ull *aid, int size_a)
  {
    // //set id values for sql select queries
    // for (int i = 0; i < size_a; ++i)
    //   aull_t[i] = aid[i];
    
    // //sql query with oracle pro*C/C++ 
    // SELECT rawParam_type, rawParam_name INTO :aus_t, :ac20_t FROM rawParam WHERE rawParam_id = :aull_t;

    rawParam *rp, *arp = new rawParam[size_a];

    for (int i = 0; i < size_a; ++i) {
      rp = findById(aid[i]);
      //set new object with selected values
      arp[i].setId(rp->getId());
      arp[i].setPointId(rp->getPointId());
      arp[i].setDateTime(rp->getDateTime());
      arp[i].setPrediction(rp->getPrediction());
      arp[i].setVorticityAdvection(rp->getVorticityAdvection());
    }
    
    return arp;
  }

  void rawParamDao::insert(rawParam *arp, int size_a)
  {
    cout << "insert vector mode" << endl;
    this->acopy(arp, size_a);
    loop = size_a;
    /* EXEC SQL FOR :loop
      INSERT INTO raw_param
      VALUES(:aull_t, :aus_t_1, :ac20_t_1, :aus_t_2, ac20_t_2); */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "insert into raw_param  values (:b1,:b2,:b3,:b4,ac20_t_2)";
    sqlstm.iters = (unsigned int  )loop;
    sqlstm.offset = (unsigned int  )125;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)aull_t;
    sqlstm.sqhstl[0] = (unsigned int  )sizeof(long long);
    sqlstm.sqhsts[0] = (         int  )sizeof(long long);
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqharc[0] = (unsigned int   *)0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)aus_t_1;
    sqlstm.sqhstl[1] = (unsigned int  )sizeof(short);
    sqlstm.sqhsts[1] = (         int  )sizeof(short);
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqharc[1] = (unsigned int   *)0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)ac20_t_1;
    sqlstm.sqhstl[2] = (unsigned int  )22;
    sqlstm.sqhsts[2] = (         int  )24;
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqharc[2] = (unsigned int   *)0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)aus_t_2;
    sqlstm.sqhstl[3] = (unsigned int  )sizeof(short);
    sqlstm.sqhsts[3] = (         int  )sizeof(short);
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqharc[3] = (unsigned int   *)0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    //EXEC SQL COMMIT WORK RELEASE;

    // for (int i = 0; i < size_a; ++i) {
    //   cout << arp[i].getName() << endl;
    // }
  }

  void rawParamDao::update(rawParam *arp, int size_a)
  {
    cout << "update vector mode" << endl;
    this->acopy(arp, size_a);
    loop = size_a;
    /* EXEC SQL FOR :loop
      UPDATE rawParam SET
      point_id=:aus_t_1,
      datetime=:ac20_t_1,
      prediction=:aus_t_2,
      vorticity_advection=:ac20_t_2
      WHERE raw_param_id=:aull_t; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "update rawParam  set point_id=:b1,datetime=:b2,prediction\
=:b3,vorticity_advection=:b4 where raw_param_id=:b5";
    sqlstm.iters = (unsigned int  )loop;
    sqlstm.offset = (unsigned int  )156;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)aus_t_1;
    sqlstm.sqhstl[0] = (unsigned int  )sizeof(short);
    sqlstm.sqhsts[0] = (         int  )sizeof(short);
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqharc[0] = (unsigned int   *)0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)ac20_t_1;
    sqlstm.sqhstl[1] = (unsigned int  )22;
    sqlstm.sqhsts[1] = (         int  )24;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqharc[1] = (unsigned int   *)0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqhstv[2] = (         void  *)aus_t_2;
    sqlstm.sqhstl[2] = (unsigned int  )sizeof(short);
    sqlstm.sqhsts[2] = (         int  )sizeof(short);
    sqlstm.sqindv[2] = (         void  *)0;
    sqlstm.sqinds[2] = (         int  )0;
    sqlstm.sqharm[2] = (unsigned int  )0;
    sqlstm.sqharc[2] = (unsigned int   *)0;
    sqlstm.sqadto[2] = (unsigned short )0;
    sqlstm.sqtdso[2] = (unsigned short )0;
    sqlstm.sqhstv[3] = (         void  *)ac20_t_2;
    sqlstm.sqhstl[3] = (unsigned int  )22;
    sqlstm.sqhsts[3] = (         int  )24;
    sqlstm.sqindv[3] = (         void  *)0;
    sqlstm.sqinds[3] = (         int  )0;
    sqlstm.sqharm[3] = (unsigned int  )0;
    sqlstm.sqharc[3] = (unsigned int   *)0;
    sqlstm.sqadto[3] = (unsigned short )0;
    sqlstm.sqtdso[3] = (unsigned short )0;
    sqlstm.sqhstv[4] = (         void  *)aull_t;
    sqlstm.sqhstl[4] = (unsigned int  )sizeof(long long);
    sqlstm.sqhsts[4] = (         int  )sizeof(long long);
    sqlstm.sqindv[4] = (         void  *)0;
    sqlstm.sqinds[4] = (         int  )0;
    sqlstm.sqharm[4] = (unsigned int  )0;
    sqlstm.sqharc[4] = (unsigned int   *)0;
    sqlstm.sqadto[4] = (unsigned short )0;
    sqlstm.sqtdso[4] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    //EXEC SQL COMMIT WORK RELEASE;
  }

  void rawParamDao::remove(rawParam *arp, int size_a)
  {
    cout << "delete vector mode" << endl;
    this->acopy(arp, size_a);
    loop = size_a;
    /* EXEC SQL FOR :loop
      DELETE FROM raw_param
      WHERE raw_param_id=:aull_t; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 5;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.stmt = "delete  from raw_param  where raw_param_id=:b1";
    sqlstm.iters = (unsigned int  )loop;
    sqlstm.offset = (unsigned int  )191;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)aull_t;
    sqlstm.sqhstl[0] = (unsigned int  )sizeof(long long);
    sqlstm.sqhsts[0] = (         int  )sizeof(long long);
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqharc[0] = (unsigned int   *)0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    //EXEC SQL COMMIT WORK RELEASE;
  }
}
