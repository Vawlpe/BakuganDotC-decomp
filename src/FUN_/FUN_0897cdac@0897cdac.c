#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897cdac(int param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == '\0') {
    iVar6 = 0x2d;
    iVar5 = 0xb4;
    iVar4 = param_1 + 0x77c;
    do {
      cVar1 = *(char *)(param_1 + 0xee5);
      if (cVar1 < '\x02') {
        if (cVar1 < '\0') {
          iVar3 = *(int *)(param_1 + 0x1c);
        }
        else {
          FUN_0897a4e8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),
                       *(undefined *)
                        ((int)*(char *)(param_1 + 0xee0) + *(char *)(param_1 + 0xee1) * 6 + param_1
                        + 0x1250));
          iVar3 = *(int *)(param_1 + 0x1c);
        }
      }
      else if (cVar1 < '\x03') {
        bVar2 = FUN_0897a03c(param_1,*(undefined *)(param_1 + 0xee1));
        if (bVar2 == 0xff) {
          cVar1 = *(char *)(param_1 + 0xee1);
        }
        else {
          if (bVar2 != 0) {
            if (bVar2 < 2) {
              if (bVar2 == 0) {
                iVar3 = *(int *)(param_1 + 0x1c);
              }
              else {
                FUN_0897a5d8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),
                             *(undefined *)(param_1 + (int)*(char *)(param_1 + 0xee1) / 3 + 0x1284))
                ;
                iVar3 = *(int *)(param_1 + 0x1c);
              }
            }
            else if (bVar2 < 3) {
              FUN_0897a5d8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),
                           *(undefined *)(param_1 + (int)*(char *)(param_1 + 0xee1) / 3 + 0x1280));
              iVar3 = *(int *)(param_1 + 0x1c);
            }
            else {
              iVar3 = *(int *)(param_1 + 0x1c);
            }
            goto LAB_0897cf48;
          }
          cVar1 = *(char *)(param_1 + 0xee1);
        }
        FUN_0897a5d8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),
                     *(undefined *)
                      ((int)*(char *)(param_1 + 0xee0) + ((int)cVar1 / 3) * 6 + param_1 + 0x1250));
        iVar3 = *(int *)(param_1 + 0x1c);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x1c);
      }
LAB_0897cf48:
      *(uint *)(*(int *)(iVar3 + iVar5) + 0xd0) = *(uint *)(*(int *)(iVar3 + iVar5) + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x128) = 4;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,3);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar6 < 0x2e);
    iVar6 = 0x38;
    iVar5 = 0xe0;
    iVar4 = param_1 + 0x934;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x128) = 4;
      FUN_089a5408(0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,3);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar6 < 0x39);
  }
  else {
    iVar6 = 0x2d;
    iVar5 = 0xb4;
    iVar4 = param_1 + 0x77c;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,3);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while (iVar6 < 0x2e);
    iVar4 = 0x38;
    iVar5 = 0xe0;
    iVar6 = param_1 + 0x934;
    do {
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar6,3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 0x28;
    } while (iVar4 < 0x39);
  }
  return;
}

