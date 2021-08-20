  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 5;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (hbv5azo3sw)
    ;%
      section.nData     = 432;
      section.data(432)  = dumData; %prealloc
      
	  ;% hbv5azo3sw.RandomSource1_MeanVal
	  section.data(1).logicalSrcIdx = 3;
	  section.data(1).dtTransOffset = 0;
	
	  ;% hbv5azo3sw.RandomSource_MeanVal
	  section.data(2).logicalSrcIdx = 4;
	  section.data(2).dtTransOffset = 1;
	
	  ;% hbv5azo3sw.RandomSource1_MeanVal_aiijehfqfo
	  section.data(3).logicalSrcIdx = 5;
	  section.data(3).dtTransOffset = 2;
	
	  ;% hbv5azo3sw.RandomSource1_MeanVal_fskbkqfzhy
	  section.data(4).logicalSrcIdx = 6;
	  section.data(4).dtTransOffset = 3;
	
	  ;% hbv5azo3sw.RandomSource1_MeanVal_memmqqy0nt
	  section.data(5).logicalSrcIdx = 7;
	  section.data(5).dtTransOffset = 4;
	
	  ;% hbv5azo3sw.RandomSource1_MeanVal_c0fkc2tbqq
	  section.data(6).logicalSrcIdx = 8;
	  section.data(6).dtTransOffset = 5;
	
	  ;% hbv5azo3sw.RandomSource1_MeanVal_d5xz2yhw3l
	  section.data(7).logicalSrcIdx = 9;
	  section.data(7).dtTransOffset = 6;
	
	  ;% hbv5azo3sw.RandomSource1_MeanVal_jxhxrhz3me
	  section.data(8).logicalSrcIdx = 10;
	  section.data(8).dtTransOffset = 7;
	
	  ;% hbv5azo3sw.RandomSource1_MeanVal_bvk35h21mf
	  section.data(9).logicalSrcIdx = 11;
	  section.data(9).dtTransOffset = 8;
	
	  ;% hbv5azo3sw.RandomSource1_MeanVal_cgugych5h2
	  section.data(10).logicalSrcIdx = 12;
	  section.data(10).dtTransOffset = 9;
	
	  ;% hbv5azo3sw.RandomSource1_MeanVal_d4idhl1tz1
	  section.data(11).logicalSrcIdx = 13;
	  section.data(11).dtTransOffset = 10;
	
	  ;% hbv5azo3sw.RandomSource1_MeanVal_n5f3r1zvmv
	  section.data(12).logicalSrcIdx = 14;
	  section.data(12).dtTransOffset = 11;
	
	  ;% hbv5azo3sw.RandomSource1_MeanVal_kfynkp2waz
	  section.data(13).logicalSrcIdx = 15;
	  section.data(13).dtTransOffset = 12;
	
	  ;% hbv5azo3sw.RandomSource1_MeanVal_d1pxk3satq
	  section.data(14).logicalSrcIdx = 16;
	  section.data(14).dtTransOffset = 13;
	
	  ;% hbv5azo3sw.PWM_Period
	  section.data(15).logicalSrcIdx = 17;
	  section.data(15).dtTransOffset = 14;
	
	  ;% hbv5azo3sw.PWM1_Period
	  section.data(16).logicalSrcIdx = 18;
	  section.data(16).dtTransOffset = 15;
	
	  ;% hbv5azo3sw.PWM2_Period
	  section.data(17).logicalSrcIdx = 19;
	  section.data(17).dtTransOffset = 16;
	
	  ;% hbv5azo3sw.PWM3_Period
	  section.data(18).logicalSrcIdx = 20;
	  section.data(18).dtTransOffset = 17;
	
	  ;% hbv5azo3sw.PWM4_Period
	  section.data(19).logicalSrcIdx = 21;
	  section.data(19).dtTransOffset = 18;
	
	  ;% hbv5azo3sw.PWM5_Period
	  section.data(20).logicalSrcIdx = 22;
	  section.data(20).dtTransOffset = 19;
	
	  ;% hbv5azo3sw.DirectionCosineMatrixtoQuaternions_action
	  section.data(21).logicalSrcIdx = 23;
	  section.data(21).dtTransOffset = 20;
	
	  ;% hbv5azo3sw.DirectionCosineMatrixtoQuaternions_action_bvnbf3gfnd
	  section.data(22).logicalSrcIdx = 24;
	  section.data(22).dtTransOffset = 21;
	
	  ;% hbv5azo3sw.NormalizeVector_maxzero
	  section.data(23).logicalSrcIdx = 25;
	  section.data(23).dtTransOffset = 22;
	
	  ;% hbv5azo3sw.NormalizeVector_maxzero_cdhvq0rirk
	  section.data(24).logicalSrcIdx = 26;
	  section.data(24).dtTransOffset = 23;
	
	  ;% hbv5azo3sw.NormalizeVector_maxzero_b4q4mcfdki
	  section.data(25).logicalSrcIdx = 27;
	  section.data(25).dtTransOffset = 24;
	
	  ;% hbv5azo3sw.NormalizeVector_maxzero_h2g0i450y0
	  section.data(26).logicalSrcIdx = 28;
	  section.data(26).dtTransOffset = 25;
	
	  ;% hbv5azo3sw.NormalizeVector_maxzero_j4hegkg3gk
	  section.data(27).logicalSrcIdx = 29;
	  section.data(27).dtTransOffset = 26;
	
	  ;% hbv5azo3sw.NormalizeVector_maxzero_g4yscxcbyk
	  section.data(28).logicalSrcIdx = 30;
	  section.data(28).dtTransOffset = 27;
	
	  ;% hbv5azo3sw.NormalizeVector_maxzero_bhjxf3hbxp
	  section.data(29).logicalSrcIdx = 31;
	  section.data(29).dtTransOffset = 28;
	
	  ;% hbv5azo3sw.NormalizeVector_maxzero_nx4f2adafg
	  section.data(30).logicalSrcIdx = 32;
	  section.data(30).dtTransOffset = 29;
	
	  ;% hbv5azo3sw.NormalizeVector_maxzero_j5wdotj0ar
	  section.data(31).logicalSrcIdx = 33;
	  section.data(31).dtTransOffset = 30;
	
	  ;% hbv5azo3sw.NormalizeVector_maxzero_etigbudinl
	  section.data(32).logicalSrcIdx = 34;
	  section.data(32).dtTransOffset = 31;
	
	  ;% hbv5azo3sw.NormalizeVector_maxzero_mpxbpoayb2
	  section.data(33).logicalSrcIdx = 35;
	  section.data(33).dtTransOffset = 32;
	
	  ;% hbv5azo3sw.NormalizeVector_maxzero_kqylmwb1gt
	  section.data(34).logicalSrcIdx = 36;
	  section.data(34).dtTransOffset = 33;
	
	  ;% hbv5azo3sw.NormalizeVector_maxzero_idjlccn1tr
	  section.data(35).logicalSrcIdx = 37;
	  section.data(35).dtTransOffset = 34;
	
	  ;% hbv5azo3sw.NormalizeVector1_maxzero
	  section.data(36).logicalSrcIdx = 38;
	  section.data(36).dtTransOffset = 35;
	
	  ;% hbv5azo3sw.NormalizeVector3_maxzero
	  section.data(37).logicalSrcIdx = 39;
	  section.data(37).dtTransOffset = 36;
	
	  ;% hbv5azo3sw.NormalizeVector4_maxzero
	  section.data(38).logicalSrcIdx = 40;
	  section.data(38).dtTransOffset = 37;
	
	  ;% hbv5azo3sw.DirectionCosineMatrixtoQuaternions_tolerance
	  section.data(39).logicalSrcIdx = 41;
	  section.data(39).dtTransOffset = 38;
	
	  ;% hbv5azo3sw.DirectionCosineMatrixtoQuaternions_tolerance_lf33vmkxxr
	  section.data(40).logicalSrcIdx = 42;
	  section.data(40).dtTransOffset = 39;
	
	  ;% hbv5azo3sw.Gain_Gain
	  section.data(41).logicalSrcIdx = 43;
	  section.data(41).dtTransOffset = 40;
	
	  ;% hbv5azo3sw.Gain1_Gain
	  section.data(42).logicalSrcIdx = 44;
	  section.data(42).dtTransOffset = 41;
	
	  ;% hbv5azo3sw.Constant_Value
	  section.data(43).logicalSrcIdx = 45;
	  section.data(43).dtTransOffset = 42;
	
	  ;% hbv5azo3sw.Gain_Gain_iwt0st0rzi
	  section.data(44).logicalSrcIdx = 46;
	  section.data(44).dtTransOffset = 43;
	
	  ;% hbv5azo3sw.Gain1_Gain_nfpwthwaye
	  section.data(45).logicalSrcIdx = 47;
	  section.data(45).dtTransOffset = 44;
	
	  ;% hbv5azo3sw.Gain3_Gain
	  section.data(46).logicalSrcIdx = 48;
	  section.data(46).dtTransOffset = 45;
	
	  ;% hbv5azo3sw.Gain4_Gain
	  section.data(47).logicalSrcIdx = 49;
	  section.data(47).dtTransOffset = 46;
	
	  ;% hbv5azo3sw.Constant1_Value
	  section.data(48).logicalSrcIdx = 50;
	  section.data(48).dtTransOffset = 47;
	
	  ;% hbv5azo3sw.Constant2_Value
	  section.data(49).logicalSrcIdx = 51;
	  section.data(49).dtTransOffset = 48;
	
	  ;% hbv5azo3sw.Constant_Value_fz025lyiwx
	  section.data(50).logicalSrcIdx = 52;
	  section.data(50).dtTransOffset = 50;
	
	  ;% hbv5azo3sw.Gain_Gain_btqrwsiywm
	  section.data(51).logicalSrcIdx = 53;
	  section.data(51).dtTransOffset = 51;
	
	  ;% hbv5azo3sw.Gain1_Gain_hckkrvkfud
	  section.data(52).logicalSrcIdx = 54;
	  section.data(52).dtTransOffset = 52;
	
	  ;% hbv5azo3sw.Gain2_Gain
	  section.data(53).logicalSrcIdx = 55;
	  section.data(53).dtTransOffset = 53;
	
	  ;% hbv5azo3sw.Gain3_Gain_js3cz41u3x
	  section.data(54).logicalSrcIdx = 56;
	  section.data(54).dtTransOffset = 54;
	
	  ;% hbv5azo3sw.Constant1_Value_juzf4g22fl
	  section.data(55).logicalSrcIdx = 57;
	  section.data(55).dtTransOffset = 55;
	
	  ;% hbv5azo3sw.Constant2_Value_j1w3p3nqwm
	  section.data(56).logicalSrcIdx = 58;
	  section.data(56).dtTransOffset = 56;
	
	  ;% hbv5azo3sw.Constant_Value_g1hmmrw0mg
	  section.data(57).logicalSrcIdx = 59;
	  section.data(57).dtTransOffset = 58;
	
	  ;% hbv5azo3sw.Gain_Gain_o0vagw33z0
	  section.data(58).logicalSrcIdx = 60;
	  section.data(58).dtTransOffset = 59;
	
	  ;% hbv5azo3sw.Gain1_Gain_juwv0ndgmj
	  section.data(59).logicalSrcIdx = 61;
	  section.data(59).dtTransOffset = 60;
	
	  ;% hbv5azo3sw.Gain2_Gain_eyjvfdefnl
	  section.data(60).logicalSrcIdx = 62;
	  section.data(60).dtTransOffset = 61;
	
	  ;% hbv5azo3sw.Gain3_Gain_neo4wlccgm
	  section.data(61).logicalSrcIdx = 63;
	  section.data(61).dtTransOffset = 62;
	
	  ;% hbv5azo3sw.Constant1_Value_ijkyohanlb
	  section.data(62).logicalSrcIdx = 64;
	  section.data(62).dtTransOffset = 63;
	
	  ;% hbv5azo3sw.Constant2_Value_l5clkhiwr2
	  section.data(63).logicalSrcIdx = 65;
	  section.data(63).dtTransOffset = 64;
	
	  ;% hbv5azo3sw.Constant_Value_aj0beqlhap
	  section.data(64).logicalSrcIdx = 66;
	  section.data(64).dtTransOffset = 66;
	
	  ;% hbv5azo3sw.Constant1_Value_pmm0hyhaw2
	  section.data(65).logicalSrcIdx = 67;
	  section.data(65).dtTransOffset = 67;
	
	  ;% hbv5azo3sw.Constant1_Value_ct0h0v3l03
	  section.data(66).logicalSrcIdx = 68;
	  section.data(66).dtTransOffset = 68;
	
	  ;% hbv5azo3sw.Bias_Bias
	  section.data(67).logicalSrcIdx = 69;
	  section.data(67).dtTransOffset = 69;
	
	  ;% hbv5azo3sw.Bias1_Bias
	  section.data(68).logicalSrcIdx = 70;
	  section.data(68).dtTransOffset = 70;
	
	  ;% hbv5azo3sw.Gain_Gain_f2lrjksp1b
	  section.data(69).logicalSrcIdx = 71;
	  section.data(69).dtTransOffset = 79;
	
	  ;% hbv5azo3sw.Gain1_Gain_ctfieebgom
	  section.data(70).logicalSrcIdx = 72;
	  section.data(70).dtTransOffset = 80;
	
	  ;% hbv5azo3sw.Constant_Value_czyi20hi44
	  section.data(71).logicalSrcIdx = 73;
	  section.data(71).dtTransOffset = 81;
	
	  ;% hbv5azo3sw.Gain_Gain_ffyvgqn0t3
	  section.data(72).logicalSrcIdx = 74;
	  section.data(72).dtTransOffset = 82;
	
	  ;% hbv5azo3sw.Gain1_Gain_hf2zl5hf11
	  section.data(73).logicalSrcIdx = 75;
	  section.data(73).dtTransOffset = 83;
	
	  ;% hbv5azo3sw.Gain3_Gain_bw3onmpp4n
	  section.data(74).logicalSrcIdx = 76;
	  section.data(74).dtTransOffset = 84;
	
	  ;% hbv5azo3sw.Gain4_Gain_evdjntwv1r
	  section.data(75).logicalSrcIdx = 77;
	  section.data(75).dtTransOffset = 85;
	
	  ;% hbv5azo3sw.Constant1_Value_h5yyggpyun
	  section.data(76).logicalSrcIdx = 78;
	  section.data(76).dtTransOffset = 86;
	
	  ;% hbv5azo3sw.Constant2_Value_dsajk3p21p
	  section.data(77).logicalSrcIdx = 79;
	  section.data(77).dtTransOffset = 87;
	
	  ;% hbv5azo3sw.Constant_Value_glskcdmgi0
	  section.data(78).logicalSrcIdx = 80;
	  section.data(78).dtTransOffset = 89;
	
	  ;% hbv5azo3sw.Gain_Gain_ev442xw5g3
	  section.data(79).logicalSrcIdx = 81;
	  section.data(79).dtTransOffset = 90;
	
	  ;% hbv5azo3sw.Gain1_Gain_bctn5kthma
	  section.data(80).logicalSrcIdx = 82;
	  section.data(80).dtTransOffset = 91;
	
	  ;% hbv5azo3sw.Gain2_Gain_omr2r2devz
	  section.data(81).logicalSrcIdx = 83;
	  section.data(81).dtTransOffset = 92;
	
	  ;% hbv5azo3sw.Gain3_Gain_iezjytb1ib
	  section.data(82).logicalSrcIdx = 84;
	  section.data(82).dtTransOffset = 93;
	
	  ;% hbv5azo3sw.Constant1_Value_ius3i4otxm
	  section.data(83).logicalSrcIdx = 85;
	  section.data(83).dtTransOffset = 94;
	
	  ;% hbv5azo3sw.Constant2_Value_j5v1xvugrn
	  section.data(84).logicalSrcIdx = 86;
	  section.data(84).dtTransOffset = 95;
	
	  ;% hbv5azo3sw.Constant_Value_p5m1vauvdr
	  section.data(85).logicalSrcIdx = 87;
	  section.data(85).dtTransOffset = 97;
	
	  ;% hbv5azo3sw.Gain_Gain_cqlkw4p3g1
	  section.data(86).logicalSrcIdx = 88;
	  section.data(86).dtTransOffset = 98;
	
	  ;% hbv5azo3sw.Gain1_Gain_ij2znuz5co
	  section.data(87).logicalSrcIdx = 89;
	  section.data(87).dtTransOffset = 99;
	
	  ;% hbv5azo3sw.Gain2_Gain_medwk1da45
	  section.data(88).logicalSrcIdx = 90;
	  section.data(88).dtTransOffset = 100;
	
	  ;% hbv5azo3sw.Gain3_Gain_j50dplxsob
	  section.data(89).logicalSrcIdx = 91;
	  section.data(89).dtTransOffset = 101;
	
	  ;% hbv5azo3sw.Constant1_Value_c4wnv34dlm
	  section.data(90).logicalSrcIdx = 92;
	  section.data(90).dtTransOffset = 102;
	
	  ;% hbv5azo3sw.Constant2_Value_i3cnjpylpr
	  section.data(91).logicalSrcIdx = 93;
	  section.data(91).dtTransOffset = 103;
	
	  ;% hbv5azo3sw.Constant_Value_m2h11to3lk
	  section.data(92).logicalSrcIdx = 94;
	  section.data(92).dtTransOffset = 105;
	
	  ;% hbv5azo3sw.Constant1_Value_ftvtqjp1us
	  section.data(93).logicalSrcIdx = 95;
	  section.data(93).dtTransOffset = 106;
	
	  ;% hbv5azo3sw.Constant1_Value_l2qqn3e4fv
	  section.data(94).logicalSrcIdx = 96;
	  section.data(94).dtTransOffset = 107;
	
	  ;% hbv5azo3sw.Bias_Bias_la31kdn2hs
	  section.data(95).logicalSrcIdx = 97;
	  section.data(95).dtTransOffset = 108;
	
	  ;% hbv5azo3sw.Bias1_Bias_ipdymfxp23
	  section.data(96).logicalSrcIdx = 98;
	  section.data(96).dtTransOffset = 109;
	
	  ;% hbv5azo3sw.RandomSource1_VarianceRTP
	  section.data(97).logicalSrcIdx = 99;
	  section.data(97).dtTransOffset = 118;
	
	  ;% hbv5azo3sw.Gain_Gain_jtp3rrvu3s
	  section.data(98).logicalSrcIdx = 100;
	  section.data(98).dtTransOffset = 119;
	
	  ;% hbv5azo3sw.RandomSource_VarianceRTP
	  section.data(99).logicalSrcIdx = 101;
	  section.data(99).dtTransOffset = 120;
	
	  ;% hbv5azo3sw.R3_Value
	  section.data(100).logicalSrcIdx = 102;
	  section.data(100).dtTransOffset = 121;
	
	  ;% hbv5azo3sw.MeasurementFcn3Inputs_Value
	  section.data(101).logicalSrcIdx = 103;
	  section.data(101).dtTransOffset = 130;
	
	  ;% hbv5azo3sw.Integrator1_AbsoluteTolerance
	  section.data(102).logicalSrcIdx = 104;
	  section.data(102).dtTransOffset = 131;
	
	  ;% hbv5azo3sw.Gain_Gain_cpl3z33sd4
	  section.data(103).logicalSrcIdx = 105;
	  section.data(103).dtTransOffset = 132;
	
	  ;% hbv5azo3sw.Gain2_Gain_n2hlwdziix
	  section.data(104).logicalSrcIdx = 106;
	  section.data(104).dtTransOffset = 133;
	
	  ;% hbv5azo3sw.Gain_Gain_deacltj5ll
	  section.data(105).logicalSrcIdx = 107;
	  section.data(105).dtTransOffset = 134;
	
	  ;% hbv5azo3sw.Gain1_Gain_fe0vmtwk5u
	  section.data(106).logicalSrcIdx = 108;
	  section.data(106).dtTransOffset = 135;
	
	  ;% hbv5azo3sw.Gain_Gain_m0ug0pnx04
	  section.data(107).logicalSrcIdx = 109;
	  section.data(107).dtTransOffset = 136;
	
	  ;% hbv5azo3sw.Gain2_Gain_gnrwoc1vc2
	  section.data(108).logicalSrcIdx = 110;
	  section.data(108).dtTransOffset = 137;
	
	  ;% hbv5azo3sw.Gain1_Gain_epkzxiktj2
	  section.data(109).logicalSrcIdx = 111;
	  section.data(109).dtTransOffset = 138;
	
	  ;% hbv5azo3sw.Gain_Gain_efwlgxe2sc
	  section.data(110).logicalSrcIdx = 112;
	  section.data(110).dtTransOffset = 139;
	
	  ;% hbv5azo3sw.Gain1_Gain_ito2bip4nt
	  section.data(111).logicalSrcIdx = 113;
	  section.data(111).dtTransOffset = 140;
	
	  ;% hbv5azo3sw.Gain2_Gain_kojiuv3vcw
	  section.data(112).logicalSrcIdx = 114;
	  section.data(112).dtTransOffset = 141;
	
	  ;% hbv5azo3sw.RandomSource1_VarianceRTP_iazwfq1jw0
	  section.data(113).logicalSrcIdx = 115;
	  section.data(113).dtTransOffset = 142;
	
	  ;% hbv5azo3sw.Saturation_UpperSat
	  section.data(114).logicalSrcIdx = 116;
	  section.data(114).dtTransOffset = 143;
	
	  ;% hbv5azo3sw.Saturation_LowerSat
	  section.data(115).logicalSrcIdx = 117;
	  section.data(115).dtTransOffset = 144;
	
	  ;% hbv5azo3sw.RandomSource1_VarianceRTP_c0tnp0ox24
	  section.data(116).logicalSrcIdx = 118;
	  section.data(116).dtTransOffset = 145;
	
	  ;% hbv5azo3sw.Saturation_UpperSat_iasva3d1xg
	  section.data(117).logicalSrcIdx = 119;
	  section.data(117).dtTransOffset = 146;
	
	  ;% hbv5azo3sw.Saturation_LowerSat_k012nv1qgk
	  section.data(118).logicalSrcIdx = 120;
	  section.data(118).dtTransOffset = 147;
	
	  ;% hbv5azo3sw.RandomSource1_VarianceRTP_ciqyogzko1
	  section.data(119).logicalSrcIdx = 121;
	  section.data(119).dtTransOffset = 148;
	
	  ;% hbv5azo3sw.Saturation_UpperSat_kvrw4yrrrs
	  section.data(120).logicalSrcIdx = 122;
	  section.data(120).dtTransOffset = 149;
	
	  ;% hbv5azo3sw.Saturation_LowerSat_kx5yh1wv4z
	  section.data(121).logicalSrcIdx = 123;
	  section.data(121).dtTransOffset = 150;
	
	  ;% hbv5azo3sw.RandomSource1_VarianceRTP_f4hdv51tm4
	  section.data(122).logicalSrcIdx = 124;
	  section.data(122).dtTransOffset = 151;
	
	  ;% hbv5azo3sw.Saturation_UpperSat_byrofjxopf
	  section.data(123).logicalSrcIdx = 125;
	  section.data(123).dtTransOffset = 152;
	
	  ;% hbv5azo3sw.Saturation_LowerSat_eqtwttitcd
	  section.data(124).logicalSrcIdx = 126;
	  section.data(124).dtTransOffset = 153;
	
	  ;% hbv5azo3sw.RandomSource1_VarianceRTP_g12uaggma2
	  section.data(125).logicalSrcIdx = 127;
	  section.data(125).dtTransOffset = 154;
	
	  ;% hbv5azo3sw.Saturation_UpperSat_llltpjmasd
	  section.data(126).logicalSrcIdx = 128;
	  section.data(126).dtTransOffset = 155;
	
	  ;% hbv5azo3sw.Saturation_LowerSat_od1cxjykdq
	  section.data(127).logicalSrcIdx = 129;
	  section.data(127).dtTransOffset = 156;
	
	  ;% hbv5azo3sw.RandomSource1_VarianceRTP_bdmhqmxko4
	  section.data(128).logicalSrcIdx = 130;
	  section.data(128).dtTransOffset = 157;
	
	  ;% hbv5azo3sw.Saturation_UpperSat_e1cwi1gybf
	  section.data(129).logicalSrcIdx = 131;
	  section.data(129).dtTransOffset = 158;
	
	  ;% hbv5azo3sw.Saturation_LowerSat_ajttgxrnng
	  section.data(130).logicalSrcIdx = 132;
	  section.data(130).dtTransOffset = 159;
	
	  ;% hbv5azo3sw.R2_Value
	  section.data(131).logicalSrcIdx = 133;
	  section.data(131).dtTransOffset = 160;
	
	  ;% hbv5azo3sw.Gain1_Gain_csudgssrcg
	  section.data(132).logicalSrcIdx = 134;
	  section.data(132).dtTransOffset = 164;
	
	  ;% hbv5azo3sw.Gain2_Gain_nben4kjacq
	  section.data(133).logicalSrcIdx = 135;
	  section.data(133).dtTransOffset = 165;
	
	  ;% hbv5azo3sw.Gain_Gain_kewyutalpa
	  section.data(134).logicalSrcIdx = 136;
	  section.data(134).dtTransOffset = 166;
	
	  ;% hbv5azo3sw.Gain1_Gain_e5ngzsvcli
	  section.data(135).logicalSrcIdx = 137;
	  section.data(135).dtTransOffset = 167;
	
	  ;% hbv5azo3sw.Gain_Gain_fouuav1ki1
	  section.data(136).logicalSrcIdx = 138;
	  section.data(136).dtTransOffset = 168;
	
	  ;% hbv5azo3sw.Gain2_Gain_d4fbbaxwpd
	  section.data(137).logicalSrcIdx = 139;
	  section.data(137).dtTransOffset = 169;
	
	  ;% hbv5azo3sw.Gain1_Gain_lq4olh4tnx
	  section.data(138).logicalSrcIdx = 140;
	  section.data(138).dtTransOffset = 170;
	
	  ;% hbv5azo3sw.Gain_Gain_kc1cpqscqf
	  section.data(139).logicalSrcIdx = 141;
	  section.data(139).dtTransOffset = 171;
	
	  ;% hbv5azo3sw.Gain1_Gain_n4q3gythod
	  section.data(140).logicalSrcIdx = 142;
	  section.data(140).dtTransOffset = 172;
	
	  ;% hbv5azo3sw.Gain2_Gain_arhr50dupm
	  section.data(141).logicalSrcIdx = 143;
	  section.data(141).dtTransOffset = 173;
	
	  ;% hbv5azo3sw.RandomSource1_VarianceRTP_k1b5meiqjj
	  section.data(142).logicalSrcIdx = 144;
	  section.data(142).dtTransOffset = 174;
	
	  ;% hbv5azo3sw.Saturation_UpperSat_hvo4j1520s
	  section.data(143).logicalSrcIdx = 145;
	  section.data(143).dtTransOffset = 175;
	
	  ;% hbv5azo3sw.Saturation_LowerSat_anwhzkhsgm
	  section.data(144).logicalSrcIdx = 146;
	  section.data(144).dtTransOffset = 176;
	
	  ;% hbv5azo3sw.RandomSource1_VarianceRTP_pdcijtaj4d
	  section.data(145).logicalSrcIdx = 147;
	  section.data(145).dtTransOffset = 177;
	
	  ;% hbv5azo3sw.Saturation_UpperSat_m5walzmpht
	  section.data(146).logicalSrcIdx = 148;
	  section.data(146).dtTransOffset = 178;
	
	  ;% hbv5azo3sw.Saturation_LowerSat_kiy0a1gdvs
	  section.data(147).logicalSrcIdx = 149;
	  section.data(147).dtTransOffset = 179;
	
	  ;% hbv5azo3sw.RandomSource1_VarianceRTP_crqc3mkc0f
	  section.data(148).logicalSrcIdx = 150;
	  section.data(148).dtTransOffset = 180;
	
	  ;% hbv5azo3sw.Saturation_UpperSat_m5kmh5w5uw
	  section.data(149).logicalSrcIdx = 151;
	  section.data(149).dtTransOffset = 181;
	
	  ;% hbv5azo3sw.Saturation_LowerSat_i04nwcukho
	  section.data(150).logicalSrcIdx = 152;
	  section.data(150).dtTransOffset = 182;
	
	  ;% hbv5azo3sw.RandomSource1_VarianceRTP_blin0jucej
	  section.data(151).logicalSrcIdx = 153;
	  section.data(151).dtTransOffset = 183;
	
	  ;% hbv5azo3sw.Saturation_UpperSat_c4xiqwgxlz
	  section.data(152).logicalSrcIdx = 154;
	  section.data(152).dtTransOffset = 184;
	
	  ;% hbv5azo3sw.Saturation_LowerSat_pi2aujffw1
	  section.data(153).logicalSrcIdx = 155;
	  section.data(153).dtTransOffset = 185;
	
	  ;% hbv5azo3sw.RandomSource1_VarianceRTP_dvuf3vyvl4
	  section.data(154).logicalSrcIdx = 156;
	  section.data(154).dtTransOffset = 186;
	
	  ;% hbv5azo3sw.Saturation_UpperSat_mq4hmkw4m2
	  section.data(155).logicalSrcIdx = 157;
	  section.data(155).dtTransOffset = 187;
	
	  ;% hbv5azo3sw.Saturation_LowerSat_dqoi00mxim
	  section.data(156).logicalSrcIdx = 158;
	  section.data(156).dtTransOffset = 188;
	
	  ;% hbv5azo3sw.RandomSource1_VarianceRTP_cg3jlumacb
	  section.data(157).logicalSrcIdx = 159;
	  section.data(157).dtTransOffset = 189;
	
	  ;% hbv5azo3sw.Saturation_UpperSat_kiybxhvwme
	  section.data(158).logicalSrcIdx = 160;
	  section.data(158).dtTransOffset = 190;
	
	  ;% hbv5azo3sw.Saturation_LowerSat_lktmm4bxfn
	  section.data(159).logicalSrcIdx = 161;
	  section.data(159).dtTransOffset = 191;
	
	  ;% hbv5azo3sw.R1_Value
	  section.data(160).logicalSrcIdx = 162;
	  section.data(160).dtTransOffset = 192;
	
	  ;% hbv5azo3sw.Gain_Gain_bi5br4oxvh
	  section.data(161).logicalSrcIdx = 163;
	  section.data(161).dtTransOffset = 196;
	
	  ;% hbv5azo3sw.Gain1_Gain_cftaqvkxoi
	  section.data(162).logicalSrcIdx = 164;
	  section.data(162).dtTransOffset = 197;
	
	  ;% hbv5azo3sw.Gain2_Gain_lwwetqjf5s
	  section.data(163).logicalSrcIdx = 165;
	  section.data(163).dtTransOffset = 198;
	
	  ;% hbv5azo3sw.Gain_Gain_eb5rzn1cjw
	  section.data(164).logicalSrcIdx = 166;
	  section.data(164).dtTransOffset = 199;
	
	  ;% hbv5azo3sw.Gain1_Gain_i4m04mlldw
	  section.data(165).logicalSrcIdx = 167;
	  section.data(165).dtTransOffset = 200;
	
	  ;% hbv5azo3sw.Gain3_Gain_b5qqmritsc
	  section.data(166).logicalSrcIdx = 168;
	  section.data(166).dtTransOffset = 201;
	
	  ;% hbv5azo3sw.Merge_InitialOutput
	  section.data(167).logicalSrcIdx = 169;
	  section.data(167).dtTransOffset = 202;
	
	  ;% hbv5azo3sw.Gain_Gain_cf5hb10y5x
	  section.data(168).logicalSrcIdx = 170;
	  section.data(168).dtTransOffset = 206;
	
	  ;% hbv5azo3sw.Gain2_Gain_n32pjfxnui
	  section.data(169).logicalSrcIdx = 171;
	  section.data(169).dtTransOffset = 207;
	
	  ;% hbv5azo3sw.Gain1_Gain_gwlrw1w2b3
	  section.data(170).logicalSrcIdx = 172;
	  section.data(170).dtTransOffset = 208;
	
	  ;% hbv5azo3sw.Gain_Gain_efnax0y1dx
	  section.data(171).logicalSrcIdx = 173;
	  section.data(171).dtTransOffset = 209;
	
	  ;% hbv5azo3sw.Gain1_Gain_ddeccjfmea
	  section.data(172).logicalSrcIdx = 174;
	  section.data(172).dtTransOffset = 210;
	
	  ;% hbv5azo3sw.Gain2_Gain_g2ebct4dqc
	  section.data(173).logicalSrcIdx = 175;
	  section.data(173).dtTransOffset = 211;
	
	  ;% hbv5azo3sw.Gain2_Gain_cko11epp5n
	  section.data(174).logicalSrcIdx = 176;
	  section.data(174).dtTransOffset = 212;
	
	  ;% hbv5azo3sw.Gain_Gain_cjicctxqb2
	  section.data(175).logicalSrcIdx = 177;
	  section.data(175).dtTransOffset = 213;
	
	  ;% hbv5azo3sw.Gain1_Gain_nieh11pzcd
	  section.data(176).logicalSrcIdx = 178;
	  section.data(176).dtTransOffset = 214;
	
	  ;% hbv5azo3sw.Gain_Gain_m4jtdwqsx1
	  section.data(177).logicalSrcIdx = 179;
	  section.data(177).dtTransOffset = 215;
	
	  ;% hbv5azo3sw.Gain_Gain_cnryscy0x5
	  section.data(178).logicalSrcIdx = 180;
	  section.data(178).dtTransOffset = 216;
	
	  ;% hbv5azo3sw.Gain_Gain_flpxquj1at
	  section.data(179).logicalSrcIdx = 181;
	  section.data(179).dtTransOffset = 217;
	
	  ;% hbv5azo3sw.Gain_Gain_fsocaetgdj
	  section.data(180).logicalSrcIdx = 182;
	  section.data(180).dtTransOffset = 218;
	
	  ;% hbv5azo3sw.Gain1_Gain_igcxviai5g
	  section.data(181).logicalSrcIdx = 183;
	  section.data(181).dtTransOffset = 219;
	
	  ;% hbv5azo3sw.Gain2_Gain_mcrod3aisq
	  section.data(182).logicalSrcIdx = 184;
	  section.data(182).dtTransOffset = 220;
	
	  ;% hbv5azo3sw.Gain2_Gain_d0aeb3inpf
	  section.data(183).logicalSrcIdx = 185;
	  section.data(183).dtTransOffset = 221;
	
	  ;% hbv5azo3sw.Gain_Gain_avgts0xajn
	  section.data(184).logicalSrcIdx = 186;
	  section.data(184).dtTransOffset = 222;
	
	  ;% hbv5azo3sw.Gain1_Gain_pfgznzxep3
	  section.data(185).logicalSrcIdx = 187;
	  section.data(185).dtTransOffset = 223;
	
	  ;% hbv5azo3sw.Gain_Gain_l4qk2foong
	  section.data(186).logicalSrcIdx = 188;
	  section.data(186).dtTransOffset = 224;
	
	  ;% hbv5azo3sw.Gain2_Gain_jbi3ws3ahy
	  section.data(187).logicalSrcIdx = 189;
	  section.data(187).dtTransOffset = 225;
	
	  ;% hbv5azo3sw.Gain1_Gain_b2dtklqw2b
	  section.data(188).logicalSrcIdx = 190;
	  section.data(188).dtTransOffset = 226;
	
	  ;% hbv5azo3sw.Gain1_Gain_objsqoebrs
	  section.data(189).logicalSrcIdx = 191;
	  section.data(189).dtTransOffset = 227;
	
	  ;% hbv5azo3sw.Integrator_AbsoluteTolerance
	  section.data(190).logicalSrcIdx = 192;
	  section.data(190).dtTransOffset = 228;
	
	  ;% hbv5azo3sw.Gain_Gain_ij5ephcub4
	  section.data(191).logicalSrcIdx = 193;
	  section.data(191).dtTransOffset = 229;
	
	  ;% hbv5azo3sw.Gain1_Gain_fos5u53xa3
	  section.data(192).logicalSrcIdx = 194;
	  section.data(192).dtTransOffset = 230;
	
	  ;% hbv5azo3sw.Gain_Gain_fosanw5ymw
	  section.data(193).logicalSrcIdx = 195;
	  section.data(193).dtTransOffset = 231;
	
	  ;% hbv5azo3sw.Gain_Gain_acmfvzt2nt
	  section.data(194).logicalSrcIdx = 196;
	  section.data(194).dtTransOffset = 232;
	
	  ;% hbv5azo3sw.Merge_InitialOutput_faglwg4vcm
	  section.data(195).logicalSrcIdx = 197;
	  section.data(195).dtTransOffset = 233;
	
	  ;% hbv5azo3sw.Q_Value
	  section.data(196).logicalSrcIdx = 198;
	  section.data(196).dtTransOffset = 237;
	
	  ;% hbv5azo3sw.DataStoreMemoryP_InitialValue
	  section.data(197).logicalSrcIdx = 199;
	  section.data(197).dtTransOffset = 337;
	
	  ;% hbv5azo3sw.DataStoreMemoryx_InitialValue
	  section.data(198).logicalSrcIdx = 200;
	  section.data(198).dtTransOffset = 437;
	
	  ;% hbv5azo3sw.Constant2_Value_ialq4qchdp
	  section.data(199).logicalSrcIdx = 201;
	  section.data(199).dtTransOffset = 447;
	
	  ;% hbv5azo3sw.Constant3_Value
	  section.data(200).logicalSrcIdx = 202;
	  section.data(200).dtTransOffset = 450;
	
	  ;% hbv5azo3sw.Gain1_Gain_l1jki2u5fa
	  section.data(201).logicalSrcIdx = 203;
	  section.data(201).dtTransOffset = 453;
	
	  ;% hbv5azo3sw.Inertia_Value
	  section.data(202).logicalSrcIdx = 204;
	  section.data(202).dtTransOffset = 454;
	
	  ;% hbv5azo3sw.Constant_Value_bpdqgjnrbi
	  section.data(203).logicalSrcIdx = 205;
	  section.data(203).dtTransOffset = 457;
	
	  ;% hbv5azo3sw.Constant_Value_lxx0buxvfk
	  section.data(204).logicalSrcIdx = 206;
	  section.data(204).dtTransOffset = 458;
	
	  ;% hbv5azo3sw.Constant_Value_a2jieicat5
	  section.data(205).logicalSrcIdx = 207;
	  section.data(205).dtTransOffset = 459;
	
	  ;% hbv5azo3sw.Constant_Value_ollq4x5vyn
	  section.data(206).logicalSrcIdx = 208;
	  section.data(206).dtTransOffset = 460;
	
	  ;% hbv5azo3sw.Constant_Value_jelrytb22b
	  section.data(207).logicalSrcIdx = 209;
	  section.data(207).dtTransOffset = 461;
	
	  ;% hbv5azo3sw.Constant_Value_nfqnghygav
	  section.data(208).logicalSrcIdx = 210;
	  section.data(208).dtTransOffset = 462;
	
	  ;% hbv5azo3sw.Spacecraftmagneticdipolebodyreferenceframe_Value
	  section.data(209).logicalSrcIdx = 211;
	  section.data(209).dtTransOffset = 463;
	
	  ;% hbv5azo3sw.Constant_Value_ekkpqgqspn
	  section.data(210).logicalSrcIdx = 212;
	  section.data(210).dtTransOffset = 466;
	
	  ;% hbv5azo3sw.Constant_Value_hrofb0v0v5
	  section.data(211).logicalSrcIdx = 213;
	  section.data(211).dtTransOffset = 467;
	
	  ;% hbv5azo3sw.Constant_Value_klghvcvqmj
	  section.data(212).logicalSrcIdx = 214;
	  section.data(212).dtTransOffset = 468;
	
	  ;% hbv5azo3sw.Constant_Value_h3axm4dzs2
	  section.data(213).logicalSrcIdx = 215;
	  section.data(213).dtTransOffset = 469;
	
	  ;% hbv5azo3sw.Constant_Value_jsi055lqf3
	  section.data(214).logicalSrcIdx = 216;
	  section.data(214).dtTransOffset = 470;
	
	  ;% hbv5azo3sw.u821stMarch_Value
	  section.data(215).logicalSrcIdx = 217;
	  section.data(215).dtTransOffset = 471;
	
	  ;% hbv5azo3sw.Gain1_Gain_km22rji0yo
	  section.data(216).logicalSrcIdx = 218;
	  section.data(216).dtTransOffset = 472;
	
	  ;% hbv5azo3sw.Constant_Value_c0ie4jx1vv
	  section.data(217).logicalSrcIdx = 219;
	  section.data(217).dtTransOffset = 473;
	
	  ;% hbv5azo3sw.Constant1_Value_lvvzxuwh5z
	  section.data(218).logicalSrcIdx = 220;
	  section.data(218).dtTransOffset = 474;
	
	  ;% hbv5azo3sw.Sun_Value
	  section.data(219).logicalSrcIdx = 221;
	  section.data(219).dtTransOffset = 475;
	
	  ;% hbv5azo3sw.a_Value
	  section.data(220).logicalSrcIdx = 222;
	  section.data(220).dtTransOffset = 476;
	
	  ;% hbv5azo3sw.e_Value
	  section.data(221).logicalSrcIdx = 223;
	  section.data(221).dtTransOffset = 477;
	
	  ;% hbv5azo3sw.Constant_Value_hn3g4e2bdf
	  section.data(222).logicalSrcIdx = 224;
	  section.data(222).dtTransOffset = 478;
	
	  ;% hbv5azo3sw.Constant_Value_cinqqywm1t
	  section.data(223).logicalSrcIdx = 225;
	  section.data(223).dtTransOffset = 479;
	
	  ;% hbv5azo3sw.Constant_Value_aglfz4cib2
	  section.data(224).logicalSrcIdx = 226;
	  section.data(224).dtTransOffset = 480;
	
	  ;% hbv5azo3sw.Anglebetween3rdJanto21stMarch180_Value
	  section.data(225).logicalSrcIdx = 227;
	  section.data(225).dtTransOffset = 481;
	
	  ;% hbv5azo3sw.Constant_Value_mgrgcefnc2
	  section.data(226).logicalSrcIdx = 228;
	  section.data(226).dtTransOffset = 482;
	
	  ;% hbv5azo3sw.Constant5_Value
	  section.data(227).logicalSrcIdx = 229;
	  section.data(227).dtTransOffset = 483;
	
	  ;% hbv5azo3sw.Ecliptic_Value
	  section.data(228).logicalSrcIdx = 230;
	  section.data(228).dtTransOffset = 484;
	
	  ;% hbv5azo3sw.Gain_Gain_nrquqjsjbh
	  section.data(229).logicalSrcIdx = 231;
	  section.data(229).dtTransOffset = 485;
	
	  ;% hbv5azo3sw.Gain1_Gain_byeui5d4hz
	  section.data(230).logicalSrcIdx = 232;
	  section.data(230).dtTransOffset = 486;
	
	  ;% hbv5azo3sw.Constant_Value_azddlyivju
	  section.data(231).logicalSrcIdx = 233;
	  section.data(231).dtTransOffset = 487;
	
	  ;% hbv5azo3sw.Constant3_Value_fveye0j2gb
	  section.data(232).logicalSrcIdx = 234;
	  section.data(232).dtTransOffset = 488;
	
	  ;% hbv5azo3sw.u2_Gain
	  section.data(233).logicalSrcIdx = 235;
	  section.data(233).dtTransOffset = 489;
	
	  ;% hbv5azo3sw.Constant_Value_mrthaqohbp
	  section.data(234).logicalSrcIdx = 236;
	  section.data(234).dtTransOffset = 490;
	
	  ;% hbv5azo3sw.Gain_Gain_msviodsdfg
	  section.data(235).logicalSrcIdx = 237;
	  section.data(235).dtTransOffset = 491;
	
	  ;% hbv5azo3sw.Gain1_Gain_fdnpx3hnab
	  section.data(236).logicalSrcIdx = 238;
	  section.data(236).dtTransOffset = 492;
	
	  ;% hbv5azo3sw.Gain2_Gain_jrylcyky0d
	  section.data(237).logicalSrcIdx = 239;
	  section.data(237).dtTransOffset = 493;
	
	  ;% hbv5azo3sw.Constant_Value_gob0mxnrc1
	  section.data(238).logicalSrcIdx = 240;
	  section.data(238).dtTransOffset = 494;
	
	  ;% hbv5azo3sw.Gain_Gain_j00moojqwi
	  section.data(239).logicalSrcIdx = 241;
	  section.data(239).dtTransOffset = 495;
	
	  ;% hbv5azo3sw.Gain1_Gain_epavf05nx2
	  section.data(240).logicalSrcIdx = 242;
	  section.data(240).dtTransOffset = 496;
	
	  ;% hbv5azo3sw.Gain2_Gain_jieczjcfxj
	  section.data(241).logicalSrcIdx = 243;
	  section.data(241).dtTransOffset = 497;
	
	  ;% hbv5azo3sw.Constant_Value_l4ftm45smy
	  section.data(242).logicalSrcIdx = 244;
	  section.data(242).dtTransOffset = 498;
	
	  ;% hbv5azo3sw.Gain_Gain_lxppc43sr3
	  section.data(243).logicalSrcIdx = 245;
	  section.data(243).dtTransOffset = 499;
	
	  ;% hbv5azo3sw.Gain1_Gain_pr0mjxkeko
	  section.data(244).logicalSrcIdx = 246;
	  section.data(244).dtTransOffset = 500;
	
	  ;% hbv5azo3sw.Gain2_Gain_oh11qzcnsq
	  section.data(245).logicalSrcIdx = 247;
	  section.data(245).dtTransOffset = 501;
	
	  ;% hbv5azo3sw.Constant3_Value_aiagav1bu5
	  section.data(246).logicalSrcIdx = 248;
	  section.data(246).dtTransOffset = 502;
	
	  ;% hbv5azo3sw.Constant4_Value
	  section.data(247).logicalSrcIdx = 249;
	  section.data(247).dtTransOffset = 503;
	
	  ;% hbv5azo3sw.Constant_Value_fjyq3eus5i
	  section.data(248).logicalSrcIdx = 250;
	  section.data(248).dtTransOffset = 504;
	
	  ;% hbv5azo3sw.Constant_Value_cpj53jxfos
	  section.data(249).logicalSrcIdx = 251;
	  section.data(249).dtTransOffset = 505;
	
	  ;% hbv5azo3sw.Constant_Value_ouyamitdob
	  section.data(250).logicalSrcIdx = 252;
	  section.data(250).dtTransOffset = 506;
	
	  ;% hbv5azo3sw.Constant_Value_guhbgdhd5y
	  section.data(251).logicalSrcIdx = 253;
	  section.data(251).dtTransOffset = 507;
	
	  ;% hbv5azo3sw.Constant_Value_k3ydr0xveb
	  section.data(252).logicalSrcIdx = 254;
	  section.data(252).dtTransOffset = 508;
	
	  ;% hbv5azo3sw.Constant_Value_pu1egqm5wd
	  section.data(253).logicalSrcIdx = 255;
	  section.data(253).dtTransOffset = 510;
	
	  ;% hbv5azo3sw.Sensororientation_Value
	  section.data(254).logicalSrcIdx = 256;
	  section.data(254).dtTransOffset = 511;
	
	  ;% hbv5azo3sw.Constant_Value_hucifuffuc
	  section.data(255).logicalSrcIdx = 257;
	  section.data(255).dtTransOffset = 515;
	
	  ;% hbv5azo3sw.Gain_Gain_gakfyjlszi
	  section.data(256).logicalSrcIdx = 258;
	  section.data(256).dtTransOffset = 516;
	
	  ;% hbv5azo3sw.Gain1_Gain_cp5gxmxv40
	  section.data(257).logicalSrcIdx = 259;
	  section.data(257).dtTransOffset = 517;
	
	  ;% hbv5azo3sw.Gain2_Gain_bqvzfgganp
	  section.data(258).logicalSrcIdx = 260;
	  section.data(258).dtTransOffset = 518;
	
	  ;% hbv5azo3sw.Constant_Value_itxm0x43si
	  section.data(259).logicalSrcIdx = 261;
	  section.data(259).dtTransOffset = 519;
	
	  ;% hbv5azo3sw.Gain_Gain_jcxnesc51s
	  section.data(260).logicalSrcIdx = 262;
	  section.data(260).dtTransOffset = 520;
	
	  ;% hbv5azo3sw.Gain1_Gain_e5tqo52tku
	  section.data(261).logicalSrcIdx = 263;
	  section.data(261).dtTransOffset = 521;
	
	  ;% hbv5azo3sw.Gain2_Gain_jxsi55a1on
	  section.data(262).logicalSrcIdx = 264;
	  section.data(262).dtTransOffset = 522;
	
	  ;% hbv5azo3sw.Constant_Value_ezafw5tbx0
	  section.data(263).logicalSrcIdx = 265;
	  section.data(263).dtTransOffset = 523;
	
	  ;% hbv5azo3sw.Gain_Gain_omyfgx1n5h
	  section.data(264).logicalSrcIdx = 266;
	  section.data(264).dtTransOffset = 524;
	
	  ;% hbv5azo3sw.Gain1_Gain_n4ecq0uzvs
	  section.data(265).logicalSrcIdx = 267;
	  section.data(265).dtTransOffset = 525;
	
	  ;% hbv5azo3sw.Gain2_Gain_bxmfdcbxd2
	  section.data(266).logicalSrcIdx = 268;
	  section.data(266).dtTransOffset = 526;
	
	  ;% hbv5azo3sw.Constant_Value_cknsmwduvj
	  section.data(267).logicalSrcIdx = 269;
	  section.data(267).dtTransOffset = 527;
	
	  ;% hbv5azo3sw.Constant_Value_oqac1ckjba
	  section.data(268).logicalSrcIdx = 270;
	  section.data(268).dtTransOffset = 529;
	
	  ;% hbv5azo3sw.Sensororientation_Value_hlfjdstuhw
	  section.data(269).logicalSrcIdx = 271;
	  section.data(269).dtTransOffset = 530;
	
	  ;% hbv5azo3sw.Constant_Value_kst2th0l1z
	  section.data(270).logicalSrcIdx = 272;
	  section.data(270).dtTransOffset = 534;
	
	  ;% hbv5azo3sw.Gain_Gain_cr4zczeez0
	  section.data(271).logicalSrcIdx = 273;
	  section.data(271).dtTransOffset = 535;
	
	  ;% hbv5azo3sw.Gain1_Gain_g12m14aft0
	  section.data(272).logicalSrcIdx = 274;
	  section.data(272).dtTransOffset = 536;
	
	  ;% hbv5azo3sw.Gain2_Gain_enxakegu4s
	  section.data(273).logicalSrcIdx = 275;
	  section.data(273).dtTransOffset = 537;
	
	  ;% hbv5azo3sw.Constant_Value_igmvdrtaty
	  section.data(274).logicalSrcIdx = 276;
	  section.data(274).dtTransOffset = 538;
	
	  ;% hbv5azo3sw.Gain_Gain_lw5hirdrrr
	  section.data(275).logicalSrcIdx = 277;
	  section.data(275).dtTransOffset = 539;
	
	  ;% hbv5azo3sw.Gain1_Gain_amkbhcbkvw
	  section.data(276).logicalSrcIdx = 278;
	  section.data(276).dtTransOffset = 540;
	
	  ;% hbv5azo3sw.Gain2_Gain_bttjb1ulla
	  section.data(277).logicalSrcIdx = 279;
	  section.data(277).dtTransOffset = 541;
	
	  ;% hbv5azo3sw.Constant_Value_m4goabuepu
	  section.data(278).logicalSrcIdx = 280;
	  section.data(278).dtTransOffset = 542;
	
	  ;% hbv5azo3sw.Gain_Gain_pmdq3xatwv
	  section.data(279).logicalSrcIdx = 281;
	  section.data(279).dtTransOffset = 543;
	
	  ;% hbv5azo3sw.Gain1_Gain_bgbnv4z5nx
	  section.data(280).logicalSrcIdx = 282;
	  section.data(280).dtTransOffset = 544;
	
	  ;% hbv5azo3sw.Gain2_Gain_cdbsbiii2b
	  section.data(281).logicalSrcIdx = 283;
	  section.data(281).dtTransOffset = 545;
	
	  ;% hbv5azo3sw.Constant_Value_mxxxqc2s25
	  section.data(282).logicalSrcIdx = 284;
	  section.data(282).dtTransOffset = 546;
	
	  ;% hbv5azo3sw.Constant_Value_etis5qgp2s
	  section.data(283).logicalSrcIdx = 285;
	  section.data(283).dtTransOffset = 548;
	
	  ;% hbv5azo3sw.Sensororientation_Value_cwstcpopt3
	  section.data(284).logicalSrcIdx = 286;
	  section.data(284).dtTransOffset = 549;
	
	  ;% hbv5azo3sw.Constant_Value_lntxh0ukmr
	  section.data(285).logicalSrcIdx = 287;
	  section.data(285).dtTransOffset = 553;
	
	  ;% hbv5azo3sw.Gain_Gain_pfg5czu2ug
	  section.data(286).logicalSrcIdx = 288;
	  section.data(286).dtTransOffset = 554;
	
	  ;% hbv5azo3sw.Gain1_Gain_lgo5besblz
	  section.data(287).logicalSrcIdx = 289;
	  section.data(287).dtTransOffset = 555;
	
	  ;% hbv5azo3sw.Gain2_Gain_aaobkzaajt
	  section.data(288).logicalSrcIdx = 290;
	  section.data(288).dtTransOffset = 556;
	
	  ;% hbv5azo3sw.Constant_Value_imdxvhi4fs
	  section.data(289).logicalSrcIdx = 291;
	  section.data(289).dtTransOffset = 557;
	
	  ;% hbv5azo3sw.Gain_Gain_dmquktubpv
	  section.data(290).logicalSrcIdx = 292;
	  section.data(290).dtTransOffset = 558;
	
	  ;% hbv5azo3sw.Gain1_Gain_o20oz1n5pv
	  section.data(291).logicalSrcIdx = 293;
	  section.data(291).dtTransOffset = 559;
	
	  ;% hbv5azo3sw.Gain2_Gain_bxr0hdxmou
	  section.data(292).logicalSrcIdx = 294;
	  section.data(292).dtTransOffset = 560;
	
	  ;% hbv5azo3sw.Constant_Value_k0omy0fwkr
	  section.data(293).logicalSrcIdx = 295;
	  section.data(293).dtTransOffset = 561;
	
	  ;% hbv5azo3sw.Gain_Gain_app3p5qkli
	  section.data(294).logicalSrcIdx = 296;
	  section.data(294).dtTransOffset = 562;
	
	  ;% hbv5azo3sw.Gain1_Gain_ggc5pki3i3
	  section.data(295).logicalSrcIdx = 297;
	  section.data(295).dtTransOffset = 563;
	
	  ;% hbv5azo3sw.Gain2_Gain_jiiceq4a1g
	  section.data(296).logicalSrcIdx = 298;
	  section.data(296).dtTransOffset = 564;
	
	  ;% hbv5azo3sw.Constant_Value_pxpcd5bk3c
	  section.data(297).logicalSrcIdx = 299;
	  section.data(297).dtTransOffset = 565;
	
	  ;% hbv5azo3sw.Constant_Value_loxooi2xox
	  section.data(298).logicalSrcIdx = 300;
	  section.data(298).dtTransOffset = 567;
	
	  ;% hbv5azo3sw.Sensororientation_Value_escjrdlkcn
	  section.data(299).logicalSrcIdx = 301;
	  section.data(299).dtTransOffset = 568;
	
	  ;% hbv5azo3sw.Constant_Value_ba5xlpus1a
	  section.data(300).logicalSrcIdx = 302;
	  section.data(300).dtTransOffset = 572;
	
	  ;% hbv5azo3sw.Gain_Gain_kb00k2wbfq
	  section.data(301).logicalSrcIdx = 303;
	  section.data(301).dtTransOffset = 573;
	
	  ;% hbv5azo3sw.Gain1_Gain_iow1llvkxc
	  section.data(302).logicalSrcIdx = 304;
	  section.data(302).dtTransOffset = 574;
	
	  ;% hbv5azo3sw.Gain2_Gain_dtunvm3otp
	  section.data(303).logicalSrcIdx = 305;
	  section.data(303).dtTransOffset = 575;
	
	  ;% hbv5azo3sw.Constant_Value_eqda1kzn3h
	  section.data(304).logicalSrcIdx = 306;
	  section.data(304).dtTransOffset = 576;
	
	  ;% hbv5azo3sw.Gain_Gain_npe4zqgyas
	  section.data(305).logicalSrcIdx = 307;
	  section.data(305).dtTransOffset = 577;
	
	  ;% hbv5azo3sw.Gain1_Gain_fdxpyxu0o1
	  section.data(306).logicalSrcIdx = 308;
	  section.data(306).dtTransOffset = 578;
	
	  ;% hbv5azo3sw.Gain2_Gain_n4sn3p4zhh
	  section.data(307).logicalSrcIdx = 309;
	  section.data(307).dtTransOffset = 579;
	
	  ;% hbv5azo3sw.Constant_Value_j3hxujgyee
	  section.data(308).logicalSrcIdx = 310;
	  section.data(308).dtTransOffset = 580;
	
	  ;% hbv5azo3sw.Gain_Gain_caz4q343an
	  section.data(309).logicalSrcIdx = 311;
	  section.data(309).dtTransOffset = 581;
	
	  ;% hbv5azo3sw.Gain1_Gain_odtb3u3w54
	  section.data(310).logicalSrcIdx = 312;
	  section.data(310).dtTransOffset = 582;
	
	  ;% hbv5azo3sw.Gain2_Gain_pl1uwnp5vb
	  section.data(311).logicalSrcIdx = 313;
	  section.data(311).dtTransOffset = 583;
	
	  ;% hbv5azo3sw.Constant_Value_a5pfdrbwx4
	  section.data(312).logicalSrcIdx = 314;
	  section.data(312).dtTransOffset = 584;
	
	  ;% hbv5azo3sw.Constant_Value_h114kk0gb0
	  section.data(313).logicalSrcIdx = 315;
	  section.data(313).dtTransOffset = 586;
	
	  ;% hbv5azo3sw.Sensororientation_Value_ezbdisr3i3
	  section.data(314).logicalSrcIdx = 316;
	  section.data(314).dtTransOffset = 587;
	
	  ;% hbv5azo3sw.Constant_Value_myru2azkts
	  section.data(315).logicalSrcIdx = 317;
	  section.data(315).dtTransOffset = 591;
	
	  ;% hbv5azo3sw.Gain_Gain_jfezxdcuu1
	  section.data(316).logicalSrcIdx = 318;
	  section.data(316).dtTransOffset = 592;
	
	  ;% hbv5azo3sw.Gain1_Gain_mzwjkwmyds
	  section.data(317).logicalSrcIdx = 319;
	  section.data(317).dtTransOffset = 593;
	
	  ;% hbv5azo3sw.Gain2_Gain_pt1tknsnuk
	  section.data(318).logicalSrcIdx = 320;
	  section.data(318).dtTransOffset = 594;
	
	  ;% hbv5azo3sw.Constant_Value_mpzaspn304
	  section.data(319).logicalSrcIdx = 321;
	  section.data(319).dtTransOffset = 595;
	
	  ;% hbv5azo3sw.Gain_Gain_cylo5ppz5d
	  section.data(320).logicalSrcIdx = 322;
	  section.data(320).dtTransOffset = 596;
	
	  ;% hbv5azo3sw.Gain1_Gain_evkyndzct5
	  section.data(321).logicalSrcIdx = 323;
	  section.data(321).dtTransOffset = 597;
	
	  ;% hbv5azo3sw.Gain2_Gain_ogm3tj3b4p
	  section.data(322).logicalSrcIdx = 324;
	  section.data(322).dtTransOffset = 598;
	
	  ;% hbv5azo3sw.Constant_Value_ey5twm140q
	  section.data(323).logicalSrcIdx = 325;
	  section.data(323).dtTransOffset = 599;
	
	  ;% hbv5azo3sw.Gain_Gain_lnevd4sqnk
	  section.data(324).logicalSrcIdx = 326;
	  section.data(324).dtTransOffset = 600;
	
	  ;% hbv5azo3sw.Gain1_Gain_f5yo2mvezp
	  section.data(325).logicalSrcIdx = 327;
	  section.data(325).dtTransOffset = 601;
	
	  ;% hbv5azo3sw.Gain2_Gain_mg22nq4b3k
	  section.data(326).logicalSrcIdx = 328;
	  section.data(326).dtTransOffset = 602;
	
	  ;% hbv5azo3sw.Constant_Value_pb14rkkk1o
	  section.data(327).logicalSrcIdx = 329;
	  section.data(327).dtTransOffset = 603;
	
	  ;% hbv5azo3sw.Constant_Value_kd13wd1tn5
	  section.data(328).logicalSrcIdx = 330;
	  section.data(328).dtTransOffset = 605;
	
	  ;% hbv5azo3sw.Sensororientation_Value_luhksxjjam
	  section.data(329).logicalSrcIdx = 331;
	  section.data(329).dtTransOffset = 606;
	
	  ;% hbv5azo3sw.Constant_Value_kkk1dzjy3p
	  section.data(330).logicalSrcIdx = 332;
	  section.data(330).dtTransOffset = 610;
	
	  ;% hbv5azo3sw.Gain_Gain_f5mrtnkemr
	  section.data(331).logicalSrcIdx = 333;
	  section.data(331).dtTransOffset = 611;
	
	  ;% hbv5azo3sw.Gain1_Gain_fdh0g1o02u
	  section.data(332).logicalSrcIdx = 334;
	  section.data(332).dtTransOffset = 612;
	
	  ;% hbv5azo3sw.Gain2_Gain_gnny303ymj
	  section.data(333).logicalSrcIdx = 335;
	  section.data(333).dtTransOffset = 613;
	
	  ;% hbv5azo3sw.Constant_Value_jbyhakx4ay
	  section.data(334).logicalSrcIdx = 336;
	  section.data(334).dtTransOffset = 614;
	
	  ;% hbv5azo3sw.Gain_Gain_bkbvyxdlek
	  section.data(335).logicalSrcIdx = 337;
	  section.data(335).dtTransOffset = 615;
	
	  ;% hbv5azo3sw.Gain1_Gain_pbfdoucssu
	  section.data(336).logicalSrcIdx = 338;
	  section.data(336).dtTransOffset = 616;
	
	  ;% hbv5azo3sw.Gain2_Gain_ijreebnsuw
	  section.data(337).logicalSrcIdx = 339;
	  section.data(337).dtTransOffset = 617;
	
	  ;% hbv5azo3sw.Constant_Value_f1tb0wmrtm
	  section.data(338).logicalSrcIdx = 340;
	  section.data(338).dtTransOffset = 618;
	
	  ;% hbv5azo3sw.Gain_Gain_a2lqzra5qd
	  section.data(339).logicalSrcIdx = 341;
	  section.data(339).dtTransOffset = 619;
	
	  ;% hbv5azo3sw.Gain1_Gain_f45poxumoe
	  section.data(340).logicalSrcIdx = 342;
	  section.data(340).dtTransOffset = 620;
	
	  ;% hbv5azo3sw.Gain2_Gain_necstpfmlp
	  section.data(341).logicalSrcIdx = 343;
	  section.data(341).dtTransOffset = 621;
	
	  ;% hbv5azo3sw.Constant_Value_fvwrjd3qpo
	  section.data(342).logicalSrcIdx = 344;
	  section.data(342).dtTransOffset = 622;
	
	  ;% hbv5azo3sw.Constant_Value_pw4amn2wvf
	  section.data(343).logicalSrcIdx = 345;
	  section.data(343).dtTransOffset = 624;
	
	  ;% hbv5azo3sw.Sensororientation_Value_c1w03cmwlz
	  section.data(344).logicalSrcIdx = 346;
	  section.data(344).dtTransOffset = 625;
	
	  ;% hbv5azo3sw.Constant_Value_c0bcxggzid
	  section.data(345).logicalSrcIdx = 347;
	  section.data(345).dtTransOffset = 629;
	
	  ;% hbv5azo3sw.Gain_Gain_jom4zjkqot
	  section.data(346).logicalSrcIdx = 348;
	  section.data(346).dtTransOffset = 630;
	
	  ;% hbv5azo3sw.Gain1_Gain_ec5n4vlyml
	  section.data(347).logicalSrcIdx = 349;
	  section.data(347).dtTransOffset = 631;
	
	  ;% hbv5azo3sw.Gain2_Gain_ppb55hsf22
	  section.data(348).logicalSrcIdx = 350;
	  section.data(348).dtTransOffset = 632;
	
	  ;% hbv5azo3sw.Constant_Value_cd21hrcv55
	  section.data(349).logicalSrcIdx = 351;
	  section.data(349).dtTransOffset = 633;
	
	  ;% hbv5azo3sw.Gain_Gain_owfxeyg0hz
	  section.data(350).logicalSrcIdx = 352;
	  section.data(350).dtTransOffset = 634;
	
	  ;% hbv5azo3sw.Gain1_Gain_azstchlb2n
	  section.data(351).logicalSrcIdx = 353;
	  section.data(351).dtTransOffset = 635;
	
	  ;% hbv5azo3sw.Gain2_Gain_azs3a4y21d
	  section.data(352).logicalSrcIdx = 354;
	  section.data(352).dtTransOffset = 636;
	
	  ;% hbv5azo3sw.Constant_Value_i1rjqidmbj
	  section.data(353).logicalSrcIdx = 355;
	  section.data(353).dtTransOffset = 637;
	
	  ;% hbv5azo3sw.Gain_Gain_lp1ded333l
	  section.data(354).logicalSrcIdx = 356;
	  section.data(354).dtTransOffset = 638;
	
	  ;% hbv5azo3sw.Gain1_Gain_e5iewy4mku
	  section.data(355).logicalSrcIdx = 357;
	  section.data(355).dtTransOffset = 639;
	
	  ;% hbv5azo3sw.Gain2_Gain_p50urd0soy
	  section.data(356).logicalSrcIdx = 358;
	  section.data(356).dtTransOffset = 640;
	
	  ;% hbv5azo3sw.Constant_Value_o4pefzbbdu
	  section.data(357).logicalSrcIdx = 359;
	  section.data(357).dtTransOffset = 641;
	
	  ;% hbv5azo3sw.Constant_Value_peinfzh1bx
	  section.data(358).logicalSrcIdx = 360;
	  section.data(358).dtTransOffset = 643;
	
	  ;% hbv5azo3sw.Sensororientation_Value_f1bimmtkao
	  section.data(359).logicalSrcIdx = 361;
	  section.data(359).dtTransOffset = 644;
	
	  ;% hbv5azo3sw.Constant_Value_i54as2vhie
	  section.data(360).logicalSrcIdx = 362;
	  section.data(360).dtTransOffset = 648;
	
	  ;% hbv5azo3sw.Gain_Gain_aqtmdzg5ve
	  section.data(361).logicalSrcIdx = 363;
	  section.data(361).dtTransOffset = 649;
	
	  ;% hbv5azo3sw.Gain1_Gain_luiia42t5t
	  section.data(362).logicalSrcIdx = 364;
	  section.data(362).dtTransOffset = 650;
	
	  ;% hbv5azo3sw.Gain2_Gain_mb2nt12ulg
	  section.data(363).logicalSrcIdx = 365;
	  section.data(363).dtTransOffset = 651;
	
	  ;% hbv5azo3sw.Constant_Value_ogstggr2j3
	  section.data(364).logicalSrcIdx = 366;
	  section.data(364).dtTransOffset = 652;
	
	  ;% hbv5azo3sw.Gain_Gain_lychsiugxc
	  section.data(365).logicalSrcIdx = 367;
	  section.data(365).dtTransOffset = 653;
	
	  ;% hbv5azo3sw.Gain1_Gain_b1eddp32tw
	  section.data(366).logicalSrcIdx = 368;
	  section.data(366).dtTransOffset = 654;
	
	  ;% hbv5azo3sw.Gain2_Gain_nfkayg1huw
	  section.data(367).logicalSrcIdx = 369;
	  section.data(367).dtTransOffset = 655;
	
	  ;% hbv5azo3sw.Constant_Value_oetlq3b1z2
	  section.data(368).logicalSrcIdx = 370;
	  section.data(368).dtTransOffset = 656;
	
	  ;% hbv5azo3sw.Gain_Gain_nuvyvhffsa
	  section.data(369).logicalSrcIdx = 371;
	  section.data(369).dtTransOffset = 657;
	
	  ;% hbv5azo3sw.Gain1_Gain_ci4cvxslsl
	  section.data(370).logicalSrcIdx = 372;
	  section.data(370).dtTransOffset = 658;
	
	  ;% hbv5azo3sw.Gain2_Gain_ktgwyxzbfl
	  section.data(371).logicalSrcIdx = 373;
	  section.data(371).dtTransOffset = 659;
	
	  ;% hbv5azo3sw.Constant_Value_aqc3aba12o
	  section.data(372).logicalSrcIdx = 374;
	  section.data(372).dtTransOffset = 660;
	
	  ;% hbv5azo3sw.Constant_Value_agjbvr0z5q
	  section.data(373).logicalSrcIdx = 375;
	  section.data(373).dtTransOffset = 662;
	
	  ;% hbv5azo3sw.Sensororientation_Value_gzezhgiiva
	  section.data(374).logicalSrcIdx = 376;
	  section.data(374).dtTransOffset = 663;
	
	  ;% hbv5azo3sw.Constant_Value_dqtse52l4d
	  section.data(375).logicalSrcIdx = 377;
	  section.data(375).dtTransOffset = 667;
	
	  ;% hbv5azo3sw.Gain_Gain_mrg5lsnokn
	  section.data(376).logicalSrcIdx = 378;
	  section.data(376).dtTransOffset = 668;
	
	  ;% hbv5azo3sw.Gain1_Gain_hbwgr3wfvo
	  section.data(377).logicalSrcIdx = 379;
	  section.data(377).dtTransOffset = 669;
	
	  ;% hbv5azo3sw.Gain2_Gain_ez1qvjlr1d
	  section.data(378).logicalSrcIdx = 380;
	  section.data(378).dtTransOffset = 670;
	
	  ;% hbv5azo3sw.Constant_Value_aocyzox0ld
	  section.data(379).logicalSrcIdx = 381;
	  section.data(379).dtTransOffset = 671;
	
	  ;% hbv5azo3sw.Gain_Gain_hiv2r3l01b
	  section.data(380).logicalSrcIdx = 382;
	  section.data(380).dtTransOffset = 672;
	
	  ;% hbv5azo3sw.Gain1_Gain_pxrflmc1o4
	  section.data(381).logicalSrcIdx = 383;
	  section.data(381).dtTransOffset = 673;
	
	  ;% hbv5azo3sw.Gain2_Gain_g5qbykwveo
	  section.data(382).logicalSrcIdx = 384;
	  section.data(382).dtTransOffset = 674;
	
	  ;% hbv5azo3sw.Constant_Value_atme3hmtbv
	  section.data(383).logicalSrcIdx = 385;
	  section.data(383).dtTransOffset = 675;
	
	  ;% hbv5azo3sw.Gain_Gain_hgfy5zqhxv
	  section.data(384).logicalSrcIdx = 386;
	  section.data(384).dtTransOffset = 676;
	
	  ;% hbv5azo3sw.Gain1_Gain_eo1xrtusyu
	  section.data(385).logicalSrcIdx = 387;
	  section.data(385).dtTransOffset = 677;
	
	  ;% hbv5azo3sw.Gain2_Gain_ismz453fn1
	  section.data(386).logicalSrcIdx = 388;
	  section.data(386).dtTransOffset = 678;
	
	  ;% hbv5azo3sw.Constant_Value_kv3w21qse5
	  section.data(387).logicalSrcIdx = 389;
	  section.data(387).dtTransOffset = 679;
	
	  ;% hbv5azo3sw.Constant_Value_ktwwdrryx3
	  section.data(388).logicalSrcIdx = 390;
	  section.data(388).dtTransOffset = 681;
	
	  ;% hbv5azo3sw.Sensororientation_Value_pvtoldl5dv
	  section.data(389).logicalSrcIdx = 391;
	  section.data(389).dtTransOffset = 682;
	
	  ;% hbv5azo3sw.Constant_Value_epgscsipyz
	  section.data(390).logicalSrcIdx = 392;
	  section.data(390).dtTransOffset = 686;
	
	  ;% hbv5azo3sw.Gain_Gain_ena5yszh4w
	  section.data(391).logicalSrcIdx = 393;
	  section.data(391).dtTransOffset = 687;
	
	  ;% hbv5azo3sw.Gain1_Gain_eqkjxlvbiq
	  section.data(392).logicalSrcIdx = 394;
	  section.data(392).dtTransOffset = 688;
	
	  ;% hbv5azo3sw.Gain2_Gain_k0lo0mgba2
	  section.data(393).logicalSrcIdx = 395;
	  section.data(393).dtTransOffset = 689;
	
	  ;% hbv5azo3sw.Constant_Value_h300vfl4mv
	  section.data(394).logicalSrcIdx = 396;
	  section.data(394).dtTransOffset = 690;
	
	  ;% hbv5azo3sw.Gain_Gain_j4d3hvhs43
	  section.data(395).logicalSrcIdx = 397;
	  section.data(395).dtTransOffset = 691;
	
	  ;% hbv5azo3sw.Gain1_Gain_ceiu2lnwhi
	  section.data(396).logicalSrcIdx = 398;
	  section.data(396).dtTransOffset = 692;
	
	  ;% hbv5azo3sw.Gain2_Gain_htyiogkmpg
	  section.data(397).logicalSrcIdx = 399;
	  section.data(397).dtTransOffset = 693;
	
	  ;% hbv5azo3sw.Constant_Value_apsk02wc0m
	  section.data(398).logicalSrcIdx = 400;
	  section.data(398).dtTransOffset = 694;
	
	  ;% hbv5azo3sw.Gain_Gain_k42ekcf23x
	  section.data(399).logicalSrcIdx = 401;
	  section.data(399).dtTransOffset = 695;
	
	  ;% hbv5azo3sw.Gain1_Gain_izo4ouweai
	  section.data(400).logicalSrcIdx = 402;
	  section.data(400).dtTransOffset = 696;
	
	  ;% hbv5azo3sw.Gain2_Gain_bgeppzp5tr
	  section.data(401).logicalSrcIdx = 403;
	  section.data(401).dtTransOffset = 697;
	
	  ;% hbv5azo3sw.Constant_Value_ei4qxougxr
	  section.data(402).logicalSrcIdx = 404;
	  section.data(402).dtTransOffset = 698;
	
	  ;% hbv5azo3sw.Constant_Value_aefuqipo3z
	  section.data(403).logicalSrcIdx = 405;
	  section.data(403).dtTransOffset = 700;
	
	  ;% hbv5azo3sw.Sensororientation_Value_g4fybr4ojz
	  section.data(404).logicalSrcIdx = 406;
	  section.data(404).dtTransOffset = 701;
	
	  ;% hbv5azo3sw.Constant_Value_oi0kxpowja
	  section.data(405).logicalSrcIdx = 407;
	  section.data(405).dtTransOffset = 705;
	
	  ;% hbv5azo3sw.Gain_Gain_crryondw0o
	  section.data(406).logicalSrcIdx = 408;
	  section.data(406).dtTransOffset = 706;
	
	  ;% hbv5azo3sw.Gain1_Gain_lzvj53au2u
	  section.data(407).logicalSrcIdx = 409;
	  section.data(407).dtTransOffset = 707;
	
	  ;% hbv5azo3sw.Gain2_Gain_perzcljgjz
	  section.data(408).logicalSrcIdx = 410;
	  section.data(408).dtTransOffset = 708;
	
	  ;% hbv5azo3sw.Constant_Value_bx4ma4qdmb
	  section.data(409).logicalSrcIdx = 411;
	  section.data(409).dtTransOffset = 709;
	
	  ;% hbv5azo3sw.Gain_Gain_evjcc1eafd
	  section.data(410).logicalSrcIdx = 412;
	  section.data(410).dtTransOffset = 710;
	
	  ;% hbv5azo3sw.Gain1_Gain_gns40wabnm
	  section.data(411).logicalSrcIdx = 413;
	  section.data(411).dtTransOffset = 711;
	
	  ;% hbv5azo3sw.Gain2_Gain_i0hel0ofcl
	  section.data(412).logicalSrcIdx = 414;
	  section.data(412).dtTransOffset = 712;
	
	  ;% hbv5azo3sw.Constant_Value_ihm1fmgdud
	  section.data(413).logicalSrcIdx = 415;
	  section.data(413).dtTransOffset = 713;
	
	  ;% hbv5azo3sw.Gain_Gain_mniibtfrh4
	  section.data(414).logicalSrcIdx = 416;
	  section.data(414).dtTransOffset = 714;
	
	  ;% hbv5azo3sw.Gain1_Gain_dsk352okyn
	  section.data(415).logicalSrcIdx = 417;
	  section.data(415).dtTransOffset = 715;
	
	  ;% hbv5azo3sw.Gain2_Gain_f4f4o3e0ao
	  section.data(416).logicalSrcIdx = 418;
	  section.data(416).dtTransOffset = 716;
	
	  ;% hbv5azo3sw.Constant_Value_lod4m2end1
	  section.data(417).logicalSrcIdx = 419;
	  section.data(417).dtTransOffset = 717;
	
	  ;% hbv5azo3sw.Constant_Value_d3tr2oyhj4
	  section.data(418).logicalSrcIdx = 420;
	  section.data(418).dtTransOffset = 719;
	
	  ;% hbv5azo3sw.Sensororientation_Value_bfbchbxuif
	  section.data(419).logicalSrcIdx = 421;
	  section.data(419).dtTransOffset = 720;
	
	  ;% hbv5azo3sw.Constant_Value_j5awaeon0r
	  section.data(420).logicalSrcIdx = 422;
	  section.data(420).dtTransOffset = 724;
	
	  ;% hbv5azo3sw.Gain_Gain_l3rthal15j
	  section.data(421).logicalSrcIdx = 423;
	  section.data(421).dtTransOffset = 725;
	
	  ;% hbv5azo3sw.Gain1_Gain_dizs3vyxgq
	  section.data(422).logicalSrcIdx = 424;
	  section.data(422).dtTransOffset = 726;
	
	  ;% hbv5azo3sw.Gain2_Gain_im22oggu52
	  section.data(423).logicalSrcIdx = 425;
	  section.data(423).dtTransOffset = 727;
	
	  ;% hbv5azo3sw.Constant_Value_a1zgpg42vr
	  section.data(424).logicalSrcIdx = 426;
	  section.data(424).dtTransOffset = 728;
	
	  ;% hbv5azo3sw.Gain_Gain_pvyl4t2yw0
	  section.data(425).logicalSrcIdx = 427;
	  section.data(425).dtTransOffset = 729;
	
	  ;% hbv5azo3sw.Gain1_Gain_gqxohufbgj
	  section.data(426).logicalSrcIdx = 428;
	  section.data(426).dtTransOffset = 730;
	
	  ;% hbv5azo3sw.Gain2_Gain_axoynd5pv4
	  section.data(427).logicalSrcIdx = 429;
	  section.data(427).dtTransOffset = 731;
	
	  ;% hbv5azo3sw.Constant_Value_dbnrgxoczr
	  section.data(428).logicalSrcIdx = 430;
	  section.data(428).dtTransOffset = 732;
	
	  ;% hbv5azo3sw.Gain_Gain_gnoc2rqmdh
	  section.data(429).logicalSrcIdx = 431;
	  section.data(429).dtTransOffset = 733;
	
	  ;% hbv5azo3sw.Gain1_Gain_ckkbstydzz
	  section.data(430).logicalSrcIdx = 432;
	  section.data(430).dtTransOffset = 734;
	
	  ;% hbv5azo3sw.Gain2_Gain_bq1ops2rb1
	  section.data(431).logicalSrcIdx = 433;
	  section.data(431).dtTransOffset = 735;
	
	  ;% hbv5azo3sw.Inertia_Value_ionitpmuar
	  section.data(432).logicalSrcIdx = 434;
	  section.data(432).dtTransOffset = 736;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% hbv5azo3sw.yBlockOrdering_Y0
	  section.data(1).logicalSrcIdx = 435;
	  section.data(1).dtTransOffset = 0;
	
	  ;% hbv5azo3sw.yBlockOrdering_Y0_m1krpwpsee
	  section.data(2).logicalSrcIdx = 436;
	  section.data(2).dtTransOffset = 1;
	
	  ;% hbv5azo3sw.yBlockOrdering_Y0_cudnxvsixu
	  section.data(3).logicalSrcIdx = 437;
	  section.data(3).dtTransOffset = 2;
	
	  ;% hbv5azo3sw.Enable1_Value
	  section.data(4).logicalSrcIdx = 438;
	  section.data(4).dtTransOffset = 3;
	
	  ;% hbv5azo3sw.Enable2_Value
	  section.data(5).logicalSrcIdx = 439;
	  section.data(5).dtTransOffset = 4;
	
	  ;% hbv5azo3sw.Enable3_Value
	  section.data(6).logicalSrcIdx = 440;
	  section.data(6).dtTransOffset = 5;
	
	  ;% hbv5azo3sw.BlockOrdering_Value
	  section.data(7).logicalSrcIdx = 441;
	  section.data(7).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
	      
	    ;% Spacecraft
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 0;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    paramMap.sections(3) = section;
	    clear section
	  
	      
	    ;% Earth
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 1;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    paramMap.sections(4) = section;
	    clear section
	  
	      
	    ;% Const
	    section.nData = 1;
	    section.data(1).logicalSrcIdx = 2;
	    section.data(1).dtTransOffset = 0;
	  
	    nTotData = nTotData + section.nData;
	    paramMap.sections(5) = section;
	    clear section
	  
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 4;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (o2y45zbt2m4)
    ;%
      section.nData     = 209;
      section.data(209)  = dumData; %prealloc
      
	  ;% o2y45zbt2m4.p0g2tnevfk
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% o2y45zbt2m4.h20zeizqdi
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% o2y45zbt2m4.lfqykqi1sg
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 6;
	
	  ;% o2y45zbt2m4.mvqp5l5ufq
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 9;
	
	  ;% o2y45zbt2m4.hwkzvkas3c
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 12;
	
	  ;% o2y45zbt2m4.pvehregqxn
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 13;
	
	  ;% o2y45zbt2m4.fqzn4ufnnm
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 14;
	
	  ;% o2y45zbt2m4.pcu5wlt0ol
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 15;
	
	  ;% o2y45zbt2m4.cktw3suarj
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 18;
	
	  ;% o2y45zbt2m4.nvj2jobsne
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 20;
	
	  ;% o2y45zbt2m4.jf0z5nzend
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 23;
	
	  ;% o2y45zbt2m4.mfythxhofy
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 25;
	
	  ;% o2y45zbt2m4.efvttc54la
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 28;
	
	  ;% o2y45zbt2m4.diblvbf0co
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 30;
	
	  ;% o2y45zbt2m4.af3pwylngk
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 33;
	
	  ;% o2y45zbt2m4.avq3ivsxoj
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 35;
	
	  ;% o2y45zbt2m4.fk5zqxuz3h
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 38;
	
	  ;% o2y45zbt2m4.cztzhrui22
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 40;
	
	  ;% o2y45zbt2m4.gqbzn03dkr
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 43;
	
	  ;% o2y45zbt2m4.mdvmrfnqkz
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 45;
	
	  ;% o2y45zbt2m4.fj4e2b5bch
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 48;
	
	  ;% o2y45zbt2m4.k2zlzdldai
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 51;
	
	  ;% o2y45zbt2m4.aoe02aounf
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 54;
	
	  ;% o2y45zbt2m4.mkpovvsjoj
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 57;
	
	  ;% o2y45zbt2m4.hiigrn3uvx
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 59;
	
	  ;% o2y45zbt2m4.nyimkzd5hq
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 62;
	
	  ;% o2y45zbt2m4.fllsexxjfy
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 64;
	
	  ;% o2y45zbt2m4.cddswdr3cl
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 67;
	
	  ;% o2y45zbt2m4.obyw5bjsqt
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 69;
	
	  ;% o2y45zbt2m4.a2f0ypmsuy
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 72;
	
	  ;% o2y45zbt2m4.fp4h0u1qqq
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 74;
	
	  ;% o2y45zbt2m4.ch2k5w2dnh
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 77;
	
	  ;% o2y45zbt2m4.fe3icz0afg
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 79;
	
	  ;% o2y45zbt2m4.ipb4qp4laq
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 82;
	
	  ;% o2y45zbt2m4.g4hdycezvh
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 84;
	
	  ;% o2y45zbt2m4.c1cfxe21zn
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 87;
	
	  ;% o2y45zbt2m4.op4p3vooky
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 90;
	
	  ;% o2y45zbt2m4.px02m2ansm
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 93;
	
	  ;% o2y45zbt2m4.lzgno0c45u
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 94;
	
	  ;% o2y45zbt2m4.frbnnz0j20
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 95;
	
	  ;% o2y45zbt2m4.ftjowoqghq
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 96;
	
	  ;% o2y45zbt2m4.psapwntjo4
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 97;
	
	  ;% o2y45zbt2m4.pjlzlhabnw
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 98;
	
	  ;% o2y45zbt2m4.fkulvx00jr
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 99;
	
	  ;% o2y45zbt2m4.g20nolxhoz
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 102;
	
	  ;% o2y45zbt2m4.al2bqvraok
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 105;
	
	  ;% o2y45zbt2m4.ktdjes0xaw
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 108;
	
	  ;% o2y45zbt2m4.jv2vmwnuhi
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 112;
	
	  ;% o2y45zbt2m4.etlydwc4vq
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 113;
	
	  ;% o2y45zbt2m4.hvroq353ld
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 114;
	
	  ;% o2y45zbt2m4.cgit3icmpi
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 115;
	
	  ;% o2y45zbt2m4.ggrj4lwkdq
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 116;
	
	  ;% o2y45zbt2m4.jjuwpyarp5
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 117;
	
	  ;% o2y45zbt2m4.nyoyhdwzhr
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 118;
	
	  ;% o2y45zbt2m4.mfc3g102pw
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 119;
	
	  ;% o2y45zbt2m4.jg5xwtwjpe
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 122;
	
	  ;% o2y45zbt2m4.bwu3hh5pg3
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 125;
	
	  ;% o2y45zbt2m4.iunb01rvwp
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 129;
	
	  ;% o2y45zbt2m4.hnvlhc15na
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 130;
	
	  ;% o2y45zbt2m4.gbu5abs2sz
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 133;
	
	  ;% o2y45zbt2m4.cbgxsqe0kg
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 136;
	
	  ;% o2y45zbt2m4.kwx5xj2ngl
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 139;
	
	  ;% o2y45zbt2m4.ngj1laz0jn
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 140;
	
	  ;% o2y45zbt2m4.gnzoqn2dsl
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 141;
	
	  ;% o2y45zbt2m4.pguc21lp1k
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 144;
	
	  ;% o2y45zbt2m4.gnhb3isuhw
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 147;
	
	  ;% o2y45zbt2m4.isiqvhsvds
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 148;
	
	  ;% o2y45zbt2m4.an1hct1vdk
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 149;
	
	  ;% o2y45zbt2m4.jgyobyjg0x
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 158;
	
	  ;% o2y45zbt2m4.amepcbkksg
	  section.data(70).logicalSrcIdx = 70;
	  section.data(70).dtTransOffset = 159;
	
	  ;% o2y45zbt2m4.fi1wde2gl2
	  section.data(71).logicalSrcIdx = 71;
	  section.data(71).dtTransOffset = 162;
	
	  ;% o2y45zbt2m4.culrexdnyf
	  section.data(72).logicalSrcIdx = 72;
	  section.data(72).dtTransOffset = 165;
	
	  ;% o2y45zbt2m4.ambhfazf2y
	  section.data(73).logicalSrcIdx = 73;
	  section.data(73).dtTransOffset = 166;
	
	  ;% o2y45zbt2m4.lx0bv1yu1i
	  section.data(74).logicalSrcIdx = 74;
	  section.data(74).dtTransOffset = 169;
	
	  ;% o2y45zbt2m4.a55nsryplm
	  section.data(75).logicalSrcIdx = 75;
	  section.data(75).dtTransOffset = 172;
	
	  ;% o2y45zbt2m4.jq2aut2ijb
	  section.data(76).logicalSrcIdx = 76;
	  section.data(76).dtTransOffset = 176;
	
	  ;% o2y45zbt2m4.mvnud1uzgl
	  section.data(77).logicalSrcIdx = 77;
	  section.data(77).dtTransOffset = 179;
	
	  ;% o2y45zbt2m4.hckf2ailv0
	  section.data(78).logicalSrcIdx = 78;
	  section.data(78).dtTransOffset = 180;
	
	  ;% o2y45zbt2m4.bfud51xipp
	  section.data(79).logicalSrcIdx = 79;
	  section.data(79).dtTransOffset = 181;
	
	  ;% o2y45zbt2m4.kp1mzqwbu3
	  section.data(80).logicalSrcIdx = 80;
	  section.data(80).dtTransOffset = 182;
	
	  ;% o2y45zbt2m4.mrzwmqiqje
	  section.data(81).logicalSrcIdx = 81;
	  section.data(81).dtTransOffset = 183;
	
	  ;% o2y45zbt2m4.kyx4elghw5
	  section.data(82).logicalSrcIdx = 82;
	  section.data(82).dtTransOffset = 184;
	
	  ;% o2y45zbt2m4.ightd03wbw
	  section.data(83).logicalSrcIdx = 83;
	  section.data(83).dtTransOffset = 185;
	
	  ;% o2y45zbt2m4.boco0ydrhx
	  section.data(84).logicalSrcIdx = 84;
	  section.data(84).dtTransOffset = 186;
	
	  ;% o2y45zbt2m4.kgibrayejc
	  section.data(85).logicalSrcIdx = 85;
	  section.data(85).dtTransOffset = 187;
	
	  ;% o2y45zbt2m4.klod4yztvz
	  section.data(86).logicalSrcIdx = 86;
	  section.data(86).dtTransOffset = 188;
	
	  ;% o2y45zbt2m4.gr0fttz1x3
	  section.data(87).logicalSrcIdx = 87;
	  section.data(87).dtTransOffset = 189;
	
	  ;% o2y45zbt2m4.lj2hsiefmb
	  section.data(88).logicalSrcIdx = 88;
	  section.data(88).dtTransOffset = 190;
	
	  ;% o2y45zbt2m4.pqwrcdv51y
	  section.data(89).logicalSrcIdx = 89;
	  section.data(89).dtTransOffset = 191;
	
	  ;% o2y45zbt2m4.gkj1c4ecpo
	  section.data(90).logicalSrcIdx = 90;
	  section.data(90).dtTransOffset = 192;
	
	  ;% o2y45zbt2m4.ltnksa0t1k
	  section.data(91).logicalSrcIdx = 91;
	  section.data(91).dtTransOffset = 193;
	
	  ;% o2y45zbt2m4.ebby2e0eey
	  section.data(92).logicalSrcIdx = 92;
	  section.data(92).dtTransOffset = 194;
	
	  ;% o2y45zbt2m4.kc5uinuva1
	  section.data(93).logicalSrcIdx = 93;
	  section.data(93).dtTransOffset = 195;
	
	  ;% o2y45zbt2m4.olg5gqva4k
	  section.data(94).logicalSrcIdx = 94;
	  section.data(94).dtTransOffset = 196;
	
	  ;% o2y45zbt2m4.ny5fqojp01
	  section.data(95).logicalSrcIdx = 95;
	  section.data(95).dtTransOffset = 197;
	
	  ;% o2y45zbt2m4.mwkxuoztcf
	  section.data(96).logicalSrcIdx = 96;
	  section.data(96).dtTransOffset = 198;
	
	  ;% o2y45zbt2m4.g42bdhp2mr
	  section.data(97).logicalSrcIdx = 97;
	  section.data(97).dtTransOffset = 199;
	
	  ;% o2y45zbt2m4.gegkjzomxm
	  section.data(98).logicalSrcIdx = 98;
	  section.data(98).dtTransOffset = 200;
	
	  ;% o2y45zbt2m4.kd1qxjhyrr
	  section.data(99).logicalSrcIdx = 99;
	  section.data(99).dtTransOffset = 201;
	
	  ;% o2y45zbt2m4.pgs5royztd
	  section.data(100).logicalSrcIdx = 100;
	  section.data(100).dtTransOffset = 202;
	
	  ;% o2y45zbt2m4.eqlu1laly1
	  section.data(101).logicalSrcIdx = 101;
	  section.data(101).dtTransOffset = 203;
	
	  ;% o2y45zbt2m4.c4imsujsyj
	  section.data(102).logicalSrcIdx = 102;
	  section.data(102).dtTransOffset = 204;
	
	  ;% o2y45zbt2m4.ewg4gsarwm
	  section.data(103).logicalSrcIdx = 103;
	  section.data(103).dtTransOffset = 205;
	
	  ;% o2y45zbt2m4.myxilkpyto
	  section.data(104).logicalSrcIdx = 104;
	  section.data(104).dtTransOffset = 206;
	
	  ;% o2y45zbt2m4.nfvbvcsgaf
	  section.data(105).logicalSrcIdx = 105;
	  section.data(105).dtTransOffset = 207;
	
	  ;% o2y45zbt2m4.jyoiaqgash
	  section.data(106).logicalSrcIdx = 106;
	  section.data(106).dtTransOffset = 208;
	
	  ;% o2y45zbt2m4.am2ydxy3tg
	  section.data(107).logicalSrcIdx = 107;
	  section.data(107).dtTransOffset = 209;
	
	  ;% o2y45zbt2m4.aayx0clngf
	  section.data(108).logicalSrcIdx = 108;
	  section.data(108).dtTransOffset = 210;
	
	  ;% o2y45zbt2m4.imjovcvzmj
	  section.data(109).logicalSrcIdx = 109;
	  section.data(109).dtTransOffset = 211;
	
	  ;% o2y45zbt2m4.fhwu2rpyxm
	  section.data(110).logicalSrcIdx = 110;
	  section.data(110).dtTransOffset = 212;
	
	  ;% o2y45zbt2m4.db5wedrkq4
	  section.data(111).logicalSrcIdx = 111;
	  section.data(111).dtTransOffset = 213;
	
	  ;% o2y45zbt2m4.bzsae5g150
	  section.data(112).logicalSrcIdx = 112;
	  section.data(112).dtTransOffset = 214;
	
	  ;% o2y45zbt2m4.fxqr3to5iu
	  section.data(113).logicalSrcIdx = 113;
	  section.data(113).dtTransOffset = 215;
	
	  ;% o2y45zbt2m4.b3deffzvww
	  section.data(114).logicalSrcIdx = 114;
	  section.data(114).dtTransOffset = 216;
	
	  ;% o2y45zbt2m4.jzcgup51f2
	  section.data(115).logicalSrcIdx = 115;
	  section.data(115).dtTransOffset = 217;
	
	  ;% o2y45zbt2m4.aqvhjylunl
	  section.data(116).logicalSrcIdx = 116;
	  section.data(116).dtTransOffset = 218;
	
	  ;% o2y45zbt2m4.pmy5icug2k
	  section.data(117).logicalSrcIdx = 117;
	  section.data(117).dtTransOffset = 219;
	
	  ;% o2y45zbt2m4.pxdeyipxtr
	  section.data(118).logicalSrcIdx = 118;
	  section.data(118).dtTransOffset = 220;
	
	  ;% o2y45zbt2m4.cepjmd5gi4
	  section.data(119).logicalSrcIdx = 119;
	  section.data(119).dtTransOffset = 221;
	
	  ;% o2y45zbt2m4.a3l2vrrg5t
	  section.data(120).logicalSrcIdx = 120;
	  section.data(120).dtTransOffset = 222;
	
	  ;% o2y45zbt2m4.pmjdaqsrgv
	  section.data(121).logicalSrcIdx = 121;
	  section.data(121).dtTransOffset = 223;
	
	  ;% o2y45zbt2m4.ivk2auaags
	  section.data(122).logicalSrcIdx = 122;
	  section.data(122).dtTransOffset = 224;
	
	  ;% o2y45zbt2m4.hmdscxhrrq
	  section.data(123).logicalSrcIdx = 123;
	  section.data(123).dtTransOffset = 225;
	
	  ;% o2y45zbt2m4.ks0a4vmt2y
	  section.data(124).logicalSrcIdx = 124;
	  section.data(124).dtTransOffset = 226;
	
	  ;% o2y45zbt2m4.fuxsypdw5b
	  section.data(125).logicalSrcIdx = 125;
	  section.data(125).dtTransOffset = 227;
	
	  ;% o2y45zbt2m4.ibibxo1hc5
	  section.data(126).logicalSrcIdx = 126;
	  section.data(126).dtTransOffset = 228;
	
	  ;% o2y45zbt2m4.e0g1epmzzc
	  section.data(127).logicalSrcIdx = 127;
	  section.data(127).dtTransOffset = 229;
	
	  ;% o2y45zbt2m4.pvujvtillf
	  section.data(128).logicalSrcIdx = 128;
	  section.data(128).dtTransOffset = 230;
	
	  ;% o2y45zbt2m4.bralaspqvj
	  section.data(129).logicalSrcIdx = 129;
	  section.data(129).dtTransOffset = 231;
	
	  ;% o2y45zbt2m4.mf042bbyls
	  section.data(130).logicalSrcIdx = 130;
	  section.data(130).dtTransOffset = 232;
	
	  ;% o2y45zbt2m4.pvvuqzjxh5
	  section.data(131).logicalSrcIdx = 131;
	  section.data(131).dtTransOffset = 233;
	
	  ;% o2y45zbt2m4.jkdvlxhrn3
	  section.data(132).logicalSrcIdx = 132;
	  section.data(132).dtTransOffset = 234;
	
	  ;% o2y45zbt2m4.nd0vnjuzbo
	  section.data(133).logicalSrcIdx = 133;
	  section.data(133).dtTransOffset = 235;
	
	  ;% o2y45zbt2m4.ke44k2nvd3
	  section.data(134).logicalSrcIdx = 134;
	  section.data(134).dtTransOffset = 236;
	
	  ;% o2y45zbt2m4.bvbwt2i4ty
	  section.data(135).logicalSrcIdx = 135;
	  section.data(135).dtTransOffset = 237;
	
	  ;% o2y45zbt2m4.bckqvwne10
	  section.data(136).logicalSrcIdx = 136;
	  section.data(136).dtTransOffset = 238;
	
	  ;% o2y45zbt2m4.icooi3vgxr
	  section.data(137).logicalSrcIdx = 137;
	  section.data(137).dtTransOffset = 239;
	
	  ;% o2y45zbt2m4.nhfh5pwjge
	  section.data(138).logicalSrcIdx = 138;
	  section.data(138).dtTransOffset = 240;
	
	  ;% o2y45zbt2m4.ekeiqfqt15
	  section.data(139).logicalSrcIdx = 139;
	  section.data(139).dtTransOffset = 241;
	
	  ;% o2y45zbt2m4.fu44uyydbm
	  section.data(140).logicalSrcIdx = 140;
	  section.data(140).dtTransOffset = 242;
	
	  ;% o2y45zbt2m4.nrvyadhccn
	  section.data(141).logicalSrcIdx = 141;
	  section.data(141).dtTransOffset = 243;
	
	  ;% o2y45zbt2m4.kif43ukmno
	  section.data(142).logicalSrcIdx = 142;
	  section.data(142).dtTransOffset = 244;
	
	  ;% o2y45zbt2m4.lvap1gibsy
	  section.data(143).logicalSrcIdx = 143;
	  section.data(143).dtTransOffset = 245;
	
	  ;% o2y45zbt2m4.fjgl0ynn23
	  section.data(144).logicalSrcIdx = 144;
	  section.data(144).dtTransOffset = 246;
	
	  ;% o2y45zbt2m4.dlywnze0gh
	  section.data(145).logicalSrcIdx = 145;
	  section.data(145).dtTransOffset = 247;
	
	  ;% o2y45zbt2m4.evt22h0udz
	  section.data(146).logicalSrcIdx = 146;
	  section.data(146).dtTransOffset = 248;
	
	  ;% o2y45zbt2m4.hr5yavkh2g
	  section.data(147).logicalSrcIdx = 147;
	  section.data(147).dtTransOffset = 249;
	
	  ;% o2y45zbt2m4.a3453wdy3h
	  section.data(148).logicalSrcIdx = 148;
	  section.data(148).dtTransOffset = 250;
	
	  ;% o2y45zbt2m4.ln15xtukoj
	  section.data(149).logicalSrcIdx = 149;
	  section.data(149).dtTransOffset = 251;
	
	  ;% o2y45zbt2m4.ofev2a4bu4
	  section.data(150).logicalSrcIdx = 150;
	  section.data(150).dtTransOffset = 252;
	
	  ;% o2y45zbt2m4.iak2iehb01
	  section.data(151).logicalSrcIdx = 151;
	  section.data(151).dtTransOffset = 253;
	
	  ;% o2y45zbt2m4.gy5dnmc0o2
	  section.data(152).logicalSrcIdx = 152;
	  section.data(152).dtTransOffset = 254;
	
	  ;% o2y45zbt2m4.bemlv143br
	  section.data(153).logicalSrcIdx = 153;
	  section.data(153).dtTransOffset = 255;
	
	  ;% o2y45zbt2m4.hsxdwr2kap
	  section.data(154).logicalSrcIdx = 154;
	  section.data(154).dtTransOffset = 256;
	
	  ;% o2y45zbt2m4.cikadflncr
	  section.data(155).logicalSrcIdx = 155;
	  section.data(155).dtTransOffset = 257;
	
	  ;% o2y45zbt2m4.d55wbumkta
	  section.data(156).logicalSrcIdx = 156;
	  section.data(156).dtTransOffset = 258;
	
	  ;% o2y45zbt2m4.ftiqxo4eic
	  section.data(157).logicalSrcIdx = 157;
	  section.data(157).dtTransOffset = 259;
	
	  ;% o2y45zbt2m4.dg3licanvf
	  section.data(158).logicalSrcIdx = 158;
	  section.data(158).dtTransOffset = 260;
	
	  ;% o2y45zbt2m4.fd0i4zg4gl
	  section.data(159).logicalSrcIdx = 159;
	  section.data(159).dtTransOffset = 261;
	
	  ;% o2y45zbt2m4.nmsyyhec3k
	  section.data(160).logicalSrcIdx = 160;
	  section.data(160).dtTransOffset = 262;
	
	  ;% o2y45zbt2m4.akaurxf5cn
	  section.data(161).logicalSrcIdx = 161;
	  section.data(161).dtTransOffset = 263;
	
	  ;% o2y45zbt2m4.fjb4t2g0di
	  section.data(162).logicalSrcIdx = 162;
	  section.data(162).dtTransOffset = 264;
	
	  ;% o2y45zbt2m4.eps1xh200d
	  section.data(163).logicalSrcIdx = 163;
	  section.data(163).dtTransOffset = 265;
	
	  ;% o2y45zbt2m4.dbdvnfbtan
	  section.data(164).logicalSrcIdx = 164;
	  section.data(164).dtTransOffset = 266;
	
	  ;% o2y45zbt2m4.nqoad4oagc
	  section.data(165).logicalSrcIdx = 165;
	  section.data(165).dtTransOffset = 267;
	
	  ;% o2y45zbt2m4.ornbl4mfau
	  section.data(166).logicalSrcIdx = 166;
	  section.data(166).dtTransOffset = 268;
	
	  ;% o2y45zbt2m4.gq23czohqi
	  section.data(167).logicalSrcIdx = 167;
	  section.data(167).dtTransOffset = 269;
	
	  ;% o2y45zbt2m4.gree3bakbj
	  section.data(168).logicalSrcIdx = 168;
	  section.data(168).dtTransOffset = 270;
	
	  ;% o2y45zbt2m4.m13nwgsfs4
	  section.data(169).logicalSrcIdx = 169;
	  section.data(169).dtTransOffset = 271;
	
	  ;% o2y45zbt2m4.brdq13y0qd
	  section.data(170).logicalSrcIdx = 170;
	  section.data(170).dtTransOffset = 272;
	
	  ;% o2y45zbt2m4.h3xp3qlim0
	  section.data(171).logicalSrcIdx = 171;
	  section.data(171).dtTransOffset = 273;
	
	  ;% o2y45zbt2m4.b1pqf2pbpp
	  section.data(172).logicalSrcIdx = 172;
	  section.data(172).dtTransOffset = 274;
	
	  ;% o2y45zbt2m4.ek204bmiea
	  section.data(173).logicalSrcIdx = 173;
	  section.data(173).dtTransOffset = 275;
	
	  ;% o2y45zbt2m4.aqwdecxidu
	  section.data(174).logicalSrcIdx = 174;
	  section.data(174).dtTransOffset = 276;
	
	  ;% o2y45zbt2m4.daikka42e3
	  section.data(175).logicalSrcIdx = 175;
	  section.data(175).dtTransOffset = 277;
	
	  ;% o2y45zbt2m4.ga4ycdonne
	  section.data(176).logicalSrcIdx = 176;
	  section.data(176).dtTransOffset = 278;
	
	  ;% o2y45zbt2m4.dpkcgsd4ym
	  section.data(177).logicalSrcIdx = 177;
	  section.data(177).dtTransOffset = 279;
	
	  ;% o2y45zbt2m4.pihfnbloym
	  section.data(178).logicalSrcIdx = 178;
	  section.data(178).dtTransOffset = 280;
	
	  ;% o2y45zbt2m4.a5drqsjnex
	  section.data(179).logicalSrcIdx = 179;
	  section.data(179).dtTransOffset = 281;
	
	  ;% o2y45zbt2m4.ndlxlyobzb
	  section.data(180).logicalSrcIdx = 180;
	  section.data(180).dtTransOffset = 282;
	
	  ;% o2y45zbt2m4.h5gslldsar
	  section.data(181).logicalSrcIdx = 181;
	  section.data(181).dtTransOffset = 283;
	
	  ;% o2y45zbt2m4.c23uk112gn
	  section.data(182).logicalSrcIdx = 182;
	  section.data(182).dtTransOffset = 284;
	
	  ;% o2y45zbt2m4.eq1sfn3btk
	  section.data(183).logicalSrcIdx = 183;
	  section.data(183).dtTransOffset = 285;
	
	  ;% o2y45zbt2m4.jhqy0zwmu3
	  section.data(184).logicalSrcIdx = 184;
	  section.data(184).dtTransOffset = 286;
	
	  ;% o2y45zbt2m4.iuke2eyfra
	  section.data(185).logicalSrcIdx = 185;
	  section.data(185).dtTransOffset = 287;
	
	  ;% o2y45zbt2m4.bw33cb1smq
	  section.data(186).logicalSrcIdx = 186;
	  section.data(186).dtTransOffset = 288;
	
	  ;% o2y45zbt2m4.kwmlekgm0w
	  section.data(187).logicalSrcIdx = 187;
	  section.data(187).dtTransOffset = 289;
	
	  ;% o2y45zbt2m4.fjxh2v44zo
	  section.data(188).logicalSrcIdx = 188;
	  section.data(188).dtTransOffset = 290;
	
	  ;% o2y45zbt2m4.ei2iplcloo
	  section.data(189).logicalSrcIdx = 189;
	  section.data(189).dtTransOffset = 291;
	
	  ;% o2y45zbt2m4.dpw0lpwtco
	  section.data(190).logicalSrcIdx = 190;
	  section.data(190).dtTransOffset = 292;
	
	  ;% o2y45zbt2m4.i01jbvlzhi
	  section.data(191).logicalSrcIdx = 191;
	  section.data(191).dtTransOffset = 293;
	
	  ;% o2y45zbt2m4.ksqsb0wny4
	  section.data(192).logicalSrcIdx = 192;
	  section.data(192).dtTransOffset = 294;
	
	  ;% o2y45zbt2m4.d224533rgj
	  section.data(193).logicalSrcIdx = 193;
	  section.data(193).dtTransOffset = 295;
	
	  ;% o2y45zbt2m4.d0h2bkxm2a
	  section.data(194).logicalSrcIdx = 194;
	  section.data(194).dtTransOffset = 296;
	
	  ;% o2y45zbt2m4.jpbug4sdyr
	  section.data(195).logicalSrcIdx = 195;
	  section.data(195).dtTransOffset = 297;
	
	  ;% o2y45zbt2m4.llcjil2ppz
	  section.data(196).logicalSrcIdx = 196;
	  section.data(196).dtTransOffset = 298;
	
	  ;% o2y45zbt2m4.kp0ottklv2
	  section.data(197).logicalSrcIdx = 197;
	  section.data(197).dtTransOffset = 299;
	
	  ;% o2y45zbt2m4.d4h0eb221l
	  section.data(198).logicalSrcIdx = 198;
	  section.data(198).dtTransOffset = 300;
	
	  ;% o2y45zbt2m4.ajeydhy34x
	  section.data(199).logicalSrcIdx = 199;
	  section.data(199).dtTransOffset = 301;
	
	  ;% o2y45zbt2m4.kuqlbidad1
	  section.data(200).logicalSrcIdx = 200;
	  section.data(200).dtTransOffset = 302;
	
	  ;% o2y45zbt2m4.kncngnrvsh
	  section.data(201).logicalSrcIdx = 201;
	  section.data(201).dtTransOffset = 305;
	
	  ;% o2y45zbt2m4.du4yqg3svc
	  section.data(202).logicalSrcIdx = 202;
	  section.data(202).dtTransOffset = 315;
	
	  ;% o2y45zbt2m4.j5pfxwzlry
	  section.data(203).logicalSrcIdx = 203;
	  section.data(203).dtTransOffset = 318;
	
	  ;% o2y45zbt2m4.m4a4e0kncl
	  section.data(204).logicalSrcIdx = 204;
	  section.data(204).dtTransOffset = 321;
	
	  ;% o2y45zbt2m4.inxuhwzyyf
	  section.data(205).logicalSrcIdx = 205;
	  section.data(205).dtTransOffset = 324;
	
	  ;% o2y45zbt2m4.b51zos5ddd
	  section.data(206).logicalSrcIdx = 206;
	  section.data(206).dtTransOffset = 327;
	
	  ;% o2y45zbt2m4.mz4bssc4xj
	  section.data(207).logicalSrcIdx = 207;
	  section.data(207).dtTransOffset = 328;
	
	  ;% o2y45zbt2m4.hi5t21up55
	  section.data(208).logicalSrcIdx = 208;
	  section.data(208).dtTransOffset = 329;
	
	  ;% o2y45zbt2m4.nmbndl4hhg
	  section.data(209).logicalSrcIdx = 209;
	  section.data(209).dtTransOffset = 330;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% o2y45zbt2m4.nh40mtprpn
	  section.data(1).logicalSrcIdx = 211;
	  section.data(1).dtTransOffset = 0;
	
	  ;% o2y45zbt2m4.niydxw3dug
	  section.data(2).logicalSrcIdx = 212;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% o2y45zbt2m4.ik12ax5qrt.nx1h2bs53u
	  section.data(1).logicalSrcIdx = 213;
	  section.data(1).dtTransOffset = 0;
	
	  ;% o2y45zbt2m4.ik12ax5qrt.heq1xsib3m
	  section.data(2).logicalSrcIdx = 214;
	  section.data(2).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% o2y45zbt2m4.cuglwsdmbh.nx1h2bs53u
	  section.data(1).logicalSrcIdx = 215;
	  section.data(1).dtTransOffset = 0;
	
	  ;% o2y45zbt2m4.cuglwsdmbh.heq1xsib3m
	  section.data(2).logicalSrcIdx = 216;
	  section.data(2).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 23;
    sectIdxOffset = 4;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (hrxu5rhe3af)
    ;%
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.iwulztso32
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% hrxu5rhe3af.epbwbvrls5
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% hrxu5rhe3af.fytmukko2d
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% hrxu5rhe3af.curihjwvdq
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% hrxu5rhe3af.oumjhalsqc
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 6;
	
	  ;% hrxu5rhe3af.o2yvavvn5c
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 7;
	
	  ;% hrxu5rhe3af.hz2n5lmwzt
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 8;
	
	  ;% hrxu5rhe3af.buggjk4l1n
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 9;
	
	  ;% hrxu5rhe3af.j3ergpk3vu
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 109;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.mj2w2pdzvf.LoggedData
	  section.data(1).logicalSrcIdx = 9;
	  section.data(1).dtTransOffset = 0;
	
	  ;% hrxu5rhe3af.gqbd45lqbe.LoggedData
	  section.data(2).logicalSrcIdx = 10;
	  section.data(2).dtTransOffset = 1;
	
	  ;% hrxu5rhe3af.ctxiimp00u.LoggedData
	  section.data(3).logicalSrcIdx = 11;
	  section.data(3).dtTransOffset = 4;
	
	  ;% hrxu5rhe3af.g5r3meee2c.LoggedData
	  section.data(4).logicalSrcIdx = 12;
	  section.data(4).dtTransOffset = 5;
	
	  ;% hrxu5rhe3af.fhn4blhpnk.LoggedData
	  section.data(5).logicalSrcIdx = 13;
	  section.data(5).dtTransOffset = 6;
	
	  ;% hrxu5rhe3af.lgevx41nyg.LoggedData
	  section.data(6).logicalSrcIdx = 14;
	  section.data(6).dtTransOffset = 7;
	
	  ;% hrxu5rhe3af.eyype4k5ql.LoggedData
	  section.data(7).logicalSrcIdx = 15;
	  section.data(7).dtTransOffset = 8;
	
	  ;% hrxu5rhe3af.iuw5nsctvf.LoggedData
	  section.data(8).logicalSrcIdx = 16;
	  section.data(8).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 28;
      section.data(28)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.nydzqlwwnn
	  section.data(1).logicalSrcIdx = 17;
	  section.data(1).dtTransOffset = 0;
	
	  ;% hrxu5rhe3af.bdotsga2iv
	  section.data(2).logicalSrcIdx = 18;
	  section.data(2).dtTransOffset = 1;
	
	  ;% hrxu5rhe3af.djim5bpjvv
	  section.data(3).logicalSrcIdx = 19;
	  section.data(3).dtTransOffset = 3;
	
	  ;% hrxu5rhe3af.lqkanthoxg
	  section.data(4).logicalSrcIdx = 20;
	  section.data(4).dtTransOffset = 4;
	
	  ;% hrxu5rhe3af.amd2k325eq
	  section.data(5).logicalSrcIdx = 21;
	  section.data(5).dtTransOffset = 6;
	
	  ;% hrxu5rhe3af.ocwejjhsae
	  section.data(6).logicalSrcIdx = 22;
	  section.data(6).dtTransOffset = 7;
	
	  ;% hrxu5rhe3af.lo1lp4gtvt
	  section.data(7).logicalSrcIdx = 23;
	  section.data(7).dtTransOffset = 9;
	
	  ;% hrxu5rhe3af.cqi0nadh0g
	  section.data(8).logicalSrcIdx = 24;
	  section.data(8).dtTransOffset = 10;
	
	  ;% hrxu5rhe3af.popvcsddq3
	  section.data(9).logicalSrcIdx = 25;
	  section.data(9).dtTransOffset = 12;
	
	  ;% hrxu5rhe3af.e0e33jihoi
	  section.data(10).logicalSrcIdx = 26;
	  section.data(10).dtTransOffset = 13;
	
	  ;% hrxu5rhe3af.bkcg3g1zoi
	  section.data(11).logicalSrcIdx = 27;
	  section.data(11).dtTransOffset = 15;
	
	  ;% hrxu5rhe3af.cwsd2g5w2m
	  section.data(12).logicalSrcIdx = 28;
	  section.data(12).dtTransOffset = 16;
	
	  ;% hrxu5rhe3af.ebpr404rrn
	  section.data(13).logicalSrcIdx = 29;
	  section.data(13).dtTransOffset = 18;
	
	  ;% hrxu5rhe3af.pbvxmucjj5
	  section.data(14).logicalSrcIdx = 30;
	  section.data(14).dtTransOffset = 19;
	
	  ;% hrxu5rhe3af.h31khffg0k
	  section.data(15).logicalSrcIdx = 31;
	  section.data(15).dtTransOffset = 21;
	
	  ;% hrxu5rhe3af.alynay3xx0
	  section.data(16).logicalSrcIdx = 32;
	  section.data(16).dtTransOffset = 22;
	
	  ;% hrxu5rhe3af.atmgtfljnh
	  section.data(17).logicalSrcIdx = 33;
	  section.data(17).dtTransOffset = 24;
	
	  ;% hrxu5rhe3af.n10hslmo2a
	  section.data(18).logicalSrcIdx = 34;
	  section.data(18).dtTransOffset = 25;
	
	  ;% hrxu5rhe3af.pa2kyvt1uy
	  section.data(19).logicalSrcIdx = 35;
	  section.data(19).dtTransOffset = 27;
	
	  ;% hrxu5rhe3af.j13dkj5h0s
	  section.data(20).logicalSrcIdx = 36;
	  section.data(20).dtTransOffset = 28;
	
	  ;% hrxu5rhe3af.p3xkfovqki
	  section.data(21).logicalSrcIdx = 37;
	  section.data(21).dtTransOffset = 30;
	
	  ;% hrxu5rhe3af.k40rhthviy
	  section.data(22).logicalSrcIdx = 38;
	  section.data(22).dtTransOffset = 31;
	
	  ;% hrxu5rhe3af.d1wjrwas1u
	  section.data(23).logicalSrcIdx = 39;
	  section.data(23).dtTransOffset = 33;
	
	  ;% hrxu5rhe3af.jjpbiyjnrh
	  section.data(24).logicalSrcIdx = 40;
	  section.data(24).dtTransOffset = 34;
	
	  ;% hrxu5rhe3af.cmfzrxdc11
	  section.data(25).logicalSrcIdx = 41;
	  section.data(25).dtTransOffset = 36;
	
	  ;% hrxu5rhe3af.impwbrb5ul
	  section.data(26).logicalSrcIdx = 42;
	  section.data(26).dtTransOffset = 37;
	
	  ;% hrxu5rhe3af.ivdqhywypm
	  section.data(27).logicalSrcIdx = 43;
	  section.data(27).dtTransOffset = 39;
	
	  ;% hrxu5rhe3af.ck30ytigtq
	  section.data(28).logicalSrcIdx = 44;
	  section.data(28).dtTransOffset = 40;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.ckit2etwje
	  section.data(1).logicalSrcIdx = 45;
	  section.data(1).dtTransOffset = 0;
	
	  ;% hrxu5rhe3af.irqzxzls3s
	  section.data(2).logicalSrcIdx = 46;
	  section.data(2).dtTransOffset = 1;
	
	  ;% hrxu5rhe3af.btkpsszf3k
	  section.data(3).logicalSrcIdx = 47;
	  section.data(3).dtTransOffset = 2;
	
	  ;% hrxu5rhe3af.febtg0cpg5
	  section.data(4).logicalSrcIdx = 48;
	  section.data(4).dtTransOffset = 3;
	
	  ;% hrxu5rhe3af.g0uzej5lf1
	  section.data(5).logicalSrcIdx = 49;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 81;
      section.data(81)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.fdyoeqkdqi
	  section.data(1).logicalSrcIdx = 50;
	  section.data(1).dtTransOffset = 0;
	
	  ;% hrxu5rhe3af.c3m4fwdfd0
	  section.data(2).logicalSrcIdx = 51;
	  section.data(2).dtTransOffset = 1;
	
	  ;% hrxu5rhe3af.kgzb050drs
	  section.data(3).logicalSrcIdx = 52;
	  section.data(3).dtTransOffset = 2;
	
	  ;% hrxu5rhe3af.o3hynk2drm
	  section.data(4).logicalSrcIdx = 53;
	  section.data(4).dtTransOffset = 3;
	
	  ;% hrxu5rhe3af.pm5qqx3zuz
	  section.data(5).logicalSrcIdx = 54;
	  section.data(5).dtTransOffset = 4;
	
	  ;% hrxu5rhe3af.omdgfehj41
	  section.data(6).logicalSrcIdx = 55;
	  section.data(6).dtTransOffset = 5;
	
	  ;% hrxu5rhe3af.hsphg0gng2
	  section.data(7).logicalSrcIdx = 56;
	  section.data(7).dtTransOffset = 6;
	
	  ;% hrxu5rhe3af.mdstjcyjyx
	  section.data(8).logicalSrcIdx = 57;
	  section.data(8).dtTransOffset = 7;
	
	  ;% hrxu5rhe3af.ojltdhe2we
	  section.data(9).logicalSrcIdx = 58;
	  section.data(9).dtTransOffset = 8;
	
	  ;% hrxu5rhe3af.iwklra2msj
	  section.data(10).logicalSrcIdx = 59;
	  section.data(10).dtTransOffset = 9;
	
	  ;% hrxu5rhe3af.mt3gx422x1
	  section.data(11).logicalSrcIdx = 60;
	  section.data(11).dtTransOffset = 10;
	
	  ;% hrxu5rhe3af.pug0coupbp
	  section.data(12).logicalSrcIdx = 61;
	  section.data(12).dtTransOffset = 11;
	
	  ;% hrxu5rhe3af.jeg35werh5
	  section.data(13).logicalSrcIdx = 62;
	  section.data(13).dtTransOffset = 12;
	
	  ;% hrxu5rhe3af.kz1j0tnmva
	  section.data(14).logicalSrcIdx = 63;
	  section.data(14).dtTransOffset = 13;
	
	  ;% hrxu5rhe3af.lq5ek0jlzd
	  section.data(15).logicalSrcIdx = 64;
	  section.data(15).dtTransOffset = 14;
	
	  ;% hrxu5rhe3af.goaeac5x5p
	  section.data(16).logicalSrcIdx = 65;
	  section.data(16).dtTransOffset = 15;
	
	  ;% hrxu5rhe3af.ltjhqpbfjo
	  section.data(17).logicalSrcIdx = 66;
	  section.data(17).dtTransOffset = 16;
	
	  ;% hrxu5rhe3af.dnqubg5s4k
	  section.data(18).logicalSrcIdx = 67;
	  section.data(18).dtTransOffset = 17;
	
	  ;% hrxu5rhe3af.bze1flsb15
	  section.data(19).logicalSrcIdx = 68;
	  section.data(19).dtTransOffset = 18;
	
	  ;% hrxu5rhe3af.pidbwsidci
	  section.data(20).logicalSrcIdx = 69;
	  section.data(20).dtTransOffset = 19;
	
	  ;% hrxu5rhe3af.ji1vknz2dr
	  section.data(21).logicalSrcIdx = 70;
	  section.data(21).dtTransOffset = 20;
	
	  ;% hrxu5rhe3af.gltmjlakux
	  section.data(22).logicalSrcIdx = 71;
	  section.data(22).dtTransOffset = 21;
	
	  ;% hrxu5rhe3af.pwifaixjxb
	  section.data(23).logicalSrcIdx = 72;
	  section.data(23).dtTransOffset = 22;
	
	  ;% hrxu5rhe3af.haxpv4vq51
	  section.data(24).logicalSrcIdx = 73;
	  section.data(24).dtTransOffset = 23;
	
	  ;% hrxu5rhe3af.hxjxms0byf
	  section.data(25).logicalSrcIdx = 74;
	  section.data(25).dtTransOffset = 24;
	
	  ;% hrxu5rhe3af.jij01p0qtw
	  section.data(26).logicalSrcIdx = 75;
	  section.data(26).dtTransOffset = 25;
	
	  ;% hrxu5rhe3af.ihprlm0zdr
	  section.data(27).logicalSrcIdx = 76;
	  section.data(27).dtTransOffset = 26;
	
	  ;% hrxu5rhe3af.jgquwrgfhd
	  section.data(28).logicalSrcIdx = 77;
	  section.data(28).dtTransOffset = 27;
	
	  ;% hrxu5rhe3af.o2i4021xwh
	  section.data(29).logicalSrcIdx = 78;
	  section.data(29).dtTransOffset = 28;
	
	  ;% hrxu5rhe3af.iqs2nrdyqs
	  section.data(30).logicalSrcIdx = 79;
	  section.data(30).dtTransOffset = 29;
	
	  ;% hrxu5rhe3af.p4n3550tai
	  section.data(31).logicalSrcIdx = 80;
	  section.data(31).dtTransOffset = 30;
	
	  ;% hrxu5rhe3af.nqcixj2cfc
	  section.data(32).logicalSrcIdx = 81;
	  section.data(32).dtTransOffset = 31;
	
	  ;% hrxu5rhe3af.gcz34svd4r
	  section.data(33).logicalSrcIdx = 82;
	  section.data(33).dtTransOffset = 32;
	
	  ;% hrxu5rhe3af.anszycztem
	  section.data(34).logicalSrcIdx = 83;
	  section.data(34).dtTransOffset = 33;
	
	  ;% hrxu5rhe3af.ane43mgfgs
	  section.data(35).logicalSrcIdx = 84;
	  section.data(35).dtTransOffset = 34;
	
	  ;% hrxu5rhe3af.hkxlm4qdro
	  section.data(36).logicalSrcIdx = 85;
	  section.data(36).dtTransOffset = 35;
	
	  ;% hrxu5rhe3af.fnu1tvdbyx
	  section.data(37).logicalSrcIdx = 86;
	  section.data(37).dtTransOffset = 36;
	
	  ;% hrxu5rhe3af.fq3jja1aol
	  section.data(38).logicalSrcIdx = 87;
	  section.data(38).dtTransOffset = 37;
	
	  ;% hrxu5rhe3af.nbmuo2yzhf
	  section.data(39).logicalSrcIdx = 88;
	  section.data(39).dtTransOffset = 38;
	
	  ;% hrxu5rhe3af.ev5en1vf5z
	  section.data(40).logicalSrcIdx = 89;
	  section.data(40).dtTransOffset = 39;
	
	  ;% hrxu5rhe3af.btkemo1frv
	  section.data(41).logicalSrcIdx = 90;
	  section.data(41).dtTransOffset = 40;
	
	  ;% hrxu5rhe3af.cag24nmzzp
	  section.data(42).logicalSrcIdx = 91;
	  section.data(42).dtTransOffset = 41;
	
	  ;% hrxu5rhe3af.lptvxysd1c
	  section.data(43).logicalSrcIdx = 92;
	  section.data(43).dtTransOffset = 42;
	
	  ;% hrxu5rhe3af.mt3v1tg0wr
	  section.data(44).logicalSrcIdx = 93;
	  section.data(44).dtTransOffset = 43;
	
	  ;% hrxu5rhe3af.apfxbvz3qg
	  section.data(45).logicalSrcIdx = 94;
	  section.data(45).dtTransOffset = 44;
	
	  ;% hrxu5rhe3af.izrtkkf042
	  section.data(46).logicalSrcIdx = 95;
	  section.data(46).dtTransOffset = 45;
	
	  ;% hrxu5rhe3af.olb1gflryv
	  section.data(47).logicalSrcIdx = 96;
	  section.data(47).dtTransOffset = 46;
	
	  ;% hrxu5rhe3af.noecaey35j
	  section.data(48).logicalSrcIdx = 97;
	  section.data(48).dtTransOffset = 47;
	
	  ;% hrxu5rhe3af.jkbsaxmqju
	  section.data(49).logicalSrcIdx = 98;
	  section.data(49).dtTransOffset = 48;
	
	  ;% hrxu5rhe3af.fnnqkeqpmg
	  section.data(50).logicalSrcIdx = 99;
	  section.data(50).dtTransOffset = 49;
	
	  ;% hrxu5rhe3af.j1uacuucpv
	  section.data(51).logicalSrcIdx = 100;
	  section.data(51).dtTransOffset = 50;
	
	  ;% hrxu5rhe3af.cbsmbddbag
	  section.data(52).logicalSrcIdx = 101;
	  section.data(52).dtTransOffset = 51;
	
	  ;% hrxu5rhe3af.bnzh2jzuy5
	  section.data(53).logicalSrcIdx = 102;
	  section.data(53).dtTransOffset = 52;
	
	  ;% hrxu5rhe3af.pmgcir2p13
	  section.data(54).logicalSrcIdx = 103;
	  section.data(54).dtTransOffset = 53;
	
	  ;% hrxu5rhe3af.obuyxhugh2
	  section.data(55).logicalSrcIdx = 104;
	  section.data(55).dtTransOffset = 54;
	
	  ;% hrxu5rhe3af.h5fod2fj2q
	  section.data(56).logicalSrcIdx = 105;
	  section.data(56).dtTransOffset = 55;
	
	  ;% hrxu5rhe3af.hnbwguuonj
	  section.data(57).logicalSrcIdx = 106;
	  section.data(57).dtTransOffset = 56;
	
	  ;% hrxu5rhe3af.fimtx0wf43
	  section.data(58).logicalSrcIdx = 107;
	  section.data(58).dtTransOffset = 57;
	
	  ;% hrxu5rhe3af.jxtww5tjxt
	  section.data(59).logicalSrcIdx = 108;
	  section.data(59).dtTransOffset = 58;
	
	  ;% hrxu5rhe3af.as5m3dr43z
	  section.data(60).logicalSrcIdx = 109;
	  section.data(60).dtTransOffset = 59;
	
	  ;% hrxu5rhe3af.gtaj4wmjuq
	  section.data(61).logicalSrcIdx = 110;
	  section.data(61).dtTransOffset = 60;
	
	  ;% hrxu5rhe3af.a0tdfwofzg
	  section.data(62).logicalSrcIdx = 111;
	  section.data(62).dtTransOffset = 61;
	
	  ;% hrxu5rhe3af.ikwlyg3xde
	  section.data(63).logicalSrcIdx = 112;
	  section.data(63).dtTransOffset = 62;
	
	  ;% hrxu5rhe3af.nw1rjo5a2w
	  section.data(64).logicalSrcIdx = 113;
	  section.data(64).dtTransOffset = 63;
	
	  ;% hrxu5rhe3af.kg1shmc2lb
	  section.data(65).logicalSrcIdx = 114;
	  section.data(65).dtTransOffset = 64;
	
	  ;% hrxu5rhe3af.duwlcgfzra
	  section.data(66).logicalSrcIdx = 115;
	  section.data(66).dtTransOffset = 65;
	
	  ;% hrxu5rhe3af.nblxudhi3p
	  section.data(67).logicalSrcIdx = 116;
	  section.data(67).dtTransOffset = 66;
	
	  ;% hrxu5rhe3af.kunox0dfsg
	  section.data(68).logicalSrcIdx = 117;
	  section.data(68).dtTransOffset = 67;
	
	  ;% hrxu5rhe3af.em2alijyyt
	  section.data(69).logicalSrcIdx = 118;
	  section.data(69).dtTransOffset = 68;
	
	  ;% hrxu5rhe3af.mvvvr4qg3a
	  section.data(70).logicalSrcIdx = 119;
	  section.data(70).dtTransOffset = 69;
	
	  ;% hrxu5rhe3af.mhqfolepov
	  section.data(71).logicalSrcIdx = 120;
	  section.data(71).dtTransOffset = 70;
	
	  ;% hrxu5rhe3af.lx00lot5dg
	  section.data(72).logicalSrcIdx = 121;
	  section.data(72).dtTransOffset = 71;
	
	  ;% hrxu5rhe3af.lfywehbssn
	  section.data(73).logicalSrcIdx = 122;
	  section.data(73).dtTransOffset = 72;
	
	  ;% hrxu5rhe3af.hka1eluehh
	  section.data(74).logicalSrcIdx = 123;
	  section.data(74).dtTransOffset = 73;
	
	  ;% hrxu5rhe3af.km2naim34i
	  section.data(75).logicalSrcIdx = 124;
	  section.data(75).dtTransOffset = 74;
	
	  ;% hrxu5rhe3af.hp3mldh5cv
	  section.data(76).logicalSrcIdx = 125;
	  section.data(76).dtTransOffset = 75;
	
	  ;% hrxu5rhe3af.obn5brrvbj
	  section.data(77).logicalSrcIdx = 126;
	  section.data(77).dtTransOffset = 76;
	
	  ;% hrxu5rhe3af.jaivnsj01n
	  section.data(78).logicalSrcIdx = 127;
	  section.data(78).dtTransOffset = 77;
	
	  ;% hrxu5rhe3af.nmzrmeybue
	  section.data(79).logicalSrcIdx = 128;
	  section.data(79).dtTransOffset = 78;
	
	  ;% hrxu5rhe3af.olmlfoy1xv
	  section.data(80).logicalSrcIdx = 129;
	  section.data(80).dtTransOffset = 79;
	
	  ;% hrxu5rhe3af.px2vytyfy2
	  section.data(81).logicalSrcIdx = 130;
	  section.data(81).dtTransOffset = 80;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 31;
      section.data(31)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.e2pe11pwxn
	  section.data(1).logicalSrcIdx = 131;
	  section.data(1).dtTransOffset = 0;
	
	  ;% hrxu5rhe3af.opg1lhdczb
	  section.data(2).logicalSrcIdx = 132;
	  section.data(2).dtTransOffset = 1;
	
	  ;% hrxu5rhe3af.g24vxooz0v
	  section.data(3).logicalSrcIdx = 133;
	  section.data(3).dtTransOffset = 2;
	
	  ;% hrxu5rhe3af.l3pfqrb31o
	  section.data(4).logicalSrcIdx = 134;
	  section.data(4).dtTransOffset = 3;
	
	  ;% hrxu5rhe3af.jiqhomoo0v
	  section.data(5).logicalSrcIdx = 135;
	  section.data(5).dtTransOffset = 4;
	
	  ;% hrxu5rhe3af.jmjdutrgwi
	  section.data(6).logicalSrcIdx = 136;
	  section.data(6).dtTransOffset = 5;
	
	  ;% hrxu5rhe3af.gcdlpfr3qr
	  section.data(7).logicalSrcIdx = 137;
	  section.data(7).dtTransOffset = 6;
	
	  ;% hrxu5rhe3af.bhx2bk5lkm
	  section.data(8).logicalSrcIdx = 138;
	  section.data(8).dtTransOffset = 7;
	
	  ;% hrxu5rhe3af.gxxnmirgwt
	  section.data(9).logicalSrcIdx = 139;
	  section.data(9).dtTransOffset = 8;
	
	  ;% hrxu5rhe3af.ayulg3mnvk
	  section.data(10).logicalSrcIdx = 140;
	  section.data(10).dtTransOffset = 9;
	
	  ;% hrxu5rhe3af.dmkiyir0bc
	  section.data(11).logicalSrcIdx = 141;
	  section.data(11).dtTransOffset = 10;
	
	  ;% hrxu5rhe3af.nlifgx53vj
	  section.data(12).logicalSrcIdx = 142;
	  section.data(12).dtTransOffset = 11;
	
	  ;% hrxu5rhe3af.cozmdzu0w1
	  section.data(13).logicalSrcIdx = 143;
	  section.data(13).dtTransOffset = 12;
	
	  ;% hrxu5rhe3af.cnj1jumxqg
	  section.data(14).logicalSrcIdx = 144;
	  section.data(14).dtTransOffset = 13;
	
	  ;% hrxu5rhe3af.ckwrsfgl5j
	  section.data(15).logicalSrcIdx = 145;
	  section.data(15).dtTransOffset = 14;
	
	  ;% hrxu5rhe3af.e2cixfebva
	  section.data(16).logicalSrcIdx = 146;
	  section.data(16).dtTransOffset = 15;
	
	  ;% hrxu5rhe3af.i5keywnlob
	  section.data(17).logicalSrcIdx = 147;
	  section.data(17).dtTransOffset = 16;
	
	  ;% hrxu5rhe3af.ae5papqlus
	  section.data(18).logicalSrcIdx = 148;
	  section.data(18).dtTransOffset = 17;
	
	  ;% hrxu5rhe3af.hbtp1swogp
	  section.data(19).logicalSrcIdx = 149;
	  section.data(19).dtTransOffset = 18;
	
	  ;% hrxu5rhe3af.ct2fu2r1og
	  section.data(20).logicalSrcIdx = 150;
	  section.data(20).dtTransOffset = 19;
	
	  ;% hrxu5rhe3af.mp3yltewxi
	  section.data(21).logicalSrcIdx = 151;
	  section.data(21).dtTransOffset = 20;
	
	  ;% hrxu5rhe3af.brmqgwecvy
	  section.data(22).logicalSrcIdx = 152;
	  section.data(22).dtTransOffset = 21;
	
	  ;% hrxu5rhe3af.kjzbuo2ejd
	  section.data(23).logicalSrcIdx = 153;
	  section.data(23).dtTransOffset = 22;
	
	  ;% hrxu5rhe3af.ddgb0ny2wp
	  section.data(24).logicalSrcIdx = 154;
	  section.data(24).dtTransOffset = 23;
	
	  ;% hrxu5rhe3af.ozme2zffq1
	  section.data(25).logicalSrcIdx = 155;
	  section.data(25).dtTransOffset = 24;
	
	  ;% hrxu5rhe3af.pqxjs5shcl
	  section.data(26).logicalSrcIdx = 156;
	  section.data(26).dtTransOffset = 25;
	
	  ;% hrxu5rhe3af.jydhsrazby
	  section.data(27).logicalSrcIdx = 157;
	  section.data(27).dtTransOffset = 26;
	
	  ;% hrxu5rhe3af.nfvyn45pdm
	  section.data(28).logicalSrcIdx = 158;
	  section.data(28).dtTransOffset = 27;
	
	  ;% hrxu5rhe3af.cjwjqcd1zs
	  section.data(29).logicalSrcIdx = 159;
	  section.data(29).dtTransOffset = 28;
	
	  ;% hrxu5rhe3af.m2abnapxna
	  section.data(30).logicalSrcIdx = 160;
	  section.data(30).dtTransOffset = 29;
	
	  ;% hrxu5rhe3af.ejudse0oqw
	  section.data(31).logicalSrcIdx = 161;
	  section.data(31).dtTransOffset = 30;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.p11kqkd5tq
	  section.data(1).logicalSrcIdx = 162;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.oxb0jyodnm.dmloqodxqz
	  section.data(1).logicalSrcIdx = 163;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.oxb0jyodnm.k5qbhboafq
	  section.data(1).logicalSrcIdx = 164;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.bghekfjhrb.fbhgjn50of
	  section.data(1).logicalSrcIdx = 165;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.bghekfjhrb.ogcbvjea2u
	  section.data(1).logicalSrcIdx = 166;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.iyw4crazdc.cyzypjm5pc
	  section.data(1).logicalSrcIdx = 167;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(12) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.iyw4crazdc.dmwbxxl3xx
	  section.data(1).logicalSrcIdx = 168;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(13) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.npgo12zmto.emkgbeqqs5
	  section.data(1).logicalSrcIdx = 169;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(14) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.npgo12zmto.cfhkcft2t2
	  section.data(1).logicalSrcIdx = 170;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(15) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.prxbfmvl1en.dmloqodxqz
	  section.data(1).logicalSrcIdx = 171;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(16) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.prxbfmvl1en.k5qbhboafq
	  section.data(1).logicalSrcIdx = 172;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(17) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.n53cqmpcloj.fbhgjn50of
	  section.data(1).logicalSrcIdx = 173;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(18) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.n53cqmpcloj.ogcbvjea2u
	  section.data(1).logicalSrcIdx = 174;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(19) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.bqx0vc3mudn.cyzypjm5pc
	  section.data(1).logicalSrcIdx = 175;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(20) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.bqx0vc3mudn.dmwbxxl3xx
	  section.data(1).logicalSrcIdx = 176;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(21) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.bbjtuydtdkk.emkgbeqqs5
	  section.data(1).logicalSrcIdx = 177;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(22) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% hrxu5rhe3af.bbjtuydtdkk.cfhkcft2t2
	  section.data(1).logicalSrcIdx = 178;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(23) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 3886126751;
  targMap.checksum1 = 2914424905;
  targMap.checksum2 = 4150336366;
  targMap.checksum3 = 3650237027;

