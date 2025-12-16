/**
 * clf_xgb.c
 * 
 * This is an auto-generated implementation of the trained
 * XGB Classifier model from python, generated using the m2c module.
 * No changes were made except for changing the datatypes from float
 * to double in order to be compatible with STM32's float type, which
 * only supports 32-bit floating point as opposed to 64-bit (double),
 * and renaming the function call to match other ai_run calls
 * 
 * Function docstrings were also added.
 *
 *  Created on: Dec 16, 2025
 *      Author: moreypiatos
 */


#include "clf_xgb.h"
#include "string.h"
#include "math.h"

void softmax(float *x, int size, float *result) {
    float max = x[0];
    for (int i = 1; i < size; ++i) {
        if (x[i] > max)
            max = x[i];
    }
    float sum = 0.0;
    for (int i = 0; i < size; ++i) {
        result[i] = exp(x[i] - max);
        sum += result[i];
    }
    for (int i = 0; i < size; ++i)
        result[i] /= sum;
}


void ai_clf_xgb_run(float * input, float * output) {
    float var0[3];
    float var1;
    if (input[5] < 0.016339071) {
        if (input[4] < 0.007920916) {
            var1 = -0.20790404;
        } else {
            if (input[1] < 0.008334855) {
                var1 = 0.38850623;
            } else {
                if (input[4] < 0.016779995) {
                    var1 = -0.20434746;
                } else {
                    if (input[0] < 0.017952457) {
                        var1 = 0.019123858;
                    } else {
                        var1 = -0.13032795;
                    }
                }
            }
        }
    } else {
        if (input[2] < 0.03549164) {
            if (input[6] < 0.028343298) {
                if (input[3] < 0.018101975) {
                    var1 = 0.48222333;
                } else {
                    if (input[7] < 0.01935702) {
                        var1 = -0.19263081;
                    } else {
                        if (input[2] < 0.025647238) {
                            var1 = 0.34313115;
                        } else {
                            var1 = -0.12542751;
                        }
                    }
                }
            } else {
                var1 = 0.49550417;
            }
        } else {
            if (input[2] < 0.06992401) {
                if (input[3] < 0.039851032) {
                    var1 = -0.20065092;
                } else {
                    if (input[2] < 0.06335619) {
                        if (input[2] < 0.050546106) {
                            var1 = 0.44633445;
                        } else {
                            var1 = 0.17858103;
                        }
                    } else {
                        if (input[1] < 0.07788305) {
                            var1 = -0.19320448;
                        } else {
                            var1 = 0.38850623;
                        }
                    }
                }
            } else {
                var1 = -0.20470895;
            }
        }
    }
    float var2;
    if (input[5] < 0.016339071) {
        if (input[5] < 0.008002498) {
            var2 = -0.1902652;
        } else {
            if (input[1] < 0.008334855) {
                var2 = 0.271674;
            } else {
                if (input[4] < 0.016779995) {
                    var2 = -0.18848492;
                } else {
                    if (input[1] < 0.019988183) {
                        var2 = 0.02429814;
                    } else {
                        var2 = -0.12194573;
                    }
                }
            }
        }
    } else {
        if (input[2] < 0.06335619) {
            if (input[3] < 0.018101975) {
                var2 = 0.32266468;
            } else {
                if (input[7] < 0.01935702) {
                    var2 = -0.17421669;
                } else {
                    if (input[0] < 0.038450025) {
                        if (input[5] < 0.026083015) {
                            var2 = 0.06799543;
                        } else {
                            var2 = 0.35584843;
                        }
                    } else {
                        if (input[3] < 0.039851032) {
                            var2 = -0.11429871;
                        } else {
                            var2 = 0.21209149;
                        }
                    }
                }
            }
        } else {
            if (input[2] < 0.06992401) {
                if (input[1] < 0.07788305) {
                    var2 = -0.17476511;
                } else {
                    var2 = 0.27583545;
                }
            } else {
                var2 = -0.18598263;
            }
        }
    }
    float var3;
    if (input[5] < 0.016339071) {
        if (input[5] < 0.008002498) {
            var3 = -0.1778118;
        } else {
            if (input[1] < 0.008334855) {
                var3 = 0.21589845;
            } else {
                if (input[4] < 0.016779995) {
                    var3 = -0.17811047;
                } else {
                    if (input[5] < 0.0147901885) {
                        var3 = -0.108538285;
                    } else {
                        var3 = 0.026413707;
                    }
                }
            }
        }
    } else {
        if (input[2] < 0.06335619) {
            if (input[3] < 0.018101975) {
                var3 = 0.25772998;
            } else {
                if (input[7] < 0.01935702) {
                    var3 = -0.16798227;
                } else {
                    if (input[2] < 0.022269826) {
                        var3 = 0.32736653;
                    } else {
                        if (input[5] < 0.025887791) {
                            var3 = -0.100286566;
                        } else {
                            var3 = 0.10279243;
                        }
                    }
                }
            }
        } else {
            if (input[2] < 0.06992401) {
                if (input[1] < 0.07788305) {
                    var3 = -0.16093037;
                } else {
                    var3 = 0.21812667;
                }
            } else {
                var3 = -0.1730653;
            }
        }
    }
    float var4;
    if (input[5] < 0.016339071) {
        if (input[5] < 0.008002498) {
            var4 = -0.169052;
        } else {
            if (input[1] < 0.008334855) {
                var4 = 0.18210417;
            } else {
                if (input[4] < 0.016779995) {
                    var4 = -0.16982679;
                } else {
                    if (input[1] < 0.019988183) {
                        var4 = 0.035659965;
                    } else {
                        var4 = -0.10258858;
                    }
                }
            }
        }
    } else {
        if (input[2] < 0.03549164) {
            if (input[6] < 0.028343298) {
                if (input[2] < 0.026180295) {
                    if (input[3] < 0.018101975) {
                        var4 = 0.22281462;
                    } else {
                        if (input[7] < 0.01935702) {
                            var4 = -0.16373943;
                        } else {
                            var4 = 0.1793323;
                        }
                    }
                } else {
                    if (input[5] < 0.02733008) {
                        var4 = -0.17604817;
                    } else {
                        if (input[0] < 0.030931994) {
                            var4 = 0.2750267;
                        } else {
                            var4 = -0.13153955;
                        }
                    }
                }
            } else {
                var4 = 0.24136211;
            }
        } else {
            if (input[2] < 0.06992401) {
                if (input[3] < 0.039851032) {
                    var4 = -0.17653768;
                } else {
                    if (input[2] < 0.050752595) {
                        if (input[2] < 0.050546106) {
                            var4 = 0.22939856;
                        } else {
                            var4 = 0.08022173;
                        }
                    } else {
                        if (input[7] < 0.053660363) {
                            var4 = -0.20384218;
                        } else {
                            var4 = 0.10308983;
                        }
                    }
                }
            } else {
                var4 = -0.1635236;
            }
        }
    }
    float var5;
    if (input[5] < 0.016339071) {
        if (input[5] < 0.008002498) {
            var5 = -0.16243678;
        } else {
            if (input[1] < 0.008334855) {
                var5 = 0.15742803;
            } else {
                if (input[4] < 0.016779995) {
                    var5 = -0.16405219;
                } else {
                    if (input[0] < 0.017952457) {
                        var5 = 0.03812781;
                    } else {
                        var5 = -0.09391541;
                    }
                }
            }
        }
    } else {
        if (input[2] < 0.06335619) {
            if (input[3] < 0.018101975) {
                var5 = 0.2035839;
            } else {
                if (input[7] < 0.01935702) {
                    var5 = -0.1555367;
                } else {
                    if (input[2] < 0.022269826) {
                        var5 = 0.23042862;
                    } else {
                        if (input[7] < 0.023452606) {
                            var5 = -0.17698355;
                        } else {
                            var5 = 0.07005797;
                        }
                    }
                }
            }
        } else {
            if (input[2] < 0.06992401) {
                if (input[1] < 0.07788305) {
                    var5 = -0.1507295;
                } else {
                    var5 = 0.17711198;
                }
            } else {
                var5 = -0.15598153;
            }
        }
    }
    float var6;
    if (input[5] < 0.016339071) {
        if (input[5] < 0.008002498) {
            var6 = -0.1572964;
        } else {
            if (input[1] < 0.008334855) {
                var6 = 0.14092128;
            } else {
                if (input[4] < 0.016779995) {
                    var6 = -0.15816212;
                } else {
                    var6 = -0.031956084;
                }
            }
        }
    } else {
        if (input[2] < 0.03549164) {
            if (input[6] < 0.028343298) {
                if (input[2] < 0.026180295) {
                    if (input[7] < 0.023452606) {
                        if (input[2] < 0.022269826) {
                            var6 = 0.11341648;
                        } else {
                            var6 = -0.15537468;
                        }
                    } else {
                        var6 = 0.24863741;
                    }
                } else {
                    if (input[5] < 0.02733008) {
                        var6 = -0.16095082;
                    } else {
                        if (input[0] < 0.030931994) {
                            var6 = 0.22651689;
                        } else {
                            var6 = -0.12921295;
                        }
                    }
                }
            } else {
                var6 = 0.20050769;
            }
        } else {
            if (input[3] < 0.039851032) {
                var6 = -0.16565168;
            } else {
                if (input[2] < 0.06257273) {
                    if (input[7] < 0.053660363) {
                        if (input[2] < 0.050752595) {
                            var6 = 0.17249465;
                        } else {
                            var6 = -0.17856333;
                        }
                    } else {
                        var6 = 0.21828511;
                    }
                } else {
                    if (input[2] < 0.06992401) {
                        if (input[1] < 0.07788305) {
                            var6 = -0.12319785;
                        } else {
                            var6 = 0.15492254;
                        }
                    } else {
                        var6 = -0.14955617;
                    }
                }
            }
        }
    }
    float var7;
    if (input[5] < 0.016339071) {
        if (input[4] < 0.016779995) {
            if (input[5] < 0.008002498) {
                var7 = -0.15303294;
            } else {
                if (input[1] < 0.008334855) {
                    var7 = 0.12580565;
                } else {
                    var7 = -0.15378685;
                }
            }
        } else {
            var7 = -0.023201995;
        }
    } else {
        if (input[0] < 0.038450025) {
            if (input[5] < 0.02733008) {
                if (input[2] < 0.026180295) {
                    if (input[3] < 0.018101975) {
                        var7 = 0.18009526;
                    } else {
                        if (input[7] < 0.01935702) {
                            var7 = -0.15343602;
                        } else {
                            var7 = 0.11441057;
                        }
                    }
                } else {
                    var7 = -0.14552122;
                }
            } else {
                var7 = 0.1899885;
            }
        } else {
            if (input[6] < 0.033972587) {
                var7 = -0.15692665;
            } else {
                if (input[2] < 0.069732934) {
                    if (input[0] < 0.041369926) {
                        var7 = 0.16493791;
                    } else {
                        if (input[3] < 0.039851032) {
                            var7 = -0.14356782;
                        } else {
                            var7 = 0.05989929;
                        }
                    }
                } else {
                    if (input[2] < 0.06992401) {
                        var7 = -0.026708974;
                    } else {
                        var7 = -0.14364491;
                    }
                }
            }
        }
    }
    float var8;
    if (input[5] < 0.016099785) {
        if (input[7] < 0.0065157246) {
            if (input[3] < 0.006605598) {
                var8 = -0.14491174;
            } else {
                var8 = 0.117178954;
            }
        } else {
            var8 = -0.1521809;
        }
    } else {
        if (input[2] < 0.06992401) {
            if (input[3] < 0.018101975) {
                if (input[5] < 0.016339071) {
                    var8 = -0.031765636;
                } else {
                    var8 = 0.17071047;
                }
            } else {
                if (input[7] < 0.01935702) {
                    var8 = -0.14800574;
                } else {
                    if (input[2] < 0.022269826) {
                        var8 = 0.19015701;
                    } else {
                        if (input[5] < 0.023690738) {
                            var8 = -0.1839749;
                        } else {
                            var8 = 0.039270535;
                        }
                    }
                }
            }
        } else {
            var8 = -0.13782088;
        }
    }
    float var9;
    if (input[5] < 0.016099785) {
        var9 = -0.13102254;
    } else {
        if (input[2] < 0.03549164) {
            if (input[6] < 0.028343298) {
                if (input[2] < 0.028156625) {
                    if (input[7] < 0.023452606) {
                        if (input[2] < 0.022960607) {
                            var9 = 0.06945621;
                        } else {
                            var9 = -0.1742258;
                        }
                    } else {
                        if (input[5] < 0.023434918) {
                            var9 = -0.084752515;
                        } else {
                            var9 = 0.19717331;
                        }
                    }
                } else {
                    var9 = -0.13888219;
                }
            } else {
                var9 = 0.1641262;
            }
        } else {
            if (input[3] < 0.039851032) {
                var9 = -0.14818504;
            } else {
                if (input[2] < 0.06335619) {
                    if (input[7] < 0.053660363) {
                        if (input[2] < 0.050752595) {
                            var9 = 0.13849853;
                        } else {
                            var9 = -0.16208334;
                        }
                    } else {
                        if (input[6] < 0.052982736) {
                            var9 = 0.01673461;
                        } else {
                            var9 = 0.17264998;
                        }
                    }
                } else {
                    if (input[6] < 0.06784188) {
                        if (input[3] < 0.06417808) {
                            var9 = -0.12622668;
                        } else {
                            var9 = 0.12123848;
                        }
                    } else {
                        var9 = -0.13210024;
                    }
                }
            }
        }
    }
    float var10;
    if (input[5] < 0.016339071) {
        if (input[4] < 0.016779995) {
            if (input[0] < 0.006686007) {
                if (input[4] < 0.007920916) {
                    var10 = -0.13646504;
                } else {
                    var10 = 0.08884404;
                }
            } else {
                var10 = -0.14717539;
            }
        } else {
            var10 = 0.0050026774;
        }
    } else {
        if (input[3] < 0.018101975) {
            var10 = 0.15914753;
        } else {
            if (input[7] < 0.01935702) {
                var10 = -0.14450762;
            } else {
                if (input[2] < 0.022269826) {
                    var10 = 0.17437486;
                } else {
                    if (input[5] < 0.023690738) {
                        var10 = -0.16662529;
                    } else {
                        if (input[2] < 0.03549164) {
                            var10 = 0.08657846;
                        } else {
                            var10 = -0.031620514;
                        }
                    }
                }
            }
        }
    }
    float var11;
    if (input[5] < 0.016099785) {
        if (input[0] < 0.006686007) {
            if (input[4] < 0.007920916) {
                var11 = -0.13152847;
            } else {
                var11 = 0.078355104;
            }
        } else {
            var11 = -0.14165522;
        }
    } else {
        if (input[3] < 0.018101975) {
            if (input[5] < 0.016339071) {
                var11 = -0.030885244;
            } else {
                var11 = 0.15315002;
            }
        } else {
            if (input[7] < 0.01935702) {
                var11 = -0.13934347;
            } else {
                if (input[2] < 0.022269826) {
                    var11 = 0.16515058;
                } else {
                    if (input[7] < 0.023452606) {
                        if (input[3] < 0.021004764) {
                            var11 = -0.024438446;
                        } else {
                            var11 = -0.16113706;
                        }
                    } else {
                        if (input[0] < 0.038450025) {
                            var11 = 0.11713558;
                        } else {
                            var11 = -0.022598244;
                        }
                    }
                }
            }
        }
    }
    float var12;
    if (input[5] < 0.016099785) {
        if (input[0] < 0.006686007) {
            if (input[4] < 0.007920916) {
                var12 = -0.12645543;
            } else {
                var12 = 0.07316437;
            }
        } else {
            var12 = -0.13854548;
        }
    } else {
        if (input[6] < 0.06784188) {
            if (input[3] < 0.018101975) {
                if (input[5] < 0.016339071) {
                    var12 = -0.030733688;
                } else {
                    var12 = 0.14673732;
                }
            } else {
                if (input[7] < 0.01984781) {
                    var12 = -0.12642539;
                } else {
                    if (input[7] < 0.02121406) {
                        var12 = 0.16566305;
                    } else {
                        if (input[5] < 0.023690738) {
                            var12 = -0.15301134;
                        } else {
                            var12 = 0.030686118;
                        }
                    }
                }
            }
        } else {
            var12 = -0.11724325;
        }
    }
    float var13;
    if (input[5] < 0.016099785) {
        if (input[7] < 0.0065157246) {
            if (input[3] < 0.006605598) {
                var13 = -0.12170256;
            } else {
                var13 = 0.08724237;
            }
        } else {
            var13 = -0.13494863;
        }
    } else {
        if (input[3] < 0.018101975) {
            if (input[5] < 0.016339071) {
                var13 = -0.02822142;
            } else {
                var13 = 0.14174652;
            }
        } else {
            if (input[7] < 0.01935702) {
                var13 = -0.13103767;
            } else {
                if (input[2] < 0.022269826) {
                    var13 = 0.15033199;
                } else {
                    if (input[7] < 0.023452606) {
                        if (input[3] < 0.021004764) {
                            var13 = -0.021837141;
                        } else {
                            var13 = -0.14761595;
                        }
                    } else {
                        if (input[0] < 0.038450025) {
                            var13 = 0.104055755;
                        } else {
                            var13 = -0.017711286;
                        }
                    }
                }
            }
        }
    }
    float var14;
    if (input[5] < 0.016099785) {
        if (input[0] < 0.006686007) {
            if (input[4] < 0.007920916) {
                var14 = -0.11592794;
            } else {
                var14 = 0.06514401;
            }
        } else {
            var14 = -0.13122614;
        }
    } else {
        if (input[3] < 0.018101975) {
            if (input[5] < 0.016339071) {
                var14 = -0.025293496;
            } else {
                var14 = 0.13726215;
            }
        } else {
            if (input[7] < 0.01984781) {
                var14 = -0.1153516;
            } else {
                if (input[7] < 0.02121406) {
                    var14 = 0.15384343;
                } else {
                    if (input[5] < 0.023690738) {
                        var14 = -0.1412909;
                    } else {
                        if (input[2] < 0.03549164) {
                            var14 = 0.06515058;
                        } else {
                            var14 = -0.018815951;
                        }
                    }
                }
            }
        }
    }
    float var15;
    if (input[5] < 0.016099785) {
        if (input[0] < 0.006686007) {
            if (input[4] < 0.007920916) {
                var15 = -0.111474104;
            } else {
                var15 = 0.063116364;
            }
        } else {
            var15 = -0.12762633;
        }
    } else {
        if (input[3] < 0.018101975) {
            if (input[4] < 0.016779995) {
                if (input[1] < 0.018679908) {
                    var15 = 0.08018494;
                } else {
                    var15 = -0.093048915;
                }
            } else {
                var15 = 0.14339441;
            }
        } else {
            if (input[7] < 0.01935702) {
                var15 = -0.12220039;
            } else {
                if (input[2] < 0.022269826) {
                    var15 = 0.13998485;
                } else {
                    if (input[7] < 0.023452606) {
                        if (input[2] < 0.022960607) {
                            var15 = -0.0166394;
                        } else {
                            var15 = -0.1371323;
                        }
                    } else {
                        if (input[0] < 0.038450025) {
                            var15 = 0.08563403;
                        } else {
                            var15 = -0.011981878;
                        }
                    }
                }
            }
        }
    }
    float var16;
    if (input[5] < 0.016099785) {
        if (input[0] < 0.006686007) {
            if (input[4] < 0.007920916) {
                var16 = -0.107260704;
            } else {
                var16 = 0.058744077;
            }
        } else {
            var16 = -0.123834625;
        }
    } else {
        if (input[3] < 0.018101975) {
            if (input[4] < 0.016779995) {
                if (input[0] < 0.01747755) {
                    var16 = -0.04089187;
                } else {
                    var16 = 0.022878848;
                }
            } else {
                var16 = 0.1378713;
            }
        } else {
            if (input[7] < 0.01935702) {
                var16 = -0.11779335;
            } else {
                if (input[2] < 0.022269826) {
                    var16 = 0.13464862;
                } else {
                    if (input[5] < 0.023690738) {
                        var16 = -0.13047983;
                    } else {
                        if (input[6] < 0.06784188) {
                            var16 = 0.02222926;
                        } else {
                            var16 = -0.09699836;
                        }
                    }
                }
            }
        }
    }
    float var17;
    if (input[5] < 0.016099785) {
        if (input[0] < 0.006686007) {
            if (input[4] < 0.007920916) {
                var17 = -0.10228599;
            } else {
                var17 = 0.055159908;
            }
        } else {
            var17 = -0.120001286;
        }
    } else {
        if (input[2] < 0.017712997) {
            var17 = 0.11874027;
        } else {
            if (input[5] < 0.018029599) {
                var17 = -0.10689563;
            } else {
                if (input[2] < 0.022067789) {
                    if (input[0] < 0.025313815) {
                        if (input[4] < 0.01899938) {
                            var17 = 0.014805786;
                        } else {
                            var17 = 0.13139021;
                        }
                    } else {
                        var17 = -0.02682984;
                    }
                } else {
                    if (input[5] < 0.02351297) {
                        var17 = -0.12364645;
                    } else {
                        if (input[2] < 0.025647238) {
                            var17 = 0.07865738;
                        } else {
                            var17 = -0.0031237793;
                        }
                    }
                }
            }
        }
    }
    float var18;
    if (input[5] < 0.016099785) {
        if (input[0] < 0.006686007) {
            if (input[5] < 0.0067658224) {
                var18 = -0.094858326;
            } else {
                var18 = 0.043860123;
            }
        } else {
            var18 = -0.11546367;
        }
    } else {
        if (input[3] < 0.018101975) {
            if (input[5] < 0.016339071) {
                var18 = -0.021333247;
            } else {
                var18 = 0.12210726;
            }
        } else {
            if (input[7] < 0.01984781) {
                var18 = -0.104716904;
            } else {
                if (input[7] < 0.02121406) {
                    var18 = 0.13694987;
                } else {
                    if (input[7] < 0.023452606) {
                        var18 = -0.11448985;
                    } else {
                        if (input[2] < 0.028156625) {
                            var18 = 0.10006977;
                        } else {
                            var18 = -0.0028855896;
                        }
                    }
                }
            }
        }
    }
    float var19;
    if (input[5] < 0.016099785) {
        if (input[7] < 0.0065157246) {
            if (input[5] < 0.0050007207) {
                var19 = -0.09022426;
            } else {
                var19 = 0.04188256;
            }
        } else {
            var19 = -0.11154271;
        }
    } else {
        if (input[2] < 0.017712997) {
            var19 = 0.11178409;
        } else {
            if (input[5] < 0.018029599) {
                var19 = -0.099912904;
            } else {
                if (input[2] < 0.022067789) {
                    if (input[0] < 0.025313815) {
                        if (input[4] < 0.01899938) {
                            var19 = 0.01370612;
                        } else {
                            var19 = 0.12364992;
                        }
                    } else {
                        var19 = -0.023094118;
                    }
                } else {
                    if (input[5] < 0.02351297) {
                        var19 = -0.114749946;
                    } else {
                        if (input[6] < 0.06784188) {
                            var19 = 0.017659646;
                        } else {
                            var19 = -0.08274711;
                        }
                    }
                }
            }
        }
    }
    float var20;
    if (input[5] < 0.016099785) {
        if (input[0] < 0.006686007) {
            if (input[0] < 0.006144464) {
                var20 = -0.08372224;
            } else {
                var20 = 0.035829797;
            }
        } else {
            var20 = -0.1077056;
        }
    } else {
        if (input[3] < 0.018101975) {
            if (input[4] < 0.016779995) {
                var20 = -0.01478215;
            } else {
                var20 = 0.122745074;
            }
        } else {
            if (input[7] < 0.01984781) {
                if (input[0] < 0.022253646) {
                    var20 = -0.032068256;
                } else {
                    var20 = -0.112694964;
                }
            } else {
                if (input[7] < 0.02121406) {
                    var20 = 0.12956594;
                } else {
                    if (input[7] < 0.023452606) {
                        var20 = -0.104688324;
                    } else {
                        if (input[2] < 0.026180295) {
                            var20 = 0.11323137;
                        } else {
                            var20 = -0.002015713;
                        }
                    }
                }
            }
        }
    }
    float var21;
    if (input[5] < 0.016339071) {
        if (input[4] < 0.016615598) {
            if (input[7] < 0.0065157246) {
                if (input[7] < 0.0033832924) {
                    var21 = -0.0758787;
                } else {
                    var21 = 0.027001437;
                }
            } else {
                var21 = -0.10709199;
            }
        } else {
            var21 = -0.0061596525;
        }
    } else {
        if (input[3] < 0.018101975) {
            var21 = 0.11042418;
        } else {
            if (input[7] < 0.01984781) {
                var21 = -0.09315863;
            } else {
                if (input[7] < 0.02121406) {
                    var21 = 0.12058422;
                } else {
                    if (input[7] < 0.023452606) {
                        var21 = -0.094674096;
                    } else {
                        if (input[2] < 0.028156625) {
                            var21 = 0.086897045;
                        } else {
                            var21 = -0.0042926744;
                        }
                    }
                }
            }
        }
    }
    float var22;
    if (input[0] < 0.016322872) {
        if (input[0] < 0.006686007) {
            var22 = -0.027066724;
        } else {
            var22 = -0.10095747;
        }
    } else {
        if (input[2] < 0.018603373) {
            var22 = 0.08218479;
        } else {
            if (input[4] < 0.01899938) {
                var22 = -0.09274086;
            } else {
                if (input[4] < 0.019965619) {
                    var22 = 0.09244071;
                } else {
                    if (input[5] < 0.023300424) {
                        if (input[1] < 0.024957288) {
                            var22 = -0.021899298;
                        } else {
                            var22 = -0.08519162;
                        }
                    } else {
                        if (input[0] < 0.02613918) {
                            var22 = 0.10126381;
                        } else {
                            var22 = -0.0016992475;
                        }
                    }
                }
            }
        }
    }
    float var23;
    if (input[5] < 0.016099785) {
        if (input[0] < 0.006686007) {
            var23 = -0.0233401;
        } else {
            var23 = -0.096375875;
        }
    } else {
        if (input[2] < 0.017712997) {
            var23 = 0.09638099;
        } else {
            if (input[5] < 0.018029599) {
                var23 = -0.08744782;
            } else {
                if (input[2] < 0.022269826) {
                    if (input[7] < 0.01935702) {
                        if (input[3] < 0.018101975) {
                            var23 = 0.086142175;
                        } else {
                            var23 = -0.08743806;
                        }
                    } else {
                        var23 = 0.109677695;
                    }
                } else {
                    if (input[7] < 0.023452606) {
                        if (input[2] < 0.022960607) {
                            var23 = -0.010626912;
                        } else {
                            var23 = -0.10415343;
                        }
                    } else {
                        if (input[2] < 0.026180295) {
                            var23 = 0.10004567;
                        } else {
                            var23 = -0.0025913701;
                        }
                    }
                }
            }
        }
    }
    float var24;
    if (input[4] < 0.007920916) {
        var24 = -0.09172712;
    } else {
        if (input[2] < 0.017644761) {
            if (input[4] < 0.015169855) {
                var24 = 0.0077559953;
            } else {
                var24 = 0.09031411;
            }
        } else {
            if (input[5] < 0.018029599) {
                var24 = -0.09699151;
            } else {
                if (input[2] < 0.022067789) {
                    if (input[7] < 0.019308679) {
                        if (input[0] < 0.022392573) {
                            var24 = 0.028860064;
                        } else {
                            var24 = -0.0026502702;
                        }
                    } else {
                        var24 = 0.09336148;
                    }
                } else {
                    if (input[5] < 0.02351297) {
                        var24 = -0.09487132;
                    } else {
                        if (input[2] < 0.069732934) {
                            var24 = 0.014679175;
                        } else {
                            var24 = -0.06000759;
                        }
                    }
                }
            }
        }
    }
    float var25;
    if (input[4] < 0.007920916) {
        var25 = -0.08745943;
    } else {
        if (input[2] < 0.017644761) {
            if (input[4] < 0.015169855) {
                var25 = 0.0068072;
            } else {
                var25 = 0.08665381;
            }
        } else {
            if (input[5] < 0.018029599) {
                var25 = -0.09297225;
            } else {
                if (input[3] < 0.018101975) {
                    var25 = 0.085089035;
                } else {
                    if (input[7] < 0.01984781) {
                        var25 = -0.075789966;
                    } else {
                        if (input[7] < 0.02121406) {
                            var25 = 0.10484815;
                        } else {
                            var25 = -0.004799159;
                        }
                    }
                }
            }
        }
    }
    float var26;
    if (input[4] < 0.007920916) {
        var26 = -0.082077295;
    } else {
        if (input[2] < 0.017644761) {
            if (input[3] < 0.011762483) {
                var26 = 0.014033344;
            } else {
                var26 = 0.072967894;
            }
        } else {
            if (input[5] < 0.018029599) {
                var26 = -0.08884942;
            } else {
                if (input[2] < 0.022269826) {
                    if (input[7] < 0.01935702) {
                        if (input[3] < 0.018101975) {
                            var26 = 0.07857862;
                        } else {
                            var26 = -0.07711524;
                        }
                    } else {
                        var26 = 0.09516824;
                    }
                } else {
                    if (input[5] < 0.025887791) {
                        if (input[2] < 0.025604626) {
                            var26 = -0.0043096356;
                        } else {
                            var26 = -0.10186877;
                        }
                    } else {
                        if (input[2] < 0.03549164) {
                            var26 = 0.068082236;
                        } else {
                            var26 = -0.010756778;
                        }
                    }
                }
            }
        }
    }
    float var27;
    if (input[6] < 0.006714343) {
        var27 = -0.07857596;
    } else {
        if (input[2] < 0.017644761) {
            var27 = 0.05427046;
        } else {
            if (input[5] < 0.018029599) {
                var27 = -0.08515463;
            } else {
                if (input[2] < 0.022269826) {
                    if (input[7] < 0.01935702) {
                        var27 = 0.0018594863;
                    } else {
                        var27 = 0.09158684;
                    }
                } else {
                    if (input[7] < 0.023452606) {
                        if (input[7] < 0.021652238) {
                            var27 = -0.019169765;
                        } else {
                            var27 = -0.08997405;
                        }
                    } else {
                        if (input[2] < 0.028156625) {
                            var27 = 0.073507056;
                        } else {
                            var27 = -0.004740195;
                        }
                    }
                }
            }
        }
    }
    float var28;
    if (input[5] < 0.016099785) {
        if (input[7] < 0.0065157246) {
            var28 = -0.005057493;
        } else {
            var28 = -0.08197222;
        }
    } else {
        if (input[3] < 0.018101975) {
            if (input[5] < 0.016933417) {
                var28 = 0.009579588;
            } else {
                var28 = 0.08494256;
            }
        } else {
            if (input[7] < 0.01984781) {
                var28 = -0.07678359;
            } else {
                if (input[7] < 0.02121406) {
                    var28 = 0.087795846;
                } else {
                    if (input[5] < 0.023690738) {
                        var28 = -0.08455855;
                    } else {
                        if (input[6] < 0.025169127) {
                            var28 = 0.078402735;
                        } else {
                            var28 = -0.0038637265;
                        }
                    }
                }
            }
        }
    }
    float var29;
    if (input[5] < 0.016099785) {
        if (input[0] < 0.006686007) {
            var29 = -0.0037158998;
        } else {
            var29 = -0.07884148;
        }
    } else {
        if (input[3] < 0.018101975) {
            if (input[5] < 0.016933417) {
                var29 = 0.009178826;
            } else {
                var29 = 0.08186055;
            }
        } else {
            if (input[7] < 0.01984781) {
                var29 = -0.07156171;
            } else {
                if (input[7] < 0.02121406) {
                    var29 = 0.084393725;
                } else {
                    if (input[5] < 0.023690738) {
                        var29 = -0.08098675;
                    } else {
                        if (input[6] < 0.025169127) {
                            var29 = 0.074577115;
                        } else {
                            var29 = -0.004543298;
                        }
                    }
                }
            }
        }
    }
    float var30;
    if (input[0] < 0.016322872) {
        if (input[0] < 0.0066713886) {
            var30 = -0.0053678444;
        } else {
            var30 = -0.06809703;
        }
    } else {
        if (input[3] < 0.018101975) {
            if (input[5] < 0.016933417) {
                var30 = 0.008828996;
            } else {
                var30 = 0.078899845;
            }
        } else {
            if (input[7] < 0.01935702) {
                var30 = -0.07770381;
            } else {
                if (input[2] < 0.022269826) {
                    var30 = 0.081702;
                } else {
                    if (input[5] < 0.025887791) {
                        if (input[2] < 0.025604626) {
                            var30 = -0.0024175565;
                        } else {
                            var30 = -0.09100024;
                        }
                    } else {
                        if (input[2] < 0.03549164) {
                            var30 = 0.05643714;
                        } else {
                            var30 = -0.00855271;
                        }
                    }
                }
            }
        }
    }
    float var31;
    if (input[5] < 0.016099785) {
        if (input[0] < 0.0066713886) {
            var31 = -0.005084112;
        } else {
            var31 = -0.06506252;
        }
    } else {
        if (input[3] < 0.018101975) {
            var31 = 0.057662234;
        } else {
            if (input[7] < 0.01984781) {
                var31 = -0.0650747;
            } else {
                if (input[3] < 0.021004764) {
                    var31 = 0.07254074;
                } else {
                    if (input[7] < 0.023452606) {
                        var31 = -0.08241475;
                    } else {
                        if (input[2] < 0.028156625) {
                            var31 = 0.066564485;
                        } else {
                            var31 = -0.005703946;
                        }
                    }
                }
            }
        }
    }
    float var32;
    if (input[4] < 0.016779995) {
        if (input[7] < 0.0065157246) {
            var32 = -0.00060675165;
        } else {
            var32 = -0.059373517;
        }
    } else {
        if (input[3] < 0.018101975) {
            var32 = 0.07770596;
        } else {
            if (input[7] < 0.01984781) {
                var32 = -0.058173005;
            } else {
                if (input[3] < 0.021004764) {
                    var32 = 0.06821931;
                } else {
                    if (input[5] < 0.025887791) {
                        if (input[1] < 0.029013894) {
                            var32 = -0.002937007;
                        } else {
                            var32 = -0.0829814;
                        }
                    } else {
                        if (input[2] < 0.03549164) {
                            var32 = 0.050530683;
                        } else {
                            var32 = -0.0072787604;
                        }
                    }
                }
            }
        }
    }
    float var33;
    if (input[5] < 0.016339071) {
        if (input[0] < 0.006686007) {
            var33 = -0.0002638223;
        } else {
            var33 = -0.054477494;
        }
    } else {
        if (input[3] < 0.018101975) {
            var33 = 0.077412784;
        } else {
            if (input[1] < 0.024555003) {
                var33 = -0.05347514;
            } else {
                if (input[2] < 0.025647238) {
                    if (input[0] < 0.025362888) {
                        var33 = -0.0008677874;
                    } else {
                        var33 = 0.07707196;
                    }
                } else {
                    if (input[5] < 0.02733008) {
                        var33 = -0.07797091;
                    } else {
                        if (input[0] < 0.041369926) {
                            var33 = 0.057795465;
                        } else {
                            var33 = -0.007547626;
                        }
                    }
                }
            }
        }
    }
    float var34;
    if (input[4] < 0.016779995) {
        if (input[7] < 0.0065157246) {
            var34 = -0.00026963948;
        } else {
            var34 = -0.05405196;
        }
    } else {
        if (input[3] < 0.018101975) {
            var34 = 0.073539905;
        } else {
            if (input[3] < 0.039851032) {
                if (input[0] < 0.041369926) {
                    if (input[5] < 0.02733008) {
                        if (input[2] < 0.026180295) {
                            var34 = 0.003982291;
                        } else {
                            var34 = -0.077964395;
                        }
                    } else {
                        var34 = 0.05214304;
                    }
                } else {
                    var34 = -0.08827266;
                }
            } else {
                if (input[2] < 0.050546106) {
                    var34 = 0.084762484;
                } else {
                    if (input[7] < 0.053660363) {
                        var34 = -0.056205317;
                    } else {
                        if (input[2] < 0.06257273) {
                            var34 = 0.084661685;
                        } else {
                            var34 = -0.02563084;
                        }
                    }
                }
            }
        }
    }
    float var35;
    if (input[5] < 0.016099785) {
        var35 = -0.039968163;
    } else {
        if (input[3] < 0.018101975) {
            var35 = 0.04974544;
        } else {
            if (input[7] < 0.01984781) {
                var35 = -0.051043365;
            } else {
                if (input[3] < 0.021004764) {
                    var35 = 0.06330869;
                } else {
                    if (input[5] < 0.025887791) {
                        var35 = -0.04980642;
                    } else {
                        if (input[0] < 0.038450025) {
                            var35 = 0.05842664;
                        } else {
                            var35 = -0.006033046;
                        }
                    }
                }
            }
        }
    }
    float var36;
    if (input[5] < 0.016339071) {
        if (input[0] < 0.006686007) {
            var36 = 0.00091656763;
        } else {
            var36 = -0.050694313;
        }
    } else {
        if (input[2] < 0.022269826) {
            if (input[3] < 0.019137917) {
                var36 = 0.017049871;
            } else {
                var36 = 0.056622624;
            }
        } else {
            if (input[7] < 0.023452606) {
                var36 = -0.059959788;
            } else {
                if (input[2] < 0.028156625) {
                    var36 = 0.06245417;
                } else {
                    if (input[3] < 0.039851032) {
                        if (input[2] < 0.03549164) {
                            var36 = 0.0054789297;
                        } else {
                            var36 = -0.08139424;
                        }
                    } else {
                        if (input[2] < 0.050546106) {
                            var36 = 0.08002293;
                        } else {
                            var36 = -0.008208277;
                        }
                    }
                }
            }
        }
    }
    float var37;
    if (input[4] < 0.016779995) {
        if (input[7] < 0.0065157246) {
            var37 = -0.00097128074;
        } else {
            var37 = -0.048419748;
        }
    } else {
        if (input[2] < 0.022269826) {
            if (input[7] < 0.017918782) {
                var37 = 0.05019623;
            } else {
                var37 = 0.015418396;
            }
        } else {
            if (input[7] < 0.023452606) {
                var37 = -0.054461118;
            } else {
                if (input[2] < 0.028156625) {
                    var37 = 0.05943862;
                } else {
                    if (input[6] < 0.033151343) {
                        var37 = -0.04947092;
                    } else {
                        if (input[2] < 0.06257273) {
                            var37 = 0.031170359;
                        } else {
                            var37 = -0.021496724;
                        }
                    }
                }
            }
        }
    }
    float var38;
    if (input[5] < 0.016339071) {
        if (input[0] < 0.0075581283) {
            var38 = -0.0031816703;
        } else {
            var38 = -0.044686206;
        }
    } else {
        if (input[2] < 0.022269826) {
            var38 = 0.037787158;
        } else {
            if (input[7] < 0.023452606) {
                var38 = -0.0501227;
            } else {
                if (input[2] < 0.028156625) {
                    var38 = 0.056369547;
                } else {
                    if (input[3] < 0.039851032) {
                        if (input[2] < 0.03549164) {
                            var38 = 0.0078032347;
                        } else {
                            var38 = -0.0779818;
                        }
                    } else {
                        if (input[2] < 0.06257273) {
                            var38 = 0.040357407;
                        } else {
                            var38 = -0.018435229;
                        }
                    }
                }
            }
        }
    }
    float var39;
    if (input[5] < 0.015570342) {
        if (input[3] < 0.007839951) {
            if (input[0] < 0.00000019670617) {
                if (input[3] < -0.005310266) {
                    var39 = -0.16015989;
                } else {
                    var39 = 0.49396327;
                }
            } else {
                if (input[7] < 0.0061325664) {
                    var39 = -0.2051739;
                } else {
                    if (input[5] < 0.005933243) {
                        var39 = 0.44533327;
                    } else {
                        var39 = -0.18917914;
                    }
                }
            }
        } else {
            if (input[0] < 0.018414697) {
                if (input[7] < 0.011005674) {
                    if (input[0] < 0.006886598) {
                        var39 = 0.47550875;
                    } else {
                        var39 = -0.17608967;
                    }
                } else {
                    if (input[5] < 0.014839329) {
                        var39 = 0.5081896;
                    } else {
                        var39 = 0.15529385;
                    }
                }
            } else {
                var39 = -0.17378502;
            }
        }
    } else {
        var39 = -0.20818757;
    }
    float var40;
    if (input[5] < 0.015570342) {
        if (input[7] < 0.0061325664) {
            if (input[0] < 0.00000019670617) {
                if (input[3] < -0.005310266) {
                    var40 = -0.14458326;
                } else {
                    var40 = 0.3150047;
                }
            } else {
                var40 = -0.1869682;
            }
        } else {
            if (input[0] < 0.018414697) {
                if (input[7] < 0.011005674) {
                    if (input[0] < 0.011448954) {
                        if (input[5] < 0.005741552) {
                            var40 = 0.3192486;
                        } else {
                            var40 = 0.14109938;
                        }
                    } else {
                        var40 = -0.17020188;
                    }
                } else {
                    if (input[6] < 0.016277898) {
                        var40 = 0.32729703;
                    } else {
                        var40 = 0.09245411;
                    }
                }
            } else {
                var40 = -0.16726184;
            }
        }
    } else {
        var40 = -0.19224489;
    }
    float var41;
    if (input[5] < 0.015570342) {
        if (input[7] < 0.0061325664) {
            if (input[0] < 0.00000019670617) {
                if (input[3] < -0.005310266) {
                    var41 = -0.13127159;
                } else {
                    var41 = 0.24498658;
                }
            } else {
                var41 = -0.17439409;
            }
        } else {
            if (input[0] < 0.018414697) {
                if (input[7] < 0.011005674) {
                    if (input[0] < 0.011448954) {
                        if (input[5] < 0.005741552) {
                            var41 = 0.26004496;
                        } else {
                            var41 = 0.103753276;
                        }
                    } else {
                        var41 = -0.16194525;
                    }
                } else {
                    if (input[6] < 0.016277898) {
                        var41 = 0.25641066;
                    } else {
                        var41 = 0.0693456;
                    }
                }
            } else {
                var41 = -0.15256265;
            }
        }
    } else {
        var41 = -0.18091123;
    }
    float var42;
    if (input[5] < 0.015570342) {
        if (input[3] < 0.007839951) {
            if (input[0] < 0.00000019670617) {
                if (input[3] < -0.005310266) {
                    var42 = -0.119624965;
                } else {
                    var42 = 0.20774902;
                }
            } else {
                if (input[7] < 0.0061325664) {
                    var42 = -0.16518195;
                } else {
                    if (input[5] < 0.005933243) {
                        if (input[7] < 0.0070544505) {
                            var42 = 0.21712744;
                        } else {
                            var42 = 0.044959735;
                        }
                    } else {
                        var42 = -0.16120654;
                    }
                }
            }
        } else {
            if (input[0] < 0.018414697) {
                if (input[7] < 0.011005674) {
                    if (input[0] < 0.006886598) {
                        var42 = 0.21395211;
                    } else {
                        var42 = -0.13549335;
                    }
                } else {
                    if (input[5] < 0.014839329) {
                        var42 = 0.22145139;
                    } else {
                        var42 = 0.0512585;
                    }
                }
            } else {
                var42 = -0.12998413;
            }
        }
    } else {
        var42 = -0.17337105;
    }
    float var43;
    if (input[5] < 0.015570342) {
        if (input[7] < 0.0065157246) {
            if (input[0] < 0.00000019670617) {
                if (input[3] < -0.005310266) {
                    var43 = -0.10920568;
                } else {
                    var43 = 0.18471505;
                }
            } else {
                if (input[7] < 0.0060183904) {
                    var43 = -0.15764163;
                } else {
                    var43 = -0.030230394;
                }
            }
        } else {
            if (input[0] < 0.018414697) {
                if (input[7] < 0.011005674) {
                    if (input[0] < 0.011448954) {
                        if (input[5] < 0.005741552) {
                            var43 = 0.19681096;
                        } else {
                            var43 = 0.072814785;
                        }
                    } else {
                        var43 = -0.14311647;
                    }
                } else {
                    if (input[6] < 0.016277898) {
                        var43 = 0.19833708;
                    } else {
                        var43 = 0.030860553;
                    }
                }
            } else {
                var43 = -0.132405;
            }
        }
    } else {
        var43 = -0.16747427;
    }
    float var44;
    if (input[5] < 0.015570342) {
        if (input[3] < 0.007839951) {
            if (input[0] < 0.00000019670617) {
                if (input[3] < -0.005310266) {
                    var44 = -0.09974598;
                } else {
                    var44 = 0.16888385;
                }
            } else {
                if (input[7] < 0.0061325664) {
                    var44 = -0.15216246;
                } else {
                    if (input[5] < 0.005933243) {
                        if (input[7] < 0.0070544505) {
                            var44 = 0.17800322;
                        } else {
                            var44 = 0.024904756;
                        }
                    } else {
                        var44 = -0.14724319;
                    }
                }
            }
        } else {
            if (input[0] < 0.018414697) {
                if (input[7] < 0.011005674) {
                    if (input[0] < 0.006886598) {
                        var44 = 0.17140356;
                    } else {
                        var44 = -0.1173792;
                    }
                } else {
                    if (input[5] < 0.014839329) {
                        var44 = 0.18346082;
                    } else {
                        var44 = 0.02337695;
                    }
                }
            } else {
                var44 = -0.110462375;
            }
        }
    } else {
        var44 = -0.16335714;
    }
    float var45;
    if (input[5] < 0.015570342) {
        if (input[3] < 0.007839951) {
            if (input[0] < 0.00000019670617) {
                if (input[3] < -0.005310266) {
                    var45 = -0.091106094;
                } else {
                    var45 = 0.15697555;
                }
            } else {
                if (input[7] < 0.0061325664) {
                    var45 = -0.14678526;
                } else {
                    if (input[5] < 0.005933243) {
                        if (input[3] < 0.006964481) {
                            var45 = 0.16783252;
                        } else {
                            var45 = 0.01668138;
                        }
                    } else {
                        var45 = -0.14120285;
                    }
                }
            }
        } else {
            if (input[0] < 0.018414697) {
                if (input[7] < 0.011005674) {
                    if (input[0] < 0.006886598) {
                        var45 = 0.15661691;
                    } else {
                        var45 = -0.11244846;
                    }
                } else {
                    if (input[6] < 0.016277898) {
                        var45 = 0.17438087;
                    } else {
                        var45 = 0.014329443;
                    }
                }
            } else {
                var45 = -0.1056875;
            }
        }
    } else {
        var45 = -0.15966526;
    }
    float var46;
    if (input[5] < 0.015570342) {
        if (input[3] < 0.007839951) {
            if (input[0] < 0.00000019670617) {
                if (input[3] < -0.005310266) {
                    var46 = -0.08322088;
                } else {
                    var46 = 0.1472387;
                }
            } else {
                if (input[7] < 0.0061325664) {
                    var46 = -0.14165165;
                } else {
                    if (input[5] < 0.005933243) {
                        if (input[7] < 0.0070544505) {
                            var46 = 0.15477943;
                        } else {
                            var46 = 0.0062516103;
                        }
                    } else {
                        var46 = -0.13533019;
                    }
                }
            }
        } else {
            if (input[0] < 0.018414697) {
                if (input[7] < 0.011005674) {
                    if (input[0] < 0.006886598) {
                        var46 = 0.14717448;
                    } else {
                        var46 = -0.1077823;
                    }
                } else {
                    if (input[5] < 0.014839329) {
                        var46 = 0.1675926;
                    } else {
                        var46 = 0.007871389;
                    }
                }
            } else {
                var46 = -0.10117955;
            }
        }
    } else {
        var46 = -0.15672188;
    }
    float var47;
    if (input[5] < 0.015570342) {
        if (input[3] < 0.007839951) {
            if (input[0] < 0.00000019670617) {
                if (input[1] < -0.0059352354) {
                    var47 = -0.057864513;
                } else {
                    var47 = 0.13808794;
                }
            } else {
                if (input[7] < 0.0061325664) {
                    var47 = -0.13633668;
                } else {
                    if (input[5] < 0.005933243) {
                        if (input[7] < 0.0070544505) {
                            var47 = 0.14373136;
                        } else {
                            var47 = -0.0009069595;
                        }
                    } else {
                        var47 = -0.12543835;
                    }
                }
            }
        } else {
            if (input[0] < 0.018414697) {
                if (input[6] < 0.016277898) {
                    if (input[7] < 0.011005674) {
                        if (input[0] < 0.006886598) {
                            var47 = 0.13637878;
                        } else {
                            var47 = -0.09787295;
                        }
                    } else {
                        var47 = 0.16041201;
                    }
                } else {
                    var47 = 0.0015168312;
                }
            } else {
                var47 = -0.09225241;
            }
        }
    } else {
        var47 = -0.15442804;
    }
    float var48;
    if (input[5] < 0.015570342) {
        if (input[3] < 0.007839951) {
            if (input[0] < 0.00000019670617) {
                if (input[1] < -0.0059352354) {
                    var48 = -0.05391393;
                } else {
                    var48 = 0.1330085;
                }
            } else {
                if (input[7] < 0.0061325664) {
                    var48 = -0.13333748;
                } else {
                    if (input[5] < 0.005933243) {
                        if (input[3] < 0.006964481) {
                            var48 = 0.13837822;
                        } else {
                            var48 = -0.0048080883;
                        }
                    } else {
                        var48 = -0.1204504;
                    }
                }
            }
        } else {
            if (input[0] < 0.018414697) {
                if (input[5] < 0.014839329) {
                    if (input[7] < 0.011005674) {
                        if (input[0] < 0.006886598) {
                            var48 = 0.13048893;
                        } else {
                            var48 = -0.0931224;
                        }
                    } else {
                        var48 = 0.15591185;
                    }
                } else {
                    var48 = -0.0018185956;
                }
            } else {
                var48 = -0.087672465;
            }
        }
    } else {
        var48 = -0.15189564;
    }
    float var49;
    if (input[5] < 0.015570342) {
        if (input[3] < 0.012161912) {
            if (input[0] < 0.011448954) {
                if (input[7] < 0.0065157246) {
                    if (input[0] < 0.00000019670617) {
                        if (input[1] < -0.0059352354) {
                            var49 = -0.054302577;
                        } else {
                            var49 = 0.1265355;
                        }
                    } else {
                        var49 = -0.11327673;
                    }
                } else {
                    if (input[4] < 0.005630306) {
                        if (input[1] < 0.007998831) {
                            var49 = 0.12214777;
                        } else {
                            var49 = -0.11698381;
                        }
                    } else {
                        var49 = 0.14087532;
                    }
                }
            } else {
                var49 = -0.12605251;
            }
        } else {
            if (input[6] < 0.016277898) {
                var49 = 0.14353457;
            } else {
                var49 = -0.006677797;
            }
        }
    } else {
        var49 = -0.14985366;
    }
    float var50;
    if (input[5] < 0.015570342) {
        if (input[3] < 0.012161912) {
            if (input[0] < 0.011448954) {
                if (input[7] < 0.0061325664) {
                    if (input[0] < 0.00000019670617) {
                        if (input[5] < -0.0050805095) {
                            var50 = -0.037185848;
                        } else {
                            var50 = 0.12224714;
                        }
                    } else {
                        var50 = -0.11828932;
                    }
                } else {
                    if (input[4] < 0.005630306) {
                        if (input[1] < 0.007998831) {
                            var50 = 0.11935905;
                        } else {
                            var50 = -0.11240621;
                        }
                    } else {
                        var50 = 0.12969719;
                    }
                }
            } else {
                var50 = -0.12240281;
            }
        } else {
            if (input[5] < 0.014839329) {
                var50 = 0.1367399;
            } else {
                var50 = -0.011477785;
            }
        }
    } else {
        var50 = -0.14788467;
    }
    float var51;
    if (input[5] < 0.015570342) {
        if (input[7] < 0.0137086585) {
            if (input[0] < 0.011448954) {
                if (input[3] < 0.00760994) {
                    if (input[6] < 0.0059966506) {
                        if (input[7] < 0.004083579) {
                            var51 = -0.004571163;
                        } else {
                            var51 = 0.101009324;
                        }
                    } else {
                        var51 = -0.10934572;
                    }
                } else {
                    var51 = 0.12322304;
                }
            } else {
                var51 = -0.12099904;
            }
        } else {
            if (input[6] < 0.016277898) {
                var51 = 0.14073576;
            } else {
                var51 = -0.015139417;
            }
        }
    } else {
        var51 = -0.14579283;
    }
    float var52;
    if (input[5] < 0.015570342) {
        if (input[2] < 0.017985532) {
            if (input[0] < 0.014057905) {
                if (input[7] < 0.011005674) {
                    if (input[0] < 0.011448954) {
                        if (input[7] < -0.0027846645) {
                            var52 = -0.06784547;
                        } else {
                            var52 = 0.04727598;
                        }
                    } else {
                        var52 = -0.09096679;
                    }
                } else {
                    var52 = 0.12161483;
                }
            } else {
                var52 = -0.13220042;
            }
        } else {
            var52 = 0.13446738;
        }
    } else {
        var52 = -0.14357737;
    }
    float var53;
    if (input[5] < 0.015570342) {
        if (input[2] < 0.017985532) {
            if (input[0] < 0.014057905) {
                if (input[7] < 0.00942441) {
                    if (input[5] < 0.006466187) {
                        if (input[7] < 0.0058814576) {
                            var53 = -0.008444493;
                        } else {
                            var53 = 0.0770023;
                        }
                    } else {
                        var53 = -0.09930938;
                    }
                } else {
                    if (input[7] < 0.011005674) {
                        var53 = 0.036696274;
                    } else {
                        var53 = 0.11753555;
                    }
                }
            } else {
                var53 = -0.12661214;
            }
        } else {
            var53 = 0.12910533;
        }
    } else {
        var53 = -0.14117153;
    }
    float var54;
    if (input[5] < 0.015570342) {
        if (input[2] < 0.017985532) {
            if (input[0] < 0.014057905) {
                if (input[7] < 0.00942441) {
                    if (input[0] < 0.0012866945) {
                        if (input[3] < -0.0022977383) {
                            var54 = -0.031015074;
                        } else {
                            var54 = 0.11285212;
                        }
                    } else {
                        if (input[7] < 0.0061325664) {
                            var54 = -0.11049675;
                        } else {
                            var54 = 0.020958155;
                        }
                    }
                } else {
                    if (input[7] < 0.011005674) {
                        var54 = 0.03436493;
                    } else {
                        var54 = 0.113549896;
                    }
                }
            } else {
                var54 = -0.12104211;
            }
        } else {
            var54 = 0.12409787;
        }
    } else {
        var54 = -0.13876058;
    }
    float var55;
    if (input[5] < 0.015570342) {
        if (input[2] < 0.017985532) {
            if (input[0] < 0.014057905) {
                if (input[7] < 0.00942441) {
                    if (input[5] < 0.005741552) {
                        if (input[7] < 0.0039626798) {
                            var55 = -0.01037306;
                        } else {
                            var55 = 0.1074289;
                        }
                    } else {
                        if (input[4] < 0.0057189628) {
                            var55 = -0.108788155;
                        } else {
                            var55 = -0.002262681;
                        }
                    }
                } else {
                    if (input[2] < 0.012528132) {
                        var55 = 0.10747729;
                    } else {
                        var55 = 0.02669784;
                    }
                }
            } else {
                var55 = -0.115578435;
            }
        } else {
            var55 = 0.11936272;
        }
    } else {
        var55 = -0.13605486;
    }
    float var56;
    if (input[5] < 0.015570342) {
        if (input[2] < 0.017985532) {
            if (input[0] < 0.014057905) {
                if (input[7] < 0.011005674) {
                    if (input[5] < 0.005741552) {
                        if (input[7] < 0.004083579) {
                            var56 = -0.006043884;
                        } else {
                            var56 = 0.10538675;
                        }
                    } else {
                        if (input[0] < 0.006886598) {
                            var56 = 0.036817167;
                        } else {
                            var56 = -0.084692426;
                        }
                    }
                } else {
                    var56 = 0.10562198;
                }
            } else {
                var56 = -0.110048585;
            }
        } else {
            var56 = 0.11485705;
        }
    } else {
        var56 = -0.13332184;
    }
    float var57;
    if (input[6] < 0.016346063) {
        if (input[3] < 0.016654711) {
            if (input[0] < 0.014057905) {
                if (input[7] < 0.011005674) {
                    if (input[0] < 0.003421552) {
                        if (input[3] < -0.0022977383) {
                            var57 = -0.029042149;
                        } else {
                            var57 = 0.10022104;
                        }
                    } else {
                        if (input[7] < 0.0061325664) {
                            var57 = -0.0990311;
                        } else {
                            var57 = 0.0143874725;
                        }
                    }
                } else {
                    var57 = 0.10199662;
                }
            } else {
                var57 = -0.09635951;
            }
        } else {
            var57 = 0.11053805;
        }
    } else {
        var57 = -0.1351979;
    }
    float var58;
    if (input[6] < 0.016346063) {
        if (input[3] < 0.016654711) {
            if (input[0] < 0.014057905) {
                if (input[7] < 0.011005674) {
                    if (input[5] < 0.005933243) {
                        if (input[7] < 0.0039626798) {
                            var58 = -0.0073881187;
                        } else {
                            var58 = 0.07611887;
                        }
                    } else {
                        if (input[0] < 0.006886598) {
                            var58 = 0.03651114;
                        } else {
                            var58 = -0.1009886;
                        }
                    }
                } else {
                    var58 = 0.09822899;
                }
            } else {
                var58 = -0.09241533;
            }
        } else {
            var58 = 0.10635806;
        }
    } else {
        var58 = -0.13160463;
    }
    float var59;
    if (input[5] < 0.015570342) {
        if (input[7] < 0.0137086585) {
            if (input[0] < 0.011448954) {
                if (input[4] < 0.005630306) {
                    if (input[5] < 0.005096001) {
                        if (input[7] < 0.0039626798) {
                            var59 = 0.003406455;
                        } else {
                            var59 = 0.08810748;
                        }
                    } else {
                        var59 = -0.10085949;
                    }
                } else {
                    var59 = 0.0852955;
                }
            } else {
                var59 = -0.094025485;
            }
        } else {
            if (input[5] < 0.014724678) {
                var59 = 0.10721944;
            } else {
                var59 = 0.0050512087;
            }
        }
    } else {
        var59 = -0.123735234;
    }
    float var60;
    if (input[6] < 0.016346063) {
        if (input[3] < 0.016654711) {
            if (input[0] < 0.014057905) {
                if (input[7] < 0.00942441) {
                    if (input[0] < 0.00000019670617) {
                        if (input[3] < -0.0021779318) {
                            var60 = 0.000042668074;
                        } else {
                            var60 = 0.089808784;
                        }
                    } else {
                        if (input[7] < 0.0061325664) {
                            var60 = -0.096072294;
                        } else {
                            var60 = 0.013328119;
                        }
                    }
                } else {
                    var60 = 0.07966109;
                }
            } else {
                var60 = -0.08271982;
            }
        } else {
            var60 = 0.09805683;
        }
    } else {
        var60 = -0.124615185;
    }
    float var61;
    if (input[6] < 0.016346063) {
        if (input[7] < 0.014129772) {
            if (input[0] < 0.011448954) {
                if (input[1] < 0.008990749) {
                    if (input[5] < 0.005096001) {
                        if (input[7] < 0.0039626798) {
                            var61 = 0.0042443876;
                        } else {
                            var61 = 0.089491874;
                        }
                    } else {
                        var61 = -0.07375578;
                    }
                } else {
                    var61 = 0.092002645;
                }
            } else {
                var61 = -0.09034048;
            }
        } else {
            if (input[5] < 0.014724678) {
                var61 = 0.10043917;
            } else {
                var61 = 0.007685618;
            }
        }
    } else {
        var61 = -0.12062085;
    }
    float var62;
    if (input[5] < 0.015570342) {
        if (input[3] < 0.007839951) {
            if (input[6] < 0.0059966506) {
                if (input[7] < 0.0058814576) {
                    if (input[0] < 0.00000019670617) {
                        if (input[3] < -0.0021779318) {
                            var62 = 0.00075258163;
                        } else {
                            var62 = 0.086077735;
                        }
                    } else {
                        var62 = -0.08899939;
                    }
                } else {
                    var62 = 0.066029504;
                }
            } else {
                var62 = -0.092781916;
            }
        } else {
            if (input[2] < 0.017985532) {
                if (input[2] < 0.012528132) {
                    var62 = 0.07161318;
                } else {
                    var62 = -0.03935463;
                }
            } else {
                var62 = 0.09212299;
            }
        }
    } else {
        var62 = -0.11356202;
    }
    float var63;
    if (input[6] < 0.016346063) {
        if (input[7] < 0.014129772) {
            if (input[0] < 0.011448954) {
                if (input[4] < 0.005630306) {
                    if (input[5] < 0.005096001) {
                        if (input[7] < 0.004059394) {
                            var63 = 0.005091316;
                        } else {
                            var63 = 0.07878361;
                        }
                    } else {
                        var63 = -0.08922796;
                    }
                } else {
                    var63 = 0.07579866;
                }
            } else {
                var63 = -0.08567339;
            }
        } else {
            if (input[5] < 0.0146182515) {
                var63 = 0.091716394;
            } else {
                var63 = 0.017979452;
            }
        }
    } else {
        var63 = -0.11303333;
    }
    float var64;
    if (input[5] < 0.015570342) {
        if (input[3] < 0.011993676) {
            if (input[0] < 0.011448954) {
                if (input[4] < 0.005630306) {
                    if (input[5] < 0.005096001) {
                        if (input[7] < 0.0039626798) {
                            var64 = 0.004889925;
                        } else {
                            var64 = 0.074963585;
                        }
                    } else {
                        var64 = -0.08449237;
                    }
                } else {
                    var64 = 0.06479716;
                }
            } else {
                var64 = -0.07772154;
            }
        } else {
            if (input[4] < 0.015449092) {
                var64 = 0.07998923;
            } else {
                var64 = 0.019143585;
            }
        }
    } else {
        var64 = -0.10612533;
    }
    float var65;
    if (input[6] < 0.016346063) {
        if (input[7] < 0.014129772) {
            if (input[0] < 0.011448954) {
                if (input[1] < 0.008990749) {
                    if (input[5] < 0.005096001) {
                        if (input[7] < 0.004059394) {
                            var65 = 0.004858244;
                        } else {
                            var65 = 0.07845837;
                        }
                    } else {
                        var65 = -0.06353994;
                    }
                } else {
                    var65 = 0.07964642;
                }
            } else {
                var65 = -0.078851394;
            }
        } else {
            if (input[5] < 0.0146182515) {
                var65 = 0.08354499;
            } else {
                var65 = 0.014703364;
            }
        }
    } else {
        var65 = -0.10561584;
    }
    float var66;
    if (input[5] < 0.015570342) {
        if (input[3] < 0.007839951) {
            if (input[5] < 0.005741552) {
                if (input[7] < 0.004059394) {
                    if (input[0] < -0.001978888) {
                        var66 = 0.03808792;
                    } else {
                        var66 = -0.05123775;
                    }
                } else {
                    var66 = 0.06913627;
                }
            } else {
                var66 = -0.06602226;
            }
        } else {
            if (input[2] < 0.017985532) {
                if (input[1] < 0.014190583) {
                    var66 = 0.05766164;
                } else {
                    var66 = -0.024202706;
                }
            } else {
                var66 = 0.078301765;
            }
        }
    } else {
        var66 = -0.09885658;
    }
    float var67;
    if (input[6] < 0.016346063) {
        if (input[7] < 0.014129772) {
            if (input[0] < 0.011177916) {
                if (input[4] < 0.005630306) {
                    if (input[0] < 0.00000019670617) {
                        var67 = 0.046673983;
                    } else {
                        if (input[5] < 0.004959877) {
                            var67 = -0.010173133;
                        } else {
                            var67 = -0.057440627;
                        }
                    }
                } else {
                    var67 = 0.058671232;
                }
            } else {
                var67 = -0.067222536;
            }
        } else {
            var67 = 0.06378544;
        }
    } else {
        var67 = -0.097346745;
    }
    float var68;
    if (input[5] < 0.015570342) {
        if (input[3] < 0.011993676) {
            if (input[5] < 0.005741552) {
                if (input[7] < 0.004094871) {
                    if (input[0] < -0.001978888) {
                        var68 = 0.032611717;
                    } else {
                        var68 = -0.049366605;
                    }
                } else {
                    var68 = 0.07751507;
                }
            } else {
                if (input[7] < 0.008044201) {
                    var68 = -0.06004322;
                } else {
                    var68 = -0.00020553;
                }
            }
        } else {
            var68 = 0.062387392;
        }
    } else {
        var68 = -0.0928054;
    }
    float var69;
    if (input[5] < 0.014839329) {
        if (input[7] < 0.0137086585) {
            if (input[5] < 0.006466187) {
                if (input[7] < 0.0058814576) {
                    if (input[0] < -0.001978888) {
                        var69 = 0.032781087;
                    } else {
                        var69 = -0.050014164;
                    }
                } else {
                    var69 = 0.054190673;
                }
            } else {
                var69 = -0.050802745;
            }
        } else {
            var69 = 0.08369305;
        }
    } else {
        var69 = -0.080072165;
    }
    float var70;
    if (input[5] < 0.015570342) {
        if (input[7] < 0.00942441) {
            if (input[5] < 0.005741552) {
                if (input[3] < -0.0022599923) {
                    var70 = -0.02370494;
                } else {
                    if (input[0] < 0.0028157288) {
                        var70 = 0.072142266;
                    } else {
                        var70 = 0.008126994;
                    }
                }
            } else {
                var70 = -0.051135737;
            }
        } else {
            var70 = 0.051645193;
        }
    } else {
        var70 = -0.08538142;
    }
    float var71;
    if (input[6] < 0.016346063) {
        if (input[7] < 0.014129772) {
            if (input[5] < 0.006466187) {
                if (input[7] < 0.0058814576) {
                    if (input[0] < -0.0025217333) {
                        var71 = 0.023228986;
                    } else {
                        var71 = -0.038276523;
                    }
                } else {
                    var71 = 0.05002214;
                }
            } else {
                var71 = -0.04911307;
            }
        } else {
            var71 = 0.057113532;
        }
    } else {
        var71 = -0.084755115;
    }
    float var72;
    if (input[5] < 0.014839329) {
        if (input[3] < 0.011993676) {
            if (input[5] < 0.005741552) {
                if (input[3] < -0.0022599923) {
                    var72 = -0.022706402;
                } else {
                    if (input[0] < 0.0035786247) {
                        var72 = 0.07048974;
                    } else {
                        var72 = 0.008066792;
                    }
                }
            } else {
                if (input[1] < 0.008990749) {
                    var72 = -0.053625796;
                } else {
                    var72 = -0.003034266;
                }
            }
        } else {
            var72 = 0.07205763;
        }
    } else {
        var72 = -0.07139043;
    }
    float var73;
    if (input[5] < 0.015570342) {
        if (input[3] < 0.007839951) {
            if (input[5] < 0.005741552) {
                if (input[3] < -0.0022599923) {
                    var73 = -0.01856418;
                } else {
                    var73 = 0.03996802;
                }
            } else {
                var73 = -0.051752783;
            }
        } else {
            if (input[7] < 0.0137086585) {
                var73 = 0.014380755;
            } else {
                var73 = 0.051491678;
            }
        }
    } else {
        var73 = -0.07549001;
    }
    float var74;
    if (input[5] < 0.014839329) {
        if (input[7] < 0.011005674) {
            if (input[5] < 0.006466187) {
                if (input[7] < 0.0058814576) {
                    if (input[0] < -0.0025217333) {
                        var74 = 0.024611283;
                    } else {
                        var74 = -0.038587905;
                    }
                } else {
                    var74 = 0.045016542;
                }
            } else {
                var74 = -0.04871794;
            }
        } else {
            var74 = 0.060170624;
        }
    } else {
        var74 = -0.0654842;
    }
    float var75;
    if (input[5] < 0.014839329) {
        if (input[3] < 0.007839951) {
            if (input[0] < 0.00000019670617) {
                var75 = 0.03595548;
            } else {
                if (input[0] < 0.008091583) {
                    var75 = -0.058569606;
                } else {
                    var75 = 0.010449366;
                }
            }
        } else {
            var75 = 0.04854998;
        }
    } else {
        var75 = -0.061238155;
    }
    float var76;
    if (input[5] < 0.014839329) {
        if (input[7] < 0.00942441) {
            if (input[5] < 0.005741552) {
                if (input[3] < -0.0022599923) {
                    var76 = -0.018760743;
                } else {
                    var76 = 0.04174257;
                }
            } else {
                var76 = -0.04079849;
            }
        } else {
            var76 = 0.04778582;
        }
    } else {
        var76 = -0.056678485;
    }
    float var77;
    if (input[2] < 0.06335619) {
        if (input[7] < 0.0058814576) {
            if (input[0] < 0.00000019670617) {
                if (input[3] < -0.005310266) {
                    var77 = 0.27781686;
                } else {
                    var77 = -0.24876687;
                }
            } else {
                var77 = 0.34246853;
            }
        } else {
            if (input[0] < 0.011448954) {
                if (input[4] < 0.005630306) {
                    if (input[1] < 0.007998831) {
                        var77 = -0.2334976;
                    } else {
                        var77 = 0.27781686;
                    }
                } else {
                    var77 = -0.2544671;
                }
            } else {
                if (input[3] < 0.012161912) {
                    var77 = 0.331322;
                } else {
                    if (input[3] < 0.018101975) {
                        if (input[2] < 0.019424234) {
                            var77 = -0.1816296;
                        } else {
                            var77 = 0.106405266;
                        }
                    } else {
                        if (input[7] < 0.01935702) {
                            var77 = 0.3241615;
                        } else {
                            var77 = 0.057524893;
                        }
                    }
                }
            }
        }
    } else {
        if (input[2] < 0.06992401) {
            if (input[1] < 0.07788305) {
                var77 = 0.3249767;
            } else {
                var77 = -0.2038616;
            }
        } else {
            var77 = 0.34116766;
        }
    }
    float var78;
    if (input[2] < 0.03549164) {
        if (input[7] < 0.0058814576) {
            if (input[0] < 0.00000019670617) {
                if (input[3] < -0.005310266) {
                    var78 = 0.21979721;
                } else {
                    var78 = -0.20857836;
                }
            } else {
                var78 = 0.26003888;
            }
        } else {
            if (input[6] < 0.028343298) {
                if (input[0] < 0.018666286) {
                    if (input[0] < 0.006886598) {
                        var78 = -0.21348725;
                    } else {
                        if (input[3] < 0.011993676) {
                            var78 = 0.07591262;
                        } else {
                            var78 = -0.12870565;
                        }
                    }
                } else {
                    if (input[2] < 0.026180295) {
                        if (input[4] < 0.018000972) {
                            var78 = 0.26224455;
                        } else {
                            var78 = -0.030090453;
                        }
                    } else {
                        if (input[5] < 0.02733008) {
                            var78 = 0.29218405;
                        } else {
                            var78 = 0.034363523;
                        }
                    }
                }
            } else {
                var78 = -0.23590706;
            }
        }
    } else {
        if (input[2] < 0.06992401) {
            if (input[3] < 0.039851032) {
                var78 = 0.29165697;
            } else {
                if (input[2] < 0.050752595) {
                    if (input[2] < 0.050546106) {
                        var78 = -0.21846287;
                    } else {
                        var78 = -0.039881483;
                    }
                } else {
                    if (input[1] < 0.07788305) {
                        if (input[2] < 0.06335619) {
                            var78 = 0.011918086;
                        } else {
                            var78 = 0.24936102;
                        }
                    } else {
                        var78 = -0.17555803;
                    }
                }
            }
        } else {
            var78 = 0.25921166;
        }
    }
    float var79;
    if (input[2] < 0.03549164) {
        if (input[6] < 0.028343298) {
            if (input[7] < 0.0058814576) {
                if (input[0] < 0.00000019670617) {
                    if (input[3] < -0.005310266) {
                        var79 = 0.18499222;
                    } else {
                        var79 = -0.18505538;
                    }
                } else {
                    var79 = 0.21885702;
                }
            } else {
                if (input[0] < 0.011448954) {
                    if (input[4] < 0.005630306) {
                        if (input[1] < 0.007998831) {
                            var79 = -0.18889724;
                        } else {
                            var79 = 0.21573308;
                        }
                    } else {
                        var79 = -0.19471401;
                    }
                } else {
                    if (input[3] < 0.012161912) {
                        var79 = 0.22223315;
                    } else {
                        if (input[2] < 0.025647238) {
                            var79 = -0.03540519;
                        } else {
                            var79 = 0.19805783;
                        }
                    }
                }
            }
        } else {
            var79 = -0.20727435;
        }
    } else {
        if (input[2] < 0.06992401) {
            if (input[3] < 0.039851032) {
                var79 = 0.23848502;
            } else {
                if (input[2] < 0.050752595) {
                    if (input[2] < 0.050546106) {
                        var79 = -0.19284166;
                    } else {
                        var79 = -0.030532448;
                    }
                } else {
                    if (input[7] < 0.053660363) {
                        var79 = 0.298569;
                    } else {
                        if (input[2] < 0.06257273) {
                            var79 = -0.2294279;
                        } else {
                            var79 = 0.1314239;
                        }
                    }
                }
            }
        } else {
            var79 = 0.21806403;
        }
    }
    float var80;
    if (input[2] < 0.03549164) {
        if (input[6] < 0.028343298) {
            if (input[7] < 0.0058814576) {
                if (input[0] < 0.00000019670617) {
                    if (input[3] < -0.005310266) {
                        var80 = 0.16143562;
                    } else {
                        var80 = -0.16903362;
                    }
                } else {
                    var80 = 0.1947233;
                }
            } else {
                if (input[0] < 0.018666286) {
                    if (input[0] < 0.006886598) {
                        var80 = -0.17627537;
                    } else {
                        if (input[3] < 0.011993676) {
                            var80 = 0.060617004;
                        } else {
                            var80 = -0.093200855;
                        }
                    }
                } else {
                    if (input[2] < 0.026180295) {
                        if (input[7] < 0.01984781) {
                            var80 = 0.1297437;
                        } else {
                            var80 = -0.10263818;
                        }
                    } else {
                        if (input[5] < 0.02733008) {
                            var80 = 0.21778119;
                        } else {
                            var80 = 0.0025093486;
                        }
                    }
                }
            }
        } else {
            var80 = -0.19206236;
        }
    } else {
        if (input[3] < 0.039851032) {
            var80 = 0.21621862;
        } else {
            if (input[2] < 0.06335619) {
                if (input[7] < 0.053660363) {
                    if (input[2] < 0.050752595) {
                        if (input[2] < 0.050546106) {
                            var80 = -0.17742692;
                        } else {
                            var80 = -0.025931437;
                        }
                    } else {
                        var80 = 0.25829217;
                    }
                } else {
                    if (input[6] < 0.052982736) {
                        var80 = -0.023966078;
                    } else {
                        var80 = -0.20679869;
                    }
                }
            } else {
                if (input[2] < 0.06992401) {
                    if (input[1] < 0.07788305) {
                        var80 = 0.18929182;
                    } else {
                        var80 = -0.1547808;
                    }
                } else {
                    var80 = 0.1938433;
                }
            }
        }
    }
    float var81;
    if (input[2] < 0.06335619) {
        if (input[7] < 0.0058814576) {
            if (input[0] < 0.00000019670617) {
                if (input[3] < -0.005310266) {
                    var81 = 0.14393313;
                } else {
                    var81 = -0.15698445;
                }
            } else {
                var81 = 0.1791397;
            }
        } else {
            if (input[0] < 0.011448954) {
                if (input[4] < 0.005630306) {
                    if (input[1] < 0.007998831) {
                        var81 = -0.16266596;
                    } else {
                        var81 = 0.18077293;
                    }
                } else {
                    var81 = -0.16896044;
                }
            } else {
                if (input[3] < 0.012161912) {
                    var81 = 0.18192714;
                } else {
                    if (input[2] < 0.017644761) {
                        var81 = -0.17195475;
                    } else {
                        if (input[7] < 0.053660363) {
                            var81 = 0.051222175;
                        } else {
                            var81 = -0.16046342;
                        }
                    }
                }
            }
        }
    } else {
        if (input[2] < 0.06992401) {
            if (input[1] < 0.07788305) {
                var81 = 0.17785951;
            } else {
                var81 = -0.14249018;
            }
        } else {
            var81 = 0.17810357;
        }
    }
    float var82;
    if (input[2] < 0.03549164) {
        if (input[6] < 0.028343298) {
            if (input[7] < 0.0058814576) {
                if (input[0] < 0.00000019670617) {
                    if (input[3] < -0.005310266) {
                        var82 = 0.12994345;
                    } else {
                        var82 = -0.14710113;
                    }
                } else {
                    var82 = 0.16830726;
                }
            } else {
                if (input[0] < 0.006886598) {
                    var82 = -0.15578954;
                } else {
                    if (input[2] < 0.026180295) {
                        if (input[7] < 0.023452606) {
                            var82 = 0.024228519;
                        } else {
                            var82 = -0.20384337;
                        }
                    } else {
                        if (input[5] < 0.02733008) {
                            var82 = 0.18454535;
                        } else {
                            var82 = -0.003990849;
                        }
                    }
                }
            }
        } else {
            var82 = -0.17509438;
        }
    } else {
        if (input[3] < 0.039851032) {
            var82 = 0.18769103;
        } else {
            if (input[2] < 0.06257273) {
                if (input[7] < 0.053660363) {
                    if (input[2] < 0.050752595) {
                        if (input[2] < 0.050546106) {
                            var82 = -0.15943934;
                        } else {
                            var82 = -0.02407532;
                        }
                    } else {
                        var82 = 0.20615211;
                    }
                } else {
                    var82 = -0.17719458;
                }
            } else {
                if (input[2] < 0.06992401) {
                    if (input[1] < 0.07788305) {
                        var82 = 0.15528707;
                    } else {
                        var82 = -0.12815106;
                    }
                } else {
                    var82 = 0.16705878;
                }
            }
        }
    }
    float var83;
    if (input[0] < 0.038450025) {
        if (input[5] < 0.02733008) {
            if (input[3] < 0.0060262764) {
                if (input[0] < 0.00000019670617) {
                    if (input[3] < -0.005310266) {
                        var83 = 0.11812978;
                    } else {
                        var83 = -0.13834578;
                    }
                } else {
                    var83 = 0.16046484;
                }
            } else {
                if (input[2] < 0.026180295) {
                    if (input[5] < 0.005741552) {
                        var83 = -0.15346897;
                    } else {
                        if (input[7] < 0.023452606) {
                            var83 = 0.019542081;
                        } else {
                            var83 = -0.17458345;
                        }
                    }
                } else {
                    var83 = 0.1647;
                }
            }
        } else {
            var83 = -0.17400116;
        }
    } else {
        if (input[6] < 0.033972587) {
            var83 = 0.17649591;
        } else {
            if (input[2] < 0.06335619) {
                if (input[7] < 0.053660363) {
                    if (input[0] < 0.041369926) {
                        var83 = -0.1382058;
                    } else {
                        if (input[3] < 0.039851032) {
                            var83 = 0.16246985;
                        } else {
                            var83 = 0.027041154;
                        }
                    }
                } else {
                    if (input[6] < 0.052982736) {
                        var83 = 0.006189835;
                    } else {
                        var83 = -0.16185224;
                    }
                }
            } else {
                if (input[2] < 0.06992401) {
                    if (input[1] < 0.07788305) {
                        var83 = 0.15170097;
                    } else {
                        var83 = -0.11611675;
                    }
                } else {
                    var83 = 0.1587066;
                }
            }
        }
    }
    float var84;
    if (input[2] < 0.06335619) {
        if (input[7] < 0.0058814576) {
            if (input[0] < 0.00000019670617) {
                if (input[3] < -0.005310266) {
                    var84 = 0.1077745;
                } else {
                    var84 = -0.13010113;
                }
            } else {
                var84 = 0.15383554;
            }
        } else {
            if (input[0] < 0.006886598) {
                var84 = -0.1437928;
            } else {
                if (input[5] < 0.005741552) {
                    var84 = -0.13826868;
                } else {
                    if (input[3] < 0.012161912) {
                        if (input[5] < 0.005933243) {
                            var84 = 0.0020114619;
                        } else {
                            var84 = 0.16323903;
                        }
                    } else {
                        if (input[2] < 0.017644761) {
                            var84 = -0.15364292;
                        } else {
                            var84 = 0.026439635;
                        }
                    }
                }
            }
        }
    } else {
        if (input[2] < 0.06992401) {
            if (input[1] < 0.07788305) {
                var84 = 0.14538789;
            } else {
                var84 = -0.10942066;
            }
        } else {
            var84 = 0.15188164;
        }
    }
    float var85;
    if (input[2] < 0.06335619) {
        if (input[7] < 0.053660363) {
            if (input[2] < 0.03549164) {
                if (input[6] < 0.028343298) {
                    if (input[2] < 0.028156625) {
                        if (input[7] < 0.023452606) {
                            var85 = 0.030416628;
                        } else {
                            var85 = -0.10876546;
                        }
                    } else {
                        var85 = 0.15528473;
                    }
                } else {
                    var85 = -0.15203382;
                }
            } else {
                if (input[3] < 0.039851032) {
                    var85 = 0.15966976;
                } else {
                    if (input[2] < 0.050752595) {
                        if (input[2] < 0.050546106) {
                            var85 = -0.1447928;
                        } else {
                            var85 = -0.011497996;
                        }
                    } else {
                        var85 = 0.17568657;
                    }
                }
            }
        } else {
            if (input[6] < 0.052982736) {
                var85 = 0.007742139;
            } else {
                var85 = -0.1523543;
            }
        }
    } else {
        if (input[2] < 0.06992401) {
            if (input[1] < 0.07788305) {
                var85 = 0.13975805;
            } else {
                var85 = -0.103395276;
            }
        } else {
            var85 = 0.14583488;
        }
    }
    float var86;
    if (input[2] < 0.06257273) {
        if (input[7] < 0.053660363) {
            if (input[2] < 0.03549164) {
                if (input[6] < 0.028343298) {
                    if (input[7] < 0.0058814576) {
                        if (input[0] < 0.00000019670617) {
                            var86 = -0.050268415;
                        } else {
                            var86 = 0.14522025;
                        }
                    } else {
                        if (input[0] < 0.006886598) {
                            var86 = -0.13538136;
                        } else {
                            var86 = 0.02229244;
                        }
                    }
                } else {
                    var86 = -0.1432786;
                }
            } else {
                if (input[3] < 0.039851032) {
                    var86 = 0.15089875;
                } else {
                    if (input[2] < 0.050752595) {
                        if (input[2] < 0.050546106) {
                            var86 = -0.13349247;
                        } else {
                            var86 = -0.000628242;
                        }
                    } else {
                        var86 = 0.1564493;
                    }
                }
            }
        } else {
            var86 = -0.14067341;
        }
    } else {
        if (input[2] < 0.06992401) {
            if (input[1] < 0.07788305) {
                if (input[5] < 0.05924909) {
                    var86 = 0.1421942;
                } else {
                    var86 = 0.054570716;
                }
            } else {
                var86 = -0.0943297;
            }
        } else {
            var86 = 0.1400645;
        }
    }
    float var87;
    if (input[2] < 0.06335619) {
        if (input[7] < 0.053660363) {
            if (input[0] < 0.038450025) {
                if (input[5] < 0.02733008) {
                    if (input[2] < 0.025647238) {
                        if (input[3] < 0.0060262764) {
                            var87 = 0.084216066;
                        } else {
                            var87 = -0.011566342;
                        }
                    } else {
                        if (input[6] < 0.024325415) {
                            var87 = 0.041728597;
                        } else {
                            var87 = 0.1471255;
                        }
                    }
                } else {
                    var87 = -0.14729713;
                }
            } else {
                if (input[6] < 0.033972587) {
                    var87 = 0.14831781;
                } else {
                    if (input[2] < 0.050752595) {
                        if (input[3] < 0.039851032) {
                            var87 = 0.05782463;
                        } else {
                            var87 = -0.099034674;
                        }
                    } else {
                        var87 = 0.14628021;
                    }
                }
            }
        } else {
            if (input[6] < 0.052982736) {
                var87 = 0.0059419572;
            } else {
                var87 = -0.13633774;
            }
        }
    } else {
        if (input[2] < 0.06992401) {
            if (input[1] < 0.07788305) {
                var87 = 0.12531973;
            } else {
                var87 = -0.0918916;
            }
        } else {
            var87 = 0.13534747;
        }
    }
    float var88;
    if (input[2] < 0.06335619) {
        if (input[0] < 0.057358436) {
            if (input[0] < 0.04631455) {
                if (input[7] < 0.0058814576) {
                    if (input[0] < 0.00000019670617) {
                        if (input[3] < -0.005310266) {
                            var88 = 0.08544423;
                        } else {
                            var88 = -0.112631194;
                        }
                    } else {
                        var88 = 0.13598818;
                    }
                } else {
                    if (input[0] < 0.006886598) {
                        var88 = -0.12485381;
                    } else {
                        if (input[5] < 0.005741552) {
                            var88 = -0.118067734;
                        } else {
                            var88 = 0.016816558;
                        }
                    }
                }
            } else {
                var88 = 0.15495305;
            }
        } else {
            if (input[1] < 0.062009253) {
                var88 = -0.14742364;
            } else {
                if (input[0] < 0.06784159) {
                    var88 = 0.11531948;
                } else {
                    var88 = -0.11397874;
                }
            }
        }
    } else {
        if (input[2] < 0.06992401) {
            if (input[1] < 0.07788305) {
                var88 = 0.11935251;
            } else {
                var88 = -0.08918433;
            }
        } else {
            var88 = 0.13064414;
        }
    }
    float var89;
    if (input[2] < 0.06257273) {
        if (input[7] < 0.053660363) {
            if (input[2] < 0.03549164) {
                if (input[6] < 0.028343298) {
                    if (input[2] < 0.028156625) {
                        if (input[7] < 0.023452606) {
                            var89 = 0.021881908;
                        } else {
                            var89 = -0.096892215;
                        }
                    } else {
                        var89 = 0.13423263;
                    }
                } else {
                    var89 = -0.1334637;
                }
            } else {
                if (input[3] < 0.039851032) {
                    var89 = 0.13912067;
                } else {
                    if (input[2] < 0.050546106) {
                        var89 = -0.12470279;
                    } else {
                        if (input[0] < 0.057358436) {
                            var89 = 0.15565108;
                        } else {
                            var89 = 0.01631927;
                        }
                    }
                }
            }
        } else {
            var89 = -0.12793186;
        }
    } else {
        if (input[2] < 0.06992401) {
            if (input[1] < 0.07788305) {
                if (input[5] < 0.05924909) {
                    var89 = 0.125539;
                } else {
                    var89 = 0.033465885;
                }
            } else {
                var89 = -0.08445505;
            }
        } else {
            var89 = 0.12450234;
        }
    }
    float var90;
    if (input[2] < 0.06335619) {
        if (input[1] < 0.05722003) {
            if (input[0] < 0.04631455) {
                if (input[5] < 0.026083015) {
                    if (input[2] < 0.026180295) {
                        if (input[7] < 0.023452606) {
                            var90 = 0.014451366;
                        } else {
                            var90 = -0.12293493;
                        }
                    } else {
                        var90 = 0.1345687;
                    }
                } else {
                    if (input[2] < 0.03549164) {
                        if (input[0] < 0.04070961) {
                            var90 = -0.13031074;
                        } else {
                            var90 = -0.013012323;
                        }
                    } else {
                        if (input[1] < 0.04332863) {
                            var90 = 0.123452835;
                        } else {
                            var90 = -0.10163189;
                        }
                    }
                }
            } else {
                var90 = 0.14484663;
            }
        } else {
            if (input[4] < 0.049097084) {
                var90 = -0.13891275;
            } else {
                if (input[0] < 0.06784159) {
                    var90 = 0.10888878;
                } else {
                    var90 = -0.10584291;
                }
            }
        }
    } else {
        if (input[2] < 0.06992401) {
            if (input[1] < 0.07788305) {
                var90 = 0.10999689;
            } else {
                var90 = -0.081866935;
            }
        } else {
            var90 = 0.11943922;
        }
    }
    float var91;
    if (input[2] < 0.069732934) {
        if (input[5] < 0.055639315) {
            if (input[4] < 0.049097084) {
                if (input[6] < 0.04914543) {
                    if (input[0] < 0.04631455) {
                        if (input[6] < 0.033151343) {
                            var91 = 0.014408705;
                        } else {
                            var91 = -0.069309466;
                        }
                    } else {
                        var91 = 0.13948345;
                    }
                } else {
                    var91 = -0.13439403;
                }
            } else {
                var91 = 0.11572711;
            }
        } else {
            if (input[0] < 0.07061198) {
                var91 = -0.10216559;
            } else {
                var91 = -0.018466594;
            }
        }
    } else {
        var91 = 0.10855942;
    }
    float var92;
    if (input[6] < 0.06784188) {
        if (input[7] < 0.048608553) {
            if (input[0] < 0.04631455) {
                if (input[6] < 0.033151343) {
                    if (input[0] < 0.038450025) {
                        if (input[5] < 0.02733008) {
                            var92 = 0.01376053;
                        } else {
                            var92 = -0.12032235;
                        }
                    } else {
                        var92 = 0.12215279;
                    }
                } else {
                    if (input[7] < 0.03365155) {
                        var92 = 0.015013686;
                    } else {
                        var92 = -0.1067598;
                    }
                }
            } else {
                var92 = 0.13415451;
            }
        } else {
            if (input[0] < 0.058191862) {
                var92 = -0.13038293;
            } else {
                if (input[6] < 0.056341134) {
                    var92 = 0.11065189;
                } else {
                    if (input[0] < 0.07061198) {
                        var92 = -0.098378256;
                    } else {
                        var92 = -0.008499136;
                    }
                }
            }
        }
    } else {
        var92 = 0.10936882;
    }
    float var93;
    if (input[2] < 0.06992401) {
        if (input[7] < 0.048608553) {
            if (input[0] < 0.04631455) {
                if (input[7] < 0.0058814576) {
                    if (input[0] < 0.00000019670617) {
                        if (input[2] < -0.005790366) {
                            var93 = 0.040331114;
                        } else {
                            var93 = -0.09785118;
                        }
                    } else {
                        var93 = 0.122137226;
                    }
                } else {
                    if (input[5] < 0.005741552) {
                        var93 = -0.11091441;
                    } else {
                        if (input[0] < 0.006886598) {
                            var93 = -0.10158724;
                        } else {
                            var93 = 0.013128677;
                        }
                    }
                }
            } else {
                var93 = 0.12832573;
            }
        } else {
            if (input[4] < 0.049097084) {
                var93 = -0.124205306;
            } else {
                if (input[6] < 0.056341134) {
                    var93 = 0.10495719;
                } else {
                    if (input[0] < 0.07061198) {
                        var93 = -0.09334024;
                    } else {
                        var93 = -0.008804448;
                    }
                }
            }
        }
    } else {
        var93 = 0.10265693;
    }
    float var94;
    if (input[2] < 0.06992401) {
        if (input[6] < 0.04914543) {
            if (input[0] < 0.04631455) {
                if (input[6] < 0.033151343) {
                    if (input[0] < 0.038450025) {
                        if (input[5] < 0.02733008) {
                            var94 = 0.012116607;
                        } else {
                            var94 = -0.115857765;
                        }
                    } else {
                        var94 = 0.11578814;
                    }
                } else {
                    if (input[7] < 0.03365155) {
                        var94 = 0.011967706;
                    } else {
                        var94 = -0.101719834;
                    }
                }
            } else {
                var94 = 0.123595044;
            }
        } else {
            if (input[1] < 0.062009253) {
                var94 = -0.12057351;
            } else {
                if (input[5] < 0.055639315) {
                    var94 = 0.101021126;
                } else {
                    if (input[0] < 0.07061198) {
                        var94 = -0.08962244;
                    } else {
                        var94 = -0.009586839;
                    }
                }
            }
        }
    } else {
        var94 = 0.09771696;
    }
    float var95;
    if (input[6] < 0.06784188) {
        if (input[1] < 0.05722003) {
            if (input[0] < 0.04631455) {
                if (input[6] < 0.033151343) {
                    if (input[0] < 0.038450025) {
                        if (input[5] < 0.02733008) {
                            var95 = 0.010450089;
                        } else {
                            var95 = -0.109914675;
                        }
                    } else {
                        var95 = 0.111407176;
                    }
                } else {
                    if (input[7] < 0.03365155) {
                        var95 = 0.009809832;
                    } else {
                        var95 = -0.09693719;
                    }
                }
            } else {
                var95 = 0.1189761;
            }
        } else {
            if (input[1] < 0.062009253) {
                var95 = -0.1164031;
            } else {
                if (input[6] < 0.056341134) {
                    var95 = 0.09449908;
                } else {
                    if (input[0] < 0.07061198) {
                        var95 = -0.08608035;
                    } else {
                        var95 = -0.010196618;
                    }
                }
            }
        }
    } else {
        var95 = 0.09313383;
    }
    float var96;
    if (input[0] < 0.02613918) {
        if (input[4] < 0.021792779) {
            if (input[2] < 0.021747036) {
                if (input[4] < 0.005630306) {
                    if (input[0] < 0.00000019670617) {
                        if (input[3] < -0.0022599923) {
                            var96 = 0.02145984;
                        } else {
                            var96 = -0.088181734;
                        }
                    } else {
                        if (input[7] < 0.0058814576) {
                            var96 = 0.11219185;
                        } else {
                            var96 = 0.019374153;
                        }
                    }
                } else {
                    if (input[0] < 0.011448954) {
                        var96 = -0.10771064;
                    } else {
                        if (input[0] < 0.015806269) {
                            var96 = 0.06783207;
                        } else {
                            var96 = -0.04767221;
                        }
                    }
                }
            } else {
                var96 = 0.10568424;
            }
        } else {
            var96 = -0.112816155;
        }
    } else {
        if (input[7] < 0.023452606) {
            var96 = 0.13291253;
        } else {
            if (input[2] < 0.026180295) {
                var96 = -0.11039949;
            } else {
                if (input[5] < 0.026083015) {
                    var96 = 0.112587094;
                } else {
                    if (input[2] < 0.03549164) {
                        if (input[0] < 0.04070961) {
                            var96 = -0.116610095;
                        } else {
                            var96 = 0.012184229;
                        }
                    } else {
                        if (input[3] < 0.039851032) {
                            var96 = 0.11805815;
                        } else {
                            var96 = -0.00029401382;
                        }
                    }
                }
            }
        }
    }
    float var97;
    if (input[2] < 0.06992401) {
        if (input[0] < 0.057358436) {
            if (input[0] < 0.04631455) {
                if (input[6] < 0.033151343) {
                    if (input[0] < 0.038450025) {
                        if (input[5] < 0.026083015) {
                            var97 = 0.010292432;
                        } else {
                            var97 = -0.095024735;
                        }
                    } else {
                        var97 = 0.1031256;
                    }
                } else {
                    if (input[7] < 0.03365155) {
                        var97 = 0.005712922;
                    } else {
                        var97 = -0.091452055;
                    }
                }
            } else {
                var97 = 0.1138436;
            }
        } else {
            if (input[4] < 0.049097084) {
                var97 = -0.112460494;
            } else {
                if (input[5] < 0.055639315) {
                    var97 = 0.091912664;
                } else {
                    if (input[1] < 0.073073566) {
                        var97 = -0.07625775;
                    } else {
                        var97 = -0.013704457;
                    }
                }
            }
        }
    } else {
        var97 = 0.08552986;
    }
    float var98;
    if (input[2] < 0.06992401) {
        if (input[7] < 0.048608553) {
            if (input[0] < 0.04631455) {
                if (input[6] < 0.033151343) {
                    if (input[0] < 0.038450025) {
                        if (input[5] < 0.02733008) {
                            var98 = 0.008764673;
                        } else {
                            var98 = -0.09605221;
                        }
                    } else {
                        var98 = 0.09905646;
                    }
                } else {
                    if (input[7] < 0.03365155) {
                        var98 = 0.0043475637;
                    } else {
                        var98 = -0.08706522;
                    }
                }
            } else {
                var98 = 0.10762322;
            }
        } else {
            if (input[2] < 0.05483159) {
                var98 = -0.10863691;
            } else {
                if (input[6] < 0.056341134) {
                    var98 = 0.08768678;
                } else {
                    if (input[1] < 0.07761919) {
                        var98 = -0.017929224;
                    } else {
                        var98 = -0.0653992;
                    }
                }
            }
        }
    } else {
        var98 = 0.08125903;
    }
    float var99;
    if (input[6] < 0.06784188) {
        if (input[6] < 0.04914543) {
            if (input[0] < 0.04631455) {
                if (input[6] < 0.033151343) {
                    if (input[2] < 0.025647238) {
                        if (input[7] < 0.01984781) {
                            var99 = 0.009664389;
                        } else {
                            var99 = -0.06858499;
                        }
                    } else {
                        if (input[5] < 0.025887791) {
                            var99 = 0.11612466;
                        } else {
                            var99 = -0.0004382943;
                        }
                    }
                } else {
                    if (input[7] < 0.03365155) {
                        var99 = 0.003371447;
                    } else {
                        var99 = -0.08267097;
                    }
                }
            } else {
                var99 = 0.10365028;
            }
        } else {
            if (input[4] < 0.049097084) {
                var99 = -0.1052567;
            } else {
                if (input[5] < 0.055639315) {
                    var99 = 0.08315137;
                } else {
                    if (input[3] < 0.062273704) {
                        var99 = -0.06471323;
                    } else {
                        var99 = -0.015095436;
                    }
                }
            }
        }
    } else {
        var99 = 0.0776896;
    }
    float var100;
    if (input[2] < 0.069732934) {
        if (input[1] < 0.05722003) {
            if (input[2] < 0.03549164) {
                if (input[6] < 0.028343298) {
                    if (input[2] < 0.028156625) {
                        if (input[7] < 0.023452606) {
                            var100 = 0.007855083;
                        } else {
                            var100 = -0.072907284;
                        }
                    } else {
                        var100 = 0.10490297;
                    }
                } else {
                    var100 = -0.10566649;
                }
            } else {
                if (input[3] < 0.039851032) {
                    var100 = 0.107941605;
                } else {
                    var100 = 0.010365843;
                }
            }
        } else {
            if (input[1] < 0.062009253) {
                var100 = -0.10247588;
            } else {
                if (input[6] < 0.056341134) {
                    var100 = 0.08048299;
                } else {
                    var100 = -0.055980038;
                }
            }
        }
    } else {
        var100 = 0.06790695;
    }
    float var101;
    if (input[0] < 0.02613918) {
        if (input[4] < 0.005630306) {
            if (input[0] < 0.00000019670617) {
                if (input[3] < -0.0021779318) {
                    var101 = 0.011161078;
                } else {
                    var101 = -0.07675787;
                }
            } else {
                if (input[7] < 0.0058814576) {
                    var101 = 0.098853566;
                } else {
                    var101 = 0.015909959;
                }
            }
        } else {
            if (input[7] < 0.02121406) {
                if (input[3] < 0.019137917) {
                    if (input[3] < 0.018101975) {
                        if (input[3] < 0.016654711) {
                            var101 = -0.017429084;
                        } else {
                            var101 = -0.10614594;
                        }
                    } else {
                        var101 = 0.095197976;
                    }
                } else {
                    var101 = -0.11090558;
                }
            } else {
                var101 = 0.060038436;
            }
        }
    } else {
        if (input[7] < 0.023452606) {
            var101 = 0.11454037;
        } else {
            if (input[2] < 0.02733214) {
                var101 = -0.083374225;
            } else {
                if (input[5] < 0.026083015) {
                    var101 = 0.095801815;
                } else {
                    if (input[2] < 0.03549164) {
                        if (input[3] < 0.028583676) {
                            var101 = -0.0005014486;
                        } else {
                            var101 = -0.09877407;
                        }
                    } else {
                        if (input[3] < 0.039851032) {
                            var101 = 0.104496546;
                        } else {
                            var101 = -0.004902896;
                        }
                    }
                }
            }
        }
    }
    float var102;
    if (input[2] < 0.06335619) {
        if (input[0] < 0.057358436) {
            if (input[0] < 0.04631455) {
                if (input[6] < 0.033151343) {
                    if (input[0] < 0.038450025) {
                        if (input[5] < 0.02733008) {
                            var102 = 0.007391018;
                        } else {
                            var102 = -0.08656997;
                        }
                    } else {
                        var102 = 0.08689975;
                    }
                } else {
                    if (input[7] < 0.03365155) {
                        var102 = 0.0019118602;
                    } else {
                        var102 = -0.07742261;
                    }
                }
            } else {
                var102 = 0.09814079;
            }
        } else {
            if (input[2] < 0.05483159) {
                var102 = -0.09857251;
            } else {
                var102 = -0.003725372;
            }
        }
    } else {
        if (input[3] < 0.06417808) {
            var102 = 0.088085085;
        } else {
            var102 = -0.009947663;
        }
    }
    float var103;
    if (input[0] < 0.02613918) {
        if (input[4] < 0.005630306) {
            if (input[0] < 0.00000019670617) {
                var103 = -0.041261237;
            } else {
                if (input[7] < 0.0058814576) {
                    var103 = 0.09240346;
                } else {
                    var103 = 0.012579286;
                }
            }
        } else {
            if (input[0] < 0.011448954) {
                var103 = -0.09123656;
            } else {
                if (input[0] < 0.015806269) {
                    if (input[0] < 0.014057905) {
                        var103 = 0.0099767465;
                    } else {
                        var103 = 0.08677925;
                    }
                } else {
                    if (input[7] < 0.02121406) {
                        if (input[3] < 0.019137917) {
                            var103 = -0.024761643;
                        } else {
                            var103 = -0.10107054;
                        }
                    } else {
                        var103 = 0.055707987;
                    }
                }
            }
        }
    } else {
        if (input[7] < 0.023452606) {
            var103 = 0.10646617;
        } else {
            if (input[2] < 0.026180295) {
                var103 = -0.08431219;
            } else {
                if (input[5] < 0.026083015) {
                    var103 = 0.08993171;
                } else {
                    if (input[2] < 0.03549164) {
                        if (input[3] < 0.02831491) {
                            var103 = -0.0011491517;
                        } else {
                            var103 = -0.09201622;
                        }
                    } else {
                        if (input[3] < 0.039851032) {
                            var103 = 0.09813329;
                        } else {
                            var103 = -0.007089672;
                        }
                    }
                }
            }
        }
    }
    float var104;
    if (input[2] < 0.069732934) {
        if (input[5] < 0.055639315) {
            if (input[0] < 0.06554362) {
                if (input[1] < 0.05722003) {
                    if (input[0] < 0.04631455) {
                        if (input[6] < 0.033151343) {
                            var104 = 0.006552979;
                        } else {
                            var104 = -0.048368637;
                        }
                    } else {
                        var104 = 0.09263583;
                    }
                } else {
                    var104 = -0.07978383;
                }
            } else {
                var104 = 0.08468144;
            }
        } else {
            var104 = -0.05426765;
        }
    } else {
        var104 = 0.057543118;
    }
    float var105;
    if (input[2] < 0.06335619) {
        if (input[0] < 0.057358436) {
            if (input[0] < 0.04631455) {
                if (input[6] < 0.033972587) {
                    if (input[0] < 0.038450025) {
                        if (input[5] < 0.02733008) {
                            var105 = 0.0061448356;
                        } else {
                            var105 = -0.08279154;
                        }
                    } else {
                        var105 = 0.0834002;
                    }
                } else {
                    var105 = -0.046629723;
                }
            } else {
                var105 = 0.08813675;
            }
        } else {
            if (input[2] < 0.05483159) {
                var105 = -0.092470296;
            } else {
                var105 = -0.003947073;
            }
        }
    } else {
        if (input[3] < 0.06417808) {
            var105 = 0.08308129;
        } else {
            var105 = -0.01292815;
        }
    }
    float var106;
    if (input[2] < 0.069732934) {
        if (input[6] < 0.056341134) {
            if (input[1] < 0.062009253) {
                if (input[6] < 0.04914543) {
                    if (input[0] < 0.04631455) {
                        if (input[6] < 0.033972587) {
                            var106 = 0.0052681025;
                        } else {
                            var106 = -0.043064192;
                        }
                    } else {
                        var106 = 0.08475628;
                    }
                } else {
                    var106 = -0.089815594;
                }
            } else {
                var106 = 0.07406679;
            }
        } else {
            var106 = -0.05336283;
        }
    } else {
        var106 = 0.052489456;
    }
    float var107;
    if (input[0] < 0.02613918) {
        if (input[4] < 0.0057189628) {
            if (input[0] < 0.00000019670617) {
                var107 = -0.0300484;
            } else {
                if (input[7] < 0.0058814576) {
                    var107 = 0.084044546;
                } else {
                    var107 = 0.0062346347;
                }
            }
        } else {
            if (input[0] < 0.011448954) {
                var107 = -0.08546105;
            } else {
                if (input[0] < 0.015806269) {
                    if (input[0] < 0.013411067) {
                        var107 = 0.012523278;
                    } else {
                        var107 = 0.06738487;
                    }
                } else {
                    if (input[3] < 0.018101975) {
                        if (input[0] < 0.020497441) {
                            var107 = -0.089422405;
                        } else {
                            var107 = -0.007021666;
                        }
                    } else {
                        if (input[6] < 0.020522578) {
                            var107 = 0.060738575;
                        } else {
                            var107 = -0.042823005;
                        }
                    }
                }
            }
        }
    } else {
        if (input[7] < 0.023452606) {
            var107 = 0.09489486;
        } else {
            if (input[2] < 0.028156625) {
                var107 = -0.06347164;
            } else {
                if (input[6] < 0.028343298) {
                    var107 = 0.0888546;
                } else {
                    if (input[2] < 0.03549164) {
                        var107 = -0.08462722;
                    } else {
                        if (input[3] < 0.039851032) {
                            var107 = 0.0913098;
                        } else {
                            var107 = -0.009799531;
                        }
                    }
                }
            }
        }
    }
    float var108;
    if (input[2] < 0.069732934) {
        if (input[5] < 0.055639315) {
            if (input[4] < 0.049097084) {
                if (input[7] < 0.048608553) {
                    if (input[0] < 0.04631455) {
                        if (input[6] < 0.033151343) {
                            var108 = 0.0060854373;
                        } else {
                            var108 = -0.038872965;
                        }
                    } else {
                        var108 = 0.08044511;
                    }
                } else {
                    var108 = -0.08765689;
                }
            } else {
                var108 = 0.07148289;
            }
        } else {
            var108 = -0.049449775;
        }
    } else {
        var108 = 0.048567154;
    }
    float var109;
    if (input[2] < 0.06335619) {
        if (input[1] < 0.05722003) {
            if (input[0] < 0.04631455) {
                if (input[6] < 0.033972587) {
                    if (input[2] < 0.025647238) {
                        if (input[1] < 0.024593476) {
                            var109 = 0.0034753669;
                        } else {
                            var109 = -0.04768075;
                        }
                    } else {
                        if (input[5] < 0.02733008) {
                            var109 = 0.08013313;
                        } else {
                            var109 = -0.0032106815;
                        }
                    }
                } else {
                    var109 = -0.03654258;
                }
            } else {
                var109 = 0.07699154;
            }
        } else {
            if (input[2] < 0.05483159) {
                var109 = -0.08515977;
            } else {
                var109 = -0.006424071;
            }
        }
    } else {
        if (input[3] < 0.06417808) {
            var109 = 0.07823796;
        } else {
            var109 = -0.01623521;
        }
    }
    float var110;
    if (input[0] < 0.0077222227) {
        if (input[3] < -0.0022977383) {
            var110 = 0.04072521;
        } else {
            if (input[1] < 0.0058861035) {
                var110 = -0.010842612;
            } else {
                var110 = -0.068964235;
            }
        }
    } else {
        if (input[7] < 0.013307025) {
            if (input[6] < 0.0059966506) {
                var110 = -0.017401826;
            } else {
                var110 = 0.08889603;
            }
        } else {
            if (input[2] < 0.017644761) {
                var110 = -0.08259526;
            } else {
                if (input[3] < 0.016654711) {
                    var110 = 0.06996906;
                } else {
                    if (input[3] < 0.018101975) {
                        var110 = -0.08013875;
                    } else {
                        if (input[3] < 0.039851032) {
                            var110 = 0.029602284;
                        } else {
                            var110 = -0.011617108;
                        }
                    }
                }
            }
        }
    }
    float var111;
    if (input[2] < 0.06335619) {
        if (input[7] < 0.048608553) {
            if (input[2] < 0.03549164) {
                if (input[6] < 0.027729174) {
                    if (input[2] < 0.026180295) {
                        if (input[7] < 0.0058814576) {
                            var111 = 0.028411955;
                        } else {
                            var111 = -0.017376032;
                        }
                    } else {
                        var111 = 0.060231403;
                    }
                } else {
                    var111 = -0.07019766;
                }
            } else {
                if (input[3] < 0.039851032) {
                    var111 = 0.08585076;
                } else {
                    var111 = -0.000011237387;
                }
            }
        } else {
            if (input[2] < 0.05483159) {
                var111 = -0.08008361;
            } else {
                var111 = -0.005122575;
            }
        }
    } else {
        if (input[5] < 0.06658444) {
            var111 = 0.06270262;
        } else {
            var111 = -0.010495894;
        }
    }
    float var112;
    if (input[0] < 0.006686007) {
        if (input[3] < -0.0022599923) {
            var112 = 0.024794085;
        } else {
            if (input[7] < 0.0033350792) {
                var112 = -0.009696703;
            } else {
                var112 = -0.061131243;
            }
        }
    } else {
        if (input[3] < 0.013419368) {
            if (input[5] < 0.005933243) {
                var112 = -0.012896023;
            } else {
                var112 = 0.07864854;
            }
        } else {
            if (input[6] < 0.015132676) {
                var112 = -0.06941631;
            } else {
                if (input[3] < 0.016654711) {
                    var112 = 0.051627792;
                } else {
                    if (input[4] < 0.019965619) {
                        var112 = -0.03979457;
                    } else {
                        if (input[5] < 0.023300424) {
                            var112 = 0.0618076;
                        } else {
                            var112 = -0.00041687966;
                        }
                    }
                }
            }
        }
    }
    float var113;
    if (input[7] < 0.0058814576) {
        if (input[0] < 0.00000019670617) {
            var113 = -0.025711514;
        } else {
            var113 = 0.07907406;
        }
    } else {
        if (input[0] < 0.0077222227) {
            var113 = -0.064053975;
        } else {
            if (input[3] < 0.013419368) {
                var113 = 0.03218019;
            } else {
                if (input[6] < 0.015132676) {
                    var113 = -0.066095285;
                } else {
                    if (input[5] < 0.018029599) {
                        var113 = 0.042787958;
                    } else {
                        if (input[4] < 0.019965619) {
                            var113 = -0.044578224;
                        } else {
                            var113 = 0.008341282;
                        }
                    }
                }
            }
        }
    }
    float var114;
    if (input[7] < 0.0058814576) {
        if (input[0] < -0.0018292702) {
            var114 = -0.01707822;
        } else {
            var114 = 0.068053186;
        }
    } else {
        if (input[0] < 0.011448954) {
            if (input[4] < 0.005630306) {
                var114 = 0.0060036345;
            } else {
                var114 = -0.080034025;
            }
        } else {
            if (input[0] < 0.015806269) {
                var114 = 0.04949837;
            } else {
                if (input[0] < 0.018414697) {
                    var114 = -0.06585822;
                } else {
                    if (input[7] < 0.01935702) {
                        var114 = 0.04720011;
                    } else {
                        if (input[7] < 0.02121406) {
                            var114 = -0.05406288;
                        } else {
                            var114 = 0.0079727955;
                        }
                    }
                }
            }
        }
    }
    // NOTE: there used to be a 'nan +' before each element in the array passed to softmax(). removed due to raising errors.
    softmax((float[]){(var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8 + var9 + var10 + var11 + var12 + var13 + var14 + var15 + var16 + var17 + var18 + var19 + var20 + var21 + var22 + var23 + var24 + var25 + var26 + var27 + var28 + var29 + var30 + var31 + var32 + var33 + var34 + var35 + var36 + var37 + var38), (var39 + var40 + var41 + var42 + var43 + var44 + var45 + var46 + var47 + var48 + var49 + var50 + var51 + var52 + var53 + var54 + var55 + var56 + var57 + var58 + var59 + var60 + var61 + var62 + var63 + var64 + var65 + var66 + var67 + var68 + var69 + var70 + var71 + var72 + var73 + var74 + var75 + var76), (var77 + var78 + var79 + var80 + var81 + var82 + var83 + var84 + var85 + var86 + var87 + var88 + var89 + var90 + var91 + var92 + var93 + var94 + var95 + var96 + var97 + var98 + var99 + var100 + var101 + var102 + var103 + var104 + var105 + var106 + var107 + var108 + var109 + var110 + var111 + var112 + var113 + var114)}, 3, var0);
    memcpy(output, var0, 3 * sizeof(float));
}
