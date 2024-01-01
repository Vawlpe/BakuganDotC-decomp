#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint ** FUN_08a13244(int param_1,uint **param_2)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint **ppuVar6;
  uint *puVar7;
  uint **ppuVar8;
  int iVar9;
  
  if (param_2 != (uint **)0x0) {
    iVar9 = 0;
    do {
      iVar2 = param_1 * 0x24;
      ppuVar6 = *(uint ***)(&DAT_08af1350 + iVar2);
      if (ppuVar6 == (uint **)0x0) {
LAB_08a132a4:
        ppuVar8 = *(uint ***)(&DAT_08af1354 + iVar2);
      }
      else {
        if (param_2 < ppuVar6) {
          if (*ppuVar6 <= param_2) goto LAB_08a1335c;
          goto LAB_08a132a4;
        }
        ppuVar8 = *(uint ***)(&DAT_08af1354 + iVar2);
      }
      if (ppuVar8 == (uint **)0x0) {
LAB_08a132c8:
        ppuVar8 = *(uint ***)(&DAT_08af135c + iVar2);
      }
      else {
        if (param_2 < ppuVar8) {
          if (*ppuVar8 <= param_2) {
            *(uint ***)(&DAT_08af1354 + iVar2) = ppuVar6;
LAB_08a13358:
            *(uint ***)(&DAT_08af1350 + iVar2) = ppuVar8;
            ppuVar6 = ppuVar8;
LAB_08a1335c:
            sVar3 = *(short *)((int)ppuVar6 + 0xe) + -1;
            *(short *)((int)ppuVar6 + 0xe) = sVar3;
            if (sVar3 != 0) {
              return param_2;
            }
            bVar1 = *(byte *)(ppuVar6 + 3);
            puVar7 = ppuVar6[1];
            iVar9 = (uint)bVar1 * 0x24;
            if (puVar7 != (uint *)0x0) {
              puVar7[2] = (uint)ppuVar6[2];
            }
            puVar5 = ppuVar6[2];
            if (puVar5 != (uint *)0x0) {
              puVar5[1] = (uint)puVar7;
            }
            if (*(uint ***)(&DAT_08af134c + iVar9) == ppuVar6) {
              *(uint **)(&DAT_08af134c + iVar9) = puVar5;
            }
            if (*(uint ***)(&DAT_08af1354 + iVar9) == ppuVar6) {
              *(undefined4 *)(&DAT_08af1354 + iVar9) = 0;
            }
            if (*(uint ***)(&DAT_08af1350 + iVar9) == ppuVar6) {
              uVar4 = *(undefined4 *)(&DAT_08af1354 + iVar9);
              *(undefined4 *)(&DAT_08af1354 + iVar9) = 0;
              *(undefined4 *)(&DAT_08af1350 + iVar9) = uVar4;
            }
            puVar7 = DAT_08afce98;
            if ((&DAT_08af134a)[iVar9] != '\0') {
              puVar5 = *(uint **)(&DAT_08af1358 + iVar9);
              ppuVar6[2] = DAT_08afce9c;
              ppuVar6[1] = puVar5;
              ppuVar6[3] = puVar7;
              *(uint ***)(&DAT_08af1358 + iVar9) = ppuVar6;
              return param_2;
            }
            (*(code *)(&PTR_FUN_08af1344)[(uint)bVar1 * 9])(*ppuVar6);
            return param_2;
          }
          goto LAB_08a132c8;
        }
        ppuVar8 = *(uint ***)(&DAT_08af135c + iVar2);
      }
      if ((ppuVar8 <= param_2) && (param_2 < *(uint ***)(&DAT_08af1360 + iVar2))) {
        ppuVar8 = *(uint ***)(&DAT_08af134c + iVar2);
        while (ppuVar8 != (uint **)0x0) {
          if (param_2 < ppuVar8) {
            if (*ppuVar8 <= param_2) {
              *(uint ***)(&DAT_08af1354 + iVar2) = ppuVar6;
              goto LAB_08a13358;
            }
            ppuVar8 = (uint **)ppuVar8[2];
          }
          else {
            ppuVar8 = (uint **)ppuVar8[2];
          }
        }
      }
      iVar9 = iVar9 + 1;
      param_1 = (param_1 + 1) % 3;
    } while (iVar9 != 3);
  }
  return param_2;
}

