# Created by: Michal Bielicki <m.bielicki@llizardfs.com>
# $FreeBSD$

PORTNAME=	isa-l
PORTVERSION=	2.21.0
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Intel(R) Intelligent Storage Acceleration Libray

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

ONLY_FOR_ARCHS=	amd64

BUILD_DEPENDS=	yasm:devel/yasm

USE_GITHUB=	yes
GH_ACCOUNT=	01org

USES=		autoreconf gmake libtool:keepla

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
