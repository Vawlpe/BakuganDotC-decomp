#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089baa60(uint param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar6 = CONCAT44(param_2,param_1);
  iVar5 = 0;
  if ((int)param_2 < 0x100000) {
    if ((param_2 & 0x7fffffff | param_1) == 0) {
      FUN_08a0eb10(0,0xc3500000,0,0);
      return;
    }
    if ((int)param_2 < 0) {
      FUN_08a0eb10(0,0,0,0);
      return;
    }
    iVar5 = -0x36;
    lVar6 = __muldf3(param_1,param_2,0,0x43500000);
  }
  uVar4 = (uint)((ulonglong)lVar6 >> 0x20);
  uVar3 = (undefined4)lVar6;
  if (0x7fefffffffffffff < lVar6) {
    __adddf3(uVar3,uVar4,uVar3,uVar4);
    return;
  }
  iVar2 = iVar5 + ((int)uVar4 >> 0x14) + -0x3ff;
  iVar5 = iVar2 >> 0x1f;
  uVar7 = FUN_08a0ed90(iVar2 - iVar5);
  uVar1 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar8 = __muldf3((int)uVar7,uVar1,0x11f12b36,0x3d59fef3);
  uVar9 = FUN_089ba19c(uVar3,uVar4 & 0xfffff | (iVar5 + 0x3ff) * 0x100000);
  uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0x1526e50e,0x3fdbcb7b);
  uVar8 = __adddf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,
                   (int)((ulonglong)uVar9 >> 0x20));
  uVar7 = __muldf3((int)uVar7,uVar1,0x509f6000,0x3fd34413);
  __adddf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  return;
}

