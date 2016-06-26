/*
 *  amaudio.h   ActiveMovie audio interfaces
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 * Copyright (c) 2004-2016 The Open Watcom Contributors. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 */

#ifndef __AMAUDIO__
#define __AMAUDIO__

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file;
#endif

#include <mmsystem.h>
#include <dsound.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IAMDirectSound interface */
#undef INTERFACE
#define INTERFACE   IAMDirectSound
DECLARE_INTERFACE_( IAMDirectSound, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;
    
    /* IAMDirectSound methods */
    STDMETHOD( GetDirectSoundInterface )( THIS_ LPDIRECTSOUND * ) PURE;
    STDMETHOD( GetPrimaryBufferInterface )( THIS_ LPDIRECTSOUNDBUFFER * ) PURE;
    STDMETHOD( GetSecondaryBufferInterface )( THIS_ LPDIRECTSOUNDBUFFER * ) PURE;
    STDMETHOD( ReleaseDirectSoundInterface )( THIS_ LPDIRECTSOUND ) PURE;
    STDMETHOD( ReleasePrimaryBufferInterface )( THIS_ LPDIRECTSOUNDBUFFER ) PURE;
    STDMETHOD( ReleaseSecondaryBufferInterface )( THIS_ LPDIRECTSOUNDBUFFER ) PURE;
    STDMETHOD( SetFocusWindow )( THIS_ HWND, BOOL ) PURE;
    STDMETHOD( GetFocusWindow )( THIS_ HWND *, BOOL * ) PURE;
};

__inline HRESULT AMValidateAndFixWaveFormatEx( WAVEFORMATEX *p1, DWORD p2 )
{
    if( p2 < sizeof( PCMWAVEFORMAT ) ) {
        return( E_INVALIDARG );
    }
    if( p1->wFormatTag != WAVE_FORMAT_PCM ) {
        if( p2 < sizeof( WAVEFORMATEX ) ) {
            return( E_INVALIDARG );
        }
        if( p2 < sizeof( WAVEFORMATEX ) + p1->cbSize ) {
            p1->cbSize = 0;
        }
    }
    if( p1->nAvgBytesPerSec > 10000000 || p1->nAvgBytesPerSec == 0 ) {
        p1->nAvgBytesPerSec = 176400;
    }
    if( p1->nChannels > 32 ) {
        p1->nChannels = 1;
    }
    return( S_OK );
}

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __AMAUDIO__ */
