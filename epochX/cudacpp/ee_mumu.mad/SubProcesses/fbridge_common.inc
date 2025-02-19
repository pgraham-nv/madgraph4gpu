C
C Common block for internal communication between MadEvent components
C - FBRIDGE_MODE: the operation mode of MEs from Fortran and from the C++ Bridge
C
      INTEGER*4 FBRIDGE_MODE ! (CppOnly=1, FortranOnly=0, BothQuiet=-1, BothDebug=-2)
      COMMON/TO_FBRIDGE_MODE/FBRIDGE_MODE

C
C Common block for internal communication between MadEvent components
C - FBRIDGE_*CBYF*: statistics for the CudaCpp by Fortran ratios of MEs
C
      INTEGER*8 FBRIDGE_NCBYF1  ! number of entries for ME ratio-1
      DOUBLE PRECISION FBRIDGE_CBYF1SUM, FBRIDGE_CBYF1SUM2, ! sum/sum2/min/max ME ratio-1
     &  FBRIDGE_CBYF1MIN, FBRIDGE_CBYF1MAX
      COMMON/TO_FBRIDGE_CBYF1/FBRIDGE_NCBYF1,
     &  FBRIDGE_CBYF1SUM, FBRIDGE_CBYF1SUM2,
     &  FBRIDGE_CBYF1MIN, FBRIDGE_CBYF1MAX

C
C Common block for internal communication between MadEvent components
C - FBRIDGE_PBRIDGE: the memory address of the C++ Bridge
C
      INTEGER*8 FBRIDGE_PBRIDGE ! 64bit memory address
      COMMON/TO_FBRIDGE_PBRIDGE/FBRIDGE_PBRIDGE
