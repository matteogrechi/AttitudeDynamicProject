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

MAKECMD         = /Applications/MATLAB_R2021a.app/bin/maci64/gmake
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
#  SHRLIBTARGET        - Is this build intended for generation of a shared library instead 
#                        of executable (1/0)?
#  MAKEFILEBUILDER_TGT - Is this build performed by the MakefileBuilder class
#                        e.g. to create a PIL executable?
#  STANDALONE_SUPPRESS_EXE - Build the standalone target but only create object code modules 
#                            and do not build an executable

MODEL                   = rtwshared
MODULES                 = rtGetInf.c rtGetNaN.c rt_nonfinite.c RandSrcCreateSeeds_64.c RandSrcInitState_GZ.c RandSrcInitState_U_64.c RandSrc_GZ_D.c RandSrc_U_D.c UKFCorrector_correctStateAndSqrtCovariance_1j99t4pt.c UKFCorrector_correctStateAndSqrtCovariance_C8o6TH1A.c UTMeanCovSqrt_8vamThvU.c UTMeanCovSqrt_JdsqQnBQ.c UTMeanCovSqrt_oA1OpO5w.c anon_yDH48dhx.c attitudePropagation_2IiurCP2.c ilazlc_47p7muiV.c ilazlc_LXI6bqi6.c ilazlc_Re8BdoN2.c ilazlc_S9OEYQSJ.c ilazlc_WPnjaWdR.c ilazlc_cB1qVHB6.c ilazlc_dk3RSHEv.c ilazlc_qNoBwdCG.c qrFactor_JotB091R.c qr_3htvnHzX.c qr_BmrLq1sa.c qr_Cf9gdmJU.c qr_UIMk847n.c qr_XFbLBem8.c qr_asfj7swv.c qr_en1RFdzJ.c qr_rXyRqJVO.c rotate_EHa2bfuE.c sqrt_tEibmDbk.c svdPSD_3ZL8Csup.c svd_BOZ2mqgd.c svd_Fpugt20V.c svd_dskV4Er1.c trisolve_DNwc83BM.c trisolve_chvVMnSu.c trisolve_cvlW9hUq.c trisolve_u1n95OKR.c xaxpy_5xjSv73M.c xaxpy_AMOJb3Go.c xaxpy_K6A36889.c xaxpy_KBGJ1XMW.c xaxpy_gHx3z9RB.c xaxpy_qZCI1Bpc.c xaxpy_tPXkHMJq.c xdotc_JVBZOAjB.c xdotc_SVcmKUHW.c xdotc_u6u7RC2O.c xgemv_ESuaSzrC.c xgemv_HIteAFNo.c xgemv_SLIL4xQU.c xgemv_aEKGH9Yx.c xgemv_cnzbtLsb.c xgemv_jjXybfnK.c xgemv_tP5AqtJM.c xgemv_ujev74yA.c xgeqrf_rtKdHOx5.c xgeqrf_zL4vGvhx.c xgerc_1Sv1MDJg.c xgerc_79Vgpt6d.c xgerc_HdQfOjmZ.c xgerc_M2jGMdL8.c xgerc_QpvfBaN6.c xgerc_TfLSzBIO.c xgerc_i2bxMcTQ.c xgerc_z8qVYKk1.c xnrm2_0rJMrPAy.c xnrm2_ClLpIAYl.c xnrm2_GyISkmkF.c xnrm2_L4hj2YGA.c xnrm2_RQgmBTO8.c xnrm2_RrjzBGLz.c xnrm2_XRtcWIHn.c xnrm2_dOeDylWq.c xnrm2_iMXEGyx5.c xnrm2_m32bCKwj.c xnrm2_pryLAncS.c xrot_HZ2sz8LY.c xrot_RTqBGDh9.c xrot_ocrkCAvv.c xrotg_Aek4oMo2.c xscal_2aH08qOV.c xscal_7RF6om6K.c xscal_HEFlTQwb.c xscal_HpZFIRhm.c xscal_LFP3qda1.c xscal_QSJiN3Pu.c xscal_THjfQJEY.c xscal_a1dlWx3p.c xscal_lqXVilPU.c xscal_pU3mmOG2.c xscal_qzs1BQsZ.c xscal_rggCcSai.c xscal_sLqiRjoy.c xscal_sjLpWQiX.c xswap_65EdV8gu.c xswap_By3IoyvE.c xswap_mVzEYQrA.c attitudePropagation_bt3K0ylv.c norm_fF2boBZW.c attitudePropagation_PavKqoqk.c UTMeanCovSqrt_KqyqV2M7.c UTMeanCovSqrt_tqdDaaPa.c cholUpdateFactor_LEN81FGq.c ilazlc_DQyLAJLY.c ilazlc_yXVV7323.c qr_4g1gr4gZ.c qr_D8DARVyI.c qr_YNJFsTeT.c svd_hRRMltN8.c trisolve_D5Vfq0VZ.c trisolve_zdTVBC8Q.c xaxpy_WrDZ0dfu.c xaxpy_a0PlI2Pz.c xaxpy_xNufAhLU.c xdotc_2UIAyAl6.c xgemv_O10fpp5i.c xgemv_oIQ2KcxD.c xgemv_ygObybqp.c xgerc_8AxdVt8R.c xgerc_EaI43Gz0.c xgerc_Razz9ZGJ.c xnrm2_7Ag4qc7b.c xnrm2_PEgY4c29.c xnrm2_sFTqT85T.c xrot_8SOrvP1x.c xscal_DORmQr8Z.c xscal_j6B0CTAZ.c xscal_xJbqLS2l.c xswap_L2OVFn32.c
PRODUCT                 = rtwshared.a
MAKEFILE                = 
MATLAB_ROOT             = /Applications/MATLAB_R2021a.app
ALT_MATLAB_ROOT         = /Applications/MATLAB_R2021a.app
START_DIR               = /Users/matteo/Documents/GitHub/AttitudeDynamicProject/FinalVersion3
S_FUNCTIONS_LIB         = 
NUMST                   = 
NCSTATES                = 0
COMPUTER                = MACI64
BUILDARGS               =  RSIM_SOLVER_SELECTION=2 PCMATLABROOT="/Applications/MATLAB_R2021a.app" RSIM_PARAMETER_LOADING=1 OPTS="-DNRT -DIS_SIM_TARGET -DTGTCONN -DRSIM_PARAMETER_LOADING -DRSIM_WITH_SL_SOLVER -DENABLE_SLEXEC_SSBRIDGE=1 -DON_TARGET_WAIT_FOR_START=0 -msse2" MACOSX_VERSION_MIN_FLAG="-mmacosx-version-min=10.14"
MULTITASKING            = 0
INTEGER_CODE            = 0
MAT_FILE                = 1
ALLOCATIONFCN           = 0
ONESTEPFCN              = 1
TERMFCN                 = 1
ENABLE_SLEXEC_SSBRIDGE  = 1
MULTI_INSTANCE_CODE     = 0
CLASSIC_INTERFACE       = 0
MODELREFS               = 
GEN_SAMPLE_MAIN         = 0
TARGET_LANG_EXT         = 
SHRLIBTARGET            = 0
MAKEFILEBUILDER_TGT     = 0
STANDALONE_SUPPRESS_EXE = 0
OPTIMIZATION_FLAGS      = -O0
ADDITIONAL_LDFLAGS      =  -Wl,-rpath,/Applications/MATLAB_R2021a.app/bin/maci64 -Wl,-rpath,@executable_path -Wl,-rpath,@executable_path/../../.. -L/Applications/MATLAB_R2021a.app/sys/os/maci64
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

