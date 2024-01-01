#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_088b330c(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  fVar6 = 0.0;
  fVar5 = 0.0;
  if ((DAT_08abd620 != (int *)0x0) && (iVar4 = *DAT_08abd620, iVar4 != 0)) {
    cVar1 = *(char *)(iVar4 + 0x3b);
    while( true ) {
      if (cVar1 == '\0') {
        iVar4 = *(int *)(iVar4 + 4);
      }
      else {
        uVar2 = FUN_088a94b4((int)*(short *)(iVar4 + 0x32));
        iVar3 = FUN_088a9330(uVar2);
        if (iVar3 == 0) {
          iVar4 = *(int *)(iVar4 + 4);
        }
        else {
          local_30 = *(undefined4 *)(iVar4 + 0x20);
          uStack_2c = *(undefined4 *)(iVar4 + 0x24);
          uStack_28 = *(undefined4 *)(iVar4 + 0x28);
          uStack_24 = *(undefined4 *)(iVar4 + 0x2c);
          iVar3 = FUN_088aacc4(&local_30,uVar2);
          if (iVar3 == 0) {
            iVar4 = *(int *)(iVar4 + 4);
          }
          else {
            if (*(char *)(iVar4 + 0x3a) == '\0') {
              fVar5 = fVar5 + 1.0;
            }
            fVar6 = fVar6 + 1.0;
            iVar4 = *(int *)(iVar4 + 4);
          }
        }
      }
      if (iVar4 == 0) break;
      cVar1 = *(char *)(iVar4 + 0x3b);
    }
  }
  if (fVar6 < 1.0) {
    return 1.0;
  }
  return fVar5 / fVar6;
}

