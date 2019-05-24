//premake.vpath=boost/detail
//NO_DOC{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{
#ifndef __QCONFIG_RUNTIME_H__
#define __QCONFIG_RUNTIME_H__
//NO_DOC}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}



////////////////////////////////////////////////////////////////////////////



//������Ŀ����ͣ�������ʱ���Ͳ�һ��
#if defined(QSHARED)
#   if !defined(_DLL) && !defined(_RTLDLL)
#      error "QKernel: Mixing a shared library with a static runtime is a really bad idea ..."
#   endif

#else
#   if defined(_DLL) || defined(_RTLDLL)
#      error "QKernel: Mixing a shared library with a static runtime is a really bad idea ..."
#   endif
#endif


//��̬��־
#if defined(QSHARED)
#   define QRUNTIME_SHARED_FLAG  ""
#   define QRUNTIME_SHARED_FLAG_START ""
#else
#   define QRUNTIME_SHARED_FLAG  "s"
#   define QRUNTIME_SHARED_FLAG_START "-s"
#endif


//���Ա�־
#if defined(QDEBUG)
#   define QRUNTIME_DEBUG_FLAG "d"
#   define QRUNTIME_DEBUG_FLAG_START "-d"
#else
#   define QRUNTIME_DEBUG_FLAG  ""
#   define QRUNTIME_DEBUG_FLAG_START  ""
#endif


//���ӱ�־
// ��̬���� -sd
// ��̬     -s
// ��̬���� -d
// ��̬     [��]
#if defined(QSHARED)
#   define QRUNTIME_FLAGS  QRUNTIME_DEBUG_FLAG_START
#else
#   define QRUNTIME_FLAGS  QRUNTIME_SHARED_FLAG_START QRUNTIME_DEBUG_FLAG
#endif






//NO_DOC{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{
#endif//__QCONFIG_RUNTIME_H__
//NO_DOC}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

