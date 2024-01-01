#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a22dbc(uint param_1,int param_2,uint param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  uVar3 = 0x80450001;
  if (((DAT_08af13b0 != -1) && (uVar3 = 0x80450011, param_1 < DAT_08afdee4)) &&
     (uVar3 = 0x8045000a, param_3 < 2)) {
    cVar1 = (&DAT_08afdef9)[param_1 * 0x68];
    uVar3 = 0x80450012;
    if ((cVar1 != '\0') && (uVar3 = 0x80450013, param_2 == 0)) {
      if (param_3 == 0) {
        if (cVar1 == '\a') {
          puVar2 = (undefined *)
                   FUN_08a235e0(&DAT_08afdef4,&DAT_08afed9c,&DAT_08afdef0,&DAT_08afed1c,param_1);
          puVar2[1] = 5;
          *(undefined4 *)(puVar2 + 0x18) = 0;
          FUN_08a28fdc(*puVar2);
        }
        else if (cVar1 == '\x03') {
          (&DAT_08afdf10)[param_1 * 0x1a] = 0;
        }
      }
      else if (cVar1 == '\x03') {
        (&DAT_08afdf10)[param_1 * 0x1a] = param_3;
      }
      zz_sceKernelLockLwMutex(&DAT_08afebfc,1,0);
      DAT_08afebf8 = DAT_08afebf8 | 1 << (param_1 & 0x1f);
      zz_sceKernelUnlockLwMutex(&DAT_08afebfc,1);
      uVar3 = 0;
    }
  }
  return uVar3;
}

