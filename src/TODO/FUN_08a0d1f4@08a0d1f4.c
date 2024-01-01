#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined8 FUN_08a0d1f4(uint param_1,int param_2,uint param_3,int param_4)

{
  return CONCAT44(param_1 * param_4 + param_2 * param_3 +
                  (int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20),
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}

