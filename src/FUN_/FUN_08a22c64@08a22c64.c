#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a22c64(uint param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x80450001;
  if ((DAT_08af13b0 != -1) && (uVar3 = 0x80450011, param_1 < DAT_08afdee4)) {
    uVar3 = 0x80450012;
    if ((&DAT_08afdef9)[param_1 * 0x68] != '\0') {
      if ((&DAT_08afdef9)[param_1 * 0x68] == '\x03') {
        if (param_2 != 0) {
          return 0x80450013;
        }
        if ((&DAT_08afdf10)[param_1 * 0x1a] == 0) {
          puVar1 = (undefined *)
                   FUN_08a235e0(&DAT_08afdeec,&DAT_08afec9c,&DAT_08afdef0,&DAT_08afed1c,param_1);
          puVar1[1] = 5;
          FUN_08a28fdc(*puVar1);
        }
        else {
          iVar2 = FUN_08a235e0(&DAT_08afdeec,&DAT_08afec9c,&DAT_08afdef4,&DAT_08afed9c,param_1);
          *(undefined *)(iVar2 + 1) = 7;
        }
      }
      zz_sceKernelLockLwMutex(&DAT_08afebfc,1,0);
      DAT_08afebf8 = DAT_08afebf8 | 1 << (param_1 & 0x1f);
      zz_sceKernelUnlockLwMutex(&DAT_08afebfc,1);
      uVar3 = 0;
    }
  }
  return uVar3;
}

