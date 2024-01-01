#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a20f80(uint param_1,undefined4 param_2,undefined param_3,uint param_4,int param_5,
                uint param_6,undefined4 param_7,undefined4 *param_8,undefined4 *param_9)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = -0x7fbaffff;
  if (((DAT_08af13ac != -1) &&
      (((param_4 < 0x80 || (iVar1 = -0x7fbafff6, param_4 == 0xff)) &&
       (iVar1 = -0x7fbafff6, param_6 < 2)))) &&
     (((iVar1 = -0x7fbafffe, param_1 < 0x80 && (iVar1 = -0x7fbafffe, (&DAT_08afd89c)[param_1] != 0))
      && (iVar1 = FUN_08a2116c(param_1,param_2,param_9 + 3), iVar1 == 0)))) {
    *(undefined *)(param_9 + 0x13) = param_3;
    *(char *)((int)param_9 + 0x4d) = (char)param_4;
    if ((param_4 & 0xff) == 0xff) {
      param_5 = param_5 + param_8[1];
      if (0x4000 < param_5) {
        param_5 = 0x4000;
      }
      if (param_5 < 1) {
        param_5 = 1;
      }
    }
    else {
      iVar1 = FUN_08a212a4(*(undefined *)((int)param_9 + 0x3d),
                           (int)(short)((*(char *)((int)param_9 + 0x3e) * 0x7f) / 100),
                           param_4 & 0xff,(int)(short)((*(char *)(param_9 + 0xf) * 0x7f) / 100));
      param_5 = (uint)(param_9[7] * iVar1) / 0xac44 + param_8[1];
      if (0x4000 < param_5) {
        param_5 = 0x4000;
      }
      if (param_5 < 1) {
        param_5 = 1;
      }
    }
    param_9[8] = param_5;
    iVar1 = 0;
    param_9[0x14] = *param_8;
    uVar2 = param_8[1];
    param_9[2] = param_6;
    param_9[0x15] = uVar2;
    *param_9 = param_7;
    param_9[1] = param_1;
  }
  return iVar1;
}

