#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880e6ac(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  piVar1 = (int *)FUN_089c9ed8(param_1,2);
  iVar2 = FUN_089c9da8(param_1);
  iVar7 = iVar2 + 0x23;
  uVar3 = FUN_089c9da8(param_1);
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_24 = 0;
  local_30 = FUN_089c9e3c(param_1);
  local_2c = FUN_089c9e3c(param_1);
  local_28 = FUN_089c9e3c(param_1);
  local_24 = FUN_089c9e3c(param_1);
  iVar4 = FUN_089c9da8(param_1);
  if (iVar7 == 0x2f) {
    uVar5 = _DONE_Get_DAT_08AAC9E0();
    iVar6 = FUN_0880d0ac(uVar5,9);
    if (iVar4 != iVar6) {
      return 0;
    }
  }
  if (0x2f < iVar7) {
    switch(*(undefined4 *)(DAT_08ac58c4 + 4)) {
    case 0:
    case 1:
    case 2:
    case 3:
      break;
    case 8:
    case 9:
    case 10:
    case 0xb:
      iVar7 = iVar2 + 0x26;
    }
  }
  iVar2 = FUN_088dffe4(iVar7,uVar3,&local_30,0);
  *piVar1 = iVar2;
  *(int *)(iVar2 + 800) = iVar4;
  return 0;
}

