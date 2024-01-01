#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ce5fc(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  
  uVar5 = *(uint *)(param_1 + 0x14);
  if (uVar5 < 6) {
    if (uVar5 == 1) {
      iVar6 = FUN_089c2f34();
      if (iVar6 != 0) {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
    }
    else if (uVar5 == 2) {
      iVar6 = FUN_089bfa40(0x2738);
      if (iVar6 == 0) {
        FUN_089bf6e8(0x2738,100);
      }
      else {
        iVar6 = FUN_089d6790(*(undefined4 *)(param_1 + 0x1c));
        if (iVar6 != 0) {
          iVar6 = FUN_089edb58();
          if (iVar6 == 0) {
            iVar6 = *(int *)(param_1 + 0x14);
          }
          else {
            iVar6 = FUN_089edb80();
            *(undefined4 *)(iVar6 + 0x28) = 0;
            iVar6 = FUN_089edb80();
            *(undefined4 *)(iVar6 + 0x24) = 0;
            iVar6 = FUN_089edb80();
            *(undefined4 *)(iVar6 + 0x20) = 0;
            iVar6 = FUN_089edb80();
            *(undefined4 *)(iVar6 + 0x48) = 0;
            iVar6 = FUN_089edb80();
            *(undefined4 *)(iVar6 + 0x44) = 0;
            iVar6 = FUN_089edb80();
            *(undefined4 *)(iVar6 + 0x40) = 0;
            iVar6 = FUN_089edb80();
            *(undefined4 *)(iVar6 + 0x38) = 0;
            iVar6 = FUN_089edb80();
            *(undefined4 *)(iVar6 + 0x34) = 0;
            iVar6 = FUN_089edb80();
            *(undefined4 *)(iVar6 + 0x30) = 0;
            iVar6 = *(int *)(param_1 + 0x14);
          }
          *(int *)(param_1 + 0x14) = iVar6 + 1;
        }
      }
    }
    else if (uVar5 == 3) {
      iVar6 = FUN_089d67f8();
      if (iVar6 == 0) {
        FUN_088ce518(param_1);
      }
      else {
        FUN_089bf8c8(0x2738);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        FUN_089c87e4(1);
        FUN_089c879c(0x3dcccccd,1);
      }
    }
    else if (uVar5 == 4) {
      iVar6 = FUN_089c2b10(1);
      if (iVar6 != 0) {
        uVar4 = FUN_089c2b48(1);
        iVar6 = FUN_089c3818(uVar4);
        if (iVar6 == 0) {
          return;
        }
      }
      iVar6 = FUN_089c2f78();
      if (iVar6 == 0) {
        FUN_089c2ef0();
      }
      else {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
    }
    else if (uVar5 == 5) {
      iVar6 = FUN_089c2f78();
      if (iVar6 != 0) {
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
      if (*(int *)(param_1 + 0x10) == 4) {
        if (DAT_08abebd8 != 0) {
          *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
        }
      }
      else {
        cVar1 = (&DAT_08a936f8)
                [*(int *)(DAT_08ac58c4 + 0x3c) * 0x18 + *(int *)(param_1 + 0x10) * 6 + DAT_08abebd8]
        ;
        *(int *)(param_1 + 0x1c) = (int)cVar1;
        uVar5 = FUN_08987f10(1,(int)cVar1 & 0xffff);
        if (uVar5 != 0xffffffff) {
          piVar3 = (int *)_DONE_Get_DAT_08AAC9E0();
          iVar6 = *piVar3 + ((int)(uVar5 + ((uint)((int)uVar5 >> 3) >> 0x1d)) >> 3);
          if ((int)uVar5 < 0) {
            bVar2 = (byte)(1 << (-(-uVar5 & 7) & 0x1f));
          }
          else {
            bVar2 = (byte)(1 << (uVar5 & 7));
          }
          *(byte *)(iVar6 + 0x5fe) = *(byte *)(iVar6 + 0x5fe) | bVar2;
        }
      }
      DAT_08abebd8 = DAT_08abebd8 + 1;
      iVar6 = *(int *)(param_1 + 0x1c);
      if (iVar6 == -1) {
        *(undefined4 *)(param_1 + 0x14) = 100;
        DAT_08abebd8 = 0;
      }
      else if (iVar6 + -0x36 < 0x42) {
        puVar7 = (&PTR_DAT_08abead0)[iVar6 + -0x36];
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(undefined **)(param_1 + 0x2c) = puVar7;
        *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
        iVar6 = FUN_089c2e90(iVar6 + -0xd);
        if (iVar6 == 0) {
          iVar6 = FUN_089c2f78();
          if (iVar6 == 0) {
            FUN_089c2ef0();
          }
        }
        else {
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        }
      }
    }
  }
  else {
    FUN_089bf7a8(param_1,1);
  }
  return;
}

