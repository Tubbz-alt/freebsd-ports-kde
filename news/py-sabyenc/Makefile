# Created by: Ralf van der Enden <tremere@cainites.net>
# $FreeBSD$

PORTNAME=	sabyenc
PORTVERSION=	3.3.6
CATEGORIES=	news python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python yEnc package optimized for use within SABnzbd

LICENSE=	LGPL3

DEPRECATED=	Uses deprecated version of python
EXPIRATION_DATE=	2020-12-12

USES=		python:2.7
USE_PYTHON=	autoplist distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/sabyenc.so

.include <bsd.port.mk>
