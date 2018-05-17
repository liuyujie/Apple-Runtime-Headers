//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreAudioKit/CAAppleAUGraphView.h>

#import "CAAUViewToolTipHandling.h"

@class NSBezierPath, NSGradient, NSMutableArray, NSMutableDictionary, NSObject<CAAUViewParameterDataSource>, NSTimer;

@interface CAAppleEQGraphView : CAAppleAUGraphView <CAAUViewToolTipHandling>
{
    NSMutableArray *controlList;
    NSMutableDictionary *paramCache;
    int activePointIndex;
    struct CGPoint lastMousePoint;
    struct CGPoint lastControlPoint;
    struct CGPoint dragOffset;
    struct CGPoint slowDragOrigin;
    BOOL wasSlowDragging;
    NSObject<CAAUViewParameterDataSource> *dataSource;
    int currentPart;
    NSBezierPath *curvePath;
    NSGradient *curveGradient;
    unsigned short dragConstraint;
    NSTimer *toolTipTimer;
    BOOL drawActivePointOnly;
    BOOL plotActiveRangeOnly;
    BOOL hideTooltip;
}

@property BOOL plotActiveRangeOnly; // @synthesize plotActiveRangeOnly;
@property BOOL drawActivePointOnly; // @synthesize drawActivePointOnly;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)parameterValuesChanged:(id)arg1 param1:(unsigned int)arg2 value:(float)arg3 param2:(unsigned int)arg4 value:(float)arg5;
- (void)parameterValueChanged:(id)arg1 param:(unsigned int)arg2 value:(float)arg3;
- (void)handleToolTipTextEndedEditing:(id)arg1;
- (void)handleToolTipTextBeganEditing:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (struct CGPoint)translateEventPoint:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setActiveControlAtIndex:(long long)arg1;
- (void)tooltipExpired:(id)arg1;
- (int)toolTipAnchorSide;
- (struct CGPoint)toolTipPosition;
- (void)replaceControlAtIndex:(unsigned long long)arg1 withControl:(id)arg2;
- (void)removeControlAtIndex:(unsigned long long)arg1;
- (void)changeControlToRegionControl:(unsigned int)arg1 y:(unsigned int)arg2 width:(unsigned int)arg3;
- (void)changeControlToHorizontalPoint:(unsigned int)arg1;
- (id)addFinalBandControlForX:(unsigned int)arg1 Y:(unsigned int)arg2 filterType:(unsigned int)arg3;
- (id)addInitialBandControlForX:(unsigned int)arg1 Y:(unsigned int)arg2 filterType:(unsigned int)arg3;
- (id)addRegionControlForX:(unsigned int)arg1 Y:(unsigned int)arg2 width:(unsigned int)arg3;
- (id)addRegionControlForX:(unsigned int)arg1 width:(unsigned int)arg2;
- (id)addPointControlForX:(unsigned int)arg1 Y:(unsigned int)arg2;
- (id)addPointControlForX:(unsigned int)arg1;
@property BOOL hideTooltip;
- (id)activeControl;
- (id)controlForParam:(unsigned int)arg1;
- (id)controlAtIndex:(unsigned long long)arg1;
- (long long)numControls;
- (void)updateGraphFrame;
- (void)disableGraphCurve;
- (void)plotData:(struct AudioUnitFrequencyResponseBin *)arg1;
- (struct AudioUnitFrequencyResponseBin *)prepareDataForDrawing:(struct AudioUnitFrequencyResponseBin *)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawEditPoints;
- (void)cleanup;
- (void)dealloc;
- (void)setDataSource:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
