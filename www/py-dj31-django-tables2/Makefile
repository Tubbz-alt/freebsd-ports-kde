# Created by: Kozlov Sergey <kozlov.sergey.404@gmail.com>
# $FreeBSD$

PORTNAME=	django-tables2
DISTVERSION=	2.3.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}dj31-

MAINTAINER=	kai@FreeBSD.org
COMMENT=	Table/data-grid framework for Django

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django31>=0:www/py-django31@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	distutils autoplist

CONFLICTS_INSTALL=	${PYTHON_PKGNAMEPREFIX}django-tables2

NO_ARCH=		yes

OPTIONS_DEFINE=		TABLIB

TABLIB_DESC=		Enable support for exporting table datasets
TABLIB_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}tablib>=0:textproc/py-tablib@${PY_FLAVOR}

.include <bsd.port.mk>
