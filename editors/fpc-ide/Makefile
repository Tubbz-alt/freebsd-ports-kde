# Created by: John Merryweather Cooper et al
# $FreeBSD$

CATEGORIES=	editors lang
PKGNAMESUFFIX=	-ide

COMMENT=	Free Pascal integrated IDE/compiler

USES=		fpc
USE_FPC=	chm fv gdbint regexpr rtl-extra rtl-console fcl-xml

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR} ${FPCSRCDIR}/rtl ${FPCSRCDIR}/compiler

.include "${MASTERDIR}/Makefile"
