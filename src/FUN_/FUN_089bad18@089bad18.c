#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

byte * FUN_089bad18(int param_1,ushort *param_2,byte *param_3,byte *param_4,int *param_5)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  ushort auStack_20 [2];
  
  if (param_2 == (ushort *)0x0) {
    param_2 = auStack_20;
  }
  if (param_3 == (byte *)0x0) {
    iVar4 = *(int *)(param_1 + 0x34);
  }
  else {
    if (param_4 == (byte *)0x0) {
      return (byte *)0xffffffff;
    }
    iVar4 = *(int *)(param_1 + 0x34);
  }
  if ((iVar4 != 0) && (iVar4 = strlen(), 1 < iVar4)) {
    iVar4 = strcmp(*(undefined4 *)(param_1 + 0x34),"C-SJIS");
    if (iVar4 == 0) {
      bVar1 = *param_3;
      if (param_3 == (byte *)0x0) {
        return (byte *)0x0;
      }
      if (((0x80 < bVar1) && (bVar1 < 0xa0)) || ((0xdf < bVar1 && (bVar1 < 0xf0)))) {
        bVar2 = param_3[1];
        if (param_4 < (byte *)0x2) {
          return (byte *)0xffffffff;
        }
        if (((bVar2 < 0x40) || (0x7e < bVar2)) && ((bVar2 < 0x80 || (0xfc < bVar2)))) {
          return (byte *)0xffffffff;
        }
        *param_2 = (ushort)bVar1 * 0x100 + (ushort)bVar2;
        return (byte *)0x2;
      }
    }
    else {
      iVar4 = strcmp(*(undefined4 *)(param_1 + 0x34),"C-EUCJP");
      if (iVar4 == 0) {
        bVar1 = *param_3;
        if (param_3 == (byte *)0x0) {
          return (byte *)0x0;
        }
        if ((0xa0 < bVar1) && (bVar1 != 0xff)) {
          bVar2 = param_3[1];
          if (param_4 < (byte *)0x2) {
            return (byte *)0xffffffff;
          }
          if ((0xa0 < bVar2) && (bVar2 != 0xff)) {
            *param_2 = (ushort)bVar1 * 0x100 + (ushort)bVar2;
            return (byte *)0x2;
          }
          return (byte *)0xffffffff;
        }
      }
      else {
        iVar4 = strcmp(*(undefined4 *)(param_1 + 0x34),"C-JIS");
        if (iVar4 == 0) {
          if (param_3 == (byte *)0x0) {
            *param_5 = 0;
            return (byte *)0x1;
          }
          iVar4 = 3;
          if (*param_5 == 0) {
            iVar4 = 0;
          }
          pbVar3 = (byte *)0x0;
          if (param_4 != (byte *)0x0) {
            pbVar9 = param_3 + 1;
            pbVar5 = param_3;
            pbVar6 = param_3;
            do {
              bVar1 = *pbVar6;
              iVar4 = iVar4 * 0x24;
              if (bVar1 == 0x4a) {
                uVar7 = *(undefined4 *)(iVar4 + 0x8ac4d2c);
                iVar4 = *(int *)(iVar4 + 0x8ac4b7c);
              }
              else if (bVar1 == 0x42) {
                uVar7 = *(undefined4 *)(iVar4 + 0x8ac4d28);
                iVar4 = *(int *)(iVar4 + 0x8ac4b78);
              }
              else if (bVar1 == 0x40) {
                uVar7 = *(undefined4 *)(iVar4 + 0x8ac4d24);
                iVar4 = *(int *)(iVar4 + 0x8ac4b74);
              }
              else if (bVar1 == 0x28) {
                uVar7 = *(undefined4 *)(iVar4 + 0x8ac4d20);
                iVar4 = *(int *)(iVar4 + 0x8ac4b70);
              }
              else if (bVar1 == 0x24) {
                uVar7 = *(undefined4 *)(iVar4 + 0x8ac4d1c);
                iVar4 = *(int *)(iVar4 + 0x8ac4b6c);
              }
              else if (bVar1 == 0x1b) {
                uVar7 = *(undefined4 *)(iVar4 + 0x8ac4d18);
                iVar4 = *(int *)(iVar4 + 0x8ac4b68);
              }
              else if (bVar1 == 0) {
                uVar7 = *(undefined4 *)(iVar4 + 0x8ac4d30);
                iVar4 = *(int *)(iVar4 + 0x8ac4b80);
              }
              else {
                iVar8 = 8;
                if (bVar1 < 0x21) {
LAB_089bb118:
                  iVar8 = iVar8 << 2;
                }
                else {
                  iVar8 = 0x20;
                  if (bVar1 < 0x7f) {
                    iVar8 = 7;
                    goto LAB_089bb118;
                  }
                }
                uVar7 = *(undefined4 *)(iVar4 + iVar8 + 0x8ac4d18);
                iVar4 = *(int *)(iVar4 + iVar8 + 0x8ac4b68);
              }
              switch(uVar7) {
              case 0:
                *param_5 = 0;
                *param_2 = (ushort)*pbVar5;
                return pbVar3 + 1;
              case 1:
                *param_5 = 0;
                *param_2 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
                return pbVar3 + 1;
              case 2:
                *param_5 = 1;
                *param_2 = (ushort)*pbVar5 * 0x100 + (ushort)pbVar5[1];
                return pbVar5 + (2 - (int)param_3);
              case 3:
              case 4:
                pbVar5 = pbVar9;
                break;
              case 5:
                break;
              case 6:
                *param_5 = 0;
                *param_2 = 0;
                return pbVar3;
              default:
                return (byte *)0xffffffff;
              }
              pbVar3 = pbVar3 + 1;
              pbVar6 = pbVar6 + 1;
              pbVar9 = pbVar9 + 1;
            } while (pbVar3 < param_4);
          }
          return (byte *)0xffffffff;
        }
      }
    }
  }
  if (param_3 == (byte *)0x0) {
    return (byte *)0x0;
  }
  *param_2 = (ushort)*param_3;
  return (byte *)(uint)(*param_3 != 0);
}

