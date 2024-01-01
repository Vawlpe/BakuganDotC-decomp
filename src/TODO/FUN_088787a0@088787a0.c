#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_088787a0(int param_1)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined (*pauVar7) [12];
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined local_54;
  
  pauVar7 = (undefined (*) [12])(param_1 + 0xd0);
  puVar9 = (undefined4 *)(param_1 + 0x60);
  if (DAT_08af7cd0 == 0) {
    DAT_08af7cd0 = 1;
    DAT_08af7ce4 = &DAT_08af55c4;
    DAT_08af7ce0 = 3;
  }
  if (DAT_08af7cd4 == 0) {
    DAT_08af7cd4 = 1;
    DAT_08af7d14 = &DAT_08af5624;
    DAT_08af7d24 = &DAT_08af5564;
    DAT_08af7d20 = 2;
    DAT_08af7d10 = 4;
  }
  if (DAT_08af7cd8 == 0) {
    DAT_08af7cd8 = 1;
    DAT_08af7d64 = &DAT_08af55c4;
    DAT_08af7d60 = 3;
  }
  if (DAT_08af7cdc == 0) {
    DAT_08af7cdc = 1;
    DAT_08af7d94 = &DAT_08af5624;
    DAT_08af7da4 = &DAT_08af5564;
    DAT_08af7da0 = 2;
    DAT_08af7d90 = 4;
  }
  sVar2 = *(short *)(&DAT_08a68304 + *(int *)(param_1 + 0xb8) * 4);
  DAT_08aba970 = 0;
  bVar3 = ((*(uint *)*pauVar7 | *(uint *)(param_1 + 0xd4) | *(uint *)(param_1 + 0xd8)) & 0x7fffffff)
          == 0;
  if (bVar3) {
    DAT_08af7cf0 = *puVar9;
    DAT_08af7cf4 = *(undefined4 *)(param_1 + 100);
    DAT_08af7cf8 = *(undefined4 *)(param_1 + 0x68);
    DAT_08af7d00 = *(float *)(param_1 + 0xcc) * 1.3;
    DAT_08af7cfc = DAT_08af7d00 * DAT_08af7d00;
  }
  else {
    DAT_08af7d30 = *puVar9;
    DAT_08af7d34 = *(undefined4 *)(param_1 + 100);
    DAT_08af7d38 = *(undefined4 *)(param_1 + 0x68);
    DAT_08af7d40 = *(undefined4 *)*pauVar7;
    DAT_08af7d44 = *(undefined4 *)(param_1 + 0xd4);
    DAT_08af7d48 = *(undefined4 *)(param_1 + 0xd8);
    DAT_08af7d50 = *(float *)(param_1 + 0xcc) * 1.5;
    DAT_08af7d3c = DAT_08af7d50 * DAT_08af7d50;
    uVar11 = vdot_t(*pauVar7,*pauVar7);
    DAT_08af7d4c = vsqrt_s(uVar11);
  }
  local_54 = 0;
  if (DAT_08b00870 == 0) {
    DAT_08aba970 = 0;
    return 0;
  }
  iVar6 = *(int *)(DAT_08b00870 + 4);
  iVar10 = DAT_08b00870;
  do {
    iVar8 = iVar6;
    if ((((iVar10 != param_1) && (*(int *)(iVar10 + 0xb0) != *(int *)(param_1 + 0xb0))) &&
        (*(int *)(iVar10 + 0x110) == 0)) && (*(char *)(iVar10 + 0x114) == '\0')) {
      cVar1 = (&UNK_08a6853c)
              [(((int)*(short *)(&DAT_08a68304 + *(int *)(iVar10 + 0xb8) * 4) & 0xfc00U) >> 10) +
               (((int)sVar2 & 0xfc00U) >> 10) * 0xf];
      pauVar7 = (undefined (*) [12])(iVar10 + 0xd0);
      if (cVar1 != '\0') {
        if (((*(uint *)*pauVar7 | *(uint *)(iVar10 + 0xd4) | *(uint *)(iVar10 + 0xd8)) & 0x7fffffff)
            == 0) {
          DAT_08af7d70 = *(undefined4 *)(iVar10 + 0x60);
          DAT_08af7d74 = *(undefined4 *)(iVar10 + 100);
          DAT_08af7d78 = *(undefined4 *)(iVar10 + 0x68);
          DAT_08af7d80 = *(float *)(iVar10 + 0xcc) * 1.5;
          DAT_08af7d7c = DAT_08af7d80 * DAT_08af7d80;
          if (bVar3) {
            iVar6 = FUN_089e8fc4(&DAT_08af7d60,&DAT_08af7ce0);
          }
          else {
            iVar6 = FUN_089e9010(&DAT_08af7d60,&DAT_08af7d10);
          }
        }
        else {
          DAT_08af7db0 = *(undefined4 *)(iVar10 + 0x60);
          DAT_08af7db4 = *(undefined4 *)(iVar10 + 100);
          DAT_08af7db8 = *(undefined4 *)(iVar10 + 0x68);
          DAT_08af7dc0 = *(undefined4 *)*pauVar7;
          DAT_08af7dc4 = *(undefined4 *)(iVar10 + 0xd4);
          DAT_08af7dc8 = *(undefined4 *)(iVar10 + 0xd8);
          DAT_08af7dd0 = *(float *)(iVar10 + 0xcc) * 1.5;
          DAT_08af7dbc = DAT_08af7dd0 * DAT_08af7dd0;
          uVar11 = vdot_t(*pauVar7,*pauVar7);
          DAT_08af7dcc = vsqrt_s(uVar11);
          if (bVar3) {
            iVar6 = FUN_089e93b8(&DAT_08af7d90,&DAT_08af7ce0);
          }
          else {
            iVar6 = FUN_089e9418(&DAT_08af7d90,&DAT_08af7d10);
          }
        }
        if (iVar6 != 0) {
          DAT_08aba970 = DAT_08aba970 + 1;
          if (cVar1 == '\x01') {
            *(undefined *)(iVar10 + 0x114) = 1;
LAB_08878bd8:
            iVar6 = *(int *)(param_1 + 0xb8);
          }
          else {
            if (cVar1 == -1) {
              *(undefined *)(param_1 + 0x114) = 1;
              local_54 = 1;
              goto LAB_08878bd8;
            }
            if (cVar1 == '\x02') {
              *(undefined *)(iVar10 + 0x114) = 1;
              *(undefined *)(param_1 + 0x114) = 1;
              local_54 = 1;
              goto LAB_08878bd8;
            }
            iVar6 = *(int *)(param_1 + 0xb8);
          }
          if (iVar6 == 0x5b) {
            if (((int)*(short *)(&DAT_08a68304 + *(int *)(iVar10 + 0xb8) * 4) & 0xfc00U) != 0x3000)
            {
              if (*(char *)(iVar10 + 0x126) == '\x01') {
                *(undefined *)(iVar10 + 0x115) = 1;
                *(undefined4 *)(iVar10 + 0xe4) = *(undefined4 *)(param_1 + 0xb0);
              }
              else {
                *(undefined *)(iVar10 + 0x116) = 1;
                uVar11 = *(undefined4 *)(param_1 + 100);
                uVar4 = *(undefined4 *)(param_1 + 0x68);
                uVar5 = *(undefined4 *)(param_1 + 0x6c);
                *(undefined4 *)(iVar10 + 0x90) = *puVar9;
                *(undefined4 *)(iVar10 + 0x94) = uVar11;
                *(undefined4 *)(iVar10 + 0x98) = uVar4;
                *(undefined4 *)(iVar10 + 0x9c) = uVar5;
                *(undefined *)(iVar10 + 0x117) = 1;
              }
            }
          }
          else if ((*(int *)(param_1 + 0xb8) == 0xc) &&
                  (((int)*(short *)(&DAT_08a68304 + *(int *)(iVar10 + 0xb8) * 4) & 0xfc00U) !=
                   0x3000)) {
            *(undefined *)(iVar10 + 0x116) = 1;
            uVar11 = *(undefined4 *)(param_1 + 100);
            uVar4 = *(undefined4 *)(param_1 + 0x68);
            uVar5 = *(undefined4 *)(param_1 + 0x6c);
            *(undefined4 *)(iVar10 + 0x90) = *puVar9;
            *(undefined4 *)(iVar10 + 0x94) = uVar11;
            *(undefined4 *)(iVar10 + 0x98) = uVar4;
            *(undefined4 *)(iVar10 + 0x9c) = uVar5;
          }
        }
      }
    }
    if (iVar8 == 0) {
      return local_54;
    }
    iVar6 = *(int *)(iVar8 + 4);
    iVar10 = iVar8;
  } while( true );
}

