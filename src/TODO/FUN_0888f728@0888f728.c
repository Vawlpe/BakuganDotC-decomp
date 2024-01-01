#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined2 FUN_0888f728(float param_1)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined2 local_10 [8];
  
  local_10[0] = 0;
  local_10[1] = 0x2000;
  local_10[2] = 0x4000;
  local_10[3] = 0x6000;
  fVar4 = param_1 * 2.0 * 57.29578;
  local_10[4] = 0x8000;
  local_10[5] = 0xa000;
  local_10[6] = 0xc000;
  local_10[7] = 0xe000;
  if (fVar4 < 0.0) {
    fVar4 = (360.0 - -fVar4) * 0.5 + 180.0;
  }
  else {
    fVar4 = fVar4 * 0.5;
  }
  uVar2 = 1;
  fVar3 = 22.5;
  while ((bVar1 = fVar4 < fVar3, fVar3 = fVar3 + 45.0, bVar1 || (fVar3 < fVar4))) {
    uVar2 = uVar2 + 1 & 0xff;
    if (7 < uVar2) {
      return 0;
    }
  }
  return local_10[uVar2];
}

