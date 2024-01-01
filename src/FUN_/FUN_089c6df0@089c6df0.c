#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined * FUN_089c6df0(undefined4 param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0x53 < param_2) {
    param_2 = 0x53;
  }
  return (&PTR_s_seGRP_SYS_COM_pac_08ac56e8)[param_2];
}

