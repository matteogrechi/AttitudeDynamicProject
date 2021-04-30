# Copyright 1994-2020 The MathWorks, Inc.
#
# File    : ert_unix.tmf   
#
# Abstract:
#       Template makefile for building a UNIX-based stand-alone embedded 
#       real-time version of Simulink model using generated C code.
#
#       This makefile attempts to conform to the guidelines specified in the
#       IEEE Std 1003.2-1992 (POSIX) standard. It is designed to be used
#       with GNU Make which is located in matlabroot/rtw/bin.
#
#       Note that this template is automatically customized by the build 
#       procedure to create "<model>.mk"
#
#       The following defines can be used to modify the behavior of the
#       build:
#         OPT_OPTS       - Optimization options. Default is -O.
#         CPP_OPTS       - C++ compiler options.	
#         OPTS           - User specific compile options.
#         USER_SRCS      - Additional user sources, such as files needed by
#                          S-functions.
#         USER_INCLUDES  - Additional include paths
#                          (i.e. USER_INCLUDES="-Iwhere-ever -Iwhere-ever2")
#
#       To enable debugging:
#         set DEBUG_BUILD = 1 below, which will trigger OPTS=-g and
#          LDFLAGS += -g (may vary with compiler version, see compiler doc) 
#
#       This template makefile is designed to be used with a system target
#       file that contains 'rtwgensettings.BuildDirSuffix' see ert.tlc


#------------------------ Macros read by make_rtw ------------------------------
#
# The following macros are read by the build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the build procedure (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.

MAKECMD         = /Applications/MATLAB_R2020b.app/bin/maci64/gmake
HOST            = UNIX
BUILD           = yes
SYS_TARGET_FILE = any

# Opt in to simplified format by specifying compatible Toolchain
TOOLCHAIN_NAME = ["Clang v3.1 | gmake (64-bit Mac)", \
             "GNU gcc/g++ | gmake (64-bit Linux)"]

#---------------------- Tokens expanded by make_rtw ----------------------------
#
# The following tokens, when wrapped with "|>" and "<|" are expanded by the
# build procedure.
#
#  MODEL_NAME          - Name of the Simulink block diagram
#  MODEL_MODULES       - Any additional generated source modules
#  MAKEFILE_NAME       - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT         - Path to where MATLAB is installed.
#  S_FUNCTIONS_LIB     - List of S-functions libraries to link. 
#  NUMST               - Number of sample times
#  NCSTATES            - Number of continuous states
#  COMPUTER            - Computer type. See the MATLAB computer command.
#  BUILDARGS           - Options passed in at the command line.
#  MULTITASKING        - yes (1) or no (0): Is solver mode multitasking
#  INTEGER_CODE        - yes (1) or no (0): Is generated code purely integer
#  MAT_FILE            - yes (1) or no (0): Should mat file logging be done,
#                        if 0, the generated code runs indefinitely
#  MULTI_INSTANCE_CODE - Is the generated code multi instantiable (1/0)?
#  MODELREFS           - List of referenced models
#  TGT_FCN_LIB         - Target function (code replacement) library to use
#  SHRLIBTARGET        - Is this build intended for generation of a shared library instead 
#                        of executable (1/0)?
#  MAKEFILEBUILDER_TGT - Is this build performed by the MakefileBuilder class
#                        e.g. to create a PIL executable?
#  STANDALONE_SUPPRESS_EXE - Build the standalone target but only create object code modules 
#                            and do not build an executable

MODEL                   = rtwshared
MODULES                 = rtGetInf.c rtGetNaN.c rt_nonfinite.c RandSrcCreateSeeds_64.c RandSrcInitState_GZ.c RandSrcInitState_U_64.c RandSrc_GZ_D.c RandSrc_U_D.c UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_NiIj5RwG.c UKFCorrector_correctStateAndSqrtCovariance_vmjALEKO.c UTMeanCovSqrt_NAxRpVx4.c UTMeanCovSqrt_bM1O4v2d.c attitudePropagationNA_WmJbGJ68.c cholUpdateFactor_0UPeNBYU.c cholupdate_lSnXqDZy.c istriu_UHMBrJD6.c qrFactor_dow5EKjD.c qr_FYLMsjgk.c qr_p34avi8K.c rotate_oK4vZKF3.c svdPSD_mZeGp8GY.c svd_PDxVbKTU.c trisolve_ilgPmQXv.c trisolve_uNLPGpcD.c xaxpy_C90WAIC9.c xaxpy_X5BgjSu1.c xaxpy_fUI60keq.c xdotc_WzB1JJq5.c xgemv_ZCPdhZXM.c xgemv_bInceF3v.c xgeqrf_jEFX98iP.c xgeqrf_u2zvnFx8.c xgerc_0w770M6q.c xgerc_xMTsh46H.c xnrm2_7eINs2TP.c xnrm2_KFNTuJEW.c xnrm2_P0jiMRem.c xrot_eDWWCMDF.c xrotg_NXeMSa2F.c xscal_SUledCfq.c xscal_WPjXK2DJ.c xscal_h1lmwebJ.c xswap_GSVguTV3.c UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_xWFpVZLt.c UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_N7TLasef.c UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_mIaJyZoi.c UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_6a5PKxRk.c UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_RC3pugce.c UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_I6VvLuzY.c mtimes_rOmyW7go.c UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_qvndnnH6.c qrFactor_AhI7keyl.c qrFactor_mGJu6pVA.c qr_MJxY6AHd.c qr_rMJWekyd.c trisolve_3230mWtQ.c trisolve_SIky7NSX.c trisolve_TwFzfT1Q.c trisolve_tfSt187f.c xgemv_AIu4sHRi.c xgemv_KGUrmtZV.c xgemv_cZ1l1CRX.c xgemv_n8U1Z1Fc.c xgeqrf_g94hq17B.c xgeqrf_wgFosh2X.c xgerc_DNq0w1et.c xgerc_LOdjswq5.c xgerc_eJ9TvyJx.c xgerc_xMKJrmaB.c xnrm2_B7FYXoFf.c xnrm2_FNqXsPWh.c xnrm2_LeWA03UX.c xnrm2_VsxD4Z2C.c UKFCorrector_correctStateAndSqrtCovariance_88UHeBp0.c UTMeanCovSqrt_LWsp5ZOJ.c UTMeanCovSqrt_Nsd9dLEK.c cholUpdateFactor_jYBGg031.c qrFactor_qzIe5HvL.c qrFactor_yGbRjQTg.c qr_Lnhp9IXx.c qr_PB1XqweS.c qr_Sf8Pmuiw.c qr_iVgYa0GN.c svd_1J6SOHvg.c svd_hpXm7Idz.c xaxpy_X4GUpQxV.c xaxpy_nBQofu9H.c xaxpy_xrtCmtbC.c xaxpy_yY33dACv.c xdotc_1I0nXd1w.c xdotc_lrVdQwYU.c xgemv_54bVPMS2.c xgemv_B0KAdXmD.c xgemv_D9ZONoaL.c xgemv_EserETZk.c xgemv_FSqGfqcA.c xgemv_gfAUkBrr.c xgerc_45PyVZMw.c xgerc_5j2S3Xdj.c xgerc_NBLCIUjN.c xgerc_Oks3akT7.c xgerc_w8T30FM2.c xgerc_wBznJaeV.c xnrm2_Ixk2SxLI.c xnrm2_KG5A7tOy.c xnrm2_OEmfMfas.c xnrm2_Xs4Rini4.c xnrm2_aZ7pCywJ.c xnrm2_alG5ig56.c xnrm2_xQskJsjA.c xnrm2_ztqE9zvK.c xrot_gLcvB5cE.c xrot_sIX3gsh4.c xscal_2IA556bw.c xscal_FrOJUOws.c xscal_PrlOsr0P.c xscal_Syzrgaro.c xscal_XzEftQzM.c xswap_LaXORB54.c xswap_le5kT5pp.c attitudePropagation_jopKHuyt.c
PRODUCT                 = rtwshared.a
MAKEFILE                = 
MATLAB_ROOT             = /Applications/MATLAB_R2020b.app
ALT_MATLAB_ROOT         = /Applications/MATLAB_R2020b.app
START_DIR               = /Users/matteo/Documents/GitHub/AttitudeDynamicProject/FinalVersion
S_FUNCTIONS_LIB         = 
NUMST                   = 
NCSTATES                = 0
COMPUTER                = MACI64
BUILDARGS               =  RSIM_SOLVER_SELECTION=2 PCMATLABROOT="/Applications/MATLAB_R2020b.app" RSIM_PARAMETER_LOADING=1 OPTS="-DNRT -DTGTCONN -DRSIM_PARAMETER_LOADING -DRSIM_WITH_SL_SOLVER -DENABLE_SLEXEC_SSBRIDGE=1 -DON_TARGET_WAIT_FOR_START=0" MACOSX_VERSION_MIN_FLAG="-mmacosx-version-min=10.14"
MULTITASKING            = 0
INTEGER_CODE            = 0
MAT_FILE                = 1
ALLOCATIONFCN           = 0
ONESTEPFCN              = 1
TERMFCN                 = 1
ENABLE_SLEXEC_SSBRIDGE  = 1
MULTI_INSTANCE_CODE     = 0
CLASSIC_INTERFACE       = 0
TGT_FCN_LIB             = ISO_C
MODELREFS               = 
GEN_SAMPLE_MAIN         = 0
TARGET_LANG_EXT         = 
SHRLIBTARGET            = 0
MAKEFILEBUILDER_TGT     = 0
STANDALONE_SUPPRESS_EXE = 0
OPTIMIZATION_FLAGS      = -O0
ADDITIONAL_LDFLAGS      =  -Wl,-rpath,/Applications/MATLAB_R2020b.app/bin/maci64 -Wl,-rpath,@executable_path -Wl,-rpath,@executable_path/../../.. -L/Applications/MATLAB_R2020b.app/sys/os/maci64
INTERLEAVED_COMPLEX_FLAGS = 
DEFINES_CUSTOM          = -DEXT_MODE -DIS_RAPID_ACCEL 
DEFINES_OTHER           = 
COMPILE_FLAGS_OTHER     = 
SYSTEM_LIBS             = 
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 

# To enable debugging:
# set DEBUG_BUILD = 1
DEBUG_BUILD             = 0

#--------------------------- Model and reference models -----------------------
MODELLIB                  = rtwshared.a
MODELREF_LINK_LIBS        = 
RELATIVE_PATH_TO_ANCHOR   = ../../..
# NONE: standalone, SIM: modelref sim, RTW: modelref coder target
MODELREF_TARGET_TYPE       = 


#-- For gcc, link model reference libraries as a group to resolve circular references ---
#   (NOTE: Clang does not recognize these switches but it already resolves circular references)
MODELREF_LINK_LIBS_GROUP = 
ifeq ($(COMPUTER),GLNXA64)
  MODELREF_LINK_LIBS_GROUP = -Wl,--start-group  -Wl,--end-group
endif

#-- In the case when directory name contains space ---
ifneq ($(MATLAB_ROOT),$(ALT_MATLAB_ROOT))
MATLAB_ROOT := $(ALT_MATLAB_ROOT)
endif

#--------------------------- Tool Specifications -------------------------------

include $(MATLAB_ROOT)/rtw/c/tools/unixtools.mk

#------------------------------ Include Path -----------------------------------

# Additional includes 
ADD_INCLUDES = \
	-I$(START_DIR) \
	-I$(START_DIR)/slprj/sim/_sharedutils \
	-I$(MATLAB_ROOT)/extern/include \
	-I$(MATLAB_ROOT)/simulink/include \
	-I$(MATLAB_ROOT)/rtw/c/src \
	-I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common \
	-I$(MATLAB_ROOT)/rtw/c/ert \
	-I$(MATLAB_ROOT)/rtw/c/src/rapid \
	-I$(MATLAB_ROOT)/rtw/c/raccel \
	-I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src \
	-I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip \
	-I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils \
	-I$(MATLAB_ROOT)/toolbox/dsp/include \
	-I$(MATLAB_ROOT)/toolbox/dsp/extern/src/export/include/src \
	-I$(MATLAB_ROOT)/toolbox/dsp/extern/src/export/include \
	-I$(MATLAB_ROOT)/toolbox/shared/dsp/vision/matlab/include \


INCLUDES = -I. -I$(RELATIVE_PATH_TO_ANCHOR) $(USER_INCLUDES) \
	$(INSTRUMENT_INCLUDES) $(ADD_INCLUDES)

#-------------------------------- C Flags --------------------------------------

# Optimization Options
ifndef OPT_OPTS
OPT_OPTS = $(DEFAULT_OPT_OPTS)
endif

# General User Options
ifeq ($(DEBUG_BUILD),0)
DBG_FLAG =
else
#   Set OPTS=-g and any additional flags for debugging
DBG_FLAG = -g
LDFLAGS += -g
endif

LDFLAGS += -Wl,-rpath,"$(MATLAB_ROOT)/bin/$(ARCH)" -L"$(MATLAB_ROOT)/bin/$(ARCH)"

# Defines
CPP_REQ_DEFINES = -DMODEL=$(MODEL) -DNUMST=$(NUMST) -DNCSTATES=$(NCSTATES) \
		  -DUNIX \
                  -DMAT_FILE=$(MAT_FILE) -DINTEGER_CODE=$(INTEGER_CODE) \
		  -DONESTEPFCN=$(ONESTEPFCN) -DTERMFCN=$(TERMFCN) \
		  -DHAVESTDIO -DMULTI_INSTANCE_CODE=$(MULTI_INSTANCE_CODE) \
		  -DCLASSIC_INTERFACE=$(CLASSIC_INTERFACE) \
		  -DALLOCATIONFCN=$(ALLOCATIONFCN)

ifeq ($(MODELREF_TARGET_TYPE),SIM)
ifneq ($(ENABLE_SLEXEC_SSBRIDGE), 0)
CPP_REQ_DEFINES += -DENABLE_SLEXEC_SSBRIDGE=$(ENABLE_SLEXEC_SSBRIDGE)
endif
else
CPP_REQ_DEFINES += -DMT=$(MULTITASKING)
endif

CPP_REQ_DEFINES += -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=$(MODEL_HAS_DYNAMICALLY_LOADED_SFCNS)

ifneq ($(OPTIMIZATION_FLAGS),)
CC_OPTS = $(OPTS) $(COMPILE_FLAGS_OTHER) $(OPTIMIZATION_FLAGS)
else
CC_OPTS = $(OPTS) $(COMPILE_FLAGS_OTHER) $(OPT_OPTS)
endif

DEFINES = $(DEFINES_CUSTOM) $(CPP_REQ_DEFINES) $(DEFINES_OTHER)
CFLAGS = $(ANSI_OPTS) $(DBG_FLAG) $(CC_OPTS) $(DEFINES) $(INCLUDES)
CPPFLAGS = $(CPP_ANSI_OPTS) $(DBG_FLAG) $(CPP_OPTS) $(CC_OPTS) $(DEFINES) $(INCLUDES)

#-------------------------- Additional Libraries ------------------------------

SYSTEM_LIBS += -lm

LIBS =
 
LIBS += $(S_FUNCTIONS_LIB) $(INSTRUMENT_LIBS)

#----------------------------- Source Files ------------------------------------
ADD_SRCS =

SRCS = $(ADD_SRCS) $(MODULES)

USER_SRCS =

USER_OBJS       = $(addsuffix .o, $(basename $(USER_SRCS)))
LOCAL_USER_OBJS = $(notdir $(USER_OBJS))

OBJS      = $(addsuffix .o, $(basename $(SRCS))) $(USER_OBJS)
LINK_OBJS = $(addsuffix .o, $(basename $(SRCS))) $(LOCAL_USER_OBJS)

ADDITIONAL_LDFLAGS += $(ARCH_SPECIFIC_LDFLAGS)

#--------------------------------- Rules ---------------------------------------
BIN_SETTING        = $(LD) $(LDFLAGS) $(ADDITIONAL_LDFLAGS) -o $(PRODUCT)
BUILD_PRODUCT_TYPE = "executable"
ifeq ($(MODELREF_TARGET_TYPE),NONE)
  ifeq ($(SHRLIBTARGET), 1)
    BIN_SETTING        = $(LD) $(SHRLIBLDFLAGS)$(MODEL).def -o $(PRODUCT)
    BUILD_PRODUCT_TYPE = "shared object"	
    ifeq ($(GEN_SAMPLE_MAIN), 1)
      PRODUCT := $(notdir $(PRODUCT))
$(MODEL) : $(PRODUCT) ert_main.o
	$(LD) $(LDFLAGS) $(ADDITIONAL_LDFLAGS) -o $(MODEL) ert_main.o $(PRODUCT) $(SYSTEM_LIBS)
	@mv $(PRODUCT) $(RELATIVE_PATH_TO_ANCHOR)/
	@mv $(MODEL) $(RELATIVE_PATH_TO_ANCHOR)/
	@echo "### Created executable: $@"
    endif
  endif
  ifeq ($(MAKEFILEBUILDER_TGT), 1)
$(PRODUCT) : $(OBJS) $(LIBS) $(MODELLIB) $(MODELREF_LINK_LIBS)
	$(BIN_SETTING) $(LINK_OBJS) $(MODELLIB) $(MODELREF_LINK_LIBS_GROUP) $(LIBS)  $(SYSTEM_LIBS)
	@echo "### Created executable: $@"
  else
    ifeq ($(STANDALONE_SUPPRESS_EXE), 1)
.PHONY: $(PRODUCT)
$(PRODUCT) : $(OBJS) $(LIBS)
	@echo "### Created object modules: $@"
    else
$(PRODUCT) : $(OBJS) $(LIBS) $(MODELREF_LINK_LIBS)
	$(BIN_SETTING) $(LINK_OBJS) $(MODELREF_LINK_LIBS_GROUP) $(LIBS)  $(SYSTEM_LIBS)
	@echo "### Created $(BUILD_PRODUCT_TYPE): $@"
    endif
  endif
else
  $(PRODUCT) : $(OBJS)
	@rm -f $(MODELLIB)
	$(AR) ruvs $(MODELLIB) $(LINK_OBJS)
	@echo "### Created $(MODELLIB)"
	@echo "### Created library: $@"
endif

#-------------------------- Support for building modules ----------------------

%.o : %.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG) "$<"

%.o : %.cpp
	$(CPP) -c $(CPPFLAGS) $(GCC_WALL_FLAG) "$<"

%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) -c $(CFLAGS) $(GCC_WALL_FLAG) "$<"

%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) -c $(CPPFLAGS) $(GCC_WALL_FLAG) "$<"





#------------------------------- Libraries -------------------------------------





#----------------------------- Dependencies ------------------------------------

$(OBJS) : $(MAKEFILE) rtw_proj.tmw

