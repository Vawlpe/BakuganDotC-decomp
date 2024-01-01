#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a20d08(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined auStack_80 [68];
  int local_3c;
  undefined4 local_38;
  
  uVar1 = FUN_08a20f80();
  if (uVar1 == 0) {
    uVar2 = FUN_08a29018();
    if (local_3c != 0) {
      iVar5 = 0;
      uVar3 = FUN_08a22f0c(local_3c,local_38);
      uVar1 = uVar2;
      if (0 < DAT_08afda9c) {
        do {
          uVar4 = uVar3 & 1;
          if (uVar3 == 0) break;
          uVar3 = uVar3 >> 1;
          if (uVar4 != 0) {
            FUN_08a22dbc(iVar5,uVar1 & 1,0);
            FUN_08a22c64(iVar5,uVar1 & 1);
          }
          iVar5 = iVar5 + 1;
          uVar1 = uVar1 >> 1;
        } while (iVar5 < DAT_08afda9c);
      }
    }
    uVar3 = FUN_08a22884(local_38);
    uVar1 = 0x80450010;
    if ((-1 < (int)uVar3) &&
       (uVar1 = FUN_08a229d8(uVar3,uVar2 << (uVar3 & 0x1f) & 1,auStack_80), uVar1 == 0)) {
      uVar1 = uVar3;
    }
  }
  return uVar1;
}

