//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSCoding.h"
#import "NSUserInterfaceValidations.h"

@class NSColor, QTMovie, QTMovieControllerView, QTMovieViewInternal;

@interface QTMovieView : NSView <NSCoding, NSUserInterfaceValidations>
{
    QTMovie *_movie;
    NSColor *_fillColor;
    BOOL _controllerVisible;
    BOOL _preservesAspectRatio;
    unsigned long long _viewFlags;
    QTMovieViewInternal *_internal;
    long long _reserved3;
    id _delegate;
    int _proxy;
    int _delegateProxy;
    BOOL _useVisualContext;
    NSView *_rendererView;
    QTMovieControllerView *_movieControllerView;
}

+ (unsigned long long)defaultFocusRingType;
+ (void)initialize;
- (unsigned int)windowID;
- (unsigned int)surfaceID;
- (id)validAttributesForMarkedText;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)selectedRange;
- (struct _NSRange)markedRange;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;
- (long long)conversationIdentifier;
- (BOOL)hasMarkedText;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)doCommandBySelector:(SEL)arg1;
- (void)insertText:(id)arg1;
- (void)_setDrawFocusRing:(BOOL)arg1;
- (BOOL)shouldDrawFocusRing;
- (void)enableFocusRing:(BOOL)arg1;
- (BOOL)focusRingEnabled;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)setDragHighlight:(BOOL)arg1;
- (struct CGRect)_dragHighlightOverlayPanelContentRect;
- (BOOL)performDragOperation:(id)arg1;
- (void)dropMovie:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (void)pasteboard:(id)arg1 provideDataForType:(id)arg2;
- (id)dragMovie;
- (void)dragImage:(id)arg1 at:(struct CGPoint)arg2 offset:(struct CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(BOOL)arg7;
- (id)dragImage;
- (id)_currentFrameImage;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (BOOL)ignoreModifierKeysWhileDragging;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (id)menuForEvent:(id)arg1;
- (void)setScrollZEnabled:(BOOL)arg1;
- (BOOL)scrollZEnabled;
- (void)setScrollYEnabled:(BOOL)arg1;
- (BOOL)scrollYEnabled;
- (void)setScrollXEnabled:(BOOL)arg1;
- (BOOL)scrollXEnabled;
- (void)resetCursorRects;
- (void)helpRequested:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDownSetup:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)handleKeyUp:(id)arg1;
- (BOOL)handleKeyDown:(id)arg1;
- (BOOL)handleEvent:(id)arg1;
- (void)drop:(id)arg1;
- (void)trim:(id)arg1;
- (void)replace:(id)arg1;
- (void)addScaled:(id)arg1;
- (void)add:(id)arg1;
- (void)delete:(id)arg1;
- (void)selectNone:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)restoreMovieEditState:(id)arg1;
- (void)doEditOperation:(unsigned int)arg1;
- (void)setEditable:(BOOL)arg1;
- (BOOL)isEditable;
- (void)toggleLoops:(id)arg1;
- (void)showAll:(id)arg1;
- (void)zoomOut:(id)arg1;
- (void)zoomIn:(id)arg1;
- (void)stepBackward:(id)arg1;
- (void)stepForward:(id)arg1;
- (void)gotoPosterFrame:(id)arg1;
- (void)gotoPreviousSelectionPoint:(id)arg1;
- (void)gotoNextSelectionPoint:(id)arg1;
- (void)gotoEnd:(id)arg1;
- (void)gotoBeginning:(id)arg1;
- (void)pause:(id)arg1;
- (void)playBackward:(id)arg1;
- (void)play:(id)arg1;
- (void)_updateServerGeometry;
- (void)renewGState;
- (void)_windowFrameDidChange:(id)arg1;
- (void)boundsDidChange:(id)arg1;
- (void)viewDidEndLiveResize;
- (void)updateFrame;
- (float)controllerBarHeight;
- (struct CGRect)movieControllerBounds;
- (struct CGRect)movieBounds;
- (void)showCustomButton:(id)arg1;
- (void)toggleButton:(long long)arg1;
- (void)showButton:(long long)arg1;
- (void)hideButton:(long long)arg1;
- (void)_applyControllerButtonVisibilitySettings;
- (void)_trackVisibility:(BOOL)arg1 forControllerButton:(long long)arg2;
- (BOOL)_controllerButtonVisibility:(long long)arg1;
- (BOOL)isButtonVisible:(long long)arg1;
- (void)_setVisible:(BOOL)arg1 forControllerButton:(long long)arg2;
- (void)setZoomButtonsVisible:(BOOL)arg1;
- (BOOL)areZoomButtonsVisible;
- (void)setVolumeButtonVisible:(BOOL)arg1;
- (BOOL)isVolumeButtonVisible;
- (void)setTranslateButtonVisible:(BOOL)arg1;
- (BOOL)isTranslateButtonVisible;
- (void)setStepButtonsVisible:(BOOL)arg1;
- (BOOL)areStepButtonsVisible;
- (void)setHotSpotButtonVisible:(BOOL)arg1;
- (BOOL)isHotSpotButtonVisible;
- (void)setCustomButtonVisible:(BOOL)arg1;
- (BOOL)isCustomButtonVisible;
- (void)setBackButtonVisible:(BOOL)arg1;
- (BOOL)isBackButtonVisible;
- (void)setShowsResizeIndicator:(BOOL)arg1;
- (BOOL)showsResizeIndicator;
- (void)setControllerVisible:(BOOL)arg1;
- (BOOL)isControllerVisible;
- (id)movieControllerView;
- (void)_applyDelegateHelperToRenderer;
- (void)setFillColor:(id)arg1;
- (id)fillColor;
- (void)setPreservesAspectRatio:(BOOL)arg1;
- (BOOL)preservesAspectRatio;
- (void)_applyFinalCutStudioCompatibleColorsToRenderer;
- (void)setDrawsWithFinalCutStudioCompatibleColors:(BOOL)arg1;
- (BOOL)drawsWithFinalCutStudioCompatibleColors;
- (void)setDrawWithCGImage:(BOOL)arg1;
- (BOOL)drawWithCGImage;
- (void)setDrawSynchronously:(BOOL)arg1;
- (BOOL)drawSynchronously;
- (void)setImagingModeForcedToVisualContext:(BOOL)arg1;
- (void)setImagingModeAllowsVisualContext:(BOOL)arg1;
- (void)setImagingModeForcedToGWorld:(BOOL)arg1;
- (BOOL)imagingModeForcedToGWorld;
- (void)setImagingModeAllowsGWorld:(BOOL)arg1;
- (BOOL)imagingModeAllowsGWorld;
- (void)movieWouldUseVisualContextDidChange:(id)arg1;
- (void)_movieNaturalSizeDidChange:(id)arg1;
- (void)_mediaHelperDidChange:(id)arg1;
- (void)_attachToMediaHelper;
- (void)_syncViewProxyWithMovieProxy;
- (void)_movieControllerDidChange:(id)arg1;
- (void)_attachToMovieController;
- (void)_detachFromMovie;
- (void)setMovie:(id)arg1;
- (void)setLayer:(id)arg1;
- (id)movie;
- (id)_rendererView;
- (void)_updateRenderer;
- (void)_updateRendererToPreferredRendererViewClass;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_windowDidChangeMainOrKey:(id)arg1;
- (void)_unregisterWindowNotifications;
- (void)_registerWindowNotifications;
- (void)viewDidUnhide;
- (void)viewDidHide;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)resignFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)_movieBoxIsOpaqueDidChange:(id)arg1;
- (void)_updateMovieIsOpaque;
- (BOOL)_movieIsOpaque;
- (BOOL)isOpaque;
- (BOOL)isPrinting;
- (void)endDocument;
- (void)beginDocument;
- (void)drawRect:(struct CGRect)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;
- (id)_alteredImageForImage:(id)arg1;
- (void)_removeQTIMAVManagerImageConsumerIfRequired;
- (void)_addQTIMAVManagerImageConsumerIfRequired;

@end

