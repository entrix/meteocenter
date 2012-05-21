
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
           char  filnam[10];
};
static const struct sqlcxp sqlfpn =
{
    9,
    "main.pcpp"
};


static unsigned int sqlctx = 37084;


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
            void  *sqhstv[4];
   unsigned int   sqhstl[4];
            int   sqhsts[4];
            void  *sqindv[4];
            int   sqinds[4];
   unsigned int   sqharm[4];
   unsigned int   *sqharc[4];
   unsigned short  sqadto[4];
   unsigned short  sqtdso[4];
} sqlstm = {12,4};

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
5,0,0,0,0,0,27,133,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,0,0,29,136,0,0,0,0,0,1,0,
51,0,0,0,0,0,27,148,0,0,4,4,0,1,0,1,9,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
82,0,0,4,0,0,29,156,0,0,0,0,0,1,0,
};


#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
#include"main.h"
#include"types.h"
#include"dao/humidity/humidity.h"
#include"dao/humidity/humidityDao.h"
#include"dao/precipitation/precipitation.h"
#include"dao/precipitation/precipitationDao.h"
#include"dao/pressure/pressure.h"
#include"dao/pressure/pressureDao.h"
#include"dao/raw_param/raw_param.h"
#include"dao/raw_param/raw_paramDao.h"
#include"dao/rsmc/rsmc.h"
#include"dao/rsmc/rsmcDao.h"
#include"dao/station_delegation/station_delegation.h"
#include"dao/station_delegation/station_delegationDao.h"
#include"dao/station_point/station_point.h"
#include"dao/station_point/station_pointDao.h"
#include"dao/temperature/temperature.h"
#include"dao/temperature/temperatureDao.h"
#include"dao/tropopause/tropopause.h"
#include"dao/tropopause/tropopauseDao.h"
#include"dao/wind/wind.h"
#include"dao/wind/windDao.h"
#include<sqlca.h>

using namespace nhm;
using namespace npc;
using namespace npr;
using namespace nrp;
using namespace nrs;
using namespace nsd;
using namespace nsp;
using namespace ntm;
using namespace ntp;
using namespace nwd;

using namespace std;

namespace spc {

/* EXEC SQL BEGIN DECLARE SECTION; */ 

static /* varchar log_pass[40]; */ 
struct { unsigned short len; unsigned char arr[40]; } log_pass;

/* EXEC SQL END DECLARE SECTION; */ 


void pres(rsmc *rs)
{
  printf("*  id    *  nrs::rsmc_name       *  nrs::rsmc_type *\n");
  printf("|  %-5d ", rs->getId());
  printf("|  %-20s |", rs->getName());
  printf("  %-10u     |\n", rs->getType());
  printf("--------------------------------------------------\n");
}

void pres(rsmc *ars, int size_a)
{
  printf("*  id    *  nrs::rsmc_name       *  nrs::rsmc_type *\n");
  for (int i = 0; i < size_a; ++i) {
    printf("|  %-5d ", ars[i].getId());
    printf("|  %-20s |", ars[i].getName());
    printf("  %-10u     |\n", ars[i].getType());
  }
  printf("--------------------------------------------------\n");
}

void init_test_rsmc(rsmc *ars, char *name, ull *indices, int size_a)
{
  for (int i = 0; i < 21; ++i)
    name[i] = '\0';

  for (int i = 1; i < 10; ++i) {
    ars[i].setId(i);
    sprintf(name, "%d", i);
    //cout << name << endl;
    ars[i].setName(name); 
    ars[i].setType(i);
    indices[i-1] = i-1;
  }

  indices[size_a-1] = size_a - 1;
}

void test_rsmc()
{
  rsmc *rs, *ars = new rsmc[10];
  rsmcDao *rsd = new rsmcDao();
  //vector<rsmc> vrs(10);
  char name[20];
  ull *indices = new ull[10];
  windDao *wnd = new windDao();
  wind *w = wnd->findById(0);
  
  printf(">>>> wind force = %f\n", w->getForce());
  rs = new rsmc();
  rs->setId(1);
  rs->setName("tunoshna_station");
  rs->setType(0);
  rsd->insert(rs);
  delete rs;
  pres(rs = rsd->findById(1), 1);
  rs->setType(1);
  rsd->update(rs);
  pres(rs = rsd->findById(1), 1);
  rsd->remove(rs);
  //EXEC SQL COMMIT WORK RELEASE;

  init_test_rsmc(ars, name, indices, 10);
  rsd->insert(ars, 10);
  delete [] ars;
  ars = rsd->findById(indices, 10);
  pres(ars, 10);
  for (int i = 1; i < 10; ++i) { 
    ars[i].setType(i + 10);
  }

  rsd->update(ars, 10);
  delete [] ars;
  ars = rsd->findById(indices, 10);
  pres(ars, 10);
  rsd->remove(ars, 10);
}

//
int main()
  {
    const char *ln = "system/manager";
    for (int i = 0; ln[i] != '\0'; ++i)
      log_pass.arr[i] = ln[i];
    log_pass.len = ustrlen(log_pass.arr);
    /* EXEC SQL CONNECT :log_pass; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )10;
    sqlstm.offset = (unsigned int  )5;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&log_pass;
    sqlstm.sqhstl[0] = (unsigned int  )42;
    sqlstm.sqhsts[0] = (         int  )42;
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
    sqlstm.sqlcmax = (unsigned int )100;
    sqlstm.sqlcmin = (unsigned int )2;
    sqlstm.sqlcincr = (unsigned int )1;
    sqlstm.sqlctimeout = (unsigned int )0;
    sqlstm.sqlcnowait = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    printf("connection open\n");
    test_rsmc();
    /* EXEC SQL COMMIT; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )36;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    printf("connection closed\n");
  
    return 0;
  }
  
  int open()
  {
    const char *ln = "system/manager";
    for (int i = 0; ln[i] != '\0'; ++i)
      log_pass.arr[i] = ln[i];
    log_pass.len = ustrlen(log_pass.arr);
    /* EXEC SQL CONNECT :log_pass; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )10;
    sqlstm.offset = (unsigned int  )51;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&log_pass;
    sqlstm.sqhstl[0] = (unsigned int  )42;
    sqlstm.sqhsts[0] = (         int  )42;
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
    sqlstm.sqlcmax = (unsigned int )100;
    sqlstm.sqlcmin = (unsigned int )2;
    sqlstm.sqlcincr = (unsigned int )1;
    sqlstm.sqlctimeout = (unsigned int )0;
    sqlstm.sqlcnowait = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    printf("connection open\n");

    return 0;
  }

  int close()
  {
    /* EXEC SQL COMMIT; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )82;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


    printf("connection closed\n");
    
    return 0;
  }
}

// int main()
//   {
//     // const char *ln = "system/manager";
//     // for (int i = 0; ln[i] != '\0'; ++i)
//     //   log_pass.arr[i] = ln[i];
//     // log_pass.len = ustrlen(log_pass.arr);
//     // EXEC SQL CONNECT :log_pass;
//     // printf("connection open\n");
//     // test_rsmc();
//     // EXEC SQL COMMIT;
//     // printf("connection closed\n");
  
//     return 0;
//   }
