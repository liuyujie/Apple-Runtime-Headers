//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class NSGraphicsContext;

__attribute__((visibility("hidden")))
@interface HICocoaWindowAdapter : NSWindow
{
    struct OpaqueWindowPtr *_windowRef;
    unsigned int _focusSearching:1;
    unsigned int _drawingHIView:1;
    unsigned int _renderingByHIView:1;
    unsigned int _syncToViews:1;
    NSGraphicsContext *_drawContext;
    struct OpaqueEventHandlerRef *_myEventHandler;
    struct OpaqueEventHandlerRef *_myStructureViewEventHandler;
    struct OpaqueEventHandlerRef *_myContentViewEventHandler;
    BOOL _passingCarbonWindowActivationEvents;
    BOOL _handlingCarbonWindowActivationEvents;
    unsigned int _cwFlags;
}

+ (Class)frameViewClassForStyleMask:(unsigned long long)arg1;
@property unsigned int cwFlags; // @synthesize cwFlags=_cwFlags;
- (void)_enableFlushWindowWithoutPerformingFlush;
- (void)enableFlushWindow;
- (void)_resetDragMargins;
- (BOOL)_implicitlyTileable;
- (BOOL)_allowsOrdering;
- (void)_setEventMask:(unsigned long long)arg1;
- (BOOL)reconcileToCarbonWindowBounds;
- (BOOL)syncToViews;
- (void)setSyncToViews;
- (void)setHasShadow:(BOOL)arg1;
- (void)setStyleMask:(unsigned long long)arg1;
- (struct OpaqueWindowPtr *)windowRef;
- (void)sendSuperEvent:(id)arg1;
- (void)_requiresFlush;
- (void)disableScreenUpdatesUntilFlush;
- (void)makeKeyWindow;
- (void)postFocusChangeEventToQueue:(BOOL)arg1;
- (BOOL)makeFirstResponderFromCarbonFocus:(id)arg1;
- (void)selectPreviousKeyView:(id)arg1;
- (void)selectNextKeyView:(id)arg1;
- (BOOL)makeFirstResponder:(id)arg1;
- (void)setLevel:(long long)arg1;
- (long long)level;
- (BOOL)canHide;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (void)displayIfNeeded;
- (BOOL)_animationShouldCallFlushWindow;
- (void)selectKeyViewPrecedingView:(id)arg1;
- (void)selectKeyViewFollowingView:(id)arg1;
- (void)relinquishFocus;
- (void)sendEvent:(id)arg1;
- (void)_setCarbonRendering:(BOOL)arg1;
- (BOOL)_carbonRendering;
- (void)_setFocusing:(BOOL)arg1;
- (BOOL)_focusing;
- (id)_threadContext;
- (void)_setDrawingContext:(id)arg1;
- (void)_setDrawingHIView:(BOOL)arg1;
- (BOOL)_drawingHIView;
- (id)_childKeyWindow;
- (int)handleHICocoaViewEvent:(struct OpaqueEventRef *)arg1 callRef:(struct OpaqueEventHandlerCallRef *)arg2;
- (int)handleControlEvent:(struct OpaqueEventRef *)arg1 callRef:(struct OpaqueEventHandlerCallRef *)arg2;
- (int)handleKeyboardEvent:(struct OpaqueEventRef *)arg1 callRef:(struct OpaqueEventHandlerCallRef *)arg2;
- (int)handleMouseEvent:(struct OpaqueEventRef *)arg1 callRef:(struct OpaqueEventHandlerCallRef *)arg2;
- (int)handleCocoaWindowEvent:(struct OpaqueEventRef *)arg1 callRef:(struct OpaqueEventHandlerCallRef *)arg2;
- (int)handleWindowEvent:(struct OpaqueEventRef *)arg1 callRef:(struct OpaqueEventHandlerCallRef *)arg2;
- (int)handleEvent:(struct OpaqueEventRef *)arg1 callRef:(struct OpaqueEventHandlerCallRef *)arg2;
- (struct CGRect)constrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
- (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
- (BOOL)_hasWindowRef;
- (BOOL)_managesWindowRef;
- (void)dealloc;
- (void)_commonAwake;
- (id)initWithCarbonWindowRef:(struct OpaqueWindowPtr *)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (id)accessibilityFocusedUIElement;

@end

