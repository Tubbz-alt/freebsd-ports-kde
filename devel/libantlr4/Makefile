# Created by: Muhammad Moinur Rahman<5u623l20@gmail.com>
# $FreeBSD$

PORTNAME=	antlr4
PORTVERSION=	4.9
DISTVERSIONPREFIX=	cpp-runtime-
DISTVERSIONSUFFIX=	-source
CATEGORIES=	devel
MASTER_SITES=	http://www.antlr.org/download/
PKGNAMEPREFIX=		lib

MAINTAINER=	fluffy@FreeBSD.org
COMMENT=	ANother Tool for Language Recognition (C runtime)

LICENSE=	BSD3CLAUSE

USES=		cmake compiler:c11 zip
NO_WRKSUBDIR=	yes

DOCSDIR=	${PREFIX}/share/doc/${PKGNAMEPREFIX}${PORTNAME}
LIBVERSION=	4.9
PLIST_SUB+=	LIBVERSION=${PORTVERSION}

.include <bsd.port.mk>
