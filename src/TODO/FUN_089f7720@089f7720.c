#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined * FUN_089f7720(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = DAT_08ac6168;
  if (DAT_08ac6168 != (undefined *)0x0) {
    do {
      iVar2 = strcasecmp(param_1,puVar3 + 0x18);
      if (iVar2 == 0) {
        return puVar3;
      }
      piVar1 = (int *)(puVar3 + 4);
      puVar3 = (undefined *)*piVar1;
    } while ((undefined *)*piVar1 != (undefined *)0x0);
  }
  iVar2 = strcmp(param_1,"FeedBackTex");
  if (iVar2 != 0) {
    strcmp(param_1,"NonTexture");
    puVar3 = (undefined *)FUN_089f6ca4();
    return puVar3;
  }
  return &DAT_08ac6020;
}

