#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c2ae0(void)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (DAT_08abe8f5 != '\0') {
    piVar5 = (int *)FUN_0880cc48();
    uVar1 = *(undefined *)(*piVar5 + 0x6a8);
    piVar5 = (int *)FUN_0880cc48();
    uVar2 = *(undefined *)(*piVar5 + 0x6a9);
    piVar5 = (int *)FUN_0880cc48();
    uVar3 = *(undefined *)(*piVar5 + 0x6aa);
    piVar5 = (int *)FUN_0880cc48();
    uVar4 = *(undefined *)(*piVar5 + 0x6ab);
    uVar6 = FUN_0880d2fc();
    uVar7 = FUN_0880c840();
    memcpy_jak(uVar6,&DAT_08abd925,uVar7);
    uVar6 = FUN_0880cc48();
    FUN_0880c85c(uVar6,uVar1);
    uVar6 = FUN_0880cc48();
    FUN_0880c8f4(uVar6,uVar2);
    uVar6 = FUN_0880cc48();
    FUN_0880c97c(uVar6,uVar3);
    piVar5 = (int *)FUN_0880cc48();
    *(undefined *)(*piVar5 + 0x6ab) = uVar4;
    FUN_088c2ad4();
  }
  return;
}

