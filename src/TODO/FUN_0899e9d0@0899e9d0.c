#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0899e9d0(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  
  bVar3 = *(byte *)(param_1 + 0x10f8);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      iVar6 = 0;
      bVar3 = *(byte *)(param_1 + *(char *)(param_1 + 0x109c) + 0x10a0);
      *(undefined *)(param_1 + 0x10fc) = 0;
      uVar5 = (uint)*(byte *)(param_1 + (uint)bVar3 + 0x11c2);
      if (uVar5 != 0) {
        uVar7 = (uint)*(byte *)(param_1 + 0x10fc);
        do {
          *(char *)(param_1 + uVar7 + 0x1104) = (char)iVar6;
          uVar8 = uVar7 + 1;
          iVar6 = iVar6 + 1;
          uVar7 = uVar8 & 0xff;
        } while (iVar6 < (int)uVar5);
        *(char *)(param_1 + 0x10fc) = (char)uVar8;
      }
      *(undefined *)(param_1 + 0x109e) = 0;
      *(undefined *)(param_1 + 0x10fb) = 0xff;
      iVar6 = FUN_089be994();
      bVar3 = (byte)iVar6 & 1;
      if (iVar6 < 0) {
        bVar3 = -bVar3;
      }
      *(byte *)(param_1 + 0x10fa) = bVar3 + 10;
      *(undefined *)(param_1 + 0x10f8) = 1;
    }
    else {
      cVar9 = '\0';
      if (*(char *)(param_1 + 0x10fc) == '\x01') {
        *(undefined *)(param_1 + 0x109e) = *(undefined *)(param_1 + 0x1104);
        *(undefined *)(param_1 + 0x10fa) = 1;
        *(byte *)(param_1 + 0x10f8) = bVar3 + 1;
      }
      else {
        do {
          iVar6 = FUN_089be994();
          uVar5 = (uint)*(byte *)(param_1 + 0x10fc);
          *(char *)(param_1 + 0x10fb) = (char)(iVar6 % (int)uVar5);
          bVar3 = *(byte *)(param_1 + (uint)*(byte *)(param_1 + 0x10fb) + 0x1104);
          if ((int)*(char *)(param_1 + 0x109e) != (uint)bVar3) {
            *(byte *)(param_1 + 0x109e) = bVar3;
            goto LAB_0899ebc0;
          }
          bVar1 = cVar9 != '@';
          cVar9 = cVar9 + '\x01';
        } while (bVar1);
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar8 = 0;
          while( true ) {
            uVar7 = uVar7 + 1;
            if ((int)*(char *)(param_1 + 0x109e) != (uint)*(byte *)(param_1 + uVar8 + 0x1104))
            break;
            if ((int)uVar5 <= (int)uVar7) {
              *(char *)(param_1 + 0x10fb) = (char)uVar8;
              goto LAB_0899ebc0;
            }
            uVar8 = uVar7 & 0xff;
          }
          *(char *)(param_1 + 0x10fb) = (char)uVar8;
          *(undefined *)(param_1 + 0x109e) =
               *(undefined *)(param_1 + (uint)*(byte *)(param_1 + 0x10fb) + 0x1104);
        }
LAB_0899ebc0:
        iVar6 = DONE_NotZero_DAT_08AC5874();
        if (iVar6 != 0) {
          uVar2 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar2,1,0,0);
        }
        FUN_0899d894(param_1);
        *(char *)(param_1 + 0x10f8) = *(char *)(param_1 + 0x10f8) + '\x01';
      }
    }
  }
  else if (bVar3 < 3) {
    *(undefined *)(param_1 + 0x10fd) = 4;
    *(byte *)(param_1 + 0x10f8) = bVar3 + 1;
  }
  else {
    if (3 < bVar3) {
      return 1;
    }
    FUN_0899d5e8(param_1);
    FUN_0899e134(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x174),param_1 + 0xefc);
    if (*(char *)(param_1 + 0x10fd) == '\0') {
      uVar4 = 1;
      *(char *)(param_1 + 0x10f9) = *(char *)(param_1 + 0x10f9) + '\x01';
      if (*(char *)(param_1 + 0x10f9) == *(char *)(param_1 + 0x10fa)) {
        uVar4 = 4;
      }
      *(undefined *)(param_1 + 0x10f8) = uVar4;
    }
    else {
      *(char *)(param_1 + 0x10fd) = *(char *)(param_1 + 0x10fd) + -1;
    }
  }
  return 0;
}

