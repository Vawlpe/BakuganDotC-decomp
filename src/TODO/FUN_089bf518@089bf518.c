#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bf518(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  
  bVar2 = false;
  iVar3 = FUN_089bc814();
  if (iVar3 != 0) {
    uVar4 = _DONE_GetPtr_DAT_08AC51F8();
    iVar3 = FUN_089bc984(uVar4);
    if (iVar3 == 0) {
      bVar2 = true;
    }
  }
  if (((!bVar2) && (DAT_08af8270 != (undefined *)0x0)) && (0 < *(int *)(DAT_08af8270 + 4))) {
    FUN_089eb6bc();
    FUN_089e1004();
    FUN_089f8ab8();
    puVar5 = (undefined4 *)FUN_08a2dc90(DAT_08af8270);
    puVar6 = DAT_08af8270;
    *DAT_08af8270 = 1;
    if (puVar5 != (undefined4 *)0x0) {
      cVar1 = *(char *)(puVar5 + 2);
      do {
        if (cVar1 == '\0') {
          puVar7 = (undefined4 *)puVar5[3];
          iVar3 = FUN_089bfae0(*puVar7);
          if (iVar3 != 0) {
            iVar3 = FUN_089bf2d4(puVar7,1);
            if (iVar3 != 0) {
              puVar5 = (undefined4 *)*puVar5;
              goto LAB_089bf5f8;
            }
            (**(code **)(puVar7[3] + 0x14))((int)puVar7 + (int)*(short *)(puVar7[3] + 0x10));
          }
          puVar5 = (undefined4 *)*puVar5;
        }
        else {
          puVar5 = (undefined4 *)*puVar5;
        }
LAB_089bf5f8:
        puVar6 = DAT_08af8270;
        if (puVar5 == (undefined4 *)0x0) break;
        cVar1 = *(char *)(puVar5 + 2);
      } while( true );
    }
    *puVar6 = 0;
  }
  return;
}

