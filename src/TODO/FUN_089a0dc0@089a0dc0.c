#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089a0dc0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  
  bVar8 = *(byte *)(param_1 + 0x10f8);
  if (bVar8 < 2) {
    if (bVar8 == 0) {
      *(undefined *)(param_1 + 0x10fc) = 0;
      bVar8 = *(byte *)(param_1 + 0x10b9);
      uVar6 = 0;
      uVar7 = (uint)*(byte *)(param_1 + 0x10fc);
      uVar9 = 1;
      do {
        if ((bVar8 & uVar9) != 0) {
          *(char *)(param_1 + uVar7 + 0x1104) = (char)uVar6;
          uVar7 = uVar7 + 1 & 0xff;
        }
        uVar6 = uVar6 + 1;
        uVar9 = 1 << (uVar6 & 0x1f);
      } while ((int)uVar6 < 8);
      *(char *)(param_1 + 0x10fc) = (char)uVar7;
      *(undefined *)(param_1 + 0x109c) = 0;
      *(undefined *)(param_1 + 0x10fb) = 0xff;
      iVar2 = FUN_089be994();
      bVar8 = (byte)iVar2 & 1;
      if (iVar2 < 0) {
        bVar8 = -bVar8;
      }
      *(byte *)(param_1 + 0x10fa) = bVar8 + 10;
      *(undefined *)(param_1 + 0x10f8) = 1;
    }
    else {
      cVar4 = '\0';
      if (*(char *)(param_1 + 0x10fc) == '\x01') {
        *(undefined *)(param_1 + 0x109c) = *(undefined *)(param_1 + 0x1104);
        *(undefined *)(param_1 + 0x10fa) = 1;
        *(byte *)(param_1 + 0x10f8) = bVar8 + 1;
      }
      else {
        do {
          iVar2 = FUN_089be994();
          uVar6 = (uint)*(byte *)(param_1 + 0x10fc);
          *(char *)(param_1 + 0x10fb) = (char)(iVar2 % (int)uVar6);
          bVar8 = *(byte *)(param_1 + (uint)*(byte *)(param_1 + 0x10fb) + 0x1104);
          if ((int)*(char *)(param_1 + 0x109c) != (uint)bVar8) {
            *(byte *)(param_1 + 0x109c) = bVar8;
            goto LAB_089a0fac;
          }
          bVar1 = cVar4 != '@';
          cVar4 = cVar4 + '\x01';
        } while (bVar1);
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar9 = 0;
          while( true ) {
            uVar7 = uVar7 + 1;
            if ((int)*(char *)(param_1 + 0x109c) != (uint)*(byte *)(param_1 + uVar9 + 0x1104))
            break;
            if ((int)uVar6 <= (int)uVar7) {
              *(char *)(param_1 + 0x10fb) = (char)uVar9;
              goto LAB_089a0fac;
            }
            uVar9 = uVar7 & 0xff;
          }
          *(char *)(param_1 + 0x10fb) = (char)uVar9;
          *(undefined *)(param_1 + 0x109c) =
               *(undefined *)(param_1 + (uint)*(byte *)(param_1 + 0x10fb) + 0x1104);
        }
LAB_089a0fac:
        iVar2 = DONE_NotZero_DAT_08AC5874();
        if (iVar2 != 0) {
          uVar3 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar3,1,0,0);
        }
        FUN_08998fdc(param_1);
        iVar2 = FUN_0880d354();
        if (iVar2 == 0) {
          cVar4 = *(char *)(param_1 + 0x10f8);
        }
        else {
          FUN_0899ed34(param_1,*(undefined4 *)(param_1 + 0x2370),(int)*(char *)(param_1 + 0x109c));
          cVar4 = *(char *)(param_1 + 0x10f8);
        }
        *(char *)(param_1 + 0x10f8) = cVar4 + '\x01';
      }
    }
  }
  else if (bVar8 < 3) {
    *(undefined *)(param_1 + 0x10fd) = 4;
    *(byte *)(param_1 + 0x10f8) = bVar8 + 1;
  }
  else {
    if (3 < bVar8) {
      return 1;
    }
    FUN_0899b800(param_1);
    FUN_0899b82c(param_1);
    FUN_0899b858(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x174),param_1 + 0xefc);
    if (*(char *)(param_1 + 0x10fd) == '\0') {
      uVar5 = 1;
      *(char *)(param_1 + 0x10f9) = *(char *)(param_1 + 0x10f9) + '\x01';
      if (*(char *)(param_1 + 0x10f9) == *(char *)(param_1 + 0x10fa)) {
        uVar5 = 4;
      }
      *(undefined *)(param_1 + 0x10f8) = uVar5;
    }
    else {
      *(char *)(param_1 + 0x10fd) = *(char *)(param_1 + 0x10fd) + -1;
    }
  }
  return 0;
}

