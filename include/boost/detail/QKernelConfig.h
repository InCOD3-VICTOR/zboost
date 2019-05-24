//premake.vpath=boost/detail
//NO_DOC{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{
#ifndef __QKERNEL_CONFIG_H__
#define __QKERNEL_CONFIG_H__
//NO_DOC}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}


#include "QConfigCompiler.h"
#include "QConfigPlatform.h"
#include "QConfigProcessor.h"
#include <stddef.h>


////////////////////////////////////////////////////////////////////////////


//���ԡ����б�־
#if defined(_DEBUG)
#   define QDEBUG
#endif


//��̬����̬���־
#if !defined(QSHARED)
#   undef  QSTATIC
#   define QSTATIC
#endif


//���롢�������ű�־
#if defined(QSHARED)
#   if defined(QKERNEL_BUILD)
#      define QKERNEL_SYMBOL QSYMBOL_EXPORT
#   else
#      define QKERNEL_SYMBOL QSYMBOL_IMPORT
#   endif
#else
#	define QKERNEL_SYMBOL
#endif


//���ٷ������ڴ�������
#if defined(QDEBUG)
#   define QALLOCATOR_ENABLE_TRACE_TYPE
#   define QALLOCATOR_ENABLE_TRACE
#endif


//һЩ����ģ�鿪��
//#define QENABLE_GETTEXT     //����ʹ��gettext
//#define QENABLE_TCMALLOC   //����ʹ��tcmalloc
#define QENABLE_WINTHREAD  //����ʹ��windows�߳�
//#define QENABLE_PTHREAD    //����ʹ��pthreadʵ��
#define QENABLE_WSTRING     //������ַ�����ع���


//���ַ��ֽ���
#if defined(QENABLE_WSTRING)
#   if defined(QOS_IS_WINDOWS_FAMILY)
#      define QWCHAR_IS_16BIT
#   else
#      define QWCHAR_IS_32BIT
#   endif
#endif




//NO_DOC{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{
#endif//__QKERNEL_CONFIG_H__
//NO_DOC}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

