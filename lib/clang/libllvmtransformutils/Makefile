# $FreeBSD: release/10.4.0/lib/clang/libllvmtransformutils/Makefile 263508 2014-03-21 17:53:59Z dim $

.include <bsd.own.mk>

LIB=	llvmtransformutils

SRCDIR=	lib/Transforms/Utils
SRCS=	BasicBlockUtils.cpp \
	BreakCriticalEdges.cpp \
	BuildLibCalls.cpp \
	BypassSlowDivision.cpp \
	CloneFunction.cpp \
	CloneModule.cpp \
	CmpInstAnalysis.cpp \
	CodeExtractor.cpp \
	DemoteRegToStack.cpp \
	FlattenCFG.cpp \
	GlobalStatus.cpp \
	InlineFunction.cpp \
	InstructionNamer.cpp \
	IntegerDivision.cpp \
	LCSSA.cpp \
	Local.cpp \
	LoopSimplify.cpp \
	LoopUnroll.cpp \
	LoopUnrollRuntime.cpp \
	LowerExpectIntrinsic.cpp \
	LowerInvoke.cpp \
	LowerSwitch.cpp \
	Mem2Reg.cpp \
	MetaRenamer.cpp \
	ModuleUtils.cpp \
	PromoteMemoryToRegister.cpp \
	SSAUpdater.cpp \
	SimplifyCFG.cpp \
	SimplifyIndVar.cpp \
	SimplifyInstructions.cpp \
	SimplifyLibCalls.cpp \
	SpecialCaseList.cpp \
	UnifyFunctionExitNodes.cpp \
	ValueMapper.cpp

.if ${MK_CLANG_EXTRAS} != "no"
SRCS+=	Utils.cpp
.endif

TGHDRS=	Intrinsics

.include "../clang.lib.mk"
