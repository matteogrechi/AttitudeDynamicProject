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
      section.nData     = 253;
      section.data(253)  = dumData; %prealloc
      
	  ;% bjiazabmpo.RandomSource1_MeanVal
	  section.data(1).logicalSrcIdx = 3;
	  section.data(1).dtTransOffset = 0;
	
	  ;% bjiazabmpo.RandomSource1_MeanVal_cgugych5h2
	  section.data(2).logicalSrcIdx = 4;
	  section.data(2).dtTransOffset = 1;
	
	  ;% bjiazabmpo.RandomSource1_MeanVal_dfojatdwfn
	  section.data(3).logicalSrcIdx = 5;
	  section.data(3).dtTransOffset = 2;
	
	  ;% bjiazabmpo.RandomSource_MeanVal
	  section.data(4).logicalSrcIdx = 6;
	  section.data(4).dtTransOffset = 3;
	
	  ;% bjiazabmpo.RandomSource1_MeanVal_bb10j12xon
	  section.data(5).logicalSrcIdx = 7;
	  section.data(5).dtTransOffset = 4;
	
	  ;% bjiazabmpo.RandomSource2_MeanVal
	  section.data(6).logicalSrcIdx = 8;
	  section.data(6).dtTransOffset = 5;
	
	  ;% bjiazabmpo.DirectionCosineMatrixtoQuaternions_action
	  section.data(7).logicalSrcIdx = 9;
	  section.data(7).dtTransOffset = 6;
	
	  ;% bjiazabmpo.NormalizeVector_maxzero
	  section.data(8).logicalSrcIdx = 10;
	  section.data(8).dtTransOffset = 7;
	
	  ;% bjiazabmpo.NormalizeVector1_maxzero
	  section.data(9).logicalSrcIdx = 11;
	  section.data(9).dtTransOffset = 8;
	
	  ;% bjiazabmpo.NormalizeVector_maxzero_nx4f2adafg
	  section.data(10).logicalSrcIdx = 12;
	  section.data(10).dtTransOffset = 9;
	
	  ;% bjiazabmpo.NormalizeVector_maxzero_nn5jzwq50r
	  section.data(11).logicalSrcIdx = 13;
	  section.data(11).dtTransOffset = 10;
	
	  ;% bjiazabmpo.NormalizeVector_maxzero_idjlccn1tr
	  section.data(12).logicalSrcIdx = 14;
	  section.data(12).dtTransOffset = 11;
	
	  ;% bjiazabmpo.NormalizeVector1_maxzero_pe3bb51lb3
	  section.data(13).logicalSrcIdx = 15;
	  section.data(13).dtTransOffset = 12;
	
	  ;% bjiazabmpo.NormalizeVector3_maxzero
	  section.data(14).logicalSrcIdx = 16;
	  section.data(14).dtTransOffset = 13;
	
	  ;% bjiazabmpo.NormalizeVector4_maxzero
	  section.data(15).logicalSrcIdx = 17;
	  section.data(15).dtTransOffset = 14;
	
	  ;% bjiazabmpo.NormalizeVector_maxzero_hzguuty3cr
	  section.data(16).logicalSrcIdx = 18;
	  section.data(16).dtTransOffset = 15;
	
	  ;% bjiazabmpo.NormalizeVector_maxzero_fnmpynnyo1
	  section.data(17).logicalSrcIdx = 19;
	  section.data(17).dtTransOffset = 16;
	
	  ;% bjiazabmpo.NormalizeVector_maxzero_g24tnzjgpe
	  section.data(18).logicalSrcIdx = 20;
	  section.data(18).dtTransOffset = 17;
	
	  ;% bjiazabmpo.DirectionCosineMatrixtoQuaternions_tolerance
	  section.data(19).logicalSrcIdx = 21;
	  section.data(19).dtTransOffset = 18;
	
	  ;% bjiazabmpo.Constant_Value
	  section.data(20).logicalSrcIdx = 22;
	  section.data(20).dtTransOffset = 19;
	
	  ;% bjiazabmpo.Constant_Value_ifjxstsexw
	  section.data(21).logicalSrcIdx = 23;
	  section.data(21).dtTransOffset = 20;
	
	  ;% bjiazabmpo.Constant_Value_nfnblq3wf3
	  section.data(22).logicalSrcIdx = 24;
	  section.data(22).dtTransOffset = 21;
	
	  ;% bjiazabmpo.Constant_Value_bxtk0v2tqk
	  section.data(23).logicalSrcIdx = 25;
	  section.data(23).dtTransOffset = 22;
	
	  ;% bjiazabmpo.Gain_Gain
	  section.data(24).logicalSrcIdx = 26;
	  section.data(24).dtTransOffset = 23;
	
	  ;% bjiazabmpo.Gain1_Gain
	  section.data(25).logicalSrcIdx = 27;
	  section.data(25).dtTransOffset = 24;
	
	  ;% bjiazabmpo.Constant_Value_czyi20hi44
	  section.data(26).logicalSrcIdx = 28;
	  section.data(26).dtTransOffset = 25;
	
	  ;% bjiazabmpo.Gain_Gain_ffyvgqn0t3
	  section.data(27).logicalSrcIdx = 29;
	  section.data(27).dtTransOffset = 26;
	
	  ;% bjiazabmpo.Gain1_Gain_hf2zl5hf11
	  section.data(28).logicalSrcIdx = 30;
	  section.data(28).dtTransOffset = 27;
	
	  ;% bjiazabmpo.Gain3_Gain
	  section.data(29).logicalSrcIdx = 31;
	  section.data(29).dtTransOffset = 28;
	
	  ;% bjiazabmpo.Gain4_Gain
	  section.data(30).logicalSrcIdx = 32;
	  section.data(30).dtTransOffset = 29;
	
	  ;% bjiazabmpo.Constant1_Value
	  section.data(31).logicalSrcIdx = 33;
	  section.data(31).dtTransOffset = 30;
	
	  ;% bjiazabmpo.Constant2_Value
	  section.data(32).logicalSrcIdx = 34;
	  section.data(32).dtTransOffset = 31;
	
	  ;% bjiazabmpo.Constant_Value_glskcdmgi0
	  section.data(33).logicalSrcIdx = 35;
	  section.data(33).dtTransOffset = 33;
	
	  ;% bjiazabmpo.Gain_Gain_ev442xw5g3
	  section.data(34).logicalSrcIdx = 36;
	  section.data(34).dtTransOffset = 34;
	
	  ;% bjiazabmpo.Gain1_Gain_bctn5kthma
	  section.data(35).logicalSrcIdx = 37;
	  section.data(35).dtTransOffset = 35;
	
	  ;% bjiazabmpo.Gain2_Gain
	  section.data(36).logicalSrcIdx = 38;
	  section.data(36).dtTransOffset = 36;
	
	  ;% bjiazabmpo.Gain3_Gain_iezjytb1ib
	  section.data(37).logicalSrcIdx = 39;
	  section.data(37).dtTransOffset = 37;
	
	  ;% bjiazabmpo.Constant1_Value_ius3i4otxm
	  section.data(38).logicalSrcIdx = 40;
	  section.data(38).dtTransOffset = 38;
	
	  ;% bjiazabmpo.Constant2_Value_j5v1xvugrn
	  section.data(39).logicalSrcIdx = 41;
	  section.data(39).dtTransOffset = 39;
	
	  ;% bjiazabmpo.Constant_Value_p5m1vauvdr
	  section.data(40).logicalSrcIdx = 42;
	  section.data(40).dtTransOffset = 41;
	
	  ;% bjiazabmpo.Gain_Gain_cqlkw4p3g1
	  section.data(41).logicalSrcIdx = 43;
	  section.data(41).dtTransOffset = 42;
	
	  ;% bjiazabmpo.Gain1_Gain_ij2znuz5co
	  section.data(42).logicalSrcIdx = 44;
	  section.data(42).dtTransOffset = 43;
	
	  ;% bjiazabmpo.Gain2_Gain_medwk1da45
	  section.data(43).logicalSrcIdx = 45;
	  section.data(43).dtTransOffset = 44;
	
	  ;% bjiazabmpo.Gain3_Gain_j50dplxsob
	  section.data(44).logicalSrcIdx = 46;
	  section.data(44).dtTransOffset = 45;
	
	  ;% bjiazabmpo.Constant1_Value_c4wnv34dlm
	  section.data(45).logicalSrcIdx = 47;
	  section.data(45).dtTransOffset = 46;
	
	  ;% bjiazabmpo.Constant2_Value_i3cnjpylpr
	  section.data(46).logicalSrcIdx = 48;
	  section.data(46).dtTransOffset = 47;
	
	  ;% bjiazabmpo.Constant_Value_m2h11to3lk
	  section.data(47).logicalSrcIdx = 49;
	  section.data(47).dtTransOffset = 49;
	
	  ;% bjiazabmpo.Constant1_Value_ftvtqjp1us
	  section.data(48).logicalSrcIdx = 50;
	  section.data(48).dtTransOffset = 50;
	
	  ;% bjiazabmpo.Constant1_Value_l2qqn3e4fv
	  section.data(49).logicalSrcIdx = 51;
	  section.data(49).dtTransOffset = 51;
	
	  ;% bjiazabmpo.Bias_Bias
	  section.data(50).logicalSrcIdx = 52;
	  section.data(50).dtTransOffset = 52;
	
	  ;% bjiazabmpo.Bias1_Bias
	  section.data(51).logicalSrcIdx = 53;
	  section.data(51).dtTransOffset = 53;
	
	  ;% bjiazabmpo.Gain1_Gain_csudgssrcg
	  section.data(52).logicalSrcIdx = 54;
	  section.data(52).dtTransOffset = 62;
	
	  ;% bjiazabmpo.Integrator1_AbsoluteTolerance
	  section.data(53).logicalSrcIdx = 55;
	  section.data(53).dtTransOffset = 63;
	
	  ;% bjiazabmpo.Gain2_Gain_nben4kjacq
	  section.data(54).logicalSrcIdx = 56;
	  section.data(54).dtTransOffset = 64;
	
	  ;% bjiazabmpo.Gain_Gain_kewyutalpa
	  section.data(55).logicalSrcIdx = 57;
	  section.data(55).dtTransOffset = 65;
	
	  ;% bjiazabmpo.Gain1_Gain_e5ngzsvcli
	  section.data(56).logicalSrcIdx = 58;
	  section.data(56).dtTransOffset = 66;
	
	  ;% bjiazabmpo.Gain_Gain_fouuav1ki1
	  section.data(57).logicalSrcIdx = 59;
	  section.data(57).dtTransOffset = 67;
	
	  ;% bjiazabmpo.Gain2_Gain_d4fbbaxwpd
	  section.data(58).logicalSrcIdx = 60;
	  section.data(58).dtTransOffset = 68;
	
	  ;% bjiazabmpo.Gain1_Gain_lq4olh4tnx
	  section.data(59).logicalSrcIdx = 61;
	  section.data(59).dtTransOffset = 69;
	
	  ;% bjiazabmpo.Gain_Gain_kc1cpqscqf
	  section.data(60).logicalSrcIdx = 62;
	  section.data(60).dtTransOffset = 70;
	
	  ;% bjiazabmpo.Gain1_Gain_n4q3gythod
	  section.data(61).logicalSrcIdx = 63;
	  section.data(61).dtTransOffset = 71;
	
	  ;% bjiazabmpo.Gain2_Gain_arhr50dupm
	  section.data(62).logicalSrcIdx = 64;
	  section.data(62).dtTransOffset = 72;
	
	  ;% bjiazabmpo.RandomSource1_VarianceRTP
	  section.data(63).logicalSrcIdx = 65;
	  section.data(63).dtTransOffset = 73;
	
	  ;% bjiazabmpo.Saturation_UpperSat
	  section.data(64).logicalSrcIdx = 66;
	  section.data(64).dtTransOffset = 74;
	
	  ;% bjiazabmpo.Saturation_LowerSat
	  section.data(65).logicalSrcIdx = 67;
	  section.data(65).dtTransOffset = 75;
	
	  ;% bjiazabmpo.RandomSource1_VarianceRTP_pdcijtaj4d
	  section.data(66).logicalSrcIdx = 68;
	  section.data(66).dtTransOffset = 76;
	
	  ;% bjiazabmpo.Saturation_UpperSat_m5walzmpht
	  section.data(67).logicalSrcIdx = 69;
	  section.data(67).dtTransOffset = 77;
	
	  ;% bjiazabmpo.Saturation_LowerSat_kiy0a1gdvs
	  section.data(68).logicalSrcIdx = 70;
	  section.data(68).dtTransOffset = 78;
	
	  ;% bjiazabmpo.Gain_Gain_cpl3z33sd4
	  section.data(69).logicalSrcIdx = 71;
	  section.data(69).dtTransOffset = 79;
	
	  ;% bjiazabmpo.Gain2_Gain_n2hlwdziix
	  section.data(70).logicalSrcIdx = 72;
	  section.data(70).dtTransOffset = 80;
	
	  ;% bjiazabmpo.Gain_Gain_deacltj5ll
	  section.data(71).logicalSrcIdx = 73;
	  section.data(71).dtTransOffset = 81;
	
	  ;% bjiazabmpo.Gain1_Gain_fe0vmtwk5u
	  section.data(72).logicalSrcIdx = 74;
	  section.data(72).dtTransOffset = 82;
	
	  ;% bjiazabmpo.Gain_Gain_m0ug0pnx04
	  section.data(73).logicalSrcIdx = 75;
	  section.data(73).dtTransOffset = 83;
	
	  ;% bjiazabmpo.Gain2_Gain_gnrwoc1vc2
	  section.data(74).logicalSrcIdx = 76;
	  section.data(74).dtTransOffset = 84;
	
	  ;% bjiazabmpo.Gain1_Gain_epkzxiktj2
	  section.data(75).logicalSrcIdx = 77;
	  section.data(75).dtTransOffset = 85;
	
	  ;% bjiazabmpo.Gain_Gain_efwlgxe2sc
	  section.data(76).logicalSrcIdx = 78;
	  section.data(76).dtTransOffset = 86;
	
	  ;% bjiazabmpo.Gain1_Gain_ito2bip4nt
	  section.data(77).logicalSrcIdx = 79;
	  section.data(77).dtTransOffset = 87;
	
	  ;% bjiazabmpo.Gain2_Gain_kojiuv3vcw
	  section.data(78).logicalSrcIdx = 80;
	  section.data(78).dtTransOffset = 88;
	
	  ;% bjiazabmpo.RandomSource1_VarianceRTP_cwsuhtikoo
	  section.data(79).logicalSrcIdx = 81;
	  section.data(79).dtTransOffset = 89;
	
	  ;% bjiazabmpo.Saturation_UpperSat_gjlfmfcnga
	  section.data(80).logicalSrcIdx = 82;
	  section.data(80).dtTransOffset = 90;
	
	  ;% bjiazabmpo.Saturation_LowerSat_iut5tallny
	  section.data(81).logicalSrcIdx = 83;
	  section.data(81).dtTransOffset = 91;
	
	  ;% bjiazabmpo.RandomSource_VarianceRTP
	  section.data(82).logicalSrcIdx = 84;
	  section.data(82).dtTransOffset = 92;
	
	  ;% bjiazabmpo.R1_Value
	  section.data(83).logicalSrcIdx = 85;
	  section.data(83).dtTransOffset = 93;
	
	  ;% bjiazabmpo.Integrator_AbsoluteTolerance
	  section.data(84).logicalSrcIdx = 86;
	  section.data(84).dtTransOffset = 142;
	
	  ;% bjiazabmpo.Gain1_Gain_b3rhft3ujm
	  section.data(85).logicalSrcIdx = 87;
	  section.data(85).dtTransOffset = 143;
	
	  ;% bjiazabmpo.Merge_InitialOutput
	  section.data(86).logicalSrcIdx = 88;
	  section.data(86).dtTransOffset = 144;
	
	  ;% bjiazabmpo.RandomSource1_VarianceRTP_p1kv0s2xhi
	  section.data(87).logicalSrcIdx = 89;
	  section.data(87).dtTransOffset = 148;
	
	  ;% bjiazabmpo.Saturation_UpperSat_avopyj3crx
	  section.data(88).logicalSrcIdx = 90;
	  section.data(88).dtTransOffset = 149;
	
	  ;% bjiazabmpo.Saturation_LowerSat_gomyrxdxwm
	  section.data(89).logicalSrcIdx = 91;
	  section.data(89).dtTransOffset = 150;
	
	  ;% bjiazabmpo.RandomSource2_VarianceRTP
	  section.data(90).logicalSrcIdx = 92;
	  section.data(90).dtTransOffset = 151;
	
	  ;% bjiazabmpo.Saturation1_UpperSat
	  section.data(91).logicalSrcIdx = 93;
	  section.data(91).dtTransOffset = 152;
	
	  ;% bjiazabmpo.Saturation1_LowerSat
	  section.data(92).logicalSrcIdx = 94;
	  section.data(92).dtTransOffset = 153;
	
	  ;% bjiazabmpo.Gain_Gain_cf5hb10y5x
	  section.data(93).logicalSrcIdx = 95;
	  section.data(93).dtTransOffset = 154;
	
	  ;% bjiazabmpo.Gain2_Gain_n32pjfxnui
	  section.data(94).logicalSrcIdx = 96;
	  section.data(94).dtTransOffset = 155;
	
	  ;% bjiazabmpo.Gain1_Gain_gwlrw1w2b3
	  section.data(95).logicalSrcIdx = 97;
	  section.data(95).dtTransOffset = 156;
	
	  ;% bjiazabmpo.Gain_Gain_efnax0y1dx
	  section.data(96).logicalSrcIdx = 98;
	  section.data(96).dtTransOffset = 157;
	
	  ;% bjiazabmpo.Gain1_Gain_ddeccjfmea
	  section.data(97).logicalSrcIdx = 99;
	  section.data(97).dtTransOffset = 158;
	
	  ;% bjiazabmpo.Gain2_Gain_g2ebct4dqc
	  section.data(98).logicalSrcIdx = 100;
	  section.data(98).dtTransOffset = 159;
	
	  ;% bjiazabmpo.Gain2_Gain_cko11epp5n
	  section.data(99).logicalSrcIdx = 101;
	  section.data(99).dtTransOffset = 160;
	
	  ;% bjiazabmpo.Gain_Gain_cjicctxqb2
	  section.data(100).logicalSrcIdx = 102;
	  section.data(100).dtTransOffset = 161;
	
	  ;% bjiazabmpo.Gain1_Gain_nieh11pzcd
	  section.data(101).logicalSrcIdx = 103;
	  section.data(101).dtTransOffset = 162;
	
	  ;% bjiazabmpo.Gain_Gain_m4jtdwqsx1
	  section.data(102).logicalSrcIdx = 104;
	  section.data(102).dtTransOffset = 163;
	
	  ;% bjiazabmpo.Gain_Gain_cnryscy0x5
	  section.data(103).logicalSrcIdx = 105;
	  section.data(103).dtTransOffset = 164;
	
	  ;% bjiazabmpo.Gain_Gain_flpxquj1at
	  section.data(104).logicalSrcIdx = 106;
	  section.data(104).dtTransOffset = 165;
	
	  ;% bjiazabmpo.Gain_Gain_fsocaetgdj
	  section.data(105).logicalSrcIdx = 107;
	  section.data(105).dtTransOffset = 166;
	
	  ;% bjiazabmpo.Gain1_Gain_igcxviai5g
	  section.data(106).logicalSrcIdx = 108;
	  section.data(106).dtTransOffset = 167;
	
	  ;% bjiazabmpo.Gain2_Gain_mcrod3aisq
	  section.data(107).logicalSrcIdx = 109;
	  section.data(107).dtTransOffset = 168;
	
	  ;% bjiazabmpo.Gain2_Gain_d0aeb3inpf
	  section.data(108).logicalSrcIdx = 110;
	  section.data(108).dtTransOffset = 169;
	
	  ;% bjiazabmpo.Gain_Gain_avgts0xajn
	  section.data(109).logicalSrcIdx = 111;
	  section.data(109).dtTransOffset = 170;
	
	  ;% bjiazabmpo.Gain1_Gain_pfgznzxep3
	  section.data(110).logicalSrcIdx = 112;
	  section.data(110).dtTransOffset = 171;
	
	  ;% bjiazabmpo.Gain_Gain_l4qk2foong
	  section.data(111).logicalSrcIdx = 113;
	  section.data(111).dtTransOffset = 172;
	
	  ;% bjiazabmpo.Gain2_Gain_jbi3ws3ahy
	  section.data(112).logicalSrcIdx = 114;
	  section.data(112).dtTransOffset = 173;
	
	  ;% bjiazabmpo.Gain1_Gain_b2dtklqw2b
	  section.data(113).logicalSrcIdx = 115;
	  section.data(113).dtTransOffset = 174;
	
	  ;% bjiazabmpo.Gain1_Gain_objsqoebrs
	  section.data(114).logicalSrcIdx = 116;
	  section.data(114).dtTransOffset = 175;
	
	  ;% bjiazabmpo.Gain_Gain_ij5ephcub4
	  section.data(115).logicalSrcIdx = 117;
	  section.data(115).dtTransOffset = 176;
	
	  ;% bjiazabmpo.Gain1_Gain_fos5u53xa3
	  section.data(116).logicalSrcIdx = 118;
	  section.data(116).dtTransOffset = 177;
	
	  ;% bjiazabmpo.Gain_Gain_fosanw5ymw
	  section.data(117).logicalSrcIdx = 119;
	  section.data(117).dtTransOffset = 178;
	
	  ;% bjiazabmpo.Q_Value
	  section.data(118).logicalSrcIdx = 120;
	  section.data(118).dtTransOffset = 179;
	
	  ;% bjiazabmpo.DataStoreMemoryP_InitialValue
	  section.data(119).logicalSrcIdx = 121;
	  section.data(119).dtTransOffset = 228;
	
	  ;% bjiazabmpo.DataStoreMemoryx_InitialValue
	  section.data(120).logicalSrcIdx = 122;
	  section.data(120).dtTransOffset = 277;
	
	  ;% bjiazabmpo.Constant2_Value_k5ggz5xbhk
	  section.data(121).logicalSrcIdx = 123;
	  section.data(121).dtTransOffset = 284;
	
	  ;% bjiazabmpo.Constant_Value_ez3azj2hb4
	  section.data(122).logicalSrcIdx = 124;
	  section.data(122).dtTransOffset = 287;
	
	  ;% bjiazabmpo.Constant_Value_h05qkqds1k
	  section.data(123).logicalSrcIdx = 125;
	  section.data(123).dtTransOffset = 288;
	
	  ;% bjiazabmpo.Constant1_Value_c5r2ow4pnn
	  section.data(124).logicalSrcIdx = 126;
	  section.data(124).dtTransOffset = 289;
	
	  ;% bjiazabmpo.Constant2_Value_ialq4qchdp
	  section.data(125).logicalSrcIdx = 127;
	  section.data(125).dtTransOffset = 293;
	
	  ;% bjiazabmpo.Constant3_Value
	  section.data(126).logicalSrcIdx = 128;
	  section.data(126).dtTransOffset = 296;
	
	  ;% bjiazabmpo.Gain1_Gain_l1jki2u5fa
	  section.data(127).logicalSrcIdx = 129;
	  section.data(127).dtTransOffset = 299;
	
	  ;% bjiazabmpo.Inertia_Value
	  section.data(128).logicalSrcIdx = 130;
	  section.data(128).dtTransOffset = 300;
	
	  ;% bjiazabmpo.Constant_Value_bpdqgjnrbi
	  section.data(129).logicalSrcIdx = 131;
	  section.data(129).dtTransOffset = 303;
	
	  ;% bjiazabmpo.Constant_Value_lxx0buxvfk
	  section.data(130).logicalSrcIdx = 132;
	  section.data(130).dtTransOffset = 304;
	
	  ;% bjiazabmpo.Constant_Value_a2jieicat5
	  section.data(131).logicalSrcIdx = 133;
	  section.data(131).dtTransOffset = 305;
	
	  ;% bjiazabmpo.Initialangularvelocity_Value
	  section.data(132).logicalSrcIdx = 134;
	  section.data(132).dtTransOffset = 306;
	
	  ;% bjiazabmpo.Constant_Value_ollq4x5vyn
	  section.data(133).logicalSrcIdx = 135;
	  section.data(133).dtTransOffset = 309;
	
	  ;% bjiazabmpo.Constant_Value_jelrytb22b
	  section.data(134).logicalSrcIdx = 136;
	  section.data(134).dtTransOffset = 310;
	
	  ;% bjiazabmpo.Constant_Value_nfqnghygav
	  section.data(135).logicalSrcIdx = 137;
	  section.data(135).dtTransOffset = 311;
	
	  ;% bjiazabmpo.Spacecraftmagneticdipolebodyreferenceframe_Value
	  section.data(136).logicalSrcIdx = 138;
	  section.data(136).dtTransOffset = 312;
	
	  ;% bjiazabmpo.Constant_Value_ekkpqgqspn
	  section.data(137).logicalSrcIdx = 139;
	  section.data(137).dtTransOffset = 315;
	
	  ;% bjiazabmpo.Constant_Value_hrofb0v0v5
	  section.data(138).logicalSrcIdx = 140;
	  section.data(138).dtTransOffset = 316;
	
	  ;% bjiazabmpo.Constant_Value_klghvcvqmj
	  section.data(139).logicalSrcIdx = 141;
	  section.data(139).dtTransOffset = 317;
	
	  ;% bjiazabmpo.Constant_Value_h3axm4dzs2
	  section.data(140).logicalSrcIdx = 142;
	  section.data(140).dtTransOffset = 318;
	
	  ;% bjiazabmpo.Constant_Value_jsi055lqf3
	  section.data(141).logicalSrcIdx = 143;
	  section.data(141).dtTransOffset = 319;
	
	  ;% bjiazabmpo.u821stMarch_Value
	  section.data(142).logicalSrcIdx = 144;
	  section.data(142).dtTransOffset = 320;
	
	  ;% bjiazabmpo.Gain1_Gain_km22rji0yo
	  section.data(143).logicalSrcIdx = 145;
	  section.data(143).dtTransOffset = 321;
	
	  ;% bjiazabmpo.Constant_Value_c0ie4jx1vv
	  section.data(144).logicalSrcIdx = 146;
	  section.data(144).dtTransOffset = 322;
	
	  ;% bjiazabmpo.Constant1_Value_lvvzxuwh5z
	  section.data(145).logicalSrcIdx = 147;
	  section.data(145).dtTransOffset = 323;
	
	  ;% bjiazabmpo.Sun_Value
	  section.data(146).logicalSrcIdx = 148;
	  section.data(146).dtTransOffset = 324;
	
	  ;% bjiazabmpo.a_Value
	  section.data(147).logicalSrcIdx = 149;
	  section.data(147).dtTransOffset = 325;
	
	  ;% bjiazabmpo.e_Value
	  section.data(148).logicalSrcIdx = 150;
	  section.data(148).dtTransOffset = 326;
	
	  ;% bjiazabmpo.Constant_Value_hn3g4e2bdf
	  section.data(149).logicalSrcIdx = 151;
	  section.data(149).dtTransOffset = 327;
	
	  ;% bjiazabmpo.Constant_Value_cinqqywm1t
	  section.data(150).logicalSrcIdx = 152;
	  section.data(150).dtTransOffset = 328;
	
	  ;% bjiazabmpo.Constant_Value_aglfz4cib2
	  section.data(151).logicalSrcIdx = 153;
	  section.data(151).dtTransOffset = 329;
	
	  ;% bjiazabmpo.Anglebetween3rdJanto21stMarch180_Value
	  section.data(152).logicalSrcIdx = 154;
	  section.data(152).dtTransOffset = 330;
	
	  ;% bjiazabmpo.Constant_Value_mgrgcefnc2
	  section.data(153).logicalSrcIdx = 155;
	  section.data(153).dtTransOffset = 331;
	
	  ;% bjiazabmpo.Constant5_Value
	  section.data(154).logicalSrcIdx = 156;
	  section.data(154).dtTransOffset = 332;
	
	  ;% bjiazabmpo.Ecliptic_Value
	  section.data(155).logicalSrcIdx = 157;
	  section.data(155).dtTransOffset = 333;
	
	  ;% bjiazabmpo.Gain_Gain_nrquqjsjbh
	  section.data(156).logicalSrcIdx = 158;
	  section.data(156).dtTransOffset = 334;
	
	  ;% bjiazabmpo.Gain1_Gain_byeui5d4hz
	  section.data(157).logicalSrcIdx = 159;
	  section.data(157).dtTransOffset = 335;
	
	  ;% bjiazabmpo.Constant_Value_azddlyivju
	  section.data(158).logicalSrcIdx = 160;
	  section.data(158).dtTransOffset = 336;
	
	  ;% bjiazabmpo.Constant3_Value_fveye0j2gb
	  section.data(159).logicalSrcIdx = 161;
	  section.data(159).dtTransOffset = 337;
	
	  ;% bjiazabmpo.u2_Gain
	  section.data(160).logicalSrcIdx = 162;
	  section.data(160).dtTransOffset = 338;
	
	  ;% bjiazabmpo.Constant_Value_mrthaqohbp
	  section.data(161).logicalSrcIdx = 163;
	  section.data(161).dtTransOffset = 339;
	
	  ;% bjiazabmpo.Gain_Gain_msviodsdfg
	  section.data(162).logicalSrcIdx = 164;
	  section.data(162).dtTransOffset = 340;
	
	  ;% bjiazabmpo.Gain1_Gain_fdnpx3hnab
	  section.data(163).logicalSrcIdx = 165;
	  section.data(163).dtTransOffset = 341;
	
	  ;% bjiazabmpo.Gain2_Gain_jrylcyky0d
	  section.data(164).logicalSrcIdx = 166;
	  section.data(164).dtTransOffset = 342;
	
	  ;% bjiazabmpo.Constant_Value_gob0mxnrc1
	  section.data(165).logicalSrcIdx = 167;
	  section.data(165).dtTransOffset = 343;
	
	  ;% bjiazabmpo.Gain_Gain_j00moojqwi
	  section.data(166).logicalSrcIdx = 168;
	  section.data(166).dtTransOffset = 344;
	
	  ;% bjiazabmpo.Gain1_Gain_epavf05nx2
	  section.data(167).logicalSrcIdx = 169;
	  section.data(167).dtTransOffset = 345;
	
	  ;% bjiazabmpo.Gain2_Gain_jieczjcfxj
	  section.data(168).logicalSrcIdx = 170;
	  section.data(168).dtTransOffset = 346;
	
	  ;% bjiazabmpo.Constant_Value_l4ftm45smy
	  section.data(169).logicalSrcIdx = 171;
	  section.data(169).dtTransOffset = 347;
	
	  ;% bjiazabmpo.Gain_Gain_lxppc43sr3
	  section.data(170).logicalSrcIdx = 172;
	  section.data(170).dtTransOffset = 348;
	
	  ;% bjiazabmpo.Gain1_Gain_pr0mjxkeko
	  section.data(171).logicalSrcIdx = 173;
	  section.data(171).dtTransOffset = 349;
	
	  ;% bjiazabmpo.Gain2_Gain_oh11qzcnsq
	  section.data(172).logicalSrcIdx = 174;
	  section.data(172).dtTransOffset = 350;
	
	  ;% bjiazabmpo.Constant3_Value_aiagav1bu5
	  section.data(173).logicalSrcIdx = 175;
	  section.data(173).dtTransOffset = 351;
	
	  ;% bjiazabmpo.Constant4_Value
	  section.data(174).logicalSrcIdx = 176;
	  section.data(174).dtTransOffset = 352;
	
	  ;% bjiazabmpo.Constant_Value_fjyq3eus5i
	  section.data(175).logicalSrcIdx = 177;
	  section.data(175).dtTransOffset = 353;
	
	  ;% bjiazabmpo.Constant_Value_cpj53jxfos
	  section.data(176).logicalSrcIdx = 178;
	  section.data(176).dtTransOffset = 354;
	
	  ;% bjiazabmpo.Constant_Value_ouyamitdob
	  section.data(177).logicalSrcIdx = 179;
	  section.data(177).dtTransOffset = 355;
	
	  ;% bjiazabmpo.Constant_Value_guhbgdhd5y
	  section.data(178).logicalSrcIdx = 180;
	  section.data(178).dtTransOffset = 356;
	
	  ;% bjiazabmpo.Constant_Value_p1uxhfeofi
	  section.data(179).logicalSrcIdx = 181;
	  section.data(179).dtTransOffset = 357;
	
	  ;% bjiazabmpo.Constant_Value_pwofnawzxn
	  section.data(180).logicalSrcIdx = 182;
	  section.data(180).dtTransOffset = 359;
	
	  ;% bjiazabmpo.Sensororientation_Value
	  section.data(181).logicalSrcIdx = 183;
	  section.data(181).dtTransOffset = 360;
	
	  ;% bjiazabmpo.Constant_Value_mvbgvlatz0
	  section.data(182).logicalSrcIdx = 184;
	  section.data(182).dtTransOffset = 364;
	
	  ;% bjiazabmpo.Gain_Gain_kw4hyen3ua
	  section.data(183).logicalSrcIdx = 185;
	  section.data(183).dtTransOffset = 365;
	
	  ;% bjiazabmpo.Gain1_Gain_ckspynbpye
	  section.data(184).logicalSrcIdx = 186;
	  section.data(184).dtTransOffset = 366;
	
	  ;% bjiazabmpo.Gain2_Gain_dah34tkuud
	  section.data(185).logicalSrcIdx = 187;
	  section.data(185).dtTransOffset = 367;
	
	  ;% bjiazabmpo.Constant_Value_dz2dfvrlrq
	  section.data(186).logicalSrcIdx = 188;
	  section.data(186).dtTransOffset = 368;
	
	  ;% bjiazabmpo.Gain_Gain_j0m5yxxclv
	  section.data(187).logicalSrcIdx = 189;
	  section.data(187).dtTransOffset = 369;
	
	  ;% bjiazabmpo.Gain1_Gain_gvb2uliucv
	  section.data(188).logicalSrcIdx = 190;
	  section.data(188).dtTransOffset = 370;
	
	  ;% bjiazabmpo.Gain2_Gain_opntamnvay
	  section.data(189).logicalSrcIdx = 191;
	  section.data(189).dtTransOffset = 371;
	
	  ;% bjiazabmpo.Constant_Value_kcjtlp3thi
	  section.data(190).logicalSrcIdx = 192;
	  section.data(190).dtTransOffset = 372;
	
	  ;% bjiazabmpo.Gain_Gain_mxlhrjirx4
	  section.data(191).logicalSrcIdx = 193;
	  section.data(191).dtTransOffset = 373;
	
	  ;% bjiazabmpo.Gain1_Gain_buk0u32kdc
	  section.data(192).logicalSrcIdx = 194;
	  section.data(192).dtTransOffset = 374;
	
	  ;% bjiazabmpo.Gain2_Gain_arymbwpdh2
	  section.data(193).logicalSrcIdx = 195;
	  section.data(193).dtTransOffset = 375;
	
	  ;% bjiazabmpo.Constant_Value_cknsmwduvj
	  section.data(194).logicalSrcIdx = 196;
	  section.data(194).dtTransOffset = 376;
	
	  ;% bjiazabmpo.Constant_Value_oqac1ckjba
	  section.data(195).logicalSrcIdx = 197;
	  section.data(195).dtTransOffset = 378;
	
	  ;% bjiazabmpo.Sensororientation_Value_hlfjdstuhw
	  section.data(196).logicalSrcIdx = 198;
	  section.data(196).dtTransOffset = 379;
	
	  ;% bjiazabmpo.Constant_Value_kst2th0l1z
	  section.data(197).logicalSrcIdx = 199;
	  section.data(197).dtTransOffset = 383;
	
	  ;% bjiazabmpo.Gain_Gain_cr4zczeez0
	  section.data(198).logicalSrcIdx = 200;
	  section.data(198).dtTransOffset = 384;
	
	  ;% bjiazabmpo.Gain1_Gain_g12m14aft0
	  section.data(199).logicalSrcIdx = 201;
	  section.data(199).dtTransOffset = 385;
	
	  ;% bjiazabmpo.Gain2_Gain_enxakegu4s
	  section.data(200).logicalSrcIdx = 202;
	  section.data(200).dtTransOffset = 386;
	
	  ;% bjiazabmpo.Constant_Value_igmvdrtaty
	  section.data(201).logicalSrcIdx = 203;
	  section.data(201).dtTransOffset = 387;
	
	  ;% bjiazabmpo.Gain_Gain_lw5hirdrrr
	  section.data(202).logicalSrcIdx = 204;
	  section.data(202).dtTransOffset = 388;
	
	  ;% bjiazabmpo.Gain1_Gain_amkbhcbkvw
	  section.data(203).logicalSrcIdx = 205;
	  section.data(203).dtTransOffset = 389;
	
	  ;% bjiazabmpo.Gain2_Gain_bttjb1ulla
	  section.data(204).logicalSrcIdx = 206;
	  section.data(204).dtTransOffset = 390;
	
	  ;% bjiazabmpo.Constant_Value_m4goabuepu
	  section.data(205).logicalSrcIdx = 207;
	  section.data(205).dtTransOffset = 391;
	
	  ;% bjiazabmpo.Gain_Gain_pmdq3xatwv
	  section.data(206).logicalSrcIdx = 208;
	  section.data(206).dtTransOffset = 392;
	
	  ;% bjiazabmpo.Gain1_Gain_bgbnv4z5nx
	  section.data(207).logicalSrcIdx = 209;
	  section.data(207).dtTransOffset = 393;
	
	  ;% bjiazabmpo.Gain2_Gain_cdbsbiii2b
	  section.data(208).logicalSrcIdx = 210;
	  section.data(208).dtTransOffset = 394;
	
	  ;% bjiazabmpo.Constant_Value_p0tb5tfcpa
	  section.data(209).logicalSrcIdx = 211;
	  section.data(209).dtTransOffset = 395;
	
	  ;% bjiazabmpo.Constant_Value_kcn4rmmh00
	  section.data(210).logicalSrcIdx = 212;
	  section.data(210).dtTransOffset = 397;
	
	  ;% bjiazabmpo.Sensororientation_Value_g0fnvenbtt
	  section.data(211).logicalSrcIdx = 213;
	  section.data(211).dtTransOffset = 398;
	
	  ;% bjiazabmpo.Constant_Value_ig5dydpz4k
	  section.data(212).logicalSrcIdx = 214;
	  section.data(212).dtTransOffset = 402;
	
	  ;% bjiazabmpo.Gain_Gain_mppbga10gj
	  section.data(213).logicalSrcIdx = 215;
	  section.data(213).dtTransOffset = 403;
	
	  ;% bjiazabmpo.Gain1_Gain_k32c10wlrj
	  section.data(214).logicalSrcIdx = 216;
	  section.data(214).dtTransOffset = 404;
	
	  ;% bjiazabmpo.Gain2_Gain_h0pnpoqeyo
	  section.data(215).logicalSrcIdx = 217;
	  section.data(215).dtTransOffset = 405;
	
	  ;% bjiazabmpo.Constant_Value_avj1x5z4q1
	  section.data(216).logicalSrcIdx = 218;
	  section.data(216).dtTransOffset = 406;
	
	  ;% bjiazabmpo.Gain_Gain_acnf3wong0
	  section.data(217).logicalSrcIdx = 219;
	  section.data(217).dtTransOffset = 407;
	
	  ;% bjiazabmpo.Gain1_Gain_bdr4kcs3su
	  section.data(218).logicalSrcIdx = 220;
	  section.data(218).dtTransOffset = 408;
	
	  ;% bjiazabmpo.Gain2_Gain_jvmb0iaxtl
	  section.data(219).logicalSrcIdx = 221;
	  section.data(219).dtTransOffset = 409;
	
	  ;% bjiazabmpo.Constant_Value_cnokz3qvra
	  section.data(220).logicalSrcIdx = 222;
	  section.data(220).dtTransOffset = 410;
	
	  ;% bjiazabmpo.Gain_Gain_gmuxgavjeg
	  section.data(221).logicalSrcIdx = 223;
	  section.data(221).dtTransOffset = 411;
	
	  ;% bjiazabmpo.Gain1_Gain_ano5s2udpx
	  section.data(222).logicalSrcIdx = 224;
	  section.data(222).dtTransOffset = 412;
	
	  ;% bjiazabmpo.Gain2_Gain_flzsqlaiqp
	  section.data(223).logicalSrcIdx = 225;
	  section.data(223).dtTransOffset = 413;
	
	  ;% bjiazabmpo.Constant_Value_efe2zzothx
	  section.data(224).logicalSrcIdx = 226;
	  section.data(224).dtTransOffset = 414;
	
	  ;% bjiazabmpo.Constant_Value_dgwb5paphy
	  section.data(225).logicalSrcIdx = 227;
	  section.data(225).dtTransOffset = 416;
	
	  ;% bjiazabmpo.Sensororientation_Value_nngxct2li0
	  section.data(226).logicalSrcIdx = 228;
	  section.data(226).dtTransOffset = 417;
	
	  ;% bjiazabmpo.Constant_Value_cnhwtv0an4
	  section.data(227).logicalSrcIdx = 229;
	  section.data(227).dtTransOffset = 421;
	
	  ;% bjiazabmpo.Gain_Gain_fe12gj1vly
	  section.data(228).logicalSrcIdx = 230;
	  section.data(228).dtTransOffset = 422;
	
	  ;% bjiazabmpo.Gain1_Gain_eknp4eyqxu
	  section.data(229).logicalSrcIdx = 231;
	  section.data(229).dtTransOffset = 423;
	
	  ;% bjiazabmpo.Gain2_Gain_ouwgam1qip
	  section.data(230).logicalSrcIdx = 232;
	  section.data(230).dtTransOffset = 424;
	
	  ;% bjiazabmpo.Constant_Value_ay421yp5th
	  section.data(231).logicalSrcIdx = 233;
	  section.data(231).dtTransOffset = 425;
	
	  ;% bjiazabmpo.Gain_Gain_gff5un3jdu
	  section.data(232).logicalSrcIdx = 234;
	  section.data(232).dtTransOffset = 426;
	
	  ;% bjiazabmpo.Gain1_Gain_awqbponr2k
	  section.data(233).logicalSrcIdx = 235;
	  section.data(233).dtTransOffset = 427;
	
	  ;% bjiazabmpo.Gain2_Gain_f4ewkcswdw
	  section.data(234).logicalSrcIdx = 236;
	  section.data(234).dtTransOffset = 428;
	
	  ;% bjiazabmpo.Constant_Value_h3nq0lzcht
	  section.data(235).logicalSrcIdx = 237;
	  section.data(235).dtTransOffset = 429;
	
	  ;% bjiazabmpo.Gain_Gain_la2cdkige1
	  section.data(236).logicalSrcIdx = 238;
	  section.data(236).dtTransOffset = 430;
	
	  ;% bjiazabmpo.Gain1_Gain_pev0unhzff
	  section.data(237).logicalSrcIdx = 239;
	  section.data(237).dtTransOffset = 431;
	
	  ;% bjiazabmpo.Gain2_Gain_hw1isw0qik
	  section.data(238).logicalSrcIdx = 240;
	  section.data(238).dtTransOffset = 432;
	
	  ;% bjiazabmpo.Constant_Value_gdj2wqmipb
	  section.data(239).logicalSrcIdx = 241;
	  section.data(239).dtTransOffset = 433;
	
	  ;% bjiazabmpo.Constant_Value_lkvqkajgqu
	  section.data(240).logicalSrcIdx = 242;
	  section.data(240).dtTransOffset = 435;
	
	  ;% bjiazabmpo.Sensororientation_Value_nr4vwdw5eq
	  section.data(241).logicalSrcIdx = 243;
	  section.data(241).dtTransOffset = 436;
	
	  ;% bjiazabmpo.Constant_Value_jepzgetsok
	  section.data(242).logicalSrcIdx = 244;
	  section.data(242).dtTransOffset = 440;
	
	  ;% bjiazabmpo.Gain_Gain_evijkwb22b
	  section.data(243).logicalSrcIdx = 245;
	  section.data(243).dtTransOffset = 441;
	
	  ;% bjiazabmpo.Gain1_Gain_bn3u42duxc
	  section.data(244).logicalSrcIdx = 246;
	  section.data(244).dtTransOffset = 442;
	
	  ;% bjiazabmpo.Gain2_Gain_e4wui4ivqw
	  section.data(245).logicalSrcIdx = 247;
	  section.data(245).dtTransOffset = 443;
	
	  ;% bjiazabmpo.Constant_Value_bpjrbxcgtv
	  section.data(246).logicalSrcIdx = 248;
	  section.data(246).dtTransOffset = 444;
	
	  ;% bjiazabmpo.Gain_Gain_hp0a4smryj
	  section.data(247).logicalSrcIdx = 249;
	  section.data(247).dtTransOffset = 445;
	
	  ;% bjiazabmpo.Gain1_Gain_lcdb4ouxht
	  section.data(248).logicalSrcIdx = 250;
	  section.data(248).dtTransOffset = 446;
	
	  ;% bjiazabmpo.Gain2_Gain_fkes0fd4av
	  section.data(249).logicalSrcIdx = 251;
	  section.data(249).dtTransOffset = 447;
	
	  ;% bjiazabmpo.Constant_Value_bnhvh0zo2d
	  section.data(250).logicalSrcIdx = 252;
	  section.data(250).dtTransOffset = 448;
	
	  ;% bjiazabmpo.Gain_Gain_ik5o0z2umm
	  section.data(251).logicalSrcIdx = 253;
	  section.data(251).dtTransOffset = 449;
	
	  ;% bjiazabmpo.Gain1_Gain_gut1ubdvx5
	  section.data(252).logicalSrcIdx = 254;
	  section.data(252).dtTransOffset = 450;
	
	  ;% bjiazabmpo.Gain2_Gain_ojpp20vo3d
	  section.data(253).logicalSrcIdx = 255;
	  section.data(253).dtTransOffset = 451;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% bjiazabmpo.yBlockOrdering_Y0
	  section.data(1).logicalSrcIdx = 256;
	  section.data(1).dtTransOffset = 0;
	
	  ;% bjiazabmpo.Enable1_Value
	  section.data(2).logicalSrcIdx = 257;
	  section.data(2).dtTransOffset = 1;
	
	  ;% bjiazabmpo.BlockOrdering_Value
	  section.data(3).logicalSrcIdx = 258;
	  section.data(3).dtTransOffset = 2;
	
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
    nTotSects     = 1;
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
      section.nData     = 128;
      section.data(128)  = dumData; %prealloc
      
	  ;% hfuaoawbo4x.otudxcmy5f
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% hfuaoawbo4x.kslnzluaes
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% hfuaoawbo4x.erv4px4dbo
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% hfuaoawbo4x.pkka3h1xrv
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% hfuaoawbo4x.msxyxwoyit
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 6;
	
	  ;% hfuaoawbo4x.krci0t2j4m
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 8;
	
	  ;% hfuaoawbo4x.gritwbr2l0
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 10;
	
	  ;% hfuaoawbo4x.o2hjorpke2
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 13;
	
	  ;% hfuaoawbo4x.pk0lw220uo
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 15;
	
	  ;% hfuaoawbo4x.iqajyqskal
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 17;
	
	  ;% hfuaoawbo4x.nkn0lxavyg
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 19;
	
	  ;% hfuaoawbo4x.lmuzqxuokj
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 22;
	
	  ;% hfuaoawbo4x.cpm5g01ony
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 23;
	
	  ;% hfuaoawbo4x.ocma20pg4m
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 24;
	
	  ;% hfuaoawbo4x.m0eteafuap
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 25;
	
	  ;% hfuaoawbo4x.fxhcux2wdi
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 27;
	
	  ;% hfuaoawbo4x.jz4js4cavj
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 29;
	
	  ;% hfuaoawbo4x.jiauta4lz3
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 32;
	
	  ;% hfuaoawbo4x.aznxfnvabf
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 35;
	
	  ;% hfuaoawbo4x.djfx2ozwz1
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 36;
	
	  ;% hfuaoawbo4x.fvxovyedkd
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 39;
	
	  ;% hfuaoawbo4x.chstcquajb
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 42;
	
	  ;% hfuaoawbo4x.mkltislhcr
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 43;
	
	  ;% hfuaoawbo4x.pqempn25ab
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 46;
	
	  ;% hfuaoawbo4x.jcrf3ejwt5
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 49;
	
	  ;% hfuaoawbo4x.bcu4ylgp31
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 50;
	
	  ;% hfuaoawbo4x.hypth4pdun
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 51;
	
	  ;% hfuaoawbo4x.du15nl3tzh
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 60;
	
	  ;% hfuaoawbo4x.my3qvtobl0
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 61;
	
	  ;% hfuaoawbo4x.njop3q5gx2
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 65;
	
	  ;% hfuaoawbo4x.pmhguwhdvv
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 66;
	
	  ;% hfuaoawbo4x.cjccrkvyno
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 67;
	
	  ;% hfuaoawbo4x.a0a51vbmb1
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 70;
	
	  ;% hfuaoawbo4x.pzdghdtfja
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 72;
	
	  ;% hfuaoawbo4x.iereuzzsux
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 74;
	
	  ;% hfuaoawbo4x.nrlkxnu4yx
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 76;
	
	  ;% hfuaoawbo4x.hzxy1e3aeq
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 78;
	
	  ;% hfuaoawbo4x.mgmp4jf0kq
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 79;
	
	  ;% hfuaoawbo4x.kmcgn0cyib
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 82;
	
	  ;% hfuaoawbo4x.asay5kywf5
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 83;
	
	  ;% hfuaoawbo4x.h23bmldhv4
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 84;
	
	  ;% hfuaoawbo4x.h1m1us0vhn
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 85;
	
	  ;% hfuaoawbo4x.ozhlra24jp
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 86;
	
	  ;% hfuaoawbo4x.n0xb4olsgj
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 89;
	
	  ;% hfuaoawbo4x.jgzl5fcvsu
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 92;
	
	  ;% hfuaoawbo4x.iuxf2i4tcl
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 93;
	
	  ;% hfuaoawbo4x.aarhhbez0n
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 94;
	
	  ;% hfuaoawbo4x.cbt3p1gwln
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 95;
	
	  ;% hfuaoawbo4x.p3pcl4mtnq
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 98;
	
	  ;% hfuaoawbo4x.lekkjhfcii
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 101;
	
	  ;% hfuaoawbo4x.psr0r0bk4j
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 105;
	
	  ;% hfuaoawbo4x.jaehxyvqkj
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 106;
	
	  ;% hfuaoawbo4x.nj1dtdqjvk
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 109;
	
	  ;% hfuaoawbo4x.ntohwlgjud
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 113;
	
	  ;% hfuaoawbo4x.kox0yk51ix
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 116;
	
	  ;% hfuaoawbo4x.jbummyrznk
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 119;
	
	  ;% hfuaoawbo4x.bhk0qefpw3
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 120;
	
	  ;% hfuaoawbo4x.fncmo3ybdw
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 123;
	
	  ;% hfuaoawbo4x.k3y3ixdgrn
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 126;
	
	  ;% hfuaoawbo4x.ddyoytv0e2
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 129;
	
	  ;% hfuaoawbo4x.f3ygbdvaty
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 130;
	
	  ;% hfuaoawbo4x.g0423fm4yn
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 131;
	
	  ;% hfuaoawbo4x.meblfsgtxo
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 132;
	
	  ;% hfuaoawbo4x.i15qhheq5s
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 133;
	
	  ;% hfuaoawbo4x.fomozizwka
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 134;
	
	  ;% hfuaoawbo4x.dy3a2ou5re
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 135;
	
	  ;% hfuaoawbo4x.ihuo035dxp
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 136;
	
	  ;% hfuaoawbo4x.iqwyi5ur24
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 137;
	
	  ;% hfuaoawbo4x.epgzqlzua5
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 138;
	
	  ;% hfuaoawbo4x.pcw0pyw2gh
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 139;
	
	  ;% hfuaoawbo4x.abz0n5qp4d
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 140;
	
	  ;% hfuaoawbo4x.bkxmmcqnop
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 141;
	
	  ;% hfuaoawbo4x.f2wok2vtfw
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 142;
	
	  ;% hfuaoawbo4x.ifmzqc4riz
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 143;
	
	  ;% hfuaoawbo4x.eh5mcnwtiq
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 144;
	
	  ;% hfuaoawbo4x.ghaons33bj
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 145;
	
	  ;% hfuaoawbo4x.ohg1wtlywy
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 146;
	
	  ;% hfuaoawbo4x.io0rqxfqo3
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 147;
	
	  ;% hfuaoawbo4x.a3jx4vfcgg
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 148;
	
	  ;% hfuaoawbo4x.bwjkjrhjqv
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 149;
	
	  ;% hfuaoawbo4x.l5j5dkpmqj
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 150;
	
	  ;% hfuaoawbo4x.lkiy512rco
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 151;
	
	  ;% hfuaoawbo4x.oxyjrp2dlh
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 152;
	
	  ;% hfuaoawbo4x.bedykpbnax
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 153;
	
	  ;% hfuaoawbo4x.pem5nu1bix
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 154;
	
	  ;% hfuaoawbo4x.cklgc35k0o
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 155;
	
	  ;% hfuaoawbo4x.iuompaq1le
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 156;
	
	  ;% hfuaoawbo4x.nv4mt5uie4
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 157;
	
	  ;% hfuaoawbo4x.gqzvomyv2t
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 158;
	
	  ;% hfuaoawbo4x.dq2b0uqnue
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 159;
	
	  ;% hfuaoawbo4x.pvkeaggof5
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 160;
	
	  ;% hfuaoawbo4x.k3livt50xe
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 161;
	
	  ;% hfuaoawbo4x.er433el12n
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 162;
	
	  ;% hfuaoawbo4x.g2lr2421ty
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 163;
	
	  ;% hfuaoawbo4x.n3pwxd5dop
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 164;
	
	  ;% hfuaoawbo4x.c1tr4cgbin
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 165;
	
	  ;% hfuaoawbo4x.msphgdgaqg
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 166;
	
	  ;% hfuaoawbo4x.lfb2wgmhm0
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 167;
	
	  ;% hfuaoawbo4x.mmdcsbwnzr
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 168;
	
	  ;% hfuaoawbo4x.mtbvkoruwr
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 169;
	
	  ;% hfuaoawbo4x.ezimqt1hie
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 170;
	
	  ;% hfuaoawbo4x.o4dydkbclu
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 171;
	
	  ;% hfuaoawbo4x.jti4uwlk3m
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 172;
	
	  ;% hfuaoawbo4x.mtwhnewhid
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 173;
	
	  ;% hfuaoawbo4x.k0s25tyxdf
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 174;
	
	  ;% hfuaoawbo4x.lixyng4w4q
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 175;
	
	  ;% hfuaoawbo4x.gf4ywczcig
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 176;
	
	  ;% hfuaoawbo4x.iy4h2wzanu
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 177;
	
	  ;% hfuaoawbo4x.a4edbax1z3
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 178;
	
	  ;% hfuaoawbo4x.mpste0vxzt
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 179;
	
	  ;% hfuaoawbo4x.pmfqzyroxp
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 180;
	
	  ;% hfuaoawbo4x.ob5dzupeki
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 181;
	
	  ;% hfuaoawbo4x.iti4c2htzu
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 182;
	
	  ;% hfuaoawbo4x.bnbxchsr0d
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 183;
	
	  ;% hfuaoawbo4x.fw04vwoiew
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 184;
	
	  ;% hfuaoawbo4x.aibthzgho4
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 185;
	
	  ;% hfuaoawbo4x.i0bwop3aa5
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 186;
	
	  ;% hfuaoawbo4x.ihlfku2rqr
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 187;
	
	  ;% hfuaoawbo4x.eizptmd2fi
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 188;
	
	  ;% hfuaoawbo4x.j1xfny152w
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 189;
	
	  ;% hfuaoawbo4x.plvraarov5
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 196;
	
	  ;% hfuaoawbo4x.ccotai5ab1
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 199;
	
	  ;% hfuaoawbo4x.kxzub5nxhq
	  section.data(123).logicalSrcIdx = 122;
	  section.data(123).dtTransOffset = 202;
	
	  ;% hfuaoawbo4x.klui4qywrw
	  section.data(124).logicalSrcIdx = 123;
	  section.data(124).dtTransOffset = 205;
	
	  ;% hfuaoawbo4x.punl0cw1in
	  section.data(125).logicalSrcIdx = 124;
	  section.data(125).dtTransOffset = 208;
	
	  ;% hfuaoawbo4x.cvmohjxrdw
	  section.data(126).logicalSrcIdx = 125;
	  section.data(126).dtTransOffset = 209;
	
	  ;% hfuaoawbo4x.its1kwdpoq
	  section.data(127).logicalSrcIdx = 126;
	  section.data(127).dtTransOffset = 210;
	
	  ;% hfuaoawbo4x.maelhcaps4
	  section.data(128).logicalSrcIdx = 127;
	  section.data(128).dtTransOffset = 211;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
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
    sectIdxOffset = 1;
    
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
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% ngg51vuviwy.kpt4ony32r
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ngg51vuviwy.ojmnt0y3sv
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 49;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% ngg51vuviwy.hrjm0bam31.LoggedData
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ngg51vuviwy.pxjcv2pd4l.LoggedData
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ngg51vuviwy.f5rthynhxi.LoggedData
	  section.data(3).logicalSrcIdx = 4;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ngg51vuviwy.fynvsfvzer.LoggedData
	  section.data(4).logicalSrcIdx = 5;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ngg51vuviwy.lcag4wuuqc.LoggedData
	  section.data(5).logicalSrcIdx = 6;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ngg51vuviwy.dakjz3ocxw.LoggedData
	  section.data(6).logicalSrcIdx = 7;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ngg51vuviwy.jfenbmoyaa.LoggedData
	  section.data(7).logicalSrcIdx = 8;
	  section.data(7).dtTransOffset = 6;
	
	  ;% ngg51vuviwy.kdmkimhpgz.LoggedData
	  section.data(8).logicalSrcIdx = 9;
	  section.data(8).dtTransOffset = 8;
	
	  ;% ngg51vuviwy.mzjyg1ykwh.LoggedData
	  section.data(9).logicalSrcIdx = 10;
	  section.data(9).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 12;
      section.data(12)  = dumData; %prealloc
      
	  ;% ngg51vuviwy.ed0iuyyld4
	  section.data(1).logicalSrcIdx = 11;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ngg51vuviwy.ck1usmjp0v
	  section.data(2).logicalSrcIdx = 12;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ngg51vuviwy.murf55qffy
	  section.data(3).logicalSrcIdx = 13;
	  section.data(3).dtTransOffset = 3;
	
	  ;% ngg51vuviwy.gtpyurwibv
	  section.data(4).logicalSrcIdx = 14;
	  section.data(4).dtTransOffset = 4;
	
	  ;% ngg51vuviwy.kmqtzibzu3
	  section.data(5).logicalSrcIdx = 15;
	  section.data(5).dtTransOffset = 6;
	
	  ;% ngg51vuviwy.hdaebxdim1
	  section.data(6).logicalSrcIdx = 16;
	  section.data(6).dtTransOffset = 7;
	
	  ;% ngg51vuviwy.huxynv0phj
	  section.data(7).logicalSrcIdx = 17;
	  section.data(7).dtTransOffset = 9;
	
	  ;% ngg51vuviwy.ewls1imqk1
	  section.data(8).logicalSrcIdx = 18;
	  section.data(8).dtTransOffset = 10;
	
	  ;% ngg51vuviwy.nk4wb0pvod
	  section.data(9).logicalSrcIdx = 19;
	  section.data(9).dtTransOffset = 12;
	
	  ;% ngg51vuviwy.hmuoixvgjk
	  section.data(10).logicalSrcIdx = 20;
	  section.data(10).dtTransOffset = 13;
	
	  ;% ngg51vuviwy.fxy34kowkh
	  section.data(11).logicalSrcIdx = 21;
	  section.data(11).dtTransOffset = 15;
	
	  ;% ngg51vuviwy.jgjcidiinu
	  section.data(12).logicalSrcIdx = 22;
	  section.data(12).dtTransOffset = 16;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% ngg51vuviwy.j3jpf41hkf
	  section.data(1).logicalSrcIdx = 23;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ngg51vuviwy.ogiu2msyaa
	  section.data(2).logicalSrcIdx = 24;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ngg51vuviwy.gofnphz0kz
	  section.data(3).logicalSrcIdx = 25;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ngg51vuviwy.ohqzjzllib
	  section.data(4).logicalSrcIdx = 26;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ngg51vuviwy.bsrppkoaqa
	  section.data(5).logicalSrcIdx = 27;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 62;
      section.data(62)  = dumData; %prealloc
      
	  ;% ngg51vuviwy.nasy3r03v3
	  section.data(1).logicalSrcIdx = 28;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ngg51vuviwy.kozvmutgqp
	  section.data(2).logicalSrcIdx = 29;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ngg51vuviwy.n3wpurucsh
	  section.data(3).logicalSrcIdx = 30;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ngg51vuviwy.au3iu4hwxe
	  section.data(4).logicalSrcIdx = 31;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ngg51vuviwy.g0lrsy3cle
	  section.data(5).logicalSrcIdx = 32;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ngg51vuviwy.m2gyfa43xk
	  section.data(6).logicalSrcIdx = 33;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ngg51vuviwy.fghht4acf4
	  section.data(7).logicalSrcIdx = 34;
	  section.data(7).dtTransOffset = 6;
	
	  ;% ngg51vuviwy.iqnehhencs
	  section.data(8).logicalSrcIdx = 35;
	  section.data(8).dtTransOffset = 7;
	
	  ;% ngg51vuviwy.hkpd41ptnb
	  section.data(9).logicalSrcIdx = 36;
	  section.data(9).dtTransOffset = 8;
	
	  ;% ngg51vuviwy.le5ezcct1f
	  section.data(10).logicalSrcIdx = 37;
	  section.data(10).dtTransOffset = 9;
	
	  ;% ngg51vuviwy.gcv5hbdlqu
	  section.data(11).logicalSrcIdx = 38;
	  section.data(11).dtTransOffset = 10;
	
	  ;% ngg51vuviwy.bq4i23vlh3
	  section.data(12).logicalSrcIdx = 39;
	  section.data(12).dtTransOffset = 11;
	
	  ;% ngg51vuviwy.a3ekypkvyd
	  section.data(13).logicalSrcIdx = 40;
	  section.data(13).dtTransOffset = 12;
	
	  ;% ngg51vuviwy.cnunrbonew
	  section.data(14).logicalSrcIdx = 41;
	  section.data(14).dtTransOffset = 13;
	
	  ;% ngg51vuviwy.mijftyv0bg
	  section.data(15).logicalSrcIdx = 42;
	  section.data(15).dtTransOffset = 14;
	
	  ;% ngg51vuviwy.mdgthi25ph
	  section.data(16).logicalSrcIdx = 43;
	  section.data(16).dtTransOffset = 15;
	
	  ;% ngg51vuviwy.dtaraxp5qi
	  section.data(17).logicalSrcIdx = 44;
	  section.data(17).dtTransOffset = 16;
	
	  ;% ngg51vuviwy.ig1vvmw4od
	  section.data(18).logicalSrcIdx = 45;
	  section.data(18).dtTransOffset = 17;
	
	  ;% ngg51vuviwy.psyl0mnuvj
	  section.data(19).logicalSrcIdx = 46;
	  section.data(19).dtTransOffset = 18;
	
	  ;% ngg51vuviwy.mvxnb5arqf
	  section.data(20).logicalSrcIdx = 47;
	  section.data(20).dtTransOffset = 19;
	
	  ;% ngg51vuviwy.kbsac44cjw
	  section.data(21).logicalSrcIdx = 48;
	  section.data(21).dtTransOffset = 20;
	
	  ;% ngg51vuviwy.kl2lfyanp1
	  section.data(22).logicalSrcIdx = 49;
	  section.data(22).dtTransOffset = 21;
	
	  ;% ngg51vuviwy.bvasf03rkx
	  section.data(23).logicalSrcIdx = 50;
	  section.data(23).dtTransOffset = 22;
	
	  ;% ngg51vuviwy.cwb3bnplqh
	  section.data(24).logicalSrcIdx = 51;
	  section.data(24).dtTransOffset = 23;
	
	  ;% ngg51vuviwy.kgrjq2yk3i
	  section.data(25).logicalSrcIdx = 52;
	  section.data(25).dtTransOffset = 24;
	
	  ;% ngg51vuviwy.obyeutsorr
	  section.data(26).logicalSrcIdx = 53;
	  section.data(26).dtTransOffset = 25;
	
	  ;% ngg51vuviwy.ftfgzy2fsp
	  section.data(27).logicalSrcIdx = 54;
	  section.data(27).dtTransOffset = 26;
	
	  ;% ngg51vuviwy.l2hnmjwsp2
	  section.data(28).logicalSrcIdx = 55;
	  section.data(28).dtTransOffset = 27;
	
	  ;% ngg51vuviwy.irz310w2ge
	  section.data(29).logicalSrcIdx = 56;
	  section.data(29).dtTransOffset = 28;
	
	  ;% ngg51vuviwy.iwf1qimb54
	  section.data(30).logicalSrcIdx = 57;
	  section.data(30).dtTransOffset = 29;
	
	  ;% ngg51vuviwy.bmw02bmfuu
	  section.data(31).logicalSrcIdx = 58;
	  section.data(31).dtTransOffset = 30;
	
	  ;% ngg51vuviwy.copufix5e1
	  section.data(32).logicalSrcIdx = 59;
	  section.data(32).dtTransOffset = 31;
	
	  ;% ngg51vuviwy.n1xbgfghif
	  section.data(33).logicalSrcIdx = 60;
	  section.data(33).dtTransOffset = 32;
	
	  ;% ngg51vuviwy.jcuo1zmasa
	  section.data(34).logicalSrcIdx = 61;
	  section.data(34).dtTransOffset = 33;
	
	  ;% ngg51vuviwy.f4ipxf0od0
	  section.data(35).logicalSrcIdx = 62;
	  section.data(35).dtTransOffset = 34;
	
	  ;% ngg51vuviwy.gtcrxf0n4q
	  section.data(36).logicalSrcIdx = 63;
	  section.data(36).dtTransOffset = 35;
	
	  ;% ngg51vuviwy.lyzbn5q0nk
	  section.data(37).logicalSrcIdx = 64;
	  section.data(37).dtTransOffset = 36;
	
	  ;% ngg51vuviwy.igjqnnyo2f
	  section.data(38).logicalSrcIdx = 65;
	  section.data(38).dtTransOffset = 37;
	
	  ;% ngg51vuviwy.jhr0vyxdh3
	  section.data(39).logicalSrcIdx = 66;
	  section.data(39).dtTransOffset = 38;
	
	  ;% ngg51vuviwy.btdmegwoi1
	  section.data(40).logicalSrcIdx = 67;
	  section.data(40).dtTransOffset = 39;
	
	  ;% ngg51vuviwy.bzn0gp5jdi
	  section.data(41).logicalSrcIdx = 68;
	  section.data(41).dtTransOffset = 40;
	
	  ;% ngg51vuviwy.fggjybp4nv
	  section.data(42).logicalSrcIdx = 69;
	  section.data(42).dtTransOffset = 41;
	
	  ;% ngg51vuviwy.opmce12fqo
	  section.data(43).logicalSrcIdx = 70;
	  section.data(43).dtTransOffset = 42;
	
	  ;% ngg51vuviwy.h1wj4fud0p
	  section.data(44).logicalSrcIdx = 71;
	  section.data(44).dtTransOffset = 43;
	
	  ;% ngg51vuviwy.a2zz5n420u
	  section.data(45).logicalSrcIdx = 72;
	  section.data(45).dtTransOffset = 44;
	
	  ;% ngg51vuviwy.gknheywe14
	  section.data(46).logicalSrcIdx = 73;
	  section.data(46).dtTransOffset = 45;
	
	  ;% ngg51vuviwy.lzbmuq2yk2
	  section.data(47).logicalSrcIdx = 74;
	  section.data(47).dtTransOffset = 46;
	
	  ;% ngg51vuviwy.d530gaj1ii
	  section.data(48).logicalSrcIdx = 75;
	  section.data(48).dtTransOffset = 47;
	
	  ;% ngg51vuviwy.bdbstwmumv
	  section.data(49).logicalSrcIdx = 76;
	  section.data(49).dtTransOffset = 48;
	
	  ;% ngg51vuviwy.fg3qvdmgz4
	  section.data(50).logicalSrcIdx = 77;
	  section.data(50).dtTransOffset = 49;
	
	  ;% ngg51vuviwy.picfdcdfap
	  section.data(51).logicalSrcIdx = 78;
	  section.data(51).dtTransOffset = 50;
	
	  ;% ngg51vuviwy.nnokrisejy
	  section.data(52).logicalSrcIdx = 79;
	  section.data(52).dtTransOffset = 51;
	
	  ;% ngg51vuviwy.jeex0coj3h
	  section.data(53).logicalSrcIdx = 80;
	  section.data(53).dtTransOffset = 52;
	
	  ;% ngg51vuviwy.k30q4yjdty
	  section.data(54).logicalSrcIdx = 81;
	  section.data(54).dtTransOffset = 53;
	
	  ;% ngg51vuviwy.gudujy1ejr
	  section.data(55).logicalSrcIdx = 82;
	  section.data(55).dtTransOffset = 54;
	
	  ;% ngg51vuviwy.flka3xd0vd
	  section.data(56).logicalSrcIdx = 83;
	  section.data(56).dtTransOffset = 55;
	
	  ;% ngg51vuviwy.hrhkqhh3g2
	  section.data(57).logicalSrcIdx = 84;
	  section.data(57).dtTransOffset = 56;
	
	  ;% ngg51vuviwy.dbbrzhnfld
	  section.data(58).logicalSrcIdx = 85;
	  section.data(58).dtTransOffset = 57;
	
	  ;% ngg51vuviwy.ppg4ibcbt5
	  section.data(59).logicalSrcIdx = 86;
	  section.data(59).dtTransOffset = 58;
	
	  ;% ngg51vuviwy.dhmxxudzxm
	  section.data(60).logicalSrcIdx = 87;
	  section.data(60).dtTransOffset = 59;
	
	  ;% ngg51vuviwy.nkkan2lumh
	  section.data(61).logicalSrcIdx = 88;
	  section.data(61).dtTransOffset = 60;
	
	  ;% ngg51vuviwy.k0fulbi3y3
	  section.data(62).logicalSrcIdx = 89;
	  section.data(62).dtTransOffset = 61;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% ngg51vuviwy.m0i4t4o4w4
	  section.data(1).logicalSrcIdx = 90;
	  section.data(1).dtTransOffset = 0;
	
	  ;% ngg51vuviwy.bitl4izqts
	  section.data(2).logicalSrcIdx = 91;
	  section.data(2).dtTransOffset = 1;
	
	  ;% ngg51vuviwy.i4bzza0yhz
	  section.data(3).logicalSrcIdx = 92;
	  section.data(3).dtTransOffset = 2;
	
	  ;% ngg51vuviwy.pwucmqisoh
	  section.data(4).logicalSrcIdx = 93;
	  section.data(4).dtTransOffset = 3;
	
	  ;% ngg51vuviwy.oc5laiw1cg
	  section.data(5).logicalSrcIdx = 94;
	  section.data(5).dtTransOffset = 4;
	
	  ;% ngg51vuviwy.fujlvkpypa
	  section.data(6).logicalSrcIdx = 95;
	  section.data(6).dtTransOffset = 5;
	
	  ;% ngg51vuviwy.dzb2vyantf
	  section.data(7).logicalSrcIdx = 96;
	  section.data(7).dtTransOffset = 6;
	
	  ;% ngg51vuviwy.myjsbcl3ak
	  section.data(8).logicalSrcIdx = 97;
	  section.data(8).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ngg51vuviwy.as0qpnsv3x
	  section.data(1).logicalSrcIdx = 98;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ngg51vuviwy.oeck1vxca3.n0vodpbpn0
	  section.data(1).logicalSrcIdx = 99;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% ngg51vuviwy.ncyqqgn1fak.n0vodpbpn0
	  section.data(1).logicalSrcIdx = 100;
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


  targMap.checksum0 = 2669273227;
  targMap.checksum1 = 1613633566;
  targMap.checksum2 = 2556690104;
  targMap.checksum3 = 2016378170;

