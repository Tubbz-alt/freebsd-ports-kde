# Created by: Jukka Ukkonen <jau@iki.fi>
# $FreeBSD$

PORTNAME=	radamsa
PORTVERSION=	0.5
DISTVERSIONPREFIX=	v
CATEGORIES=	security

MAINTAINER=	jau@iki.fi
COMMENT=	General purpose fuzzer

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENCE

BROKEN_aarch64=		fails to build: runaway build

BUILD_DEPENDS=	ol:lang/owl-lisp

USE_GITHUB=	yes
GH_ACCOUNT=	aoh

PLIST_FILES=	bin/radamsa \
		man/man1/radamsa.1.gz

.include <bsd.port.mk>
