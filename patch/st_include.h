/* Patches */
#if COPYURL_PATCH || COPYURL_HIGHLIGHT_SELECTED_URLS_PATCH
#include "copyurl.h"
#endif
#if EXTERNALPIPE_PATCH
#include "externalpipe.h"
#endif
#if ISO14755_PATCH
#include "iso14755.h"
#endif
#if KEYBOARDSELECT_PATCH
#include "keyboardselect_st.h"
#endif
#if RIGHTCLICKTOPLUMB_PATCH
#include "rightclicktoplumb_st.h"
#endif
#if NEWTERM_PATCH
#include "newterm.h"
#endif
#if SCROLLBACK_PATCH || SCROLLBACK_MOUSE_PATCH || SCROLLBACK_MOUSE_ALTSCREEN_PATCH
#include "scrollback.h"
#endif