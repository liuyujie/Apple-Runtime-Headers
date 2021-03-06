//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthUI/HKBarSeries.h>

@class NSArray;

@interface HKStackedBarSeries : HKBarSeries
{
    NSArray *_selectedFillStyles;
    NSArray *_unselectedFillStyles;
}

@property(copy, nonatomic) NSArray *unselectedFillStyles; // @synthesize unselectedFillStyles=_unselectedFillStyles;
@property(copy, nonatomic) NSArray *selectedFillStyles; // @synthesize selectedFillStyles=_selectedFillStyles;
- (void).cxx_destruct;
- (void)_drawPaths:(id)arg1 withFillStyles:(id)arg2 strokeStyle:(id)arg3 axisRect:(struct CGRect)arg4 context:(struct CGContext *)arg5;
- (void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(int)arg2 pointTransform:(struct CGAffineTransform)arg3 context:(struct CGContext *)arg4 axisRect:(struct CGRect)arg5;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_48c31d0d)arg2 xAxis:(id)arg3 yAxis:(id)arg4;

@end

