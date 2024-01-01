#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fd254(undefined4 *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar4 = 0;
    *param_1 = &DAT_08af458c;
    if (0 < (int)param_1[0x23]) {
      iVar5 = 0;
      do {
        bVar1 = iVar4 < 0;
        if (bVar1) {
          memset_jak((undefined *)&DAT_08b00fc8,0,4);
          iVar2 = DAT_08b00fc8;
        }
        else {
          iVar2 = *(int *)(param_1[0x21] + iVar5);
        }
        if (iVar2 == 0) {
          iVar2 = param_1[0x23];
        }
        else {
          if ((bVar1) || ((int)param_1[0x23] <= iVar4)) {
            memset_jak((undefined *)&DAT_08b00fc8,0,4);
            iVar2 = DAT_08b00fc8;
          }
          else {
            iVar2 = *(int *)(param_1[0x21] + iVar5);
          }
          FUN_089d8634();
          FUN_089d7fd8(iVar2,0,0);
          FUN_089d866c();
          if ((bVar1) || ((int)param_1[0x23] <= iVar4)) {
            memset_jak((undefined *)&DAT_08b00fc8,0,4);
            puVar3 = &DAT_08b00fc8;
          }
          else {
            puVar3 = (undefined4 *)(param_1[0x21] + iVar5);
          }
          *puVar3 = 0;
          iVar2 = param_1[0x23];
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar4 < iVar2);
    }
    if ((param_1 != (undefined4 *)0xffffff7c) && (iVar4 = param_1[0x21], iVar4 != 0)) {
      FUN_089d8634();
      FUN_089d7fd8(iVar4,0,0);
      FUN_089d866c();
      param_1[0x21] = 0;
    }
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &DAT_08af6e58;
      FUN_088fc3ac(param_1,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

