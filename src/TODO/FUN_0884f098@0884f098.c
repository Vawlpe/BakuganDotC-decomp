#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0884f098(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  bVar3 = false;
  iVar4 = FUN_0880d354();
  if (iVar4 == 0) {
    iVar4 = FUN_089c9b48(0x1f,DAT_08ac58c8);
    if ((iVar4 == 1) && ((*(byte *)(*(int *)(param_1 + 0x43c) + 4) & 8) != 0)) {
      bVar3 = true;
    }
  }
  else {
    bVar1 = false;
    bVar2 = false;
    if (*(int *)(param_1 + 0x440) == 1) {
      uVar5 = _DONE_Get_DAT_08AAC9E0();
      iVar4 = FUN_0880d0ac(uVar5,2);
      iVar6 = FUN_0882c220(0xc);
      if (iVar6 == 0) {
        bVar1 = true;
      }
      else if ((iVar4 != -1) && (iVar4 < 0x12d)) {
        bVar1 = true;
        bVar2 = true;
      }
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (bVar2) {
        uVar5 = _DONE_Get_DAT_08AAC9E0();
        iVar4 = FUN_0880d7e0(uVar5,0x200);
        if (iVar4 != 0) {
          uVar5 = _DONE_Get_DAT_08AAC9E0();
          iVar4 = FUN_0880d7e0(uVar5,0x2000);
          if (iVar4 == 0) {
            uVar5 = _DONE_Get_DAT_08AAC9E0();
            FUN_0880d808(uVar5,0x200);
            iVar4 = FUN_08816a90();
            if (iVar4 != 0) {
              uVar5 = FUN_08816aac();
              iVar4 = FUN_08816e58(uVar5);
              if (iVar4 == 0) {
                uVar5 = FUN_08816aac();
                FUN_08816e48(uVar5);
              }
            }
            *(undefined4 *)(param_1 + 0x550) = 0;
          }
        }
      }
      else {
        uVar5 = _DONE_Get_DAT_08AAC9E0();
        iVar4 = FUN_0880d7e0(uVar5,0x200);
        if (iVar4 != 0) {
          uVar7 = _DONE_Get_DAT_08AAC9E0();
          FUN_0880d808(uVar7,0x200);
          iVar4 = FUN_08816a90();
          if (iVar4 == 0) {
            *(undefined4 *)(param_1 + 0x550) = 0;
          }
          else {
            uVar7 = FUN_08816aac();
            iVar4 = FUN_08816e58(uVar7);
            if (iVar4 == 0) {
              uVar7 = FUN_08816aac();
              FUN_08816e48(uVar7);
              *(undefined4 *)(param_1 + 0x550) = 0;
            }
            else {
              *(undefined4 *)(param_1 + 0x550) = 0;
            }
          }
          return 0;
        }
      }
    }
    uVar5 = _DONE_Get_DAT_08AAC9E0();
    iVar4 = FUN_0880d7e0(uVar5,0x80);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x550);
      bVar2 = false;
      if (0 < iVar4) {
        if (iVar4 < 0x12d) {
          *(int *)(param_1 + 0x550) = iVar4 + 1;
        }
        else {
          bVar2 = true;
        }
      }
      iVar4 = FUN_089cf8ec(0);
      if (iVar4 != 0) {
        iVar6 = FUN_089d08ec(iVar4,0x200000);
        if (iVar6 == 0) {
          iVar4 = FUN_089d0964(iVar4,0x400000);
          if (iVar4 != 0) {
            uVar5 = _DONE_Get_DAT_08AAC9E0();
            FUN_0880d0e8(uVar5,0x1000);
          }
        }
        else {
          bVar2 = true;
        }
      }
      if (bVar2) {
        uVar5 = _DONE_Get_DAT_08AAC9E0();
        iVar4 = FUN_0880d7e0(uVar5,0x800);
        if (iVar4 == 0) {
          uVar5 = _DONE_Get_DAT_08AAC9E0();
          FUN_0880d0e8(uVar5,0x800);
          iVar4 = FUN_0881b22c();
          if (iVar4 != 0) {
            uVar5 = _DONE_GetPtr_DAT_08AB0300();
            FUN_0881bbd8(uVar5);
          }
          DAT_08aba778 = 7;
          uVar5 = _DONE_Get_DAT_08AAC9E0();
          FUN_0880d0e8(uVar5,0x400);
          *(undefined4 *)(param_1 + 0x440) = 2;
          *(undefined4 *)(param_1 + 0x444) = 2;
          *(undefined4 *)(param_1 + 0x448) = 100;
          FUN_0884b3d0(param_1,0);
          uVar5 = _DONE_Get_DAT_08AC5874();
          FUN_089c69a4(uVar5);
          *(undefined4 *)(param_1 + 0x550) = 0;
        }
      }
      uVar5 = _DONE_Get_DAT_08AAC9E0();
      iVar4 = FUN_0880d7e0(uVar5,0x3800);
      if (iVar4 == 0) {
        uVar5 = _DONE_Get_DAT_08AAC9E0();
        iVar4 = FUN_0880d7e0(uVar5,0x200);
        if (iVar4 == 0) {
          if ((!bVar1) && ((*(byte *)(*(int *)(param_1 + 0x43c) + 4) & 8) != 0)) {
            uVar5 = _DONE_Get_DAT_08AAC9E0();
            FUN_0880d0e8(uVar5,0x200);
            iVar4 = FUN_08816a90();
            if (iVar4 == 0) {
              FUN_08816868();
            }
            iVar4 = FUN_08816aac();
            *(undefined4 *)(iVar4 + 0x40) = 0;
            iVar4 = FUN_08816aac();
            *(undefined4 *)(iVar4 + 4) = 0x46cb2000;
            uVar5 = FUN_08816aac();
            FUN_08816c28(uVar5,1,0x1a);
          }
        }
        else {
          bVar1 = true;
          iVar4 = FUN_08816a90();
          if (iVar4 != 0) {
            uVar5 = FUN_08816aac();
            iVar4 = FUN_08816e58(uVar5);
            if (iVar4 == 0) {
              uVar5 = FUN_08816aac();
              iVar4 = FUN_08816e74(uVar5);
              if (iVar4 == 0) {
                bVar1 = false;
              }
            }
          }
          if (bVar1) {
            *(undefined4 *)(param_1 + 0x550) = 0;
            uVar5 = _DONE_Get_DAT_08AAC9E0();
            FUN_0880d808(uVar5,0x200);
            iVar4 = FUN_08816a90();
            if (iVar4 != 0) {
              uVar5 = FUN_08816aac();
              iVar4 = FUN_08816eb0(uVar5);
              if (iVar4 == 0) {
                uVar5 = _DONE_Get_DAT_08AAC9E0();
                FUN_0880d0e8(uVar5,0x2000);
                *(undefined4 *)(param_1 + 0x550) = 1;
              }
            }
          }
        }
      }
    }
    else {
      uVar5 = _DONE_Get_DAT_08AAC9E0();
      FUN_0880d808(uVar5,0x200);
      uVar5 = _DONE_Get_DAT_08AAC9E0();
      FUN_0880d808(uVar5,0x2000);
    }
  }
  if ((bVar3) && (iVar4 = FUN_0882c220(0xb), iVar4 != 0)) {
    uVar7 = 1;
  }
  return uVar7;
}

