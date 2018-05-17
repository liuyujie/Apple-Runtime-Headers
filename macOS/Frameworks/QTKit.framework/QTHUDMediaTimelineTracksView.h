//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CALayer, NSArray, NSMutableArray, NSSet, NSTrackingArea;

__attribute__((visibility("hidden")))
@interface QTHUDMediaTimelineTracksView : NSView
{
    NSMutableArray *_timelineTracks;
    CDStruct_900afa40 _mediaDuration;
    CDStruct_900afa40 _mediaTimeOffset;
    CDStruct_900afa40 _selectionStart;
    CDStruct_900afa40 _selectionEnd;
    CDStruct_900afa40 _minimumSelectionDuration;
    CDStruct_900afa40 _maximumSelectionDuration;
    CDStruct_900afa40 _currentMediaTime;
    NSArray *_selectionDetents;
    struct __CFDictionary *_layersForRangeMarkers;
    CALayer *_selectionBorderLayer;
    CALayer *_selectionBorderUnderlayLayer;
    CALayer *_tracksLayer;
    CALayer *_trackPreviewsContainerLayer;
    CALayer *_trackPreviewsUnselectedStartRangeOverlayLayer;
    CALayer *_trackPreviewsUnselectedEndRangeOverlayLayer;
    CALayer *_leftSelectionHandleLayer;
    CALayer *_rightSelectionHandleLayer;
    CALayer *_playheadLayer;
    NSTrackingArea *_selectionLeftEdgeTrackingArea;
    NSTrackingArea *_selectionRightEdgeTrackingArea;
    unsigned int _didCreateLayers:1;
    unsigned int _isTrackingSelection:1;
    unsigned int _showsTrackPreviews:1;
    unsigned int _showsRangeMarkers:1;
    unsigned int _usesSelectionDetents:1;
}

+ (CDStruct_900afa40)mediaTimeForPosition:(double)arg1 outOfMediaDuration:(CDStruct_900afa40)arg2 timeOffset:(CDStruct_900afa40)arg3 inViewWithWidth:(double)arg4;
+ (double)positionForMediaTime:(CDStruct_900afa40)arg1 outOfMediaDuration:(CDStruct_900afa40)arg2 timeOffset:(CDStruct_900afa40)arg3 inViewWithWidth:(double)arg4;
+ (long long)suggestedTimeScaleForMediaDuration:(CDStruct_900afa40)arg1 inViewWithWidth:(double)arg2;
+ (void)initialize;
@property(copy) NSArray *selectionDetents; // @synthesize selectionDetents=_selectionDetents;
@property(nonatomic) CDStruct_900afa40 maximumSelectionDuration; // @synthesize maximumSelectionDuration=_maximumSelectionDuration;
@property(nonatomic) CDStruct_900afa40 minimumSelectionDuration; // @synthesize minimumSelectionDuration=_minimumSelectionDuration;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (BOOL)mouseDownCanMoveWindow;
- (void)layoutSublayersOfLayer:(id)arg1;
- (CDStruct_900afa40)mediaTimeForPosition:(double)arg1;
- (double)positionForMediaTime:(CDStruct_900afa40)arg1;
@property(nonatomic) BOOL showsRangeMarkers; // @dynamic showsRangeMarkers;
@property(copy, nonatomic) NSSet *rangeMarkers;
- (void)stepBackwardCurrentMediaTime;
- (void)stepForwardCurrentMediaTime;
@property(nonatomic) CDStruct_900afa40 currentMediaTime; // @dynamic currentMediaTime;
@property(nonatomic) BOOL usesSelectionDetents; // @dynamic usesSelectionDetents;
- (void)stepBackwardSelectionEnd;
- (void)stepForwardSelectionEnd;
- (CDStruct_900afa40)maxSelectionEnd;
- (CDStruct_900afa40)minSelectionEnd;
@property(nonatomic) CDStruct_900afa40 selectionEnd; // @dynamic selectionEnd;
- (void)stepBackwardSelectionStart;
- (void)stepForwardSelectionStart;
- (CDStruct_900afa40)maxSelectionStart;
- (CDStruct_900afa40)minSelectionStart;
@property(nonatomic) CDStruct_900afa40 selectionStart; // @dynamic selectionStart;
@property(nonatomic) CDStruct_900afa40 mediaTimeOffset; // @dynamic mediaTimeOffset;
@property(nonatomic) CDStruct_900afa40 mediaDuration; // @dynamic mediaDuration;
@property(nonatomic) BOOL showsTrackPreviews; // @dynamic showsTrackPreviews;
- (void)viewDidEndLiveResize;
- (void)removeObjectFromTimelineTracksAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inTimelineTracksAtIndex:(unsigned long long)arg2;
- (id)timelineTracks;
- (unsigned long long)countForTimelineTracks;
- (id)delegate;
- (void)viewDidMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
