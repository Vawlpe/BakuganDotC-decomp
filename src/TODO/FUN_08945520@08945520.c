#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08945520(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (((*(int *)(param_1 + 0x88) < *(int *)(param_1 + 0xf8)) &&
      (*(int *)(param_1 + 0xe0) <= *(int *)(param_1 + 0x74))) && (*(int *)(param_1 + 0x88) < 0x1f6))
  {
    if ((&DAT_08ac1c34)[*(int *)(param_1 + 0x88) * 3] == 9) {
      iVar6 = 0;
      *(int *)(param_1 + 0xe0) =
           (int)(*(float *)(&DAT_08ac1bf0 + (&DAT_08ac1c30)[*(int *)(param_1 + 0x88) * 3] * 4) +
                 *(float *)(&DAT_08a9d064 + (&DAT_08ac1c2c)[*(int *)(param_1 + 0x88) * 3] * 4) +
                (float)*(int *)(param_1 + 0xe0));
      iVar7 = param_1;
      do {
        iVar6 = iVar6 + 1;
        if (*(int *)(*(int *)(iVar7 + 0x8c) + 0x84) == 0) break;
        iVar7 = iVar7 + 4;
      } while (iVar6 < 0x14);
      fVar8 = *(float *)(&DAT_08a9d064 + (&DAT_08ac1c2c)[*(int *)(param_1 + 0x88) * 3] * 4);
      *(float *)(*(int *)(iVar7 + 0x8c) + 0xa8) = fVar8 * 0.04166667;
      *(float *)(*(int *)(iVar7 + 0x8c) + 0xdc) = fVar8 * 0.04166667;
      uVar5 = DAT_08b001bc;
      uVar4 = DAT_08b001b8;
      uVar3 = DAT_08b001b4;
      uVar2 = DAT_08b0019c;
      uVar1 = DAT_08b00198;
      uVar11 = DAT_08b00194;
      uVar10 = 0;
      if ((&DAT_08ac1c2c)[*(int *)(param_1 + 0x88) * 3] == 0) {
        iVar6 = *(int *)(iVar7 + 0x8c);
        *(undefined4 *)(iVar6 + 0xc0) = DAT_08b001b0;
        *(undefined4 *)(iVar6 + 0xc4) = uVar3;
        *(undefined4 *)(iVar6 + 200) = uVar4;
        *(undefined4 *)(iVar6 + 0xcc) = uVar5;
        iVar6 = *(int *)(*(int *)(iVar7 + 0x8c) + 0x74);
        (**(code **)(iVar6 + 0x14))
                  (0x43720000,0x40000000,0,*(int *)(iVar7 + 0x8c) + (int)*(short *)(iVar6 + 0x10),
                   *(undefined4 *)(*(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x88) * 4),1,0,0);
        uVar2 = DAT_08b0086c;
        uVar1 = DAT_08b00868;
        uVar11 = DAT_08b00864;
        iVar6 = *(int *)(iVar7 + 0x8c);
        *(undefined4 *)(iVar6 + 0xc0) = DAT_08b00860;
        *(undefined4 *)(iVar6 + 0xc4) = uVar11;
        *(undefined4 *)(iVar6 + 200) = uVar1;
        *(undefined4 *)(iVar6 + 0xcc) = uVar2;
        iVar6 = *(int *)(iVar7 + 0x8c);
      }
      else if ((&DAT_08ac1c2c)[*(int *)(param_1 + 0x88) * 3] == 1) {
        iVar6 = *(int *)(iVar7 + 0x8c);
        *(undefined4 *)(iVar6 + 0xc0) = DAT_08b001b0;
        *(undefined4 *)(iVar6 + 0xc4) = uVar3;
        *(undefined4 *)(iVar6 + 200) = uVar4;
        *(undefined4 *)(iVar6 + 0xcc) = uVar5;
        iVar6 = *(int *)(*(int *)(iVar7 + 0x8c) + 0x74);
        (**(code **)(iVar6 + 0x14))
                  (0x43710000,0x3f800000,0,*(int *)(iVar7 + 0x8c) + (int)*(short *)(iVar6 + 0x10),
                   *(undefined4 *)(*(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x88) * 4),1,0,0);
        uVar2 = DAT_08b0019c;
        uVar1 = DAT_08b00198;
        uVar11 = DAT_08b00194;
        iVar6 = *(int *)(iVar7 + 0x8c);
        *(undefined4 *)(iVar6 + 0xc0) = DAT_08b00190;
        *(undefined4 *)(iVar6 + 0xc4) = uVar11;
        *(undefined4 *)(iVar6 + 200) = uVar1;
        *(undefined4 *)(iVar6 + 0xcc) = uVar2;
        iVar6 = *(int *)(iVar7 + 0x8c);
      }
      else {
        if ((&DAT_08ac1c2c)[*(int *)(param_1 + 0x88) * 3] == 2) {
          uVar10 = 0x3f800000;
          iVar6 = *(int *)(iVar7 + 0x8c);
          *(undefined4 *)(iVar6 + 0xc0) = DAT_08b00190;
          *(undefined4 *)(iVar6 + 0xc4) = uVar11;
          *(undefined4 *)(iVar6 + 200) = uVar1;
          *(undefined4 *)(iVar6 + 0xcc) = uVar2;
          iVar6 = *(int *)(*(int *)(iVar7 + 0x8c) + 0x74);
          (**(code **)(iVar6 + 0x14))
                    (0x43710000,0x40000000,0,*(int *)(iVar7 + 0x8c) + (int)*(short *)(iVar6 + 0x10),
                     *(undefined4 *)(*(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x88) * 4),1,0,0)
          ;
          uVar2 = DAT_08b0103c;
          uVar1 = DAT_08b01038;
          uVar11 = DAT_08b01034;
          iVar6 = *(int *)(iVar7 + 0x8c);
          *(undefined4 *)(iVar6 + 0xc0) = DAT_08b01030;
          *(undefined4 *)(iVar6 + 0xc4) = uVar11;
          *(undefined4 *)(iVar6 + 200) = uVar1;
          *(undefined4 *)(iVar6 + 0xcc) = uVar2;
        }
        iVar6 = *(int *)(iVar7 + 0x8c);
      }
      (**(code **)(*(int *)(iVar6 + 0x74) + 0x14))
                (0x43700000,uVar10,0,iVar6 + *(short *)(*(int *)(iVar6 + 0x74) + 0x10),
                 *(undefined4 *)(*(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x88) * 4),1,0,0);
      *(undefined4 *)(*(int *)(iVar7 + 0x8c) + 100) = 0x43900000;
    }
    else {
      iVar7 = *(int *)(&DAT_08a9d074 + (&DAT_08ac1c34)[*(int *)(param_1 + 0x88) * 3] * 4);
      if ((&DAT_08ac1c34)[*(int *)(param_1 + 0x88) * 3] == 8) {
        iVar7 = 0x1e;
      }
      iVar6 = iVar7 * 4;
      if ((iVar7 == 0x1e) || (iVar7 == 0x18)) {
        uVar11 = 0x41800000;
        if ((&DAT_08ac1c28)[*(int *)(param_1 + 0x88) * 3] == 9) {
          if (*(int *)(&DAT_08ac1c20 + *(int *)(param_1 + 0x88) * 0xc) == 2) {
            uVar11 = 0x41a00000;
          }
          fVar8 = *(float *)(&DAT_08a9d064 +
                            *(int *)(&DAT_08ac1c20 + *(int *)(param_1 + 0x88) * 0xc) * 4);
          iVar7 = FUN_088184e8(0,*(undefined4 *)(param_1 + 0x8c),
                               *(undefined4 *)
                                (*(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x88) * 4 + -4),0,0,0
                              );
          fVar8 = (float)iVar7 * fVar8 + 5.0;
          FUN_089f4924(fVar8,uVar11,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6));
          *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x60) = 240.0 - fVar8 * 0.5;
        }
        else {
          uVar11 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6);
          fVar8 = (float)FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x5c));
          FUN_089f4924(fVar8 + 40.0,0x41800000,uVar11);
          fVar8 = (float)FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6));
          *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x60) = 240.0 - fVar8 * 0.5;
        }
        iVar7 = *(int *)(param_1 + 0x1c);
      }
      else {
        iVar7 = *(int *)(param_1 + 0x1c);
      }
      *(uint *)(*(int *)(iVar7 + iVar6) + 0xd0) = *(uint *)(*(int *)(iVar7 + iVar6) + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 100) = 0x43908000;
      iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      *(undefined4 *)(iVar7 + 0xb0) = 0x3f800000;
      *(undefined4 *)(iVar7 + 0xb4) = 0x3f800000;
      *(undefined4 *)(iVar7 + 0xb8) = 0x3f800000;
      *(undefined4 *)(iVar7 + 0xbc) = 0x3f800000;
      fVar9 = *(float *)(&DAT_08ac1bf0 + (&DAT_08ac1c30)[*(int *)(param_1 + 0x88) * 3] * 4);
      fVar8 = (float)FUN_089f494c(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6));
      *(int *)(param_1 + 0xe0) = (int)(fVar9 + fVar8 + (float)*(int *)(param_1 + 0xe0));
    }
    iVar7 = *(int *)(param_1 + 0x88) + 1;
    *(int *)(param_1 + 0x88) = iVar7;
    if (*(int *)(&DAT_08a9d074 + (&DAT_08ac1c34)[iVar7 * 3] * 4) == 0x18) {
      FUN_08945520(param_1);
    }
  }
  return;
}

