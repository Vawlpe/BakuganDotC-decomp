#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bf624(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  if ((DAT_08af8270 != (undefined *)0x0) && (0 < *(int *)(DAT_08af8270 + 4))) {
    puVar2 = (undefined4 *)FUN_08a2dc90();
    puVar4 = DAT_08af8270;
    *DAT_08af8270 = 1;
    if (puVar2 != (undefined4 *)0x0) {
      cVar1 = *(char *)(puVar2 + 2);
      do {
        if (cVar1 == '\0') {
          iVar5 = puVar2[3];
          puVar4 = DAT_08af8270;
          if (iVar5 == 0) break;
          iVar3 = FUN_089bf2d4(iVar5,2);
          if (iVar3 == 0) {
            (**(code **)(*(int *)(iVar5 + 0xc) + 0x24))
                      (iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 0x20));
            puVar2 = (undefined4 *)*puVar2;
          }
          else {
            puVar2 = (undefined4 *)*puVar2;
          }
        }
        else {
          puVar2 = (undefined4 *)*puVar2;
        }
        puVar4 = DAT_08af8270;
        if (puVar2 == (undefined4 *)0x0) break;
        cVar1 = *(char *)(puVar2 + 2);
      } while( true );
    }
    *puVar4 = 0;
  }
  FUN_08a2db18();
  return;
}

