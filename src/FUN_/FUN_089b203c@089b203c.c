#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089b203c(uint param_1,uint param_2)

{
  return (int)*(short *)(&DAT_08ac4332 +
                        ((uint)(byte)(&DAT_08ac3ef0)[param_1 & 0xff] + (param_2 & 0xff)) * 2);
}

