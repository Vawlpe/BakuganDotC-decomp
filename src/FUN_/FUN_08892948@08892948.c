#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08892948(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  cVar1 = *(char *)(param_2 + 0x3c);
  if (cVar1 == ',') {
    if (*(int *)(param_2 + 4) == 0xe) {
      return 1;
    }
    uVar4 = *(undefined4 *)(param_2 + 0x40);
  }
  else {
    if (cVar1 == '\x03') {
      return (uint)*(byte *)(param_2 + 0x38);
    }
    if (cVar1 == '\x02') {
      fVar3 = *(float *)(param_1 + 0x9a0);
      fVar5 = *(float *)(param_2 + 0x40) * 10.0;
      switch(*(undefined4 *)(param_2 + 0x44)) {
      case 0:
        return 1;
      case 1:
        return (uint)(fVar3 < fVar5);
      case 2:
        return (uint)(fVar3 <= fVar5);
      case 3:
        return (uint)(fVar3 == fVar5);
      case 4:
        return (uint)(fVar3 != fVar5);
      case 5:
        return (uint)(fVar5 <= fVar3);
      case 6:
        return (uint)(fVar5 < fVar3);
      case 7:
        return 0;
      default:
        return 0;
      }
    }
    if (cVar1 == '\x01') {
      fVar3 = (float)FUN_0888eb14(param_1,0);
      fVar5 = *(float *)(param_2 + 0x40) * 10.0;
      switch(*(undefined4 *)(param_2 + 0x44)) {
      case 0:
        return 1;
      case 1:
        return (uint)(fVar3 < fVar5);
      case 2:
        return (uint)(fVar3 <= fVar5);
      case 3:
        return (uint)(fVar3 == fVar5);
      case 4:
        return (uint)(fVar3 != fVar5);
      case 5:
        return (uint)(fVar5 <= fVar3);
      case 6:
        return (uint)(fVar5 < fVar3);
      case 7:
        return 0;
      default:
        return 0;
      }
    }
    uVar4 = *(undefined4 *)(param_2 + 0x40);
  }
  uVar2 = FUN_08890620(uVar4,param_1,cVar1,*(undefined4 *)(param_2 + 0x44));
  return uVar2;
}

