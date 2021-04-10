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
    ;% Auto data (bjiazabmpo)
    ;%
      section.nData     = 425;
      section.data(425)  = dumData; %prealloc
      
	  ;% bjiazabmpo.RandomSource_MeanVal
	  section.data(1).logicalSrcIdx = 3;
	  section.data(1).dtTransOffset = 0;
	
	  ;% bjiazabmpo.RandomSource1_MeanVal
	  section.data(2).logicalSrcIdx = 4;
	  section.data(2).dtTransOffset = 1;
	
	  ;% bjiazabmpo.RandomSource1_MeanVal_fskbkqfzhy
	  section.data(3).logicalSrcIdx = 5;
	  section.data(3).dtTransOffset = 2;
	
	  ;% bjiazabmpo.RandomSource1_MeanVal_memmqqy0nt
	  section.data(4).logicalSrcIdx = 6;
	  section.data(4).dtTransOffset = 3;
	
	  ;% bjiazabmpo.RandomSource1_MeanVal_c0fkc2tbqq
	  section.data(5).logicalSrcIdx = 7;
	  section.data(5).dtTransOffset = 4;
	
	  ;% bjiazabmpo.RandomSource1_MeanVal_d5xz2yhw3l
	  section.data(6).logicalSrcIdx = 8;
	  section.data(6).dtTransOffset = 5;
	
	  ;% bjiazabmpo.RandomSource1_MeanVal_jxhxrhz3me
	  section.data(7).logicalSrcIdx = 9;
	  section.data(7).dtTransOffset = 6;
	
	  ;% bjiazabmpo.RandomSource1_MeanVal_bvk35h21mf
	  section.data(8).logicalSrcIdx = 10;
	  section.data(8).dtTransOffset = 7;
	
	  ;% bjiazabmpo.RandomSource1_MeanVal_cgugych5h2
	  section.data(9).logicalSrcIdx = 11;
	  section.data(9).dtTransOffset = 8;
	
	  ;% bjiazabmpo.RandomSource1_MeanVal_d4idhl1tz1
	  section.data(10).logicalSrcIdx = 12;
	  section.data(10).dtTransOffset = 9;
	
	  ;% bjiazabmpo.RandomSource1_MeanVal_n5f3r1zvmv
	  section.data(11).logicalSrcIdx = 13;
	  section.data(11).dtTransOffset = 10;
	
	  ;% bjiazabmpo.RandomSource1_MeanVal_kfynkp2waz
	  section.data(12).logicalSrcIdx = 14;
	  section.data(12).dtTransOffset = 11;
	
	  ;% bjiazabmpo.RandomSource1_MeanVal_d1pxk3satq
	  section.data(13).logicalSrcIdx = 15;
	  section.data(13).dtTransOffset = 12;
	
	  ;% bjiazabmpo.PWM_Period
	  section.data(14).logicalSrcIdx = 16;
	  section.data(14).dtTransOffset = 13;
	
	  ;% bjiazabmpo.PWM1_Period
	  section.data(15).logicalSrcIdx = 17;
	  section.data(15).dtTransOffset = 14;
	
	  ;% bjiazabmpo.PWM2_Period
	  section.data(16).logicalSrcIdx = 18;
	  section.data(16).dtTransOffset = 15;
	
	  ;% bjiazabmpo.DirectionCosineMatrixtoQuaternions_action
	  section.data(17).logicalSrcIdx = 19;
	  section.data(17).dtTransOffset = 16;
	
	  ;% bjiazabmpo.NormalizeVector_maxzero
	  section.data(18).logicalSrcIdx = 20;
	  section.data(18).dtTransOffset = 17;
	
	  ;% bjiazabmpo.NormalizeVector_maxzero_cdhvq0rirk
	  section.data(19).logicalSrcIdx = 21;
	  section.data(19).dtTransOffset = 18;
	
	  ;% bjiazabmpo.NormalizeVector_maxzero_b4q4mcfdki
	  section.data(20).logicalSrcIdx = 22;
	  section.data(20).dtTransOffset = 19;
	
	  ;% bjiazabmpo.NormalizeVector_maxzero_h2g0i450y0
	  section.data(21).logicalSrcIdx = 23;
	  section.data(21).dtTransOffset = 20;
	
	  ;% bjiazabmpo.NormalizeVector_maxzero_j4hegkg3gk
	  section.data(22).logicalSrcIdx = 24;
	  section.data(22).dtTransOffset = 21;
	
	  ;% bjiazabmpo.NormalizeVector_maxzero_g4yscxcbyk
	  section.data(23).logicalSrcIdx = 25;
	  section.data(23).dtTransOffset = 22;
	
	  ;% bjiazabmpo.NormalizeVector_maxzero_bhjxf3hbxp
	  section.data(24).logicalSrcIdx = 26;
	  section.data(24).dtTransOffset = 23;
	
	  ;% bjiazabmpo.NormalizeVector_maxzero_nx4f2adafg
	  section.data(25).logicalSrcIdx = 27;
	  section.data(25).dtTransOffset = 24;
	
	  ;% bjiazabmpo.NormalizeVector_maxzero_j5wdotj0ar
	  section.data(26).logicalSrcIdx = 28;
	  section.data(26).dtTransOffset = 25;
	
	  ;% bjiazabmpo.NormalizeVector_maxzero_etigbudinl
	  section.data(27).logicalSrcIdx = 29;
	  section.data(27).dtTransOffset = 26;
	
	  ;% bjiazabmpo.NormalizeVector_maxzero_mpxbpoayb2
	  section.data(28).logicalSrcIdx = 30;
	  section.data(28).dtTransOffset = 27;
	
	  ;% bjiazabmpo.NormalizeVector_maxzero_kqylmwb1gt
	  section.data(29).logicalSrcIdx = 31;
	  section.data(29).dtTransOffset = 28;
	
	  ;% bjiazabmpo.NormalizeVector1_maxzero
	  section.data(30).logicalSrcIdx = 32;
	  section.data(30).dtTransOffset = 29;
	
	  ;% bjiazabmpo.NormalizeVector_maxzero_idjlccn1tr
	  section.data(31).logicalSrcIdx = 33;
	  section.data(31).dtTransOffset = 30;
	
	  ;% bjiazabmpo.NormalizeVector1_maxzero_pe3bb51lb3
	  section.data(32).logicalSrcIdx = 34;
	  section.data(32).dtTransOffset = 31;
	
	  ;% bjiazabmpo.NormalizeVector3_maxzero
	  section.data(33).logicalSrcIdx = 35;
	  section.data(33).dtTransOffset = 32;
	
	  ;% bjiazabmpo.NormalizeVector4_maxzero
	  section.data(34).logicalSrcIdx = 36;
	  section.data(34).dtTransOffset = 33;
	
	  ;% bjiazabmpo.DirectionCosineMatrixtoQuaternions_tolerance
	  section.data(35).logicalSrcIdx = 37;
	  section.data(35).dtTransOffset = 34;
	
	  ;% bjiazabmpo.Constant_Value
	  section.data(36).logicalSrcIdx = 38;
	  section.data(36).dtTransOffset = 35;
	
	  ;% bjiazabmpo.Constant_Value_ifjxstsexw
	  section.data(37).logicalSrcIdx = 39;
	  section.data(37).dtTransOffset = 36;
	
	  ;% bjiazabmpo.Constant_Value_nfnblq3wf3
	  section.data(38).logicalSrcIdx = 40;
	  section.data(38).dtTransOffset = 37;
	
	  ;% bjiazabmpo.Constant_Value_bxtk0v2tqk
	  section.data(39).logicalSrcIdx = 41;
	  section.data(39).dtTransOffset = 38;
	
	  ;% bjiazabmpo.Gain_Gain
	  section.data(40).logicalSrcIdx = 42;
	  section.data(40).dtTransOffset = 39;
	
	  ;% bjiazabmpo.Gain1_Gain
	  section.data(41).logicalSrcIdx = 43;
	  section.data(41).dtTransOffset = 40;
	
	  ;% bjiazabmpo.Constant_Value_czyi20hi44
	  section.data(42).logicalSrcIdx = 44;
	  section.data(42).dtTransOffset = 41;
	
	  ;% bjiazabmpo.Gain_Gain_ffyvgqn0t3
	  section.data(43).logicalSrcIdx = 45;
	  section.data(43).dtTransOffset = 42;
	
	  ;% bjiazabmpo.Gain1_Gain_hf2zl5hf11
	  section.data(44).logicalSrcIdx = 46;
	  section.data(44).dtTransOffset = 43;
	
	  ;% bjiazabmpo.Gain3_Gain
	  section.data(45).logicalSrcIdx = 47;
	  section.data(45).dtTransOffset = 44;
	
	  ;% bjiazabmpo.Gain4_Gain
	  section.data(46).logicalSrcIdx = 48;
	  section.data(46).dtTransOffset = 45;
	
	  ;% bjiazabmpo.Constant1_Value
	  section.data(47).logicalSrcIdx = 49;
	  section.data(47).dtTransOffset = 46;
	
	  ;% bjiazabmpo.Constant2_Value
	  section.data(48).logicalSrcIdx = 50;
	  section.data(48).dtTransOffset = 47;
	
	  ;% bjiazabmpo.Constant_Value_glskcdmgi0
	  section.data(49).logicalSrcIdx = 51;
	  section.data(49).dtTransOffset = 49;
	
	  ;% bjiazabmpo.Gain_Gain_ev442xw5g3
	  section.data(50).logicalSrcIdx = 52;
	  section.data(50).dtTransOffset = 50;
	
	  ;% bjiazabmpo.Gain1_Gain_bctn5kthma
	  section.data(51).logicalSrcIdx = 53;
	  section.data(51).dtTransOffset = 51;
	
	  ;% bjiazabmpo.Gain2_Gain
	  section.data(52).logicalSrcIdx = 54;
	  section.data(52).dtTransOffset = 52;
	
	  ;% bjiazabmpo.Gain3_Gain_iezjytb1ib
	  section.data(53).logicalSrcIdx = 55;
	  section.data(53).dtTransOffset = 53;
	
	  ;% bjiazabmpo.Constant1_Value_ius3i4otxm
	  section.data(54).logicalSrcIdx = 56;
	  section.data(54).dtTransOffset = 54;
	
	  ;% bjiazabmpo.Constant2_Value_j5v1xvugrn
	  section.data(55).logicalSrcIdx = 57;
	  section.data(55).dtTransOffset = 55;
	
	  ;% bjiazabmpo.Constant_Value_p5m1vauvdr
	  section.data(56).logicalSrcIdx = 58;
	  section.data(56).dtTransOffset = 57;
	
	  ;% bjiazabmpo.Gain_Gain_cqlkw4p3g1
	  section.data(57).logicalSrcIdx = 59;
	  section.data(57).dtTransOffset = 58;
	
	  ;% bjiazabmpo.Gain1_Gain_ij2znuz5co
	  section.data(58).logicalSrcIdx = 60;
	  section.data(58).dtTransOffset = 59;
	
	  ;% bjiazabmpo.Gain2_Gain_medwk1da45
	  section.data(59).logicalSrcIdx = 61;
	  section.data(59).dtTransOffset = 60;
	
	  ;% bjiazabmpo.Gain3_Gain_j50dplxsob
	  section.data(60).logicalSrcIdx = 62;
	  section.data(60).dtTransOffset = 61;
	
	  ;% bjiazabmpo.Constant1_Value_c4wnv34dlm
	  section.data(61).logicalSrcIdx = 63;
	  section.data(61).dtTransOffset = 62;
	
	  ;% bjiazabmpo.Constant2_Value_i3cnjpylpr
	  section.data(62).logicalSrcIdx = 64;
	  section.data(62).dtTransOffset = 63;
	
	  ;% bjiazabmpo.Constant_Value_m2h11to3lk
	  section.data(63).logicalSrcIdx = 65;
	  section.data(63).dtTransOffset = 65;
	
	  ;% bjiazabmpo.Constant1_Value_ftvtqjp1us
	  section.data(64).logicalSrcIdx = 66;
	  section.data(64).dtTransOffset = 66;
	
	  ;% bjiazabmpo.Constant1_Value_l2qqn3e4fv
	  section.data(65).logicalSrcIdx = 67;
	  section.data(65).dtTransOffset = 67;
	
	  ;% bjiazabmpo.Bias_Bias
	  section.data(66).logicalSrcIdx = 68;
	  section.data(66).dtTransOffset = 68;
	
	  ;% bjiazabmpo.Bias1_Bias
	  section.data(67).logicalSrcIdx = 69;
	  section.data(67).dtTransOffset = 69;
	
	  ;% bjiazabmpo.RandomSource_VarianceRTP
	  section.data(68).logicalSrcIdx = 70;
	  section.data(68).dtTransOffset = 78;
	
	  ;% bjiazabmpo.R3_Value
	  section.data(69).logicalSrcIdx = 71;
	  section.data(69).dtTransOffset = 79;
	
	  ;% bjiazabmpo.MeasurementFcn3Inputs_Value
	  section.data(70).logicalSrcIdx = 72;
	  section.data(70).dtTransOffset = 88;
	
	  ;% bjiazabmpo.Integrator1_AbsoluteTolerance
	  section.data(71).logicalSrcIdx = 73;
	  section.data(71).dtTransOffset = 89;
	
	  ;% bjiazabmpo.Gain_Gain_cpl3z33sd4
	  section.data(72).logicalSrcIdx = 74;
	  section.data(72).dtTransOffset = 90;
	
	  ;% bjiazabmpo.Gain2_Gain_n2hlwdziix
	  section.data(73).logicalSrcIdx = 75;
	  section.data(73).dtTransOffset = 91;
	
	  ;% bjiazabmpo.Gain_Gain_deacltj5ll
	  section.data(74).logicalSrcIdx = 76;
	  section.data(74).dtTransOffset = 92;
	
	  ;% bjiazabmpo.Gain1_Gain_fe0vmtwk5u
	  section.data(75).logicalSrcIdx = 77;
	  section.data(75).dtTransOffset = 93;
	
	  ;% bjiazabmpo.Gain_Gain_m0ug0pnx04
	  section.data(76).logicalSrcIdx = 78;
	  section.data(76).dtTransOffset = 94;
	
	  ;% bjiazabmpo.Gain2_Gain_gnrwoc1vc2
	  section.data(77).logicalSrcIdx = 79;
	  section.data(77).dtTransOffset = 95;
	
	  ;% bjiazabmpo.Gain1_Gain_epkzxiktj2
	  section.data(78).logicalSrcIdx = 80;
	  section.data(78).dtTransOffset = 96;
	
	  ;% bjiazabmpo.Gain_Gain_efwlgxe2sc
	  section.data(79).logicalSrcIdx = 81;
	  section.data(79).dtTransOffset = 97;
	
	  ;% bjiazabmpo.Gain1_Gain_ito2bip4nt
	  section.data(80).logicalSrcIdx = 82;
	  section.data(80).dtTransOffset = 98;
	
	  ;% bjiazabmpo.Gain2_Gain_kojiuv3vcw
	  section.data(81).logicalSrcIdx = 83;
	  section.data(81).dtTransOffset = 99;
	
	  ;% bjiazabmpo.RandomSource1_VarianceRTP
	  section.data(82).logicalSrcIdx = 84;
	  section.data(82).dtTransOffset = 100;
	
	  ;% bjiazabmpo.Saturation_UpperSat
	  section.data(83).logicalSrcIdx = 85;
	  section.data(83).dtTransOffset = 101;
	
	  ;% bjiazabmpo.Saturation_LowerSat
	  section.data(84).logicalSrcIdx = 86;
	  section.data(84).dtTransOffset = 102;
	
	  ;% bjiazabmpo.RandomSource1_VarianceRTP_c0tnp0ox24
	  section.data(85).logicalSrcIdx = 87;
	  section.data(85).dtTransOffset = 103;
	
	  ;% bjiazabmpo.Saturation_UpperSat_iasva3d1xg
	  section.data(86).logicalSrcIdx = 88;
	  section.data(86).dtTransOffset = 104;
	
	  ;% bjiazabmpo.Saturation_LowerSat_k012nv1qgk
	  section.data(87).logicalSrcIdx = 89;
	  section.data(87).dtTransOffset = 105;
	
	  ;% bjiazabmpo.RandomSource1_VarianceRTP_ciqyogzko1
	  section.data(88).logicalSrcIdx = 90;
	  section.data(88).dtTransOffset = 106;
	
	  ;% bjiazabmpo.Saturation_UpperSat_kvrw4yrrrs
	  section.data(89).logicalSrcIdx = 91;
	  section.data(89).dtTransOffset = 107;
	
	  ;% bjiazabmpo.Saturation_LowerSat_kx5yh1wv4z
	  section.data(90).logicalSrcIdx = 92;
	  section.data(90).dtTransOffset = 108;
	
	  ;% bjiazabmpo.RandomSource1_VarianceRTP_f4hdv51tm4
	  section.data(91).logicalSrcIdx = 93;
	  section.data(91).dtTransOffset = 109;
	
	  ;% bjiazabmpo.Saturation_UpperSat_byrofjxopf
	  section.data(92).logicalSrcIdx = 94;
	  section.data(92).dtTransOffset = 110;
	
	  ;% bjiazabmpo.Saturation_LowerSat_eqtwttitcd
	  section.data(93).logicalSrcIdx = 95;
	  section.data(93).dtTransOffset = 111;
	
	  ;% bjiazabmpo.RandomSource1_VarianceRTP_g12uaggma2
	  section.data(94).logicalSrcIdx = 96;
	  section.data(94).dtTransOffset = 112;
	
	  ;% bjiazabmpo.Saturation_UpperSat_llltpjmasd
	  section.data(95).logicalSrcIdx = 97;
	  section.data(95).dtTransOffset = 113;
	
	  ;% bjiazabmpo.Saturation_LowerSat_od1cxjykdq
	  section.data(96).logicalSrcIdx = 98;
	  section.data(96).dtTransOffset = 114;
	
	  ;% bjiazabmpo.RandomSource1_VarianceRTP_bdmhqmxko4
	  section.data(97).logicalSrcIdx = 99;
	  section.data(97).dtTransOffset = 115;
	
	  ;% bjiazabmpo.Saturation_UpperSat_e1cwi1gybf
	  section.data(98).logicalSrcIdx = 100;
	  section.data(98).dtTransOffset = 116;
	
	  ;% bjiazabmpo.Saturation_LowerSat_ajttgxrnng
	  section.data(99).logicalSrcIdx = 101;
	  section.data(99).dtTransOffset = 117;
	
	  ;% bjiazabmpo.R2_Value
	  section.data(100).logicalSrcIdx = 102;
	  section.data(100).dtTransOffset = 118;
	
	  ;% bjiazabmpo.Gain1_Gain_csudgssrcg
	  section.data(101).logicalSrcIdx = 103;
	  section.data(101).dtTransOffset = 122;
	
	  ;% bjiazabmpo.Gain2_Gain_nben4kjacq
	  section.data(102).logicalSrcIdx = 104;
	  section.data(102).dtTransOffset = 123;
	
	  ;% bjiazabmpo.Gain_Gain_kewyutalpa
	  section.data(103).logicalSrcIdx = 105;
	  section.data(103).dtTransOffset = 124;
	
	  ;% bjiazabmpo.Gain1_Gain_e5ngzsvcli
	  section.data(104).logicalSrcIdx = 106;
	  section.data(104).dtTransOffset = 125;
	
	  ;% bjiazabmpo.Gain_Gain_fouuav1ki1
	  section.data(105).logicalSrcIdx = 107;
	  section.data(105).dtTransOffset = 126;
	
	  ;% bjiazabmpo.Gain2_Gain_d4fbbaxwpd
	  section.data(106).logicalSrcIdx = 108;
	  section.data(106).dtTransOffset = 127;
	
	  ;% bjiazabmpo.Gain1_Gain_lq4olh4tnx
	  section.data(107).logicalSrcIdx = 109;
	  section.data(107).dtTransOffset = 128;
	
	  ;% bjiazabmpo.Gain_Gain_kc1cpqscqf
	  section.data(108).logicalSrcIdx = 110;
	  section.data(108).dtTransOffset = 129;
	
	  ;% bjiazabmpo.Gain1_Gain_n4q3gythod
	  section.data(109).logicalSrcIdx = 111;
	  section.data(109).dtTransOffset = 130;
	
	  ;% bjiazabmpo.Gain2_Gain_arhr50dupm
	  section.data(110).logicalSrcIdx = 112;
	  section.data(110).dtTransOffset = 131;
	
	  ;% bjiazabmpo.RandomSource1_VarianceRTP_k1b5meiqjj
	  section.data(111).logicalSrcIdx = 113;
	  section.data(111).dtTransOffset = 132;
	
	  ;% bjiazabmpo.Saturation_UpperSat_hvo4j1520s
	  section.data(112).logicalSrcIdx = 114;
	  section.data(112).dtTransOffset = 133;
	
	  ;% bjiazabmpo.Saturation_LowerSat_anwhzkhsgm
	  section.data(113).logicalSrcIdx = 115;
	  section.data(113).dtTransOffset = 134;
	
	  ;% bjiazabmpo.RandomSource1_VarianceRTP_pdcijtaj4d
	  section.data(114).logicalSrcIdx = 116;
	  section.data(114).dtTransOffset = 135;
	
	  ;% bjiazabmpo.Saturation_UpperSat_m5walzmpht
	  section.data(115).logicalSrcIdx = 117;
	  section.data(115).dtTransOffset = 136;
	
	  ;% bjiazabmpo.Saturation_LowerSat_kiy0a1gdvs
	  section.data(116).logicalSrcIdx = 118;
	  section.data(116).dtTransOffset = 137;
	
	  ;% bjiazabmpo.RandomSource1_VarianceRTP_crqc3mkc0f
	  section.data(117).logicalSrcIdx = 119;
	  section.data(117).dtTransOffset = 138;
	
	  ;% bjiazabmpo.Saturation_UpperSat_m5kmh5w5uw
	  section.data(118).logicalSrcIdx = 120;
	  section.data(118).dtTransOffset = 139;
	
	  ;% bjiazabmpo.Saturation_LowerSat_i04nwcukho
	  section.data(119).logicalSrcIdx = 121;
	  section.data(119).dtTransOffset = 140;
	
	  ;% bjiazabmpo.RandomSource1_VarianceRTP_blin0jucej
	  section.data(120).logicalSrcIdx = 122;
	  section.data(120).dtTransOffset = 141;
	
	  ;% bjiazabmpo.Saturation_UpperSat_c4xiqwgxlz
	  section.data(121).logicalSrcIdx = 123;
	  section.data(121).dtTransOffset = 142;
	
	  ;% bjiazabmpo.Saturation_LowerSat_pi2aujffw1
	  section.data(122).logicalSrcIdx = 124;
	  section.data(122).dtTransOffset = 143;
	
	  ;% bjiazabmpo.RandomSource1_VarianceRTP_dvuf3vyvl4
	  section.data(123).logicalSrcIdx = 125;
	  section.data(123).dtTransOffset = 144;
	
	  ;% bjiazabmpo.Saturation_UpperSat_mq4hmkw4m2
	  section.data(124).logicalSrcIdx = 126;
	  section.data(124).dtTransOffset = 145;
	
	  ;% bjiazabmpo.Saturation_LowerSat_dqoi00mxim
	  section.data(125).logicalSrcIdx = 127;
	  section.data(125).dtTransOffset = 146;
	
	  ;% bjiazabmpo.RandomSource1_VarianceRTP_cg3jlumacb
	  section.data(126).logicalSrcIdx = 128;
	  section.data(126).dtTransOffset = 147;
	
	  ;% bjiazabmpo.Saturation_UpperSat_kiybxhvwme
	  section.data(127).logicalSrcIdx = 129;
	  section.data(127).dtTransOffset = 148;
	
	  ;% bjiazabmpo.Saturation_LowerSat_lktmm4bxfn
	  section.data(128).logicalSrcIdx = 130;
	  section.data(128).dtTransOffset = 149;
	
	  ;% bjiazabmpo.R1_Value
	  section.data(129).logicalSrcIdx = 131;
	  section.data(129).dtTransOffset = 150;
	
	  ;% bjiazabmpo.Gain_Gain_acmfvzt2nt
	  section.data(130).logicalSrcIdx = 132;
	  section.data(130).dtTransOffset = 154;
	
	  ;% bjiazabmpo.Integrator_AbsoluteTolerance
	  section.data(131).logicalSrcIdx = 133;
	  section.data(131).dtTransOffset = 155;
	
	  ;% bjiazabmpo.Merge_InitialOutput
	  section.data(132).logicalSrcIdx = 134;
	  section.data(132).dtTransOffset = 156;
	
	  ;% bjiazabmpo.Gain2_Gain_oemzk5ojwm
	  section.data(133).logicalSrcIdx = 135;
	  section.data(133).dtTransOffset = 160;
	
	  ;% bjiazabmpo.Gain_Gain_ncteysqil3
	  section.data(134).logicalSrcIdx = 136;
	  section.data(134).dtTransOffset = 161;
	
	  ;% bjiazabmpo.Gain1_Gain_idqjpcj2w2
	  section.data(135).logicalSrcIdx = 137;
	  section.data(135).dtTransOffset = 162;
	
	  ;% bjiazabmpo.Gain_Gain_lv4h0lzx53
	  section.data(136).logicalSrcIdx = 138;
	  section.data(136).dtTransOffset = 163;
	
	  ;% bjiazabmpo.Gain2_Gain_kwjfzexkam
	  section.data(137).logicalSrcIdx = 139;
	  section.data(137).dtTransOffset = 164;
	
	  ;% bjiazabmpo.Gain1_Gain_jgiaul0apm
	  section.data(138).logicalSrcIdx = 140;
	  section.data(138).dtTransOffset = 165;
	
	  ;% bjiazabmpo.Gain_Gain_fgmqaszm3p
	  section.data(139).logicalSrcIdx = 141;
	  section.data(139).dtTransOffset = 166;
	
	  ;% bjiazabmpo.Gain1_Gain_bu0iql53q1
	  section.data(140).logicalSrcIdx = 142;
	  section.data(140).dtTransOffset = 167;
	
	  ;% bjiazabmpo.Gain2_Gain_ozqnssaofx
	  section.data(141).logicalSrcIdx = 143;
	  section.data(141).dtTransOffset = 168;
	
	  ;% bjiazabmpo.Gain_Gain_h02ebdzwhh
	  section.data(142).logicalSrcIdx = 144;
	  section.data(142).dtTransOffset = 169;
	
	  ;% bjiazabmpo.Gain1_Gain_bvtqk3cyhh
	  section.data(143).logicalSrcIdx = 145;
	  section.data(143).dtTransOffset = 170;
	
	  ;% bjiazabmpo.Gain2_Gain_lut5xpex21
	  section.data(144).logicalSrcIdx = 146;
	  section.data(144).dtTransOffset = 171;
	
	  ;% bjiazabmpo.Integrator_IC
	  section.data(145).logicalSrcIdx = 147;
	  section.data(145).dtTransOffset = 172;
	
	  ;% bjiazabmpo.Gain_Gain_cf5hb10y5x
	  section.data(146).logicalSrcIdx = 148;
	  section.data(146).dtTransOffset = 173;
	
	  ;% bjiazabmpo.Gain2_Gain_n32pjfxnui
	  section.data(147).logicalSrcIdx = 149;
	  section.data(147).dtTransOffset = 174;
	
	  ;% bjiazabmpo.Gain1_Gain_gwlrw1w2b3
	  section.data(148).logicalSrcIdx = 150;
	  section.data(148).dtTransOffset = 175;
	
	  ;% bjiazabmpo.Gain_Gain_efnax0y1dx
	  section.data(149).logicalSrcIdx = 151;
	  section.data(149).dtTransOffset = 176;
	
	  ;% bjiazabmpo.Gain1_Gain_ddeccjfmea
	  section.data(150).logicalSrcIdx = 152;
	  section.data(150).dtTransOffset = 177;
	
	  ;% bjiazabmpo.Gain2_Gain_g2ebct4dqc
	  section.data(151).logicalSrcIdx = 153;
	  section.data(151).dtTransOffset = 178;
	
	  ;% bjiazabmpo.Gain2_Gain_cko11epp5n
	  section.data(152).logicalSrcIdx = 154;
	  section.data(152).dtTransOffset = 179;
	
	  ;% bjiazabmpo.Gain_Gain_cjicctxqb2
	  section.data(153).logicalSrcIdx = 155;
	  section.data(153).dtTransOffset = 180;
	
	  ;% bjiazabmpo.Gain1_Gain_nieh11pzcd
	  section.data(154).logicalSrcIdx = 156;
	  section.data(154).dtTransOffset = 181;
	
	  ;% bjiazabmpo.Gain_Gain_m4jtdwqsx1
	  section.data(155).logicalSrcIdx = 157;
	  section.data(155).dtTransOffset = 182;
	
	  ;% bjiazabmpo.Gain_Gain_cnryscy0x5
	  section.data(156).logicalSrcIdx = 158;
	  section.data(156).dtTransOffset = 183;
	
	  ;% bjiazabmpo.Gain_Gain_flpxquj1at
	  section.data(157).logicalSrcIdx = 159;
	  section.data(157).dtTransOffset = 184;
	
	  ;% bjiazabmpo.Gain_Gain_fsocaetgdj
	  section.data(158).logicalSrcIdx = 160;
	  section.data(158).dtTransOffset = 185;
	
	  ;% bjiazabmpo.Gain1_Gain_igcxviai5g
	  section.data(159).logicalSrcIdx = 161;
	  section.data(159).dtTransOffset = 186;
	
	  ;% bjiazabmpo.Gain2_Gain_mcrod3aisq
	  section.data(160).logicalSrcIdx = 162;
	  section.data(160).dtTransOffset = 187;
	
	  ;% bjiazabmpo.Gain2_Gain_d0aeb3inpf
	  section.data(161).logicalSrcIdx = 163;
	  section.data(161).dtTransOffset = 188;
	
	  ;% bjiazabmpo.Gain_Gain_avgts0xajn
	  section.data(162).logicalSrcIdx = 164;
	  section.data(162).dtTransOffset = 189;
	
	  ;% bjiazabmpo.Gain1_Gain_pfgznzxep3
	  section.data(163).logicalSrcIdx = 165;
	  section.data(163).dtTransOffset = 190;
	
	  ;% bjiazabmpo.Gain_Gain_l4qk2foong
	  section.data(164).logicalSrcIdx = 166;
	  section.data(164).dtTransOffset = 191;
	
	  ;% bjiazabmpo.Gain2_Gain_jbi3ws3ahy
	  section.data(165).logicalSrcIdx = 167;
	  section.data(165).dtTransOffset = 192;
	
	  ;% bjiazabmpo.Gain1_Gain_b2dtklqw2b
	  section.data(166).logicalSrcIdx = 168;
	  section.data(166).dtTransOffset = 193;
	
	  ;% bjiazabmpo.Gain1_Gain_objsqoebrs
	  section.data(167).logicalSrcIdx = 169;
	  section.data(167).dtTransOffset = 194;
	
	  ;% bjiazabmpo.Gain_Gain_ij5ephcub4
	  section.data(168).logicalSrcIdx = 170;
	  section.data(168).dtTransOffset = 195;
	
	  ;% bjiazabmpo.Gain1_Gain_fos5u53xa3
	  section.data(169).logicalSrcIdx = 171;
	  section.data(169).dtTransOffset = 196;
	
	  ;% bjiazabmpo.Gain_Gain_fosanw5ymw
	  section.data(170).logicalSrcIdx = 172;
	  section.data(170).dtTransOffset = 197;
	
	  ;% bjiazabmpo.Q_Value
	  section.data(171).logicalSrcIdx = 173;
	  section.data(171).dtTransOffset = 198;
	
	  ;% bjiazabmpo.DataStoreMemoryP_InitialValue
	  section.data(172).logicalSrcIdx = 174;
	  section.data(172).dtTransOffset = 247;
	
	  ;% bjiazabmpo.DataStoreMemoryx_InitialValue
	  section.data(173).logicalSrcIdx = 175;
	  section.data(173).dtTransOffset = 296;
	
	  ;% bjiazabmpo.Constant_Value_ijgpov0mvf
	  section.data(174).logicalSrcIdx = 176;
	  section.data(174).dtTransOffset = 303;
	
	  ;% bjiazabmpo.Constant_Value_h05qkqds1k
	  section.data(175).logicalSrcIdx = 177;
	  section.data(175).dtTransOffset = 312;
	
	  ;% bjiazabmpo.Constant_Value_mnihrtjfmj
	  section.data(176).logicalSrcIdx = 178;
	  section.data(176).dtTransOffset = 313;
	
	  ;% bjiazabmpo.Constant_Value_aqneserr4m
	  section.data(177).logicalSrcIdx = 179;
	  section.data(177).dtTransOffset = 314;
	
	  ;% bjiazabmpo.Constant_Value_pymuilks0n
	  section.data(178).logicalSrcIdx = 180;
	  section.data(178).dtTransOffset = 315;
	
	  ;% bjiazabmpo.Constant2_Value_ialq4qchdp
	  section.data(179).logicalSrcIdx = 181;
	  section.data(179).dtTransOffset = 316;
	
	  ;% bjiazabmpo.Constant3_Value
	  section.data(180).logicalSrcIdx = 182;
	  section.data(180).dtTransOffset = 319;
	
	  ;% bjiazabmpo.Gain1_Gain_l1jki2u5fa
	  section.data(181).logicalSrcIdx = 183;
	  section.data(181).dtTransOffset = 322;
	
	  ;% bjiazabmpo.Inertia_Value
	  section.data(182).logicalSrcIdx = 184;
	  section.data(182).dtTransOffset = 323;
	
	  ;% bjiazabmpo.Constant_Value_bpdqgjnrbi
	  section.data(183).logicalSrcIdx = 185;
	  section.data(183).dtTransOffset = 326;
	
	  ;% bjiazabmpo.Constant_Value_lxx0buxvfk
	  section.data(184).logicalSrcIdx = 186;
	  section.data(184).dtTransOffset = 327;
	
	  ;% bjiazabmpo.Constant_Value_a2jieicat5
	  section.data(185).logicalSrcIdx = 187;
	  section.data(185).dtTransOffset = 328;
	
	  ;% bjiazabmpo.Constant_Value_ollq4x5vyn
	  section.data(186).logicalSrcIdx = 188;
	  section.data(186).dtTransOffset = 329;
	
	  ;% bjiazabmpo.Constant_Value_jelrytb22b
	  section.data(187).logicalSrcIdx = 189;
	  section.data(187).dtTransOffset = 330;
	
	  ;% bjiazabmpo.Constant_Value_nfqnghygav
	  section.data(188).logicalSrcIdx = 190;
	  section.data(188).dtTransOffset = 331;
	
	  ;% bjiazabmpo.Spacecraftmagneticdipolebodyreferenceframe_Value
	  section.data(189).logicalSrcIdx = 191;
	  section.data(189).dtTransOffset = 332;
	
	  ;% bjiazabmpo.Constant_Value_ekkpqgqspn
	  section.data(190).logicalSrcIdx = 192;
	  section.data(190).dtTransOffset = 335;
	
	  ;% bjiazabmpo.Constant_Value_hrofb0v0v5
	  section.data(191).logicalSrcIdx = 193;
	  section.data(191).dtTransOffset = 336;
	
	  ;% bjiazabmpo.Constant_Value_klghvcvqmj
	  section.data(192).logicalSrcIdx = 194;
	  section.data(192).dtTransOffset = 337;
	
	  ;% bjiazabmpo.Constant_Value_h3axm4dzs2
	  section.data(193).logicalSrcIdx = 195;
	  section.data(193).dtTransOffset = 338;
	
	  ;% bjiazabmpo.Constant_Value_jsi055lqf3
	  section.data(194).logicalSrcIdx = 196;
	  section.data(194).dtTransOffset = 339;
	
	  ;% bjiazabmpo.u821stMarch_Value
	  section.data(195).logicalSrcIdx = 197;
	  section.data(195).dtTransOffset = 340;
	
	  ;% bjiazabmpo.Gain1_Gain_km22rji0yo
	  section.data(196).logicalSrcIdx = 198;
	  section.data(196).dtTransOffset = 341;
	
	  ;% bjiazabmpo.Constant_Value_c0ie4jx1vv
	  section.data(197).logicalSrcIdx = 199;
	  section.data(197).dtTransOffset = 342;
	
	  ;% bjiazabmpo.Constant1_Value_lvvzxuwh5z
	  section.data(198).logicalSrcIdx = 200;
	  section.data(198).dtTransOffset = 343;
	
	  ;% bjiazabmpo.Sun_Value
	  section.data(199).logicalSrcIdx = 201;
	  section.data(199).dtTransOffset = 344;
	
	  ;% bjiazabmpo.a_Value
	  section.data(200).logicalSrcIdx = 202;
	  section.data(200).dtTransOffset = 345;
	
	  ;% bjiazabmpo.e_Value
	  section.data(201).logicalSrcIdx = 203;
	  section.data(201).dtTransOffset = 346;
	
	  ;% bjiazabmpo.Constant_Value_hn3g4e2bdf
	  section.data(202).logicalSrcIdx = 204;
	  section.data(202).dtTransOffset = 347;
	
	  ;% bjiazabmpo.Constant_Value_cinqqywm1t
	  section.data(203).logicalSrcIdx = 205;
	  section.data(203).dtTransOffset = 348;
	
	  ;% bjiazabmpo.Constant_Value_aglfz4cib2
	  section.data(204).logicalSrcIdx = 206;
	  section.data(204).dtTransOffset = 349;
	
	  ;% bjiazabmpo.Anglebetween3rdJanto21stMarch180_Value
	  section.data(205).logicalSrcIdx = 207;
	  section.data(205).dtTransOffset = 350;
	
	  ;% bjiazabmpo.Constant_Value_mgrgcefnc2
	  section.data(206).logicalSrcIdx = 208;
	  section.data(206).dtTransOffset = 351;
	
	  ;% bjiazabmpo.Constant5_Value
	  section.data(207).logicalSrcIdx = 209;
	  section.data(207).dtTransOffset = 352;
	
	  ;% bjiazabmpo.Ecliptic_Value
	  section.data(208).logicalSrcIdx = 210;
	  section.data(208).dtTransOffset = 353;
	
	  ;% bjiazabmpo.Gain_Gain_nrquqjsjbh
	  section.data(209).logicalSrcIdx = 211;
	  section.data(209).dtTransOffset = 354;
	
	  ;% bjiazabmpo.Gain1_Gain_byeui5d4hz
	  section.data(210).logicalSrcIdx = 212;
	  section.data(210).dtTransOffset = 355;
	
	  ;% bjiazabmpo.Constant_Value_azddlyivju
	  section.data(211).logicalSrcIdx = 213;
	  section.data(211).dtTransOffset = 356;
	
	  ;% bjiazabmpo.Constant3_Value_fveye0j2gb
	  section.data(212).logicalSrcIdx = 214;
	  section.data(212).dtTransOffset = 357;
	
	  ;% bjiazabmpo.u2_Gain
	  section.data(213).logicalSrcIdx = 215;
	  section.data(213).dtTransOffset = 358;
	
	  ;% bjiazabmpo.Constant_Value_mrthaqohbp
	  section.data(214).logicalSrcIdx = 216;
	  section.data(214).dtTransOffset = 359;
	
	  ;% bjiazabmpo.Gain_Gain_msviodsdfg
	  section.data(215).logicalSrcIdx = 217;
	  section.data(215).dtTransOffset = 360;
	
	  ;% bjiazabmpo.Gain1_Gain_fdnpx3hnab
	  section.data(216).logicalSrcIdx = 218;
	  section.data(216).dtTransOffset = 361;
	
	  ;% bjiazabmpo.Gain2_Gain_jrylcyky0d
	  section.data(217).logicalSrcIdx = 219;
	  section.data(217).dtTransOffset = 362;
	
	  ;% bjiazabmpo.Constant_Value_gob0mxnrc1
	  section.data(218).logicalSrcIdx = 220;
	  section.data(218).dtTransOffset = 363;
	
	  ;% bjiazabmpo.Gain_Gain_j00moojqwi
	  section.data(219).logicalSrcIdx = 221;
	  section.data(219).dtTransOffset = 364;
	
	  ;% bjiazabmpo.Gain1_Gain_epavf05nx2
	  section.data(220).logicalSrcIdx = 222;
	  section.data(220).dtTransOffset = 365;
	
	  ;% bjiazabmpo.Gain2_Gain_jieczjcfxj
	  section.data(221).logicalSrcIdx = 223;
	  section.data(221).dtTransOffset = 366;
	
	  ;% bjiazabmpo.Constant_Value_l4ftm45smy
	  section.data(222).logicalSrcIdx = 224;
	  section.data(222).dtTransOffset = 367;
	
	  ;% bjiazabmpo.Gain_Gain_lxppc43sr3
	  section.data(223).logicalSrcIdx = 225;
	  section.data(223).dtTransOffset = 368;
	
	  ;% bjiazabmpo.Gain1_Gain_pr0mjxkeko
	  section.data(224).logicalSrcIdx = 226;
	  section.data(224).dtTransOffset = 369;
	
	  ;% bjiazabmpo.Gain2_Gain_oh11qzcnsq
	  section.data(225).logicalSrcIdx = 227;
	  section.data(225).dtTransOffset = 370;
	
	  ;% bjiazabmpo.Constant3_Value_aiagav1bu5
	  section.data(226).logicalSrcIdx = 228;
	  section.data(226).dtTransOffset = 371;
	
	  ;% bjiazabmpo.Constant4_Value
	  section.data(227).logicalSrcIdx = 229;
	  section.data(227).dtTransOffset = 372;
	
	  ;% bjiazabmpo.Constant_Value_fjyq3eus5i
	  section.data(228).logicalSrcIdx = 230;
	  section.data(228).dtTransOffset = 373;
	
	  ;% bjiazabmpo.Constant_Value_cpj53jxfos
	  section.data(229).logicalSrcIdx = 231;
	  section.data(229).dtTransOffset = 374;
	
	  ;% bjiazabmpo.Constant_Value_ouyamitdob
	  section.data(230).logicalSrcIdx = 232;
	  section.data(230).dtTransOffset = 375;
	
	  ;% bjiazabmpo.Constant_Value_guhbgdhd5y
	  section.data(231).logicalSrcIdx = 233;
	  section.data(231).dtTransOffset = 376;
	
	  ;% bjiazabmpo.Constant_Value_k3ydr0xveb
	  section.data(232).logicalSrcIdx = 234;
	  section.data(232).dtTransOffset = 377;
	
	  ;% bjiazabmpo.Constant_Value_pu1egqm5wd
	  section.data(233).logicalSrcIdx = 235;
	  section.data(233).dtTransOffset = 379;
	
	  ;% bjiazabmpo.Sensororientation_Value
	  section.data(234).logicalSrcIdx = 236;
	  section.data(234).dtTransOffset = 380;
	
	  ;% bjiazabmpo.Constant_Value_hucifuffuc
	  section.data(235).logicalSrcIdx = 237;
	  section.data(235).dtTransOffset = 384;
	
	  ;% bjiazabmpo.Gain_Gain_gakfyjlszi
	  section.data(236).logicalSrcIdx = 238;
	  section.data(236).dtTransOffset = 385;
	
	  ;% bjiazabmpo.Gain1_Gain_cp5gxmxv40
	  section.data(237).logicalSrcIdx = 239;
	  section.data(237).dtTransOffset = 386;
	
	  ;% bjiazabmpo.Gain2_Gain_bqvzfgganp
	  section.data(238).logicalSrcIdx = 240;
	  section.data(238).dtTransOffset = 387;
	
	  ;% bjiazabmpo.Constant_Value_itxm0x43si
	  section.data(239).logicalSrcIdx = 241;
	  section.data(239).dtTransOffset = 388;
	
	  ;% bjiazabmpo.Gain_Gain_jcxnesc51s
	  section.data(240).logicalSrcIdx = 242;
	  section.data(240).dtTransOffset = 389;
	
	  ;% bjiazabmpo.Gain1_Gain_e5tqo52tku
	  section.data(241).logicalSrcIdx = 243;
	  section.data(241).dtTransOffset = 390;
	
	  ;% bjiazabmpo.Gain2_Gain_jxsi55a1on
	  section.data(242).logicalSrcIdx = 244;
	  section.data(242).dtTransOffset = 391;
	
	  ;% bjiazabmpo.Constant_Value_ezafw5tbx0
	  section.data(243).logicalSrcIdx = 245;
	  section.data(243).dtTransOffset = 392;
	
	  ;% bjiazabmpo.Gain_Gain_omyfgx1n5h
	  section.data(244).logicalSrcIdx = 246;
	  section.data(244).dtTransOffset = 393;
	
	  ;% bjiazabmpo.Gain1_Gain_n4ecq0uzvs
	  section.data(245).logicalSrcIdx = 247;
	  section.data(245).dtTransOffset = 394;
	
	  ;% bjiazabmpo.Gain2_Gain_bxmfdcbxd2
	  section.data(246).logicalSrcIdx = 248;
	  section.data(246).dtTransOffset = 395;
	
	  ;% bjiazabmpo.Constant_Value_cknsmwduvj
	  section.data(247).logicalSrcIdx = 249;
	  section.data(247).dtTransOffset = 396;
	
	  ;% bjiazabmpo.Constant_Value_oqac1ckjba
	  section.data(248).logicalSrcIdx = 250;
	  section.data(248).dtTransOffset = 398;
	
	  ;% bjiazabmpo.Sensororientation_Value_hlfjdstuhw
	  section.data(249).logicalSrcIdx = 251;
	  section.data(249).dtTransOffset = 399;
	
	  ;% bjiazabmpo.Constant_Value_kst2th0l1z
	  section.data(250).logicalSrcIdx = 252;
	  section.data(250).dtTransOffset = 403;
	
	  ;% bjiazabmpo.Gain_Gain_cr4zczeez0
	  section.data(251).logicalSrcIdx = 253;
	  section.data(251).dtTransOffset = 404;
	
	  ;% bjiazabmpo.Gain1_Gain_g12m14aft0
	  section.data(252).logicalSrcIdx = 254;
	  section.data(252).dtTransOffset = 405;
	
	  ;% bjiazabmpo.Gain2_Gain_enxakegu4s
	  section.data(253).logicalSrcIdx = 255;
	  section.data(253).dtTransOffset = 406;
	
	  ;% bjiazabmpo.Constant_Value_igmvdrtaty
	  section.data(254).logicalSrcIdx = 256;
	  section.data(254).dtTransOffset = 407;
	
	  ;% bjiazabmpo.Gain_Gain_lw5hirdrrr
	  section.data(255).logicalSrcIdx = 257;
	  section.data(255).dtTransOffset = 408;
	
	  ;% bjiazabmpo.Gain1_Gain_amkbhcbkvw
	  section.data(256).logicalSrcIdx = 258;
	  section.data(256).dtTransOffset = 409;
	
	  ;% bjiazabmpo.Gain2_Gain_bttjb1ulla
	  section.data(257).logicalSrcIdx = 259;
	  section.data(257).dtTransOffset = 410;
	
	  ;% bjiazabmpo.Constant_Value_m4goabuepu
	  section.data(258).logicalSrcIdx = 260;
	  section.data(258).dtTransOffset = 411;
	
	  ;% bjiazabmpo.Gain_Gain_pmdq3xatwv
	  section.data(259).logicalSrcIdx = 261;
	  section.data(259).dtTransOffset = 412;
	
	  ;% bjiazabmpo.Gain1_Gain_bgbnv4z5nx
	  section.data(260).logicalSrcIdx = 262;
	  section.data(260).dtTransOffset = 413;
	
	  ;% bjiazabmpo.Gain2_Gain_cdbsbiii2b
	  section.data(261).logicalSrcIdx = 263;
	  section.data(261).dtTransOffset = 414;
	
	  ;% bjiazabmpo.Constant_Value_mxxxqc2s25
	  section.data(262).logicalSrcIdx = 264;
	  section.data(262).dtTransOffset = 415;
	
	  ;% bjiazabmpo.Constant_Value_etis5qgp2s
	  section.data(263).logicalSrcIdx = 265;
	  section.data(263).dtTransOffset = 417;
	
	  ;% bjiazabmpo.Sensororientation_Value_cwstcpopt3
	  section.data(264).logicalSrcIdx = 266;
	  section.data(264).dtTransOffset = 418;
	
	  ;% bjiazabmpo.Constant_Value_lntxh0ukmr
	  section.data(265).logicalSrcIdx = 267;
	  section.data(265).dtTransOffset = 422;
	
	  ;% bjiazabmpo.Gain_Gain_pfg5czu2ug
	  section.data(266).logicalSrcIdx = 268;
	  section.data(266).dtTransOffset = 423;
	
	  ;% bjiazabmpo.Gain1_Gain_lgo5besblz
	  section.data(267).logicalSrcIdx = 269;
	  section.data(267).dtTransOffset = 424;
	
	  ;% bjiazabmpo.Gain2_Gain_aaobkzaajt
	  section.data(268).logicalSrcIdx = 270;
	  section.data(268).dtTransOffset = 425;
	
	  ;% bjiazabmpo.Constant_Value_imdxvhi4fs
	  section.data(269).logicalSrcIdx = 271;
	  section.data(269).dtTransOffset = 426;
	
	  ;% bjiazabmpo.Gain_Gain_dmquktubpv
	  section.data(270).logicalSrcIdx = 272;
	  section.data(270).dtTransOffset = 427;
	
	  ;% bjiazabmpo.Gain1_Gain_o20oz1n5pv
	  section.data(271).logicalSrcIdx = 273;
	  section.data(271).dtTransOffset = 428;
	
	  ;% bjiazabmpo.Gain2_Gain_bxr0hdxmou
	  section.data(272).logicalSrcIdx = 274;
	  section.data(272).dtTransOffset = 429;
	
	  ;% bjiazabmpo.Constant_Value_k0omy0fwkr
	  section.data(273).logicalSrcIdx = 275;
	  section.data(273).dtTransOffset = 430;
	
	  ;% bjiazabmpo.Gain_Gain_app3p5qkli
	  section.data(274).logicalSrcIdx = 276;
	  section.data(274).dtTransOffset = 431;
	
	  ;% bjiazabmpo.Gain1_Gain_ggc5pki3i3
	  section.data(275).logicalSrcIdx = 277;
	  section.data(275).dtTransOffset = 432;
	
	  ;% bjiazabmpo.Gain2_Gain_jiiceq4a1g
	  section.data(276).logicalSrcIdx = 278;
	  section.data(276).dtTransOffset = 433;
	
	  ;% bjiazabmpo.Constant_Value_pxpcd5bk3c
	  section.data(277).logicalSrcIdx = 279;
	  section.data(277).dtTransOffset = 434;
	
	  ;% bjiazabmpo.Constant_Value_loxooi2xox
	  section.data(278).logicalSrcIdx = 280;
	  section.data(278).dtTransOffset = 436;
	
	  ;% bjiazabmpo.Sensororientation_Value_escjrdlkcn
	  section.data(279).logicalSrcIdx = 281;
	  section.data(279).dtTransOffset = 437;
	
	  ;% bjiazabmpo.Constant_Value_ba5xlpus1a
	  section.data(280).logicalSrcIdx = 282;
	  section.data(280).dtTransOffset = 441;
	
	  ;% bjiazabmpo.Gain_Gain_kb00k2wbfq
	  section.data(281).logicalSrcIdx = 283;
	  section.data(281).dtTransOffset = 442;
	
	  ;% bjiazabmpo.Gain1_Gain_iow1llvkxc
	  section.data(282).logicalSrcIdx = 284;
	  section.data(282).dtTransOffset = 443;
	
	  ;% bjiazabmpo.Gain2_Gain_dtunvm3otp
	  section.data(283).logicalSrcIdx = 285;
	  section.data(283).dtTransOffset = 444;
	
	  ;% bjiazabmpo.Constant_Value_eqda1kzn3h
	  section.data(284).logicalSrcIdx = 286;
	  section.data(284).dtTransOffset = 445;
	
	  ;% bjiazabmpo.Gain_Gain_npe4zqgyas
	  section.data(285).logicalSrcIdx = 287;
	  section.data(285).dtTransOffset = 446;
	
	  ;% bjiazabmpo.Gain1_Gain_fdxpyxu0o1
	  section.data(286).logicalSrcIdx = 288;
	  section.data(286).dtTransOffset = 447;
	
	  ;% bjiazabmpo.Gain2_Gain_n4sn3p4zhh
	  section.data(287).logicalSrcIdx = 289;
	  section.data(287).dtTransOffset = 448;
	
	  ;% bjiazabmpo.Constant_Value_j3hxujgyee
	  section.data(288).logicalSrcIdx = 290;
	  section.data(288).dtTransOffset = 449;
	
	  ;% bjiazabmpo.Gain_Gain_caz4q343an
	  section.data(289).logicalSrcIdx = 291;
	  section.data(289).dtTransOffset = 450;
	
	  ;% bjiazabmpo.Gain1_Gain_odtb3u3w54
	  section.data(290).logicalSrcIdx = 292;
	  section.data(290).dtTransOffset = 451;
	
	  ;% bjiazabmpo.Gain2_Gain_pl1uwnp5vb
	  section.data(291).logicalSrcIdx = 293;
	  section.data(291).dtTransOffset = 452;
	
	  ;% bjiazabmpo.Constant_Value_a5pfdrbwx4
	  section.data(292).logicalSrcIdx = 294;
	  section.data(292).dtTransOffset = 453;
	
	  ;% bjiazabmpo.Constant_Value_h114kk0gb0
	  section.data(293).logicalSrcIdx = 295;
	  section.data(293).dtTransOffset = 455;
	
	  ;% bjiazabmpo.Sensororientation_Value_ezbdisr3i3
	  section.data(294).logicalSrcIdx = 296;
	  section.data(294).dtTransOffset = 456;
	
	  ;% bjiazabmpo.Constant_Value_myru2azkts
	  section.data(295).logicalSrcIdx = 297;
	  section.data(295).dtTransOffset = 460;
	
	  ;% bjiazabmpo.Gain_Gain_jfezxdcuu1
	  section.data(296).logicalSrcIdx = 298;
	  section.data(296).dtTransOffset = 461;
	
	  ;% bjiazabmpo.Gain1_Gain_mzwjkwmyds
	  section.data(297).logicalSrcIdx = 299;
	  section.data(297).dtTransOffset = 462;
	
	  ;% bjiazabmpo.Gain2_Gain_pt1tknsnuk
	  section.data(298).logicalSrcIdx = 300;
	  section.data(298).dtTransOffset = 463;
	
	  ;% bjiazabmpo.Constant_Value_mpzaspn304
	  section.data(299).logicalSrcIdx = 301;
	  section.data(299).dtTransOffset = 464;
	
	  ;% bjiazabmpo.Gain_Gain_cylo5ppz5d
	  section.data(300).logicalSrcIdx = 302;
	  section.data(300).dtTransOffset = 465;
	
	  ;% bjiazabmpo.Gain1_Gain_evkyndzct5
	  section.data(301).logicalSrcIdx = 303;
	  section.data(301).dtTransOffset = 466;
	
	  ;% bjiazabmpo.Gain2_Gain_ogm3tj3b4p
	  section.data(302).logicalSrcIdx = 304;
	  section.data(302).dtTransOffset = 467;
	
	  ;% bjiazabmpo.Constant_Value_ey5twm140q
	  section.data(303).logicalSrcIdx = 305;
	  section.data(303).dtTransOffset = 468;
	
	  ;% bjiazabmpo.Gain_Gain_lnevd4sqnk
	  section.data(304).logicalSrcIdx = 306;
	  section.data(304).dtTransOffset = 469;
	
	  ;% bjiazabmpo.Gain1_Gain_f5yo2mvezp
	  section.data(305).logicalSrcIdx = 307;
	  section.data(305).dtTransOffset = 470;
	
	  ;% bjiazabmpo.Gain2_Gain_mg22nq4b3k
	  section.data(306).logicalSrcIdx = 308;
	  section.data(306).dtTransOffset = 471;
	
	  ;% bjiazabmpo.Constant_Value_pb14rkkk1o
	  section.data(307).logicalSrcIdx = 309;
	  section.data(307).dtTransOffset = 472;
	
	  ;% bjiazabmpo.Constant_Value_kd13wd1tn5
	  section.data(308).logicalSrcIdx = 310;
	  section.data(308).dtTransOffset = 474;
	
	  ;% bjiazabmpo.Sensororientation_Value_luhksxjjam
	  section.data(309).logicalSrcIdx = 311;
	  section.data(309).dtTransOffset = 475;
	
	  ;% bjiazabmpo.Constant_Value_kkk1dzjy3p
	  section.data(310).logicalSrcIdx = 312;
	  section.data(310).dtTransOffset = 479;
	
	  ;% bjiazabmpo.Gain_Gain_f5mrtnkemr
	  section.data(311).logicalSrcIdx = 313;
	  section.data(311).dtTransOffset = 480;
	
	  ;% bjiazabmpo.Gain1_Gain_fdh0g1o02u
	  section.data(312).logicalSrcIdx = 314;
	  section.data(312).dtTransOffset = 481;
	
	  ;% bjiazabmpo.Gain2_Gain_gnny303ymj
	  section.data(313).logicalSrcIdx = 315;
	  section.data(313).dtTransOffset = 482;
	
	  ;% bjiazabmpo.Constant_Value_jbyhakx4ay
	  section.data(314).logicalSrcIdx = 316;
	  section.data(314).dtTransOffset = 483;
	
	  ;% bjiazabmpo.Gain_Gain_bkbvyxdlek
	  section.data(315).logicalSrcIdx = 317;
	  section.data(315).dtTransOffset = 484;
	
	  ;% bjiazabmpo.Gain1_Gain_pbfdoucssu
	  section.data(316).logicalSrcIdx = 318;
	  section.data(316).dtTransOffset = 485;
	
	  ;% bjiazabmpo.Gain2_Gain_ijreebnsuw
	  section.data(317).logicalSrcIdx = 319;
	  section.data(317).dtTransOffset = 486;
	
	  ;% bjiazabmpo.Constant_Value_f1tb0wmrtm
	  section.data(318).logicalSrcIdx = 320;
	  section.data(318).dtTransOffset = 487;
	
	  ;% bjiazabmpo.Gain_Gain_a2lqzra5qd
	  section.data(319).logicalSrcIdx = 321;
	  section.data(319).dtTransOffset = 488;
	
	  ;% bjiazabmpo.Gain1_Gain_f45poxumoe
	  section.data(320).logicalSrcIdx = 322;
	  section.data(320).dtTransOffset = 489;
	
	  ;% bjiazabmpo.Gain2_Gain_necstpfmlp
	  section.data(321).logicalSrcIdx = 323;
	  section.data(321).dtTransOffset = 490;
	
	  ;% bjiazabmpo.Constant_Value_fvwrjd3qpo
	  section.data(322).logicalSrcIdx = 324;
	  section.data(322).dtTransOffset = 491;
	
	  ;% bjiazabmpo.Constant_Value_pw4amn2wvf
	  section.data(323).logicalSrcIdx = 325;
	  section.data(323).dtTransOffset = 493;
	
	  ;% bjiazabmpo.Sensororientation_Value_c1w03cmwlz
	  section.data(324).logicalSrcIdx = 326;
	  section.data(324).dtTransOffset = 494;
	
	  ;% bjiazabmpo.Constant_Value_c0bcxggzid
	  section.data(325).logicalSrcIdx = 327;
	  section.data(325).dtTransOffset = 498;
	
	  ;% bjiazabmpo.Gain_Gain_jom4zjkqot
	  section.data(326).logicalSrcIdx = 328;
	  section.data(326).dtTransOffset = 499;
	
	  ;% bjiazabmpo.Gain1_Gain_ec5n4vlyml
	  section.data(327).logicalSrcIdx = 329;
	  section.data(327).dtTransOffset = 500;
	
	  ;% bjiazabmpo.Gain2_Gain_ppb55hsf22
	  section.data(328).logicalSrcIdx = 330;
	  section.data(328).dtTransOffset = 501;
	
	  ;% bjiazabmpo.Constant_Value_cd21hrcv55
	  section.data(329).logicalSrcIdx = 331;
	  section.data(329).dtTransOffset = 502;
	
	  ;% bjiazabmpo.Gain_Gain_owfxeyg0hz
	  section.data(330).logicalSrcIdx = 332;
	  section.data(330).dtTransOffset = 503;
	
	  ;% bjiazabmpo.Gain1_Gain_azstchlb2n
	  section.data(331).logicalSrcIdx = 333;
	  section.data(331).dtTransOffset = 504;
	
	  ;% bjiazabmpo.Gain2_Gain_azs3a4y21d
	  section.data(332).logicalSrcIdx = 334;
	  section.data(332).dtTransOffset = 505;
	
	  ;% bjiazabmpo.Constant_Value_i1rjqidmbj
	  section.data(333).logicalSrcIdx = 335;
	  section.data(333).dtTransOffset = 506;
	
	  ;% bjiazabmpo.Gain_Gain_lp1ded333l
	  section.data(334).logicalSrcIdx = 336;
	  section.data(334).dtTransOffset = 507;
	
	  ;% bjiazabmpo.Gain1_Gain_e5iewy4mku
	  section.data(335).logicalSrcIdx = 337;
	  section.data(335).dtTransOffset = 508;
	
	  ;% bjiazabmpo.Gain2_Gain_p50urd0soy
	  section.data(336).logicalSrcIdx = 338;
	  section.data(336).dtTransOffset = 509;
	
	  ;% bjiazabmpo.Constant_Value_o4pefzbbdu
	  section.data(337).logicalSrcIdx = 339;
	  section.data(337).dtTransOffset = 510;
	
	  ;% bjiazabmpo.Constant_Value_peinfzh1bx
	  section.data(338).logicalSrcIdx = 340;
	  section.data(338).dtTransOffset = 512;
	
	  ;% bjiazabmpo.Sensororientation_Value_f1bimmtkao
	  section.data(339).logicalSrcIdx = 341;
	  section.data(339).dtTransOffset = 513;
	
	  ;% bjiazabmpo.Constant_Value_i54as2vhie
	  section.data(340).logicalSrcIdx = 342;
	  section.data(340).dtTransOffset = 517;
	
	  ;% bjiazabmpo.Gain_Gain_aqtmdzg5ve
	  section.data(341).logicalSrcIdx = 343;
	  section.data(341).dtTransOffset = 518;
	
	  ;% bjiazabmpo.Gain1_Gain_luiia42t5t
	  section.data(342).logicalSrcIdx = 344;
	  section.data(342).dtTransOffset = 519;
	
	  ;% bjiazabmpo.Gain2_Gain_mb2nt12ulg
	  section.data(343).logicalSrcIdx = 345;
	  section.data(343).dtTransOffset = 520;
	
	  ;% bjiazabmpo.Constant_Value_ogstggr2j3
	  section.data(344).logicalSrcIdx = 346;
	  section.data(344).dtTransOffset = 521;
	
	  ;% bjiazabmpo.Gain_Gain_lychsiugxc
	  section.data(345).logicalSrcIdx = 347;
	  section.data(345).dtTransOffset = 522;
	
	  ;% bjiazabmpo.Gain1_Gain_b1eddp32tw
	  section.data(346).logicalSrcIdx = 348;
	  section.data(346).dtTransOffset = 523;
	
	  ;% bjiazabmpo.Gain2_Gain_nfkayg1huw
	  section.data(347).logicalSrcIdx = 349;
	  section.data(347).dtTransOffset = 524;
	
	  ;% bjiazabmpo.Constant_Value_oetlq3b1z2
	  section.data(348).logicalSrcIdx = 350;
	  section.data(348).dtTransOffset = 525;
	
	  ;% bjiazabmpo.Gain_Gain_nuvyvhffsa
	  section.data(349).logicalSrcIdx = 351;
	  section.data(349).dtTransOffset = 526;
	
	  ;% bjiazabmpo.Gain1_Gain_ci4cvxslsl
	  section.data(350).logicalSrcIdx = 352;
	  section.data(350).dtTransOffset = 527;
	
	  ;% bjiazabmpo.Gain2_Gain_ktgwyxzbfl
	  section.data(351).logicalSrcIdx = 353;
	  section.data(351).dtTransOffset = 528;
	
	  ;% bjiazabmpo.Constant_Value_aqc3aba12o
	  section.data(352).logicalSrcIdx = 354;
	  section.data(352).dtTransOffset = 529;
	
	  ;% bjiazabmpo.Constant_Value_agjbvr0z5q
	  section.data(353).logicalSrcIdx = 355;
	  section.data(353).dtTransOffset = 531;
	
	  ;% bjiazabmpo.Sensororientation_Value_gzezhgiiva
	  section.data(354).logicalSrcIdx = 356;
	  section.data(354).dtTransOffset = 532;
	
	  ;% bjiazabmpo.Constant_Value_dqtse52l4d
	  section.data(355).logicalSrcIdx = 357;
	  section.data(355).dtTransOffset = 536;
	
	  ;% bjiazabmpo.Gain_Gain_mrg5lsnokn
	  section.data(356).logicalSrcIdx = 358;
	  section.data(356).dtTransOffset = 537;
	
	  ;% bjiazabmpo.Gain1_Gain_hbwgr3wfvo
	  section.data(357).logicalSrcIdx = 359;
	  section.data(357).dtTransOffset = 538;
	
	  ;% bjiazabmpo.Gain2_Gain_ez1qvjlr1d
	  section.data(358).logicalSrcIdx = 360;
	  section.data(358).dtTransOffset = 539;
	
	  ;% bjiazabmpo.Constant_Value_aocyzox0ld
	  section.data(359).logicalSrcIdx = 361;
	  section.data(359).dtTransOffset = 540;
	
	  ;% bjiazabmpo.Gain_Gain_hiv2r3l01b
	  section.data(360).logicalSrcIdx = 362;
	  section.data(360).dtTransOffset = 541;
	
	  ;% bjiazabmpo.Gain1_Gain_pxrflmc1o4
	  section.data(361).logicalSrcIdx = 363;
	  section.data(361).dtTransOffset = 542;
	
	  ;% bjiazabmpo.Gain2_Gain_g5qbykwveo
	  section.data(362).logicalSrcIdx = 364;
	  section.data(362).dtTransOffset = 543;
	
	  ;% bjiazabmpo.Constant_Value_atme3hmtbv
	  section.data(363).logicalSrcIdx = 365;
	  section.data(363).dtTransOffset = 544;
	
	  ;% bjiazabmpo.Gain_Gain_hgfy5zqhxv
	  section.data(364).logicalSrcIdx = 366;
	  section.data(364).dtTransOffset = 545;
	
	  ;% bjiazabmpo.Gain1_Gain_eo1xrtusyu
	  section.data(365).logicalSrcIdx = 367;
	  section.data(365).dtTransOffset = 546;
	
	  ;% bjiazabmpo.Gain2_Gain_ismz453fn1
	  section.data(366).logicalSrcIdx = 368;
	  section.data(366).dtTransOffset = 547;
	
	  ;% bjiazabmpo.Constant_Value_kv3w21qse5
	  section.data(367).logicalSrcIdx = 369;
	  section.data(367).dtTransOffset = 548;
	
	  ;% bjiazabmpo.Constant_Value_ktwwdrryx3
	  section.data(368).logicalSrcIdx = 370;
	  section.data(368).dtTransOffset = 550;
	
	  ;% bjiazabmpo.Sensororientation_Value_pvtoldl5dv
	  section.data(369).logicalSrcIdx = 371;
	  section.data(369).dtTransOffset = 551;
	
	  ;% bjiazabmpo.Constant_Value_epgscsipyz
	  section.data(370).logicalSrcIdx = 372;
	  section.data(370).dtTransOffset = 555;
	
	  ;% bjiazabmpo.Gain_Gain_ena5yszh4w
	  section.data(371).logicalSrcIdx = 373;
	  section.data(371).dtTransOffset = 556;
	
	  ;% bjiazabmpo.Gain1_Gain_eqkjxlvbiq
	  section.data(372).logicalSrcIdx = 374;
	  section.data(372).dtTransOffset = 557;
	
	  ;% bjiazabmpo.Gain2_Gain_k0lo0mgba2
	  section.data(373).logicalSrcIdx = 375;
	  section.data(373).dtTransOffset = 558;
	
	  ;% bjiazabmpo.Constant_Value_h300vfl4mv
	  section.data(374).logicalSrcIdx = 376;
	  section.data(374).dtTransOffset = 559;
	
	  ;% bjiazabmpo.Gain_Gain_j4d3hvhs43
	  section.data(375).logicalSrcIdx = 377;
	  section.data(375).dtTransOffset = 560;
	
	  ;% bjiazabmpo.Gain1_Gain_ceiu2lnwhi
	  section.data(376).logicalSrcIdx = 378;
	  section.data(376).dtTransOffset = 561;
	
	  ;% bjiazabmpo.Gain2_Gain_htyiogkmpg
	  section.data(377).logicalSrcIdx = 379;
	  section.data(377).dtTransOffset = 562;
	
	  ;% bjiazabmpo.Constant_Value_apsk02wc0m
	  section.data(378).logicalSrcIdx = 380;
	  section.data(378).dtTransOffset = 563;
	
	  ;% bjiazabmpo.Gain_Gain_k42ekcf23x
	  section.data(379).logicalSrcIdx = 381;
	  section.data(379).dtTransOffset = 564;
	
	  ;% bjiazabmpo.Gain1_Gain_izo4ouweai
	  section.data(380).logicalSrcIdx = 382;
	  section.data(380).dtTransOffset = 565;
	
	  ;% bjiazabmpo.Gain2_Gain_bgeppzp5tr
	  section.data(381).logicalSrcIdx = 383;
	  section.data(381).dtTransOffset = 566;
	
	  ;% bjiazabmpo.Constant_Value_ei4qxougxr
	  section.data(382).logicalSrcIdx = 384;
	  section.data(382).dtTransOffset = 567;
	
	  ;% bjiazabmpo.Constant_Value_aefuqipo3z
	  section.data(383).logicalSrcIdx = 385;
	  section.data(383).dtTransOffset = 569;
	
	  ;% bjiazabmpo.Sensororientation_Value_g4fybr4ojz
	  section.data(384).logicalSrcIdx = 386;
	  section.data(384).dtTransOffset = 570;
	
	  ;% bjiazabmpo.Constant_Value_oi0kxpowja
	  section.data(385).logicalSrcIdx = 387;
	  section.data(385).dtTransOffset = 574;
	
	  ;% bjiazabmpo.Gain_Gain_crryondw0o
	  section.data(386).logicalSrcIdx = 388;
	  section.data(386).dtTransOffset = 575;
	
	  ;% bjiazabmpo.Gain1_Gain_lzvj53au2u
	  section.data(387).logicalSrcIdx = 389;
	  section.data(387).dtTransOffset = 576;
	
	  ;% bjiazabmpo.Gain2_Gain_perzcljgjz
	  section.data(388).logicalSrcIdx = 390;
	  section.data(388).dtTransOffset = 577;
	
	  ;% bjiazabmpo.Constant_Value_bx4ma4qdmb
	  section.data(389).logicalSrcIdx = 391;
	  section.data(389).dtTransOffset = 578;
	
	  ;% bjiazabmpo.Gain_Gain_evjcc1eafd
	  section.data(390).logicalSrcIdx = 392;
	  section.data(390).dtTransOffset = 579;
	
	  ;% bjiazabmpo.Gain1_Gain_gns40wabnm
	  section.data(391).logicalSrcIdx = 393;
	  section.data(391).dtTransOffset = 580;
	
	  ;% bjiazabmpo.Gain2_Gain_i0hel0ofcl
	  section.data(392).logicalSrcIdx = 394;
	  section.data(392).dtTransOffset = 581;
	
	  ;% bjiazabmpo.Constant_Value_ihm1fmgdud
	  section.data(393).logicalSrcIdx = 395;
	  section.data(393).dtTransOffset = 582;
	
	  ;% bjiazabmpo.Gain_Gain_mniibtfrh4
	  section.data(394).logicalSrcIdx = 396;
	  section.data(394).dtTransOffset = 583;
	
	  ;% bjiazabmpo.Gain1_Gain_dsk352okyn
	  section.data(395).logicalSrcIdx = 397;
	  section.data(395).dtTransOffset = 584;
	
	  ;% bjiazabmpo.Gain2_Gain_f4f4o3e0ao
	  section.data(396).logicalSrcIdx = 398;
	  section.data(396).dtTransOffset = 585;
	
	  ;% bjiazabmpo.Constant_Value_lod4m2end1
	  section.data(397).logicalSrcIdx = 399;
	  section.data(397).dtTransOffset = 586;
	
	  ;% bjiazabmpo.Constant_Value_d3tr2oyhj4
	  section.data(398).logicalSrcIdx = 400;
	  section.data(398).dtTransOffset = 588;
	
	  ;% bjiazabmpo.Sensororientation_Value_bfbchbxuif
	  section.data(399).logicalSrcIdx = 401;
	  section.data(399).dtTransOffset = 589;
	
	  ;% bjiazabmpo.Constant_Value_j5awaeon0r
	  section.data(400).logicalSrcIdx = 402;
	  section.data(400).dtTransOffset = 593;
	
	  ;% bjiazabmpo.Gain_Gain_l3rthal15j
	  section.data(401).logicalSrcIdx = 403;
	  section.data(401).dtTransOffset = 594;
	
	  ;% bjiazabmpo.Gain1_Gain_dizs3vyxgq
	  section.data(402).logicalSrcIdx = 404;
	  section.data(402).dtTransOffset = 595;
	
	  ;% bjiazabmpo.Gain2_Gain_im22oggu52
	  section.data(403).logicalSrcIdx = 405;
	  section.data(403).dtTransOffset = 596;
	
	  ;% bjiazabmpo.Constant_Value_a1zgpg42vr
	  section.data(404).logicalSrcIdx = 406;
	  section.data(404).dtTransOffset = 597;
	
	  ;% bjiazabmpo.Gain_Gain_pvyl4t2yw0
	  section.data(405).logicalSrcIdx = 407;
	  section.data(405).dtTransOffset = 598;
	
	  ;% bjiazabmpo.Gain1_Gain_gqxohufbgj
	  section.data(406).logicalSrcIdx = 408;
	  section.data(406).dtTransOffset = 599;
	
	  ;% bjiazabmpo.Gain2_Gain_axoynd5pv4
	  section.data(407).logicalSrcIdx = 409;
	  section.data(407).dtTransOffset = 600;
	
	  ;% bjiazabmpo.Constant_Value_dbnrgxoczr
	  section.data(408).logicalSrcIdx = 410;
	  section.data(408).dtTransOffset = 601;
	
	  ;% bjiazabmpo.Gain_Gain_gnoc2rqmdh
	  section.data(409).logicalSrcIdx = 411;
	  section.data(409).dtTransOffset = 602;
	
	  ;% bjiazabmpo.Gain1_Gain_ckkbstydzz
	  section.data(410).logicalSrcIdx = 412;
	  section.data(410).dtTransOffset = 603;
	
	  ;% bjiazabmpo.Gain2_Gain_bq1ops2rb1
	  section.data(411).logicalSrcIdx = 413;
	  section.data(411).dtTransOffset = 604;
	
	  ;% bjiazabmpo.Constant1_Value_ejoqpgv2ji
	  section.data(412).logicalSrcIdx = 414;
	  section.data(412).dtTransOffset = 605;
	
	  ;% bjiazabmpo.Constant3_Value_lcleawr1lx
	  section.data(413).logicalSrcIdx = 415;
	  section.data(413).dtTransOffset = 608;
	
	  ;% bjiazabmpo.Constant_Value_ci00grrtff
	  section.data(414).logicalSrcIdx = 416;
	  section.data(414).dtTransOffset = 612;
	
	  ;% bjiazabmpo.Gain2_Gain_k2nkv35kyn
	  section.data(415).logicalSrcIdx = 417;
	  section.data(415).dtTransOffset = 613;
	
	  ;% bjiazabmpo.Gain_Gain_avea13ypea
	  section.data(416).logicalSrcIdx = 418;
	  section.data(416).dtTransOffset = 614;
	
	  ;% bjiazabmpo.Gain1_Gain_mstcqdbdwc
	  section.data(417).logicalSrcIdx = 419;
	  section.data(417).dtTransOffset = 615;
	
	  ;% bjiazabmpo.Gain_Gain_jsx4pu1q4q
	  section.data(418).logicalSrcIdx = 420;
	  section.data(418).dtTransOffset = 616;
	
	  ;% bjiazabmpo.Constant_Value_fe5n5wpanv
	  section.data(419).logicalSrcIdx = 421;
	  section.data(419).dtTransOffset = 617;
	
	  ;% bjiazabmpo.Gain2_Gain_dp2u42f00i
	  section.data(420).logicalSrcIdx = 422;
	  section.data(420).dtTransOffset = 618;
	
	  ;% bjiazabmpo.Gain1_Gain_lp32ym3e5x
	  section.data(421).logicalSrcIdx = 423;
	  section.data(421).dtTransOffset = 619;
	
	  ;% bjiazabmpo.Gain_Gain_p3jxtnv3m2
	  section.data(422).logicalSrcIdx = 424;
	  section.data(422).dtTransOffset = 620;
	
	  ;% bjiazabmpo.Gain1_Gain_gaefdnqghd
	  section.data(423).logicalSrcIdx = 425;
	  section.data(423).dtTransOffset = 621;
	
	  ;% bjiazabmpo.Constant_Value_ktx0dxt4vq
	  section.data(424).logicalSrcIdx = 426;
	  section.data(424).dtTransOffset = 622;
	
	  ;% bjiazabmpo.Gain2_Gain_fgpn4tkmjp
	  section.data(425).logicalSrcIdx = 427;
	  section.data(425).dtTransOffset = 623;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% bjiazabmpo.yBlockOrdering_Y0
	  section.data(1).logicalSrcIdx = 428;
	  section.data(1).dtTransOffset = 0;
	
	  ;% bjiazabmpo.yBlockOrdering_Y0_m1krpwpsee
	  section.data(2).logicalSrcIdx = 429;
	  section.data(2).dtTransOffset = 1;
	
	  ;% bjiazabmpo.yBlockOrdering_Y0_cudnxvsixu
	  section.data(3).logicalSrcIdx = 430;
	  section.data(3).dtTransOffset = 2;
	
	  ;% bjiazabmpo.Enable1_Value
	  section.data(4).logicalSrcIdx = 431;
	  section.data(4).dtTransOffset = 3;
	
	  ;% bjiazabmpo.Enable2_Value
	  section.data(5).logicalSrcIdx = 432;
	  section.data(5).dtTransOffset = 4;
	
	  ;% bjiazabmpo.Enable3_Value
	  section.data(6).logicalSrcIdx = 433;
	  section.data(6).dtTransOffset = 5;
	
	  ;% bjiazabmpo.BlockOrdering_Value
	  section.data(7).logicalSrcIdx = 434;
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
    nTotSects     = 2;
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
    ;% Auto data (hfuaoawbo4x)
    ;%
      section.nData     = 229;
      section.data(229)  = dumData; %prealloc
      
	  ;% hfuaoawbo4x.jz4js4cavj
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% hfuaoawbo4x.jiauta4lz3
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% hfuaoawbo4x.nkn0lxavyg
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 6;
	
	  ;% hfuaoawbo4x.aq2ghaceft
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 9;
	
	  ;% hfuaoawbo4x.kvwgtntple
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 10;
	
	  ;% hfuaoawbo4x.bygzv3wnat
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 11;
	
	  ;% hfuaoawbo4x.hdc0j3rnbp
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 12;
	
	  ;% hfuaoawbo4x.lmuzqxuokj
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 13;
	
	  ;% hfuaoawbo4x.cpm5g01ony
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 14;
	
	  ;% hfuaoawbo4x.ocma20pg4m
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 15;
	
	  ;% hfuaoawbo4x.ptnsoso4dc
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 16;
	
	  ;% hfuaoawbo4x.bzlwhzt3vy
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 19;
	
	  ;% hfuaoawbo4x.frlotdeaj2
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 21;
	
	  ;% hfuaoawbo4x.kkdzgznpnj
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 24;
	
	  ;% hfuaoawbo4x.ddrli00reu
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 26;
	
	  ;% hfuaoawbo4x.p1goyf5ozx
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 29;
	
	  ;% hfuaoawbo4x.jeujegvl5t
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 31;
	
	  ;% hfuaoawbo4x.hhue5rbecu
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 34;
	
	  ;% hfuaoawbo4x.ocmmlusxei
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 36;
	
	  ;% hfuaoawbo4x.h4ktifh2sj
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 39;
	
	  ;% hfuaoawbo4x.huvsnztgla
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 41;
	
	  ;% hfuaoawbo4x.nph04v1hzd
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 44;
	
	  ;% hfuaoawbo4x.jsthbuk1sr
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 46;
	
	  ;% hfuaoawbo4x.otudxcmy5f
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 49;
	
	  ;% hfuaoawbo4x.abhvo30nqe
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 52;
	
	  ;% hfuaoawbo4x.jnj0b5ppbc
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 55;
	
	  ;% hfuaoawbo4x.g1rwbozond
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 58;
	
	  ;% hfuaoawbo4x.h4s42jsqon
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 60;
	
	  ;% hfuaoawbo4x.o2hjorpke2
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 63;
	
	  ;% hfuaoawbo4x.eutzf3fc5q
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 65;
	
	  ;% hfuaoawbo4x.g5urx4llqk
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 68;
	
	  ;% hfuaoawbo4x.a0iu5wjm5i
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 70;
	
	  ;% hfuaoawbo4x.le1qwtjsnv
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 73;
	
	  ;% hfuaoawbo4x.mwmca0qjz4
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 75;
	
	  ;% hfuaoawbo4x.kvumw45neu
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 78;
	
	  ;% hfuaoawbo4x.o3idhaeld0
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 80;
	
	  ;% hfuaoawbo4x.apdh45t2gv
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 83;
	
	  ;% hfuaoawbo4x.j13n0bzt32
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 85;
	
	  ;% hfuaoawbo4x.gritwbr2l0
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 88;
	
	  ;% hfuaoawbo4x.iqajyqskal
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 91;
	
	  ;% hfuaoawbo4x.hwxwn5ouzg
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 93;
	
	  ;% hfuaoawbo4x.aznxfnvabf
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 96;
	
	  ;% hfuaoawbo4x.djfx2ozwz1
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 97;
	
	  ;% hfuaoawbo4x.chstcquajb
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 100;
	
	  ;% hfuaoawbo4x.mkltislhcr
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 101;
	
	  ;% hfuaoawbo4x.pqempn25ab
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 104;
	
	  ;% hfuaoawbo4x.jcrf3ejwt5
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 107;
	
	  ;% hfuaoawbo4x.bcu4ylgp31
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 108;
	
	  ;% hfuaoawbo4x.hypth4pdun
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 109;
	
	  ;% hfuaoawbo4x.du15nl3tzh
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 118;
	
	  ;% hfuaoawbo4x.my3qvtobl0
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 119;
	
	  ;% hfuaoawbo4x.njop3q5gx2
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 123;
	
	  ;% hfuaoawbo4x.pmhguwhdvv
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 124;
	
	  ;% hfuaoawbo4x.cjccrkvyno
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 125;
	
	  ;% hfuaoawbo4x.gpj4yt0rpp
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 128;
	
	  ;% hfuaoawbo4x.a1hpttag32
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 129;
	
	  ;% hfuaoawbo4x.nmaipecvge
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 130;
	
	  ;% hfuaoawbo4x.hxg0kv5oai
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 131;
	
	  ;% hfuaoawbo4x.nf1hgbxl14
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 132;
	
	  ;% hfuaoawbo4x.cav5kycrkm
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 133;
	
	  ;% hfuaoawbo4x.d3aemr4udg
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 134;
	
	  ;% hfuaoawbo4x.dch3ovvw3l
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 135;
	
	  ;% hfuaoawbo4x.niyd3y5by1
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 136;
	
	  ;% hfuaoawbo4x.f0tf0xskar
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 137;
	
	  ;% hfuaoawbo4x.fofwr0d1hg
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 140;
	
	  ;% hfuaoawbo4x.jiayh2y14j
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 143;
	
	  ;% hfuaoawbo4x.jdthz1j4ti
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 144;
	
	  ;% hfuaoawbo4x.kd1zrciaaw
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 145;
	
	  ;% hfuaoawbo4x.f0akllhmze
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 146;
	
	  ;% hfuaoawbo4x.asay5kywf5
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 149;
	
	  ;% hfuaoawbo4x.h23bmldhv4
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 150;
	
	  ;% hfuaoawbo4x.h1m1us0vhn
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 151;
	
	  ;% hfuaoawbo4x.ozhlra24jp
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 152;
	
	  ;% hfuaoawbo4x.n0xb4olsgj
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 155;
	
	  ;% hfuaoawbo4x.ks14yvagh2
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 158;
	
	  ;% hfuaoawbo4x.jgzl5fcvsu
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 159;
	
	  ;% hfuaoawbo4x.iuxf2i4tcl
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 160;
	
	  ;% hfuaoawbo4x.aarhhbez0n
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 161;
	
	  ;% hfuaoawbo4x.cbt3p1gwln
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 162;
	
	  ;% hfuaoawbo4x.p3pcl4mtnq
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 165;
	
	  ;% hfuaoawbo4x.of0mnfctla
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 168;
	
	  ;% hfuaoawbo4x.lekkjhfcii
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 172;
	
	  ;% hfuaoawbo4x.ncrcxz2klw
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 176;
	
	  ;% hfuaoawbo4x.psr0r0bk4j
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 177;
	
	  ;% hfuaoawbo4x.jaehxyvqkj
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 178;
	
	  ;% hfuaoawbo4x.ntohwlgjud
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 181;
	
	  ;% hfuaoawbo4x.kox0yk51ix
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 184;
	
	  ;% hfuaoawbo4x.jbummyrznk
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 187;
	
	  ;% hfuaoawbo4x.bhk0qefpw3
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 188;
	
	  ;% hfuaoawbo4x.dbb0wz0brw
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 191;
	
	  ;% hfuaoawbo4x.axzca0bxot
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 194;
	
	  ;% hfuaoawbo4x.k3y3ixdgrn
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 198;
	
	  ;% hfuaoawbo4x.ddyoytv0e2
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 201;
	
	  ;% hfuaoawbo4x.f3ygbdvaty
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 202;
	
	  ;% hfuaoawbo4x.g0423fm4yn
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 203;
	
	  ;% hfuaoawbo4x.meblfsgtxo
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 204;
	
	  ;% hfuaoawbo4x.i15qhheq5s
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 205;
	
	  ;% hfuaoawbo4x.fomozizwka
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 206;
	
	  ;% hfuaoawbo4x.dy3a2ou5re
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 207;
	
	  ;% hfuaoawbo4x.ihuo035dxp
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 208;
	
	  ;% hfuaoawbo4x.iqwyi5ur24
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 209;
	
	  ;% hfuaoawbo4x.epgzqlzua5
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 210;
	
	  ;% hfuaoawbo4x.pcw0pyw2gh
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 211;
	
	  ;% hfuaoawbo4x.abz0n5qp4d
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 212;
	
	  ;% hfuaoawbo4x.bkxmmcqnop
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 213;
	
	  ;% hfuaoawbo4x.f2wok2vtfw
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 214;
	
	  ;% hfuaoawbo4x.ifmzqc4riz
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 215;
	
	  ;% hfuaoawbo4x.on1bmik0q5
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 216;
	
	  ;% hfuaoawbo4x.fjdo1n5rtk
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 217;
	
	  ;% hfuaoawbo4x.nxtdoutt0d
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 218;
	
	  ;% hfuaoawbo4x.fovlccel0m
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 219;
	
	  ;% hfuaoawbo4x.paj1cpcltz
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 220;
	
	  ;% hfuaoawbo4x.hkj5lh1yfa
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 221;
	
	  ;% hfuaoawbo4x.bx0wwwvie3
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 222;
	
	  ;% hfuaoawbo4x.le1tggu3fn
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 223;
	
	  ;% hfuaoawbo4x.d0oto4f2d1
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 224;
	
	  ;% hfuaoawbo4x.bedykpbnax
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 225;
	
	  ;% hfuaoawbo4x.pem5nu1bix
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 226;
	
	  ;% hfuaoawbo4x.cklgc35k0o
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 227;
	
	  ;% hfuaoawbo4x.iuompaq1le
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 228;
	
	  ;% hfuaoawbo4x.nv4mt5uie4
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 229;
	
	  ;% hfuaoawbo4x.gqzvomyv2t
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 230;
	
	  ;% hfuaoawbo4x.dq2b0uqnue
	  section.data(123).logicalSrcIdx = 122;
	  section.data(123).dtTransOffset = 231;
	
	  ;% hfuaoawbo4x.pvkeaggof5
	  section.data(124).logicalSrcIdx = 123;
	  section.data(124).dtTransOffset = 232;
	
	  ;% hfuaoawbo4x.k3livt50xe
	  section.data(125).logicalSrcIdx = 124;
	  section.data(125).dtTransOffset = 233;
	
	  ;% hfuaoawbo4x.ge5q2osujn
	  section.data(126).logicalSrcIdx = 125;
	  section.data(126).dtTransOffset = 234;
	
	  ;% hfuaoawbo4x.j0glhaz1ff
	  section.data(127).logicalSrcIdx = 126;
	  section.data(127).dtTransOffset = 235;
	
	  ;% hfuaoawbo4x.i3y3dprl5r
	  section.data(128).logicalSrcIdx = 127;
	  section.data(128).dtTransOffset = 236;
	
	  ;% hfuaoawbo4x.ffcfrhk5gr
	  section.data(129).logicalSrcIdx = 128;
	  section.data(129).dtTransOffset = 237;
	
	  ;% hfuaoawbo4x.ec2sfpkq33
	  section.data(130).logicalSrcIdx = 129;
	  section.data(130).dtTransOffset = 238;
	
	  ;% hfuaoawbo4x.ffh2jewlhj
	  section.data(131).logicalSrcIdx = 130;
	  section.data(131).dtTransOffset = 239;
	
	  ;% hfuaoawbo4x.hnikyctles
	  section.data(132).logicalSrcIdx = 131;
	  section.data(132).dtTransOffset = 240;
	
	  ;% hfuaoawbo4x.j0rtedvqju
	  section.data(133).logicalSrcIdx = 132;
	  section.data(133).dtTransOffset = 241;
	
	  ;% hfuaoawbo4x.ke1mnfoaag
	  section.data(134).logicalSrcIdx = 133;
	  section.data(134).dtTransOffset = 242;
	
	  ;% hfuaoawbo4x.nhqvej5sjs
	  section.data(135).logicalSrcIdx = 134;
	  section.data(135).dtTransOffset = 243;
	
	  ;% hfuaoawbo4x.nj2t1zjkhc
	  section.data(136).logicalSrcIdx = 135;
	  section.data(136).dtTransOffset = 244;
	
	  ;% hfuaoawbo4x.kbgyhm1fgr
	  section.data(137).logicalSrcIdx = 136;
	  section.data(137).dtTransOffset = 245;
	
	  ;% hfuaoawbo4x.cufy1px1rg
	  section.data(138).logicalSrcIdx = 137;
	  section.data(138).dtTransOffset = 246;
	
	  ;% hfuaoawbo4x.pfsox4kypy
	  section.data(139).logicalSrcIdx = 138;
	  section.data(139).dtTransOffset = 247;
	
	  ;% hfuaoawbo4x.krfsidb0qr
	  section.data(140).logicalSrcIdx = 139;
	  section.data(140).dtTransOffset = 248;
	
	  ;% hfuaoawbo4x.l4o4wkfjy0
	  section.data(141).logicalSrcIdx = 140;
	  section.data(141).dtTransOffset = 249;
	
	  ;% hfuaoawbo4x.jpj2vzl1x4
	  section.data(142).logicalSrcIdx = 141;
	  section.data(142).dtTransOffset = 250;
	
	  ;% hfuaoawbo4x.an502njneh
	  section.data(143).logicalSrcIdx = 142;
	  section.data(143).dtTransOffset = 251;
	
	  ;% hfuaoawbo4x.ebprrb1pb4
	  section.data(144).logicalSrcIdx = 143;
	  section.data(144).dtTransOffset = 252;
	
	  ;% hfuaoawbo4x.feykuvpqmt
	  section.data(145).logicalSrcIdx = 144;
	  section.data(145).dtTransOffset = 253;
	
	  ;% hfuaoawbo4x.oikscjj451
	  section.data(146).logicalSrcIdx = 145;
	  section.data(146).dtTransOffset = 254;
	
	  ;% hfuaoawbo4x.lygujbzduh
	  section.data(147).logicalSrcIdx = 146;
	  section.data(147).dtTransOffset = 255;
	
	  ;% hfuaoawbo4x.aoeuzlyzik
	  section.data(148).logicalSrcIdx = 147;
	  section.data(148).dtTransOffset = 256;
	
	  ;% hfuaoawbo4x.iuat0etg51
	  section.data(149).logicalSrcIdx = 148;
	  section.data(149).dtTransOffset = 257;
	
	  ;% hfuaoawbo4x.aev03jsiqx
	  section.data(150).logicalSrcIdx = 149;
	  section.data(150).dtTransOffset = 258;
	
	  ;% hfuaoawbo4x.gawqt3r5dn
	  section.data(151).logicalSrcIdx = 150;
	  section.data(151).dtTransOffset = 259;
	
	  ;% hfuaoawbo4x.bcxyit2ic3
	  section.data(152).logicalSrcIdx = 151;
	  section.data(152).dtTransOffset = 260;
	
	  ;% hfuaoawbo4x.ipvurj0y1d
	  section.data(153).logicalSrcIdx = 152;
	  section.data(153).dtTransOffset = 261;
	
	  ;% hfuaoawbo4x.p5aysueaot
	  section.data(154).logicalSrcIdx = 153;
	  section.data(154).dtTransOffset = 262;
	
	  ;% hfuaoawbo4x.mvsw1v05hz
	  section.data(155).logicalSrcIdx = 154;
	  section.data(155).dtTransOffset = 263;
	
	  ;% hfuaoawbo4x.pv2okmnedn
	  section.data(156).logicalSrcIdx = 155;
	  section.data(156).dtTransOffset = 264;
	
	  ;% hfuaoawbo4x.i3vwzpv00l
	  section.data(157).logicalSrcIdx = 156;
	  section.data(157).dtTransOffset = 265;
	
	  ;% hfuaoawbo4x.goqadosznk
	  section.data(158).logicalSrcIdx = 157;
	  section.data(158).dtTransOffset = 266;
	
	  ;% hfuaoawbo4x.n1y1fp1tkl
	  section.data(159).logicalSrcIdx = 158;
	  section.data(159).dtTransOffset = 267;
	
	  ;% hfuaoawbo4x.lnpqfpiwgf
	  section.data(160).logicalSrcIdx = 159;
	  section.data(160).dtTransOffset = 268;
	
	  ;% hfuaoawbo4x.kdwyr4lpv1
	  section.data(161).logicalSrcIdx = 160;
	  section.data(161).dtTransOffset = 269;
	
	  ;% hfuaoawbo4x.npvoy3nzmj
	  section.data(162).logicalSrcIdx = 161;
	  section.data(162).dtTransOffset = 270;
	
	  ;% hfuaoawbo4x.a2glfphjbj
	  section.data(163).logicalSrcIdx = 162;
	  section.data(163).dtTransOffset = 271;
	
	  ;% hfuaoawbo4x.pfsks0y3nr
	  section.data(164).logicalSrcIdx = 163;
	  section.data(164).dtTransOffset = 272;
	
	  ;% hfuaoawbo4x.du2qaabf5h
	  section.data(165).logicalSrcIdx = 164;
	  section.data(165).dtTransOffset = 273;
	
	  ;% hfuaoawbo4x.o5zklgmfkz
	  section.data(166).logicalSrcIdx = 165;
	  section.data(166).dtTransOffset = 274;
	
	  ;% hfuaoawbo4x.iqpr3p3rs0
	  section.data(167).logicalSrcIdx = 166;
	  section.data(167).dtTransOffset = 275;
	
	  ;% hfuaoawbo4x.bbqhnrp1n5
	  section.data(168).logicalSrcIdx = 167;
	  section.data(168).dtTransOffset = 276;
	
	  ;% hfuaoawbo4x.gztytqjrbr
	  section.data(169).logicalSrcIdx = 168;
	  section.data(169).dtTransOffset = 277;
	
	  ;% hfuaoawbo4x.origvc1fia
	  section.data(170).logicalSrcIdx = 169;
	  section.data(170).dtTransOffset = 278;
	
	  ;% hfuaoawbo4x.aqrhufuanw
	  section.data(171).logicalSrcIdx = 170;
	  section.data(171).dtTransOffset = 279;
	
	  ;% hfuaoawbo4x.hqxcud4qih
	  section.data(172).logicalSrcIdx = 171;
	  section.data(172).dtTransOffset = 280;
	
	  ;% hfuaoawbo4x.e3pw525aru
	  section.data(173).logicalSrcIdx = 172;
	  section.data(173).dtTransOffset = 281;
	
	  ;% hfuaoawbo4x.cwsqdm0rrj
	  section.data(174).logicalSrcIdx = 173;
	  section.data(174).dtTransOffset = 282;
	
	  ;% hfuaoawbo4x.ehckrkdne1
	  section.data(175).logicalSrcIdx = 174;
	  section.data(175).dtTransOffset = 283;
	
	  ;% hfuaoawbo4x.dantpmdd4u
	  section.data(176).logicalSrcIdx = 175;
	  section.data(176).dtTransOffset = 284;
	
	  ;% hfuaoawbo4x.fxoiexsrms
	  section.data(177).logicalSrcIdx = 176;
	  section.data(177).dtTransOffset = 285;
	
	  ;% hfuaoawbo4x.olyaqikc15
	  section.data(178).logicalSrcIdx = 177;
	  section.data(178).dtTransOffset = 286;
	
	  ;% hfuaoawbo4x.hvkqpvk2my
	  section.data(179).logicalSrcIdx = 178;
	  section.data(179).dtTransOffset = 287;
	
	  ;% hfuaoawbo4x.hwi4oft1hq
	  section.data(180).logicalSrcIdx = 179;
	  section.data(180).dtTransOffset = 288;
	
	  ;% hfuaoawbo4x.lsjk5initb
	  section.data(181).logicalSrcIdx = 180;
	  section.data(181).dtTransOffset = 289;
	
	  ;% hfuaoawbo4x.fkskvmplcl
	  section.data(182).logicalSrcIdx = 181;
	  section.data(182).dtTransOffset = 290;
	
	  ;% hfuaoawbo4x.iggwakfyei
	  section.data(183).logicalSrcIdx = 182;
	  section.data(183).dtTransOffset = 291;
	
	  ;% hfuaoawbo4x.lt1fko3tiq
	  section.data(184).logicalSrcIdx = 183;
	  section.data(184).dtTransOffset = 292;
	
	  ;% hfuaoawbo4x.krzyy5xscm
	  section.data(185).logicalSrcIdx = 184;
	  section.data(185).dtTransOffset = 293;
	
	  ;% hfuaoawbo4x.aywwgafww0
	  section.data(186).logicalSrcIdx = 185;
	  section.data(186).dtTransOffset = 294;
	
	  ;% hfuaoawbo4x.jsl11ciyta
	  section.data(187).logicalSrcIdx = 186;
	  section.data(187).dtTransOffset = 295;
	
	  ;% hfuaoawbo4x.dlfxn2mgpk
	  section.data(188).logicalSrcIdx = 187;
	  section.data(188).dtTransOffset = 296;
	
	  ;% hfuaoawbo4x.dqhytx5wim
	  section.data(189).logicalSrcIdx = 188;
	  section.data(189).dtTransOffset = 297;
	
	  ;% hfuaoawbo4x.ovzlu0geh0
	  section.data(190).logicalSrcIdx = 189;
	  section.data(190).dtTransOffset = 298;
	
	  ;% hfuaoawbo4x.ikh4mq35wm
	  section.data(191).logicalSrcIdx = 190;
	  section.data(191).dtTransOffset = 299;
	
	  ;% hfuaoawbo4x.fn0fkozy3r
	  section.data(192).logicalSrcIdx = 191;
	  section.data(192).dtTransOffset = 300;
	
	  ;% hfuaoawbo4x.e5dnskanhg
	  section.data(193).logicalSrcIdx = 192;
	  section.data(193).dtTransOffset = 301;
	
	  ;% hfuaoawbo4x.psvpdz1e45
	  section.data(194).logicalSrcIdx = 193;
	  section.data(194).dtTransOffset = 302;
	
	  ;% hfuaoawbo4x.irny0upjdu
	  section.data(195).logicalSrcIdx = 194;
	  section.data(195).dtTransOffset = 303;
	
	  ;% hfuaoawbo4x.ovxzd4nxnl
	  section.data(196).logicalSrcIdx = 195;
	  section.data(196).dtTransOffset = 304;
	
	  ;% hfuaoawbo4x.ksjfkatzta
	  section.data(197).logicalSrcIdx = 196;
	  section.data(197).dtTransOffset = 305;
	
	  ;% hfuaoawbo4x.f2sr2z2tiv
	  section.data(198).logicalSrcIdx = 197;
	  section.data(198).dtTransOffset = 306;
	
	  ;% hfuaoawbo4x.l145oj4ihb
	  section.data(199).logicalSrcIdx = 198;
	  section.data(199).dtTransOffset = 307;
	
	  ;% hfuaoawbo4x.bw0tsy3rjx
	  section.data(200).logicalSrcIdx = 199;
	  section.data(200).dtTransOffset = 308;
	
	  ;% hfuaoawbo4x.ninagdnqkp
	  section.data(201).logicalSrcIdx = 200;
	  section.data(201).dtTransOffset = 309;
	
	  ;% hfuaoawbo4x.dytdqpfldp
	  section.data(202).logicalSrcIdx = 201;
	  section.data(202).dtTransOffset = 310;
	
	  ;% hfuaoawbo4x.lmx5u0qfh0
	  section.data(203).logicalSrcIdx = 202;
	  section.data(203).dtTransOffset = 311;
	
	  ;% hfuaoawbo4x.dwrpdlv2f5
	  section.data(204).logicalSrcIdx = 203;
	  section.data(204).dtTransOffset = 312;
	
	  ;% hfuaoawbo4x.hoiwjokbvl
	  section.data(205).logicalSrcIdx = 204;
	  section.data(205).dtTransOffset = 313;
	
	  ;% hfuaoawbo4x.pwpsjlqzli
	  section.data(206).logicalSrcIdx = 205;
	  section.data(206).dtTransOffset = 314;
	
	  ;% hfuaoawbo4x.p0aejvus1i
	  section.data(207).logicalSrcIdx = 206;
	  section.data(207).dtTransOffset = 315;
	
	  ;% hfuaoawbo4x.pro1ckqrto
	  section.data(208).logicalSrcIdx = 207;
	  section.data(208).dtTransOffset = 316;
	
	  ;% hfuaoawbo4x.pl52eab1mb
	  section.data(209).logicalSrcIdx = 208;
	  section.data(209).dtTransOffset = 317;
	
	  ;% hfuaoawbo4x.lomp3tpos5
	  section.data(210).logicalSrcIdx = 209;
	  section.data(210).dtTransOffset = 318;
	
	  ;% hfuaoawbo4x.c5wy4rvh2r
	  section.data(211).logicalSrcIdx = 210;
	  section.data(211).dtTransOffset = 319;
	
	  ;% hfuaoawbo4x.fgmdntdopa
	  section.data(212).logicalSrcIdx = 211;
	  section.data(212).dtTransOffset = 320;
	
	  ;% hfuaoawbo4x.gbvr55mtvj
	  section.data(213).logicalSrcIdx = 212;
	  section.data(213).dtTransOffset = 321;
	
	  ;% hfuaoawbo4x.kspdub4osy
	  section.data(214).logicalSrcIdx = 213;
	  section.data(214).dtTransOffset = 322;
	
	  ;% hfuaoawbo4x.fbm20tee0q
	  section.data(215).logicalSrcIdx = 214;
	  section.data(215).dtTransOffset = 323;
	
	  ;% hfuaoawbo4x.ndw2shsl4a
	  section.data(216).logicalSrcIdx = 215;
	  section.data(216).dtTransOffset = 324;
	
	  ;% hfuaoawbo4x.ao2ehvfzbb
	  section.data(217).logicalSrcIdx = 216;
	  section.data(217).dtTransOffset = 325;
	
	  ;% hfuaoawbo4x.g22j2f1db1
	  section.data(218).logicalSrcIdx = 217;
	  section.data(218).dtTransOffset = 326;
	
	  ;% hfuaoawbo4x.bc4yufp30w
	  section.data(219).logicalSrcIdx = 218;
	  section.data(219).dtTransOffset = 327;
	
	  ;% hfuaoawbo4x.ny1ut05nls
	  section.data(220).logicalSrcIdx = 219;
	  section.data(220).dtTransOffset = 334;
	
	  ;% hfuaoawbo4x.dtl5bmf354
	  section.data(221).logicalSrcIdx = 220;
	  section.data(221).dtTransOffset = 336;
	
	  ;% hfuaoawbo4x.nqhbc5nybn
	  section.data(222).logicalSrcIdx = 221;
	  section.data(222).dtTransOffset = 338;
	
	  ;% hfuaoawbo4x.plvraarov5
	  section.data(223).logicalSrcIdx = 222;
	  section.data(223).dtTransOffset = 342;
	
	  ;% hfuaoawbo4x.ccotai5ab1
	  section.data(224).logicalSrcIdx = 223;
	  section.data(224).dtTransOffset = 345;
	
	  ;% hfuaoawbo4x.kxzub5nxhq
	  section.data(225).logicalSrcIdx = 224;
	  section.data(225).dtTransOffset = 348;
	
	  ;% hfuaoawbo4x.klui4qywrw
	  section.data(226).logicalSrcIdx = 225;
	  section.data(226).dtTransOffset = 351;
	
	  ;% hfuaoawbo4x.punl0cw1in
	  section.data(227).logicalSrcIdx = 226;
	  section.data(227).dtTransOffset = 354;
	
	  ;% hfuaoawbo4x.cvmohjxrdw
	  section.data(228).logicalSrcIdx = 227;
	  section.data(228).dtTransOffset = 355;
	
	  ;% hfuaoawbo4x.its1kwdpoq
	  section.data(229).logicalSrcIdx = 228;
	  section.data(229).dtTransOffset = 356;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% hfuaoawbo4x.lyxyg1om13
	  section.data(1).logicalSrcIdx = 230;
	  section.data(1).dtTransOffset = 0;
	
	  ;% hfuaoawbo4x.ilm1n3ayxr
	  section.data(2).logicalSrcIdx = 231;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
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
    nTotSects     = 9;
    sectIdxOffset = 2;
    
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
    ;% Auto data (ngg51vuviwy)
    ;%
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% ngg51vuviwy.mqtw444yv2
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ngg51vuviwy.gre0ylsh2c
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ngg51vuviwy.jfsef4ewnb
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ngg51vuviwy.al21e1yegq
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ngg51vuviwy.fr1u3lpnkj
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 52;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 11;
      section.data(11)  = dumData; %prealloc
      
	  ;% ngg51vuviwy.otm0mxb2lv.LoggedData
	  section.data(1).logicalSrcIdx = 5;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ngg51vuviwy.guk4l0qgeo.LoggedData
	  section.data(2).logicalSrcIdx = 6;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ngg51vuviwy.pxjcv2pd4l.LoggedData
	  section.data(3).logicalSrcIdx = 7;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ngg51vuviwy.f5rthynhxi.LoggedData
	  section.data(4).logicalSrcIdx = 8;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ngg51vuviwy.on2mppr5jz.LoggedData
	  section.data(5).logicalSrcIdx = 9;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ngg51vuviwy.k4jvtpuy0t.LoggedData
	  section.data(6).logicalSrcIdx = 10;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ngg51vuviwy.gpclghlhuk.LoggedData
	  section.data(7).logicalSrcIdx = 11;
	  section.data(7).dtTransOffset = 6;
	
	  ;% ngg51vuviwy.kdmkimhpgz.LoggedData
	  section.data(8).logicalSrcIdx = 12;
	  section.data(8).dtTransOffset = 7;
	
	  ;% ngg51vuviwy.mzjyg1ykwh.LoggedData
	  section.data(9).logicalSrcIdx = 13;
	  section.data(9).dtTransOffset = 8;
	
	  ;% ngg51vuviwy.okr3aqexvh.LoggedData
	  section.data(10).logicalSrcIdx = 14;
	  section.data(10).dtTransOffset = 9;
	
	  ;% ngg51vuviwy.k5b0204bbx.LoggedData
	  section.data(11).logicalSrcIdx = 15;
	  section.data(11).dtTransOffset = 10;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 26;
      section.data(26)  = dumData; %prealloc
      
	  ;% ngg51vuviwy.huxynv0phj
	  section.data(1).logicalSrcIdx = 16;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ngg51vuviwy.ewls1imqk1
	  section.data(2).logicalSrcIdx = 17;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ngg51vuviwy.eflgibr34n
	  section.data(3).logicalSrcIdx = 18;
	  section.data(3).dtTransOffset = 3;
	
	  ;% ngg51vuviwy.pdxs3c2pl0
	  section.data(4).logicalSrcIdx = 19;
	  section.data(4).dtTransOffset = 4;
	
	  ;% ngg51vuviwy.i3q12d2jew
	  section.data(5).logicalSrcIdx = 20;
	  section.data(5).dtTransOffset = 6;
	
	  ;% ngg51vuviwy.lfmgmigqrp
	  section.data(6).logicalSrcIdx = 21;
	  section.data(6).dtTransOffset = 7;
	
	  ;% ngg51vuviwy.n10y3pcwdf
	  section.data(7).logicalSrcIdx = 22;
	  section.data(7).dtTransOffset = 9;
	
	  ;% ngg51vuviwy.kgfaip5jyy
	  section.data(8).logicalSrcIdx = 23;
	  section.data(8).dtTransOffset = 10;
	
	  ;% ngg51vuviwy.oajgwqix20
	  section.data(9).logicalSrcIdx = 24;
	  section.data(9).dtTransOffset = 12;
	
	  ;% ngg51vuviwy.dlkpgyoxr3
	  section.data(10).logicalSrcIdx = 25;
	  section.data(10).dtTransOffset = 13;
	
	  ;% ngg51vuviwy.mlwgki4zic
	  section.data(11).logicalSrcIdx = 26;
	  section.data(11).dtTransOffset = 15;
	
	  ;% ngg51vuviwy.o20tevejqi
	  section.data(12).logicalSrcIdx = 27;
	  section.data(12).dtTransOffset = 16;
	
	  ;% ngg51vuviwy.ifyn3txjwx
	  section.data(13).logicalSrcIdx = 28;
	  section.data(13).dtTransOffset = 18;
	
	  ;% ngg51vuviwy.fqtzsw0tzv
	  section.data(14).logicalSrcIdx = 29;
	  section.data(14).dtTransOffset = 19;
	
	  ;% ngg51vuviwy.ngshbn2m5z
	  section.data(15).logicalSrcIdx = 30;
	  section.data(15).dtTransOffset = 21;
	
	  ;% ngg51vuviwy.avvodjvi0e
	  section.data(16).logicalSrcIdx = 31;
	  section.data(16).dtTransOffset = 22;
	
	  ;% ngg51vuviwy.murf55qffy
	  section.data(17).logicalSrcIdx = 32;
	  section.data(17).dtTransOffset = 24;
	
	  ;% ngg51vuviwy.gtpyurwibv
	  section.data(18).logicalSrcIdx = 33;
	  section.data(18).dtTransOffset = 25;
	
	  ;% ngg51vuviwy.kqwy4misfw
	  section.data(19).logicalSrcIdx = 34;
	  section.data(19).dtTransOffset = 27;
	
	  ;% ngg51vuviwy.pe0qbg3cnl
	  section.data(20).logicalSrcIdx = 35;
	  section.data(20).dtTransOffset = 28;
	
	  ;% ngg51vuviwy.kegaslxsrx
	  section.data(21).logicalSrcIdx = 36;
	  section.data(21).dtTransOffset = 30;
	
	  ;% ngg51vuviwy.kexfoi1mkq
	  section.data(22).logicalSrcIdx = 37;
	  section.data(22).dtTransOffset = 31;
	
	  ;% ngg51vuviwy.emxjcszpqu
	  section.data(23).logicalSrcIdx = 38;
	  section.data(23).dtTransOffset = 33;
	
	  ;% ngg51vuviwy.ejlbztojpt
	  section.data(24).logicalSrcIdx = 39;
	  section.data(24).dtTransOffset = 34;
	
	  ;% ngg51vuviwy.bqzpa1abaf
	  section.data(25).logicalSrcIdx = 40;
	  section.data(25).dtTransOffset = 36;
	
	  ;% ngg51vuviwy.l2nmbl4cbk
	  section.data(26).logicalSrcIdx = 41;
	  section.data(26).dtTransOffset = 37;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% ngg51vuviwy.ohqzjzllib
	  section.data(1).logicalSrcIdx = 42;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ngg51vuviwy.ogiu2msyaa
	  section.data(2).logicalSrcIdx = 43;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ngg51vuviwy.gofnphz0kz
	  section.data(3).logicalSrcIdx = 44;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ngg51vuviwy.j3jpf41hkf
	  section.data(4).logicalSrcIdx = 45;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ngg51vuviwy.bsrppkoaqa
	  section.data(5).logicalSrcIdx = 46;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 82;
      section.data(82)  = dumData; %prealloc
      
	  ;% ngg51vuviwy.nasy3r03v3
	  section.data(1).logicalSrcIdx = 47;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ngg51vuviwy.m2gyfa43xk
	  section.data(2).logicalSrcIdx = 48;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ngg51vuviwy.o5joda4ge4
	  section.data(3).logicalSrcIdx = 49;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ngg51vuviwy.ovrjnddzqd
	  section.data(4).logicalSrcIdx = 50;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ngg51vuviwy.onc2o3nfcc
	  section.data(5).logicalSrcIdx = 51;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ngg51vuviwy.nqet45hqvp
	  section.data(6).logicalSrcIdx = 52;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ngg51vuviwy.nnvo2ycfkq
	  section.data(7).logicalSrcIdx = 53;
	  section.data(7).dtTransOffset = 6;
	
	  ;% ngg51vuviwy.adroqyycxe
	  section.data(8).logicalSrcIdx = 54;
	  section.data(8).dtTransOffset = 7;
	
	  ;% ngg51vuviwy.kozvmutgqp
	  section.data(9).logicalSrcIdx = 55;
	  section.data(9).dtTransOffset = 8;
	
	  ;% ngg51vuviwy.oqjiwb0j5j
	  section.data(10).logicalSrcIdx = 56;
	  section.data(10).dtTransOffset = 9;
	
	  ;% ngg51vuviwy.g0lrsy3cle
	  section.data(11).logicalSrcIdx = 57;
	  section.data(11).dtTransOffset = 10;
	
	  ;% ngg51vuviwy.gpwjfygt53
	  section.data(12).logicalSrcIdx = 58;
	  section.data(12).dtTransOffset = 11;
	
	  ;% ngg51vuviwy.cakumgpaip
	  section.data(13).logicalSrcIdx = 59;
	  section.data(13).dtTransOffset = 12;
	
	  ;% ngg51vuviwy.k1j3ggdh0n
	  section.data(14).logicalSrcIdx = 60;
	  section.data(14).dtTransOffset = 13;
	
	  ;% ngg51vuviwy.aw5eepl2fi
	  section.data(15).logicalSrcIdx = 61;
	  section.data(15).dtTransOffset = 14;
	
	  ;% ngg51vuviwy.au3iu4hwxe
	  section.data(16).logicalSrcIdx = 62;
	  section.data(16).dtTransOffset = 15;
	
	  ;% ngg51vuviwy.iqnehhencs
	  section.data(17).logicalSrcIdx = 63;
	  section.data(17).dtTransOffset = 16;
	
	  ;% ngg51vuviwy.hkpd41ptnb
	  section.data(18).logicalSrcIdx = 64;
	  section.data(18).dtTransOffset = 17;
	
	  ;% ngg51vuviwy.le5ezcct1f
	  section.data(19).logicalSrcIdx = 65;
	  section.data(19).dtTransOffset = 18;
	
	  ;% ngg51vuviwy.gcv5hbdlqu
	  section.data(20).logicalSrcIdx = 66;
	  section.data(20).dtTransOffset = 19;
	
	  ;% ngg51vuviwy.bq4i23vlh3
	  section.data(21).logicalSrcIdx = 67;
	  section.data(21).dtTransOffset = 20;
	
	  ;% ngg51vuviwy.a3ekypkvyd
	  section.data(22).logicalSrcIdx = 68;
	  section.data(22).dtTransOffset = 21;
	
	  ;% ngg51vuviwy.cnunrbonew
	  section.data(23).logicalSrcIdx = 69;
	  section.data(23).dtTransOffset = 22;
	
	  ;% ngg51vuviwy.epy4ye5t4g
	  section.data(24).logicalSrcIdx = 70;
	  section.data(24).dtTransOffset = 23;
	
	  ;% ngg51vuviwy.gpmm0xfq0h
	  section.data(25).logicalSrcIdx = 71;
	  section.data(25).dtTransOffset = 24;
	
	  ;% ngg51vuviwy.o2vqfxmomh
	  section.data(26).logicalSrcIdx = 72;
	  section.data(26).dtTransOffset = 25;
	
	  ;% ngg51vuviwy.nrljhemabf
	  section.data(27).logicalSrcIdx = 73;
	  section.data(27).dtTransOffset = 26;
	
	  ;% ngg51vuviwy.psyl0mnuvj
	  section.data(28).logicalSrcIdx = 74;
	  section.data(28).dtTransOffset = 27;
	
	  ;% ngg51vuviwy.mvxnb5arqf
	  section.data(29).logicalSrcIdx = 75;
	  section.data(29).dtTransOffset = 28;
	
	  ;% ngg51vuviwy.kbsac44cjw
	  section.data(30).logicalSrcIdx = 76;
	  section.data(30).dtTransOffset = 29;
	
	  ;% ngg51vuviwy.kl2lfyanp1
	  section.data(31).logicalSrcIdx = 77;
	  section.data(31).dtTransOffset = 30;
	
	  ;% ngg51vuviwy.bvasf03rkx
	  section.data(32).logicalSrcIdx = 78;
	  section.data(32).dtTransOffset = 31;
	
	  ;% ngg51vuviwy.cwb3bnplqh
	  section.data(33).logicalSrcIdx = 79;
	  section.data(33).dtTransOffset = 32;
	
	  ;% ngg51vuviwy.kgrjq2yk3i
	  section.data(34).logicalSrcIdx = 80;
	  section.data(34).dtTransOffset = 33;
	
	  ;% ngg51vuviwy.obyeutsorr
	  section.data(35).logicalSrcIdx = 81;
	  section.data(35).dtTransOffset = 34;
	
	  ;% ngg51vuviwy.cn4mozejch
	  section.data(36).logicalSrcIdx = 82;
	  section.data(36).dtTransOffset = 35;
	
	  ;% ngg51vuviwy.ftfgzy2fsp
	  section.data(37).logicalSrcIdx = 83;
	  section.data(37).dtTransOffset = 36;
	
	  ;% ngg51vuviwy.l2hnmjwsp2
	  section.data(38).logicalSrcIdx = 84;
	  section.data(38).dtTransOffset = 37;
	
	  ;% ngg51vuviwy.irz310w2ge
	  section.data(39).logicalSrcIdx = 85;
	  section.data(39).dtTransOffset = 38;
	
	  ;% ngg51vuviwy.iwf1qimb54
	  section.data(40).logicalSrcIdx = 86;
	  section.data(40).dtTransOffset = 39;
	
	  ;% ngg51vuviwy.bmw02bmfuu
	  section.data(41).logicalSrcIdx = 87;
	  section.data(41).dtTransOffset = 40;
	
	  ;% ngg51vuviwy.copufix5e1
	  section.data(42).logicalSrcIdx = 88;
	  section.data(42).dtTransOffset = 41;
	
	  ;% ngg51vuviwy.kl0i1e2alg
	  section.data(43).logicalSrcIdx = 89;
	  section.data(43).dtTransOffset = 42;
	
	  ;% ngg51vuviwy.jcuo1zmasa
	  section.data(44).logicalSrcIdx = 90;
	  section.data(44).dtTransOffset = 43;
	
	  ;% ngg51vuviwy.ikkf1adnnz
	  section.data(45).logicalSrcIdx = 91;
	  section.data(45).dtTransOffset = 44;
	
	  ;% ngg51vuviwy.juyf13xdx1
	  section.data(46).logicalSrcIdx = 92;
	  section.data(46).dtTransOffset = 45;
	
	  ;% ngg51vuviwy.fjx3hj3xwl
	  section.data(47).logicalSrcIdx = 93;
	  section.data(47).dtTransOffset = 46;
	
	  ;% ngg51vuviwy.o23cyyryiq
	  section.data(48).logicalSrcIdx = 94;
	  section.data(48).dtTransOffset = 47;
	
	  ;% ngg51vuviwy.csqu2frchz
	  section.data(49).logicalSrcIdx = 95;
	  section.data(49).dtTransOffset = 48;
	
	  ;% ngg51vuviwy.iz5crb2thf
	  section.data(50).logicalSrcIdx = 96;
	  section.data(50).dtTransOffset = 49;
	
	  ;% ngg51vuviwy.mnvqejctbx
	  section.data(51).logicalSrcIdx = 97;
	  section.data(51).dtTransOffset = 50;
	
	  ;% ngg51vuviwy.ei5m4vt2an
	  section.data(52).logicalSrcIdx = 98;
	  section.data(52).dtTransOffset = 51;
	
	  ;% ngg51vuviwy.ojyjobcix2
	  section.data(53).logicalSrcIdx = 99;
	  section.data(53).dtTransOffset = 52;
	
	  ;% ngg51vuviwy.cxc22wbzyx
	  section.data(54).logicalSrcIdx = 100;
	  section.data(54).dtTransOffset = 53;
	
	  ;% ngg51vuviwy.fddcozpon3
	  section.data(55).logicalSrcIdx = 101;
	  section.data(55).dtTransOffset = 54;
	
	  ;% ngg51vuviwy.jmzxa5y3x1
	  section.data(56).logicalSrcIdx = 102;
	  section.data(56).dtTransOffset = 55;
	
	  ;% ngg51vuviwy.fp0vvmmarz
	  section.data(57).logicalSrcIdx = 103;
	  section.data(57).dtTransOffset = 56;
	
	  ;% ngg51vuviwy.obgdl4vvts
	  section.data(58).logicalSrcIdx = 104;
	  section.data(58).dtTransOffset = 57;
	
	  ;% ngg51vuviwy.jhr0vyxdh3
	  section.data(59).logicalSrcIdx = 105;
	  section.data(59).dtTransOffset = 58;
	
	  ;% ngg51vuviwy.btdmegwoi1
	  section.data(60).logicalSrcIdx = 106;
	  section.data(60).dtTransOffset = 59;
	
	  ;% ngg51vuviwy.bzn0gp5jdi
	  section.data(61).logicalSrcIdx = 107;
	  section.data(61).dtTransOffset = 60;
	
	  ;% ngg51vuviwy.fggjybp4nv
	  section.data(62).logicalSrcIdx = 108;
	  section.data(62).dtTransOffset = 61;
	
	  ;% ngg51vuviwy.opmce12fqo
	  section.data(63).logicalSrcIdx = 109;
	  section.data(63).dtTransOffset = 62;
	
	  ;% ngg51vuviwy.h1wj4fud0p
	  section.data(64).logicalSrcIdx = 110;
	  section.data(64).dtTransOffset = 63;
	
	  ;% ngg51vuviwy.a2zz5n420u
	  section.data(65).logicalSrcIdx = 111;
	  section.data(65).dtTransOffset = 64;
	
	  ;% ngg51vuviwy.gknheywe14
	  section.data(66).logicalSrcIdx = 112;
	  section.data(66).dtTransOffset = 65;
	
	  ;% ngg51vuviwy.lzbmuq2yk2
	  section.data(67).logicalSrcIdx = 113;
	  section.data(67).dtTransOffset = 66;
	
	  ;% ngg51vuviwy.d530gaj1ii
	  section.data(68).logicalSrcIdx = 114;
	  section.data(68).dtTransOffset = 67;
	
	  ;% ngg51vuviwy.bdbstwmumv
	  section.data(69).logicalSrcIdx = 115;
	  section.data(69).dtTransOffset = 68;
	
	  ;% ngg51vuviwy.fg3qvdmgz4
	  section.data(70).logicalSrcIdx = 116;
	  section.data(70).dtTransOffset = 69;
	
	  ;% ngg51vuviwy.picfdcdfap
	  section.data(71).logicalSrcIdx = 117;
	  section.data(71).dtTransOffset = 70;
	
	  ;% ngg51vuviwy.nnokrisejy
	  section.data(72).logicalSrcIdx = 118;
	  section.data(72).dtTransOffset = 71;
	
	  ;% ngg51vuviwy.jeex0coj3h
	  section.data(73).logicalSrcIdx = 119;
	  section.data(73).dtTransOffset = 72;
	
	  ;% ngg51vuviwy.k30q4yjdty
	  section.data(74).logicalSrcIdx = 120;
	  section.data(74).dtTransOffset = 73;
	
	  ;% ngg51vuviwy.gudujy1ejr
	  section.data(75).logicalSrcIdx = 121;
	  section.data(75).dtTransOffset = 74;
	
	  ;% ngg51vuviwy.flka3xd0vd
	  section.data(76).logicalSrcIdx = 122;
	  section.data(76).dtTransOffset = 75;
	
	  ;% ngg51vuviwy.hrhkqhh3g2
	  section.data(77).logicalSrcIdx = 123;
	  section.data(77).dtTransOffset = 76;
	
	  ;% ngg51vuviwy.dbbrzhnfld
	  section.data(78).logicalSrcIdx = 124;
	  section.data(78).dtTransOffset = 77;
	
	  ;% ngg51vuviwy.ppg4ibcbt5
	  section.data(79).logicalSrcIdx = 125;
	  section.data(79).dtTransOffset = 78;
	
	  ;% ngg51vuviwy.dhmxxudzxm
	  section.data(80).logicalSrcIdx = 126;
	  section.data(80).dtTransOffset = 79;
	
	  ;% ngg51vuviwy.nkkan2lumh
	  section.data(81).logicalSrcIdx = 127;
	  section.data(81).dtTransOffset = 80;
	
	  ;% ngg51vuviwy.k0fulbi3y3
	  section.data(82).logicalSrcIdx = 128;
	  section.data(82).dtTransOffset = 81;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 13;
      section.data(13)  = dumData; %prealloc
      
	  ;% ngg51vuviwy.m0i4t4o4w4
	  section.data(1).logicalSrcIdx = 129;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ngg51vuviwy.bitl4izqts
	  section.data(2).logicalSrcIdx = 130;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ngg51vuviwy.i4bzza0yhz
	  section.data(3).logicalSrcIdx = 131;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ngg51vuviwy.pwucmqisoh
	  section.data(4).logicalSrcIdx = 132;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ngg51vuviwy.ptxplb3iya
	  section.data(5).logicalSrcIdx = 133;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ngg51vuviwy.bj0piypish
	  section.data(6).logicalSrcIdx = 134;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ngg51vuviwy.b2iivkxpjc
	  section.data(7).logicalSrcIdx = 135;
	  section.data(7).dtTransOffset = 6;
	
	  ;% ngg51vuviwy.bwihaxowku
	  section.data(8).logicalSrcIdx = 136;
	  section.data(8).dtTransOffset = 7;
	
	  ;% ngg51vuviwy.d2iaudcqjt
	  section.data(9).logicalSrcIdx = 137;
	  section.data(9).dtTransOffset = 8;
	
	  ;% ngg51vuviwy.eiyp1urgre
	  section.data(10).logicalSrcIdx = 138;
	  section.data(10).dtTransOffset = 9;
	
	  ;% ngg51vuviwy.fujlvkpypa
	  section.data(11).logicalSrcIdx = 139;
	  section.data(11).dtTransOffset = 10;
	
	  ;% ngg51vuviwy.dzb2vyantf
	  section.data(12).logicalSrcIdx = 140;
	  section.data(12).dtTransOffset = 11;
	
	  ;% ngg51vuviwy.myjsbcl3ak
	  section.data(13).logicalSrcIdx = 141;
	  section.data(13).dtTransOffset = 12;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ngg51vuviwy.as0qpnsv3x
	  section.data(1).logicalSrcIdx = 142;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ngg51vuviwy.oeck1vxca3.n0vodpbpn0
	  section.data(1).logicalSrcIdx = 143;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ngg51vuviwy.ncyqqgn1fak.n0vodpbpn0
	  section.data(1).logicalSrcIdx = 144;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
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


  targMap.checksum0 = 2276260034;
  targMap.checksum1 = 4289519509;
  targMap.checksum2 = 774707880;
  targMap.checksum3 = 3737108171;

